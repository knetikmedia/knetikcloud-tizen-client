/*
 * SamiTemplateSMSResource.h
 * 
 * 
 */

#ifndef SamiTemplateSMSResource_H_
#define SamiTemplateSMSResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiLocalizer.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTemplateSMSResource: public SamiObject {
public:
    SamiTemplateSMSResource();
    SamiTemplateSMSResource(String* json);
    virtual ~SamiTemplateSMSResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTemplateSMSResource* fromJson(String* obj);

    String* getPFrom();
    void setPFrom(String* pFrom);
    SamiLocalizer* getPLocalizer();
    void setPLocalizer(SamiLocalizer* pLocalizer);
    IList* getPRecipients();
    void setPRecipients(IList* pRecipients);
    String* getPTemplateKey();
    void setPTemplateKey(String* pTemplate_key);
    IList* getPTemplateVars();
    void setPTemplateVars(IList* pTemplate_vars);

private:
    String* pFrom;
SamiLocalizer* pLocalizer;
IList* pRecipients;
String* pTemplate_key;
IList* pTemplate_vars;
};

} /* namespace Swagger */

#endif /* SamiTemplateSMSResource_H_ */
