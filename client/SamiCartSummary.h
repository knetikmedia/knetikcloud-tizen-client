/*
 * SamiCartSummary.h
 * 
 * 
 */

#ifndef SamiCartSummary_H_
#define SamiCartSummary_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCartSummary: public SamiObject {
public:
    SamiCartSummary();
    SamiCartSummary(String* json);
    virtual ~SamiCartSummary();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCartSummary* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Double* getPGrandTotal();
    void setPGrandTotal(Double* pGrand_total);
    String* getPId();
    void setPId(String* pId);
    Double* getPInvoiceId();
    void setPInvoiceId(Double* pInvoice_id);
    Integer* getPItemsInCart();
    void setPItemsInCart(Integer* pItems_in_cart);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Double* getPSubtotal();
    void setPSubtotal(Double* pSubtotal);

private:
    Long* pCreated_date;
String* pCurrency_code;
Double* pGrand_total;
String* pId;
Double* pInvoice_id;
Integer* pItems_in_cart;
String* pStatus;
Double* pSubtotal;
};

} /* namespace Swagger */

#endif /* SamiCartSummary_H_ */
