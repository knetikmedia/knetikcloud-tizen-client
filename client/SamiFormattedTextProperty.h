/*
 * SamiFormattedTextProperty.h
 * 
 * 
 */

#ifndef SamiFormattedTextProperty_H_
#define SamiFormattedTextProperty_H_

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

class SamiFormattedTextProperty: public SamiObject {
public:
    SamiFormattedTextProperty();
    SamiFormattedTextProperty(String* json);
    virtual ~SamiFormattedTextProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFormattedTextProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    String* getPValue();
    void setPValue(String* pValue);

private:
    String* pType;
String* pValue;
};

} /* namespace Swagger */

#endif /* SamiFormattedTextProperty_H_ */
