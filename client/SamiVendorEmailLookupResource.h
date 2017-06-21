/*
 * SamiVendorEmailLookupResource.h
 * 
 * 
 */

#ifndef SamiVendorEmailLookupResource_H_
#define SamiVendorEmailLookupResource_H_

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

class SamiVendorEmailLookupResource: public SamiObject {
public:
    SamiVendorEmailLookupResource();
    SamiVendorEmailLookupResource(String* json);
    virtual ~SamiVendorEmailLookupResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVendorEmailLookupResource* fromJson(String* obj);

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

#endif /* SamiVendorEmailLookupResource_H_ */
