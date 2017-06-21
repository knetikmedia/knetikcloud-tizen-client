/*
 * SamiLongProperty.h
 * 
 * 
 */

#ifndef SamiLongProperty_H_
#define SamiLongProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiLongProperty: public SamiObject {
public:
    SamiLongProperty();
    SamiLongProperty(String* json);
    virtual ~SamiLongProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLongProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    Long* getPValue();
    void setPValue(Long* pValue);

private:
    String* pType;
Long* pValue;
};

} /* namespace Swagger */

#endif /* SamiLongProperty_H_ */
