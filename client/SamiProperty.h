/*
 * SamiProperty.h
 * 
 * 
 */

#ifndef SamiProperty_H_
#define SamiProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiProperty: public SamiObject {
public:
    SamiProperty();
    SamiProperty(String* json);
    virtual ~SamiProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);

private:
    String* pType;
};

} /* namespace Swagger */

#endif /* SamiProperty_H_ */
