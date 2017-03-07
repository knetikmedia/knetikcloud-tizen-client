/*
 * SamiCreatePayPalPaymentRequest.h
 * 
 * 
 */

#ifndef SamiCreatePayPalPaymentRequest_H_
#define SamiCreatePayPalPaymentRequest_H_

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

class SamiCreatePayPalPaymentRequest: public SamiObject {
public:
    SamiCreatePayPalPaymentRequest();
    SamiCreatePayPalPaymentRequest(String* json);
    virtual ~SamiCreatePayPalPaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCreatePayPalPaymentRequest* fromJson(String* obj);

    String* getPCancelUrl();
    void setPCancelUrl(String* pCancel_url);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPReturnUrl();
    void setPReturnUrl(String* pReturn_url);

private:
    String* pCancel_url;
Integer* pInvoice_id;
String* pReturn_url;
};

} /* namespace Swagger */

#endif /* SamiCreatePayPalPaymentRequest_H_ */
