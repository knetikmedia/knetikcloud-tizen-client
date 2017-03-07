/*
 * SamiBreCategoryResource.h
 * 
 * 
 */

#ifndef SamiBreCategoryResource_H_
#define SamiBreCategoryResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiBreCategoryResource: public SamiObject {
public:
    SamiBreCategoryResource();
    SamiBreCategoryResource(String* json);
    virtual ~SamiBreCategoryResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreCategoryResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPName();
    void setPName(String* pName);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);

private:
    HashMap* pAdditional_properties;
String* pName;
String* pTemplate;
};

} /* namespace Swagger */

#endif /* SamiBreCategoryResource_H_ */
