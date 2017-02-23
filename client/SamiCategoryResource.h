/*
 * SamiCategoryResource.h
 * 
 * 
 */

#ifndef SamiCategoryResource_H_
#define SamiCategoryResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiCategoryResource: public SamiObject {
public:
    SamiCategoryResource();
    SamiCategoryResource(String* json);
    virtual ~SamiCategoryResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCategoryResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);

private:
    Boolean* pActive;
HashMap* pAdditional_properties;
String* pId;
String* pName;
String* pTemplate;
};

} /* namespace Swagger */

#endif /* SamiCategoryResource_H_ */
