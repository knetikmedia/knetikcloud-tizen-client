/*
 * SamiApplyPaymentRequest.h
 * 
 * 
 */

#ifndef SamiApplyPaymentRequest_H_
#define SamiApplyPaymentRequest_H_

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

class SamiApplyPaymentRequest: public SamiObject {
public:
    SamiApplyPaymentRequest();
    SamiApplyPaymentRequest(String* json);
    virtual ~SamiApplyPaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiApplyPaymentRequest* fromJson(String* obj);

    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPReceipt();
    void setPReceipt(String* pReceipt);
    String* getPTransactionId();
    void setPTransactionId(String* pTransaction_id);

private:
    Integer* pInvoice_id;
String* pReceipt;
String* pTransaction_id;
};

} /* namespace Swagger */

#endif /* SamiApplyPaymentRequest_H_ */
