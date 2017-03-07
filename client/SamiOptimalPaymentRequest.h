/*
 * SamiOptimalPaymentRequest.h
 * 
 * 
 */

#ifndef SamiOptimalPaymentRequest_H_
#define SamiOptimalPaymentRequest_H_

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

class SamiOptimalPaymentRequest: public SamiObject {
public:
    SamiOptimalPaymentRequest();
    SamiOptimalPaymentRequest(String* json);
    virtual ~SamiOptimalPaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOptimalPaymentRequest* fromJson(String* obj);

    String* getPEmail();
    void setPEmail(String* pEmail);
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPLastName();
    void setPLastName(String* pLast_name);
    String* getPOnDecline();
    void setPOnDecline(String* pOn_decline);
    String* getPOnError();
    void setPOnError(String* pOn_error);
    String* getPOnSuccess();
    void setPOnSuccess(String* pOn_success);

private:
    String* pEmail;
String* pFirst_name;
Integer* pInvoice_id;
String* pLast_name;
String* pOn_decline;
String* pOn_error;
String* pOn_success;
};

} /* namespace Swagger */

#endif /* SamiOptimalPaymentRequest_H_ */
