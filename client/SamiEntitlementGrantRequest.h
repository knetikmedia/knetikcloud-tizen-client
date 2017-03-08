/*
 * SamiEntitlementGrantRequest.h
 * 
 * 
 */

#ifndef SamiEntitlementGrantRequest_H_
#define SamiEntitlementGrantRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiEntitlementGrantRequest: public SamiObject {
public:
    SamiEntitlementGrantRequest();
    SamiEntitlementGrantRequest(String* json);
    virtual ~SamiEntitlementGrantRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEntitlementGrantRequest* fromJson(String* obj);

    Integer* getPEntitlementId();
    void setPEntitlementId(Integer* pEntitlement_id);

private:
    Integer* pEntitlement_id;
};

} /* namespace Swagger */

#endif /* SamiEntitlementGrantRequest_H_ */
