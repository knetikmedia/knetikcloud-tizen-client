/*
 * SamiBooleanProperty.h
 * 
 * 
 */

#ifndef SamiBooleanProperty_H_
#define SamiBooleanProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiBooleanProperty: public SamiObject {
public:
    SamiBooleanProperty();
    SamiBooleanProperty(String* json);
    virtual ~SamiBooleanProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBooleanProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    Boolean* getPValue();
    void setPValue(Boolean* pValue);

private:
    String* pType;
Boolean* pValue;
};

} /* namespace Swagger */

#endif /* SamiBooleanProperty_H_ */
