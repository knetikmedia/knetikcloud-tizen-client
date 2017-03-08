/*
 * SamiCreateBillingAgreementRequest.h
 * 
 * 
 */

#ifndef SamiCreateBillingAgreementRequest_H_
#define SamiCreateBillingAgreementRequest_H_

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

class SamiCreateBillingAgreementRequest: public SamiObject {
public:
    SamiCreateBillingAgreementRequest();
    SamiCreateBillingAgreementRequest(String* json);
    virtual ~SamiCreateBillingAgreementRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCreateBillingAgreementRequest* fromJson(String* obj);

    String* getPCancelUrl();
    void setPCancelUrl(String* pCancel_url);
    String* getPReturnUrl();
    void setPReturnUrl(String* pReturn_url);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    String* pCancel_url;
String* pReturn_url;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiCreateBillingAgreementRequest_H_ */
