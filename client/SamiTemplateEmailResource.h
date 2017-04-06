/*
 * SamiTemplateEmailResource.h
 * 
 * 
 */

#ifndef SamiTemplateEmailResource_H_
#define SamiTemplateEmailResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiKeyValuePair«string,string».h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTemplateEmailResource: public SamiObject {
public:
    SamiTemplateEmailResource();
    SamiTemplateEmailResource(String* json);
    virtual ~SamiTemplateEmailResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTemplateEmailResource* fromJson(String* obj);

    String* getPFrom();
    void setPFrom(String* pFrom);
    IList* getPRecipients();
    void setPRecipients(IList* pRecipients);
    String* getPTemplateKey();
    void setPTemplateKey(String* pTemplate_key);
    IList* getPTemplateVars();
    void setPTemplateVars(IList* pTemplate_vars);

private:
    String* pFrom;
IList* pRecipients;
String* pTemplate_key;
IList* pTemplate_vars;
};

} /* namespace Swagger */

#endif /* SamiTemplateEmailResource_H_ */
