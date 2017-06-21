/*
 * SamiIntegerProperty.h
 * 
 * 
 */

#ifndef SamiIntegerProperty_H_
#define SamiIntegerProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiIntegerProperty: public SamiObject {
public:
    SamiIntegerProperty();
    SamiIntegerProperty(String* json);
    virtual ~SamiIntegerProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiIntegerProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    Integer* getPValue();
    void setPValue(Integer* pValue);

private:
    String* pType;
Integer* pValue;
};

} /* namespace Swagger */

#endif /* SamiIntegerProperty_H_ */
