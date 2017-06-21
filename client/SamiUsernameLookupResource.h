/*
 * SamiUsernameLookupResource.h
 * 
 * 
 */

#ifndef SamiUsernameLookupResource_H_
#define SamiUsernameLookupResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpressionResource.h"
using Tizen::Base::String;


namespace Swagger {

class SamiUsernameLookupResource: public SamiObject {
public:
    SamiUsernameLookupResource();
    SamiUsernameLookupResource(String* json);
    virtual ~SamiUsernameLookupResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUsernameLookupResource* fromJson(String* obj);

    SamiExpressionResource* getPLookupKey();
    void setPLookupKey(SamiExpressionResource* pLookup_key);
    String* getPType();
    void setPType(String* pType);
    String* getPValueType();
    void setPValueType(String* pValue_type);

private:
    SamiExpressionResource* pLookup_key;
String* pType;
String* pValue_type;
};

} /* namespace Swagger */

#endif /* SamiUsernameLookupResource_H_ */
