/*
 * SamiDoubleProperty.h
 * 
 * 
 */

#ifndef SamiDoubleProperty_H_
#define SamiDoubleProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiDoubleProperty: public SamiObject {
public:
    SamiDoubleProperty();
    SamiDoubleProperty(String* json);
    virtual ~SamiDoubleProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDoubleProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    Double* getPValue();
    void setPValue(Double* pValue);

private:
    String* pType;
Double* pValue;
};

} /* namespace Swagger */

#endif /* SamiDoubleProperty_H_ */
