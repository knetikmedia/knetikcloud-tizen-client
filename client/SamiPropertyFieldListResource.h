/*
 * SamiPropertyFieldListResource.h
 * 
 * 
 */

#ifndef SamiPropertyFieldListResource_H_
#define SamiPropertyFieldListResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyFieldResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiPropertyFieldListResource: public SamiObject {
public:
    SamiPropertyFieldListResource();
    SamiPropertyFieldListResource(String* json);
    virtual ~SamiPropertyFieldListResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPropertyFieldListResource* fromJson(String* obj);

    IList* getPPropertyDefinitionFields();
    void setPPropertyDefinitionFields(IList* pProperty_definition_fields);
    IList* getPPropertyFields();
    void setPPropertyFields(IList* pProperty_fields);
    String* getPPropertyType();
    void setPPropertyType(String* pProperty_type);

private:
    IList* pProperty_definition_fields;
IList* pProperty_fields;
String* pProperty_type;
};

} /* namespace Swagger */

#endif /* SamiPropertyFieldListResource_H_ */
