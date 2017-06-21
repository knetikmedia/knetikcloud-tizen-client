/*
 * SamiGlobalResource.h
 * 
 * 
 */

#ifndef SamiGlobalResource_H_
#define SamiGlobalResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpressionResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiGlobalResource: public SamiObject {
public:
    SamiGlobalResource();
    SamiGlobalResource(String* json);
    virtual ~SamiGlobalResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGlobalResource* fromJson(String* obj);

    String* getPGlobalDefId();
    void setPGlobalDefId(String* pGlobal_def_id);
    HashMap* getPScopes();
    void setPScopes(HashMap* pScopes);
    String* getPType();
    void setPType(String* pType);

private:
    String* pGlobal_def_id;
HashMap* pScopes;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiGlobalResource_H_ */
