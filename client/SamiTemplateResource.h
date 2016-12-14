/*
 * SamiTemplateResource.h
 * 
 * 
 */

#ifndef SamiTemplateResource_H_
#define SamiTemplateResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyDefinitionResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiTemplateResource: public SamiObject {
public:
    SamiTemplateResource();
    SamiTemplateResource(String* json);
    virtual ~SamiTemplateResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTemplateResource* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    IList* getPProperties();
    void setPProperties(IList* pProperties);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Long* pCreated_date;
String* pId;
String* pName;
IList* pProperties;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiTemplateResource_H_ */
