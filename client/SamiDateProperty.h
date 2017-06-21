/*
 * SamiDateProperty.h
 * 
 * 
 */

#ifndef SamiDateProperty_H_
#define SamiDateProperty_H_

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

class SamiDateProperty: public SamiObject {
public:
    SamiDateProperty();
    SamiDateProperty(String* json);
    virtual ~SamiDateProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDateProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    Long* getPValue();
    void setPValue(Long* pValue);

private:
    String* pType;
Long* pValue;
};

} /* namespace Swagger */

#endif /* SamiDateProperty_H_ */
