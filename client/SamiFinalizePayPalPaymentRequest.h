/*
 * SamiFinalizePayPalPaymentRequest.h
 * 
 * 
 */

#ifndef SamiFinalizePayPalPaymentRequest_H_
#define SamiFinalizePayPalPaymentRequest_H_

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

class SamiFinalizePayPalPaymentRequest: public SamiObject {
public:
    SamiFinalizePayPalPaymentRequest();
    SamiFinalizePayPalPaymentRequest(String* json);
    virtual ~SamiFinalizePayPalPaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFinalizePayPalPaymentRequest* fromJson(String* obj);

    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPPayerId();
    void setPPayerId(String* pPayer_id);
    String* getPToken();
    void setPToken(String* pToken);

private:
    Integer* pInvoice_id;
String* pPayer_id;
String* pToken;
};

} /* namespace Swagger */

#endif /* SamiFinalizePayPalPaymentRequest_H_ */
