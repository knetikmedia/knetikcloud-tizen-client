/*
 * SamiBreGlobalResource.h
 * 
 * 
 */

#ifndef SamiBreGlobalResource_H_
#define SamiBreGlobalResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBreGlobalScopeDefinition.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiBreGlobalResource: public SamiObject {
public:
    SamiBreGlobalResource();
    SamiBreGlobalResource(String* json);
    virtual ~SamiBreGlobalResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreGlobalResource* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPId();
    void setPId(String* pId);
    String* getPKey();
    void setPKey(String* pKey);
    String* getPName();
    void setPName(String* pName);
    IList* getPScopes();
    void setPScopes(IList* pScopes);
    Boolean* getPSystemGlobal();
    void setPSystemGlobal(Boolean* pSystem_global);
    String* getPType();
    void setPType(String* pType);

private:
    String* pDescription;
String* pId;
String* pKey;
String* pName;
IList* pScopes;
Boolean* pSystem_global;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiBreGlobalResource_H_ */
