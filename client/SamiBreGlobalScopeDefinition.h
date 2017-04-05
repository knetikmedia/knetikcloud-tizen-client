/*
 * SamiBreGlobalScopeDefinition.h
 * 
 * 
 */

#ifndef SamiBreGlobalScopeDefinition_H_
#define SamiBreGlobalScopeDefinition_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiBreGlobalScopeDefinition: public SamiObject {
public:
    SamiBreGlobalScopeDefinition();
    SamiBreGlobalScopeDefinition(String* json);
    virtual ~SamiBreGlobalScopeDefinition();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreGlobalScopeDefinition* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    String* getPType();
    void setPType(String* pType);

private:
    String* pName;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiBreGlobalScopeDefinition_H_ */
