/*
 * SamiXsollaPaymentRequest.h
 * 
 * 
 */

#ifndef SamiXsollaPaymentRequest_H_
#define SamiXsollaPaymentRequest_H_

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

class SamiXsollaPaymentRequest: public SamiObject {
public:
    SamiXsollaPaymentRequest();
    SamiXsollaPaymentRequest(String* json);
    virtual ~SamiXsollaPaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiXsollaPaymentRequest* fromJson(String* obj);

    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPReturnUrl();
    void setPReturnUrl(String* pReturn_url);

private:
    Integer* pInvoice_id;
String* pReturn_url;
};

} /* namespace Swagger */

#endif /* SamiXsollaPaymentRequest_H_ */
