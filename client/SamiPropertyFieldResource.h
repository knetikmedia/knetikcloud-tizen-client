/*
 * SamiPropertyFieldResource.h
 * 
 * 
 */

#ifndef SamiPropertyFieldResource_H_
#define SamiPropertyFieldResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyFieldResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiPropertyFieldResource: public SamiObject {
public:
    SamiPropertyFieldResource();
    SamiPropertyFieldResource(String* json);
    virtual ~SamiPropertyFieldResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPropertyFieldResource* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPInnerType();
    void setPInnerType(String* pInner_type);
    IList* getPInnerTypeFields();
    void setPInnerTypeFields(IList* pInner_type_fields);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    IList* getPValidValues();
    void setPValidValues(IList* pValid_values);

private:
    String* pDescription;
String* pInner_type;
IList* pInner_type_fields;
String* pName;
Boolean* pRequired;
String* pType;
IList* pValid_values;
};

} /* namespace Swagger */

#endif /* SamiPropertyFieldResource_H_ */
