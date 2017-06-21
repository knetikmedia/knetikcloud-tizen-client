/*
 * SamiTextProperty.h
 * 
 * 
 */

#ifndef SamiTextProperty_H_
#define SamiTextProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::String;


namespace Swagger {

class SamiTextProperty: public SamiObject {
public:
    SamiTextProperty();
    SamiTextProperty(String* json);
    virtual ~SamiTextProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTextProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    String* getPValue();
    void setPValue(String* pValue);

private:
    String* pType;
String* pValue;
};

} /* namespace Swagger */

#endif /* SamiTextProperty_H_ */
