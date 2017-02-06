/*
 * SamiBreTriggerParameterDefinition.h
 * 
 * 
 */

#ifndef SamiBreTriggerParameterDefinition_H_
#define SamiBreTriggerParameterDefinition_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiBreTriggerParameterDefinition: public SamiObject {
public:
    SamiBreTriggerParameterDefinition();
    SamiBreTriggerParameterDefinition(String* json);
    virtual ~SamiBreTriggerParameterDefinition();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreTriggerParameterDefinition* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    String* getPType();
    void setPType(String* pType);

private:
    String* pName;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiBreTriggerParameterDefinition_H_ */
