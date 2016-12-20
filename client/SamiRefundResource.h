/*
 * SamiRefundResource.h
 * 
 * 
 */

#ifndef SamiRefundResource_H_
#define SamiRefundResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;


namespace Swagger {

class SamiRefundResource: public SamiObject {
public:
    SamiRefundResource();
    SamiRefundResource(String* json);
    virtual ~SamiRefundResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRefundResource* fromJson(String* obj);

    Double* getPAmount();
    void setPAmount(Double* pAmount);
    Integer* getPRefundTransactionId();
    void setPRefundTransactionId(Integer* pRefund_transaction_id);
    Integer* getPTransactionId();
    void setPTransactionId(Integer* pTransaction_id);

private:
    Double* pAmount;
Integer* pRefund_transaction_id;
Integer* pTransaction_id;
};

} /* namespace Swagger */

#endif /* SamiRefundResource_H_ */
