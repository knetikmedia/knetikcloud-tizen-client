/*
 * SamiFinalizeBillingAgreementRequest.h
 * 
 * 
 */

#ifndef SamiFinalizeBillingAgreementRequest_H_
#define SamiFinalizeBillingAgreementRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiFinalizeBillingAgreementRequest: public SamiObject {
public:
    SamiFinalizeBillingAgreementRequest();
    SamiFinalizeBillingAgreementRequest(String* json);
    virtual ~SamiFinalizeBillingAgreementRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFinalizeBillingAgreementRequest* fromJson(String* obj);

    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    Boolean* getPNewDefault();
    void setPNewDefault(Boolean* pNew_default);
    String* getPPayerId();
    void setPPayerId(String* pPayer_id);
    String* getPToken();
    void setPToken(String* pToken);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    Integer* pInvoice_id;
Boolean* pNew_default;
String* pPayer_id;
String* pToken;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiFinalizeBillingAgreementRequest_H_ */
