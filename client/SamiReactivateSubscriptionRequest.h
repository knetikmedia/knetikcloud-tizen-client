/*
 * SamiReactivateSubscriptionRequest.h
 * 
 * 
 */

#ifndef SamiReactivateSubscriptionRequest_H_
#define SamiReactivateSubscriptionRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;


namespace Swagger {

class SamiReactivateSubscriptionRequest: public SamiObject {
public:
    SamiReactivateSubscriptionRequest();
    SamiReactivateSubscriptionRequest(String* json);
    virtual ~SamiReactivateSubscriptionRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiReactivateSubscriptionRequest* fromJson(String* obj);

    Integer* getPInventoryId();
    void setPInventoryId(Integer* pInventory_id);
    Boolean* getPReactivationFee();
    void setPReactivationFee(Boolean* pReactivation_fee);

private:
    Integer* pInventory_id;
Boolean* pReactivation_fee;
};

} /* namespace Swagger */

#endif /* SamiReactivateSubscriptionRequest_H_ */
