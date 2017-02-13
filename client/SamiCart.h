/*
 * SamiCart.h
 * 
 * 
 */

#ifndef SamiCart_H_
#define SamiCart_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCartLineItem.h"
#include "SamiCartShippingAddressRequest.h"
#include "SamiCartShippingOption.h"
#include "SamiCouponDefinition.h"
#include "SamiSet.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCart: public SamiObject {
public:
    SamiCart();
    SamiCart(String* json);
    virtual ~SamiCart();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCart* fromJson(String* obj);

    Double* getPCountryTax();
    void setPCountryTax(Double* pCountry_tax);
    IList* getPCoupons();
    void setPCoupons(IList* pCoupons);
    Long* getPCreated();
    void setPCreated(Long* pCreated);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Double* getPDiscountTotal();
    void setPDiscountTotal(Double* pDiscount_total);
    Integer* getPErrorCode();
    void setPErrorCode(Integer* pError_code);
    String* getPErrorMessage();
    void setPErrorMessage(String* pError_message);
    Double* getPGrandTotal();
    void setPGrandTotal(Double* pGrand_total);
    String* getPId();
    void setPId(String* pId);
    Double* getPInvoiceId();
    void setPInvoiceId(Double* pInvoice_id);
    IList* getPItems();
    void setPItems(IList* pItems);
    Integer* getPOwner();
    void setPOwner(Integer* pOwner);
    IList* getPSelectedShippingOptions();
    void setPSelectedShippingOptions(IList* pSelected_shipping_options);
    Boolean* getPShippable();
    void setPShippable(Boolean* pShippable);
    SamiCartShippingAddressRequest* getPShippingAddress();
    void setPShippingAddress(SamiCartShippingAddressRequest* pShipping_address);
    Double* getPShippingCost();
    void setPShippingCost(Double* pShipping_cost);
    HashMap* getPShippingOptions();
    void setPShippingOptions(HashMap* pShipping_options);
    Double* getPStateTax();
    void setPStateTax(Double* pState_tax);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Double* getPSubtotal();
    void setPSubtotal(Double* pSubtotal);
    Long* getPUpdated();
    void setPUpdated(Long* pUpdated);

private:
    Double* pCountry_tax;
IList* pCoupons;
Long* pCreated;
String* pCurrency_code;
Double* pDiscount_total;
Integer* pError_code;
String* pError_message;
Double* pGrand_total;
String* pId;
Double* pInvoice_id;
IList* pItems;
Integer* pOwner;
IList* pSelected_shipping_options;
Boolean* pShippable;
SamiCartShippingAddressRequest* pShipping_address;
Double* pShipping_cost;
HashMap* pShipping_options;
Double* pState_tax;
String* pStatus;
Double* pSubtotal;
Long* pUpdated;
};

} /* namespace Swagger */

#endif /* SamiCart_H_ */
