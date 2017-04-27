/*
 * SamiStripePaymentRequest.h
 * 
 * 
 */

#ifndef SamiStripePaymentRequest_H_
#define SamiStripePaymentRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiStripePaymentRequest: public SamiObject {
public:
    SamiStripePaymentRequest();
    SamiStripePaymentRequest(String* json);
    virtual ~SamiStripePaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStripePaymentRequest* fromJson(String* obj);

    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPToken();
    void setPToken(String* pToken);

private:
    Integer* pInvoice_id;
String* pToken;
};

} /* namespace Swagger */

#endif /* SamiStripePaymentRequest_H_ */
