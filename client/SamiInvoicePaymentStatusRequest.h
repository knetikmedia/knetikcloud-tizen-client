/*
 * SamiInvoicePaymentStatusRequest.h
 * 
 * 
 */

#ifndef SamiInvoicePaymentStatusRequest_H_
#define SamiInvoicePaymentStatusRequest_H_

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

class SamiInvoicePaymentStatusRequest: public SamiObject {
public:
    SamiInvoicePaymentStatusRequest();
    SamiInvoicePaymentStatusRequest(String* json);
    virtual ~SamiInvoicePaymentStatusRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInvoicePaymentStatusRequest* fromJson(String* obj);

    Integer* getPPaymentMethodId();
    void setPPaymentMethodId(Integer* pPayment_method_id);
    String* getPStatus();
    void setPStatus(String* pStatus);

private:
    Integer* pPayment_method_id;
String* pStatus;
};

} /* namespace Swagger */

#endif /* SamiInvoicePaymentStatusRequest_H_ */
