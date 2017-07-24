/*
 * SamiSubscriptionPriceOverrideRequest.h
 * 
 * 
 */

#ifndef SamiSubscriptionPriceOverrideRequest_H_
#define SamiSubscriptionPriceOverrideRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiSubscriptionPriceOverrideRequest: public SamiObject {
public:
    SamiSubscriptionPriceOverrideRequest();
    SamiSubscriptionPriceOverrideRequest(String* json);
    virtual ~SamiSubscriptionPriceOverrideRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscriptionPriceOverrideRequest* fromJson(String* obj);

    Double* getPNewPrice();
    void setPNewPrice(Double* pNew_price);
    String* getPReason();
    void setPReason(String* pReason);

private:
    Double* pNew_price;
String* pReason;
};

} /* namespace Swagger */

#endif /* SamiSubscriptionPriceOverrideRequest_H_ */
