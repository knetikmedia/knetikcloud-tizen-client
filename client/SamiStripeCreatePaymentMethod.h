/*
 * SamiStripeCreatePaymentMethod.h
 * 
 * 
 */

#ifndef SamiStripeCreatePaymentMethod_H_
#define SamiStripeCreatePaymentMethod_H_

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

class SamiStripeCreatePaymentMethod: public SamiObject {
public:
    SamiStripeCreatePaymentMethod();
    SamiStripeCreatePaymentMethod(String* json);
    virtual ~SamiStripeCreatePaymentMethod();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStripeCreatePaymentMethod* fromJson(String* obj);

    String* getPToken();
    void setPToken(String* pToken);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    String* pToken;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiStripeCreatePaymentMethod_H_ */
