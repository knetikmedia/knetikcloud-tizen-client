/*
 * SamiInvoiceResource.h
 * 
 * 
 */

#ifndef SamiInvoiceResource_H_
#define SamiInvoiceResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiInvoiceItemResource.h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiInvoiceResource: public SamiObject {
public:
    SamiInvoiceResource();
    SamiInvoiceResource(String* json);
    virtual ~SamiInvoiceResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInvoiceResource* fromJson(String* obj);

    String* getPBillingAddress1();
    void setPBillingAddress1(String* pBilling_address1);
    String* getPBillingAddress2();
    void setPBillingAddress2(String* pBilling_address2);
    String* getPBillingCityName();
    void setPBillingCityName(String* pBilling_city_name);
    String* getPBillingCountryName();
    void setPBillingCountryName(String* pBilling_country_name);
    String* getPBillingFullName();
    void setPBillingFullName(String* pBilling_full_name);
    String* getPBillingPostalCode();
    void setPBillingPostalCode(String* pBilling_postal_code);
    String* getPBillingStateName();
    void setPBillingStateName(String* pBilling_state_name);
    String* getPCartId();
    void setPCartId(String* pCart_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPCurrency();
    void setPCurrency(String* pCurrency);
    String* getPCurrentFulfillmentStatus();
    void setPCurrentFulfillmentStatus(String* pCurrent_fulfillment_status);
    String* getPCurrentPaymentStatus();
    void setPCurrentPaymentStatus(String* pCurrent_payment_status);
    Double* getPDiscount();
    void setPDiscount(Double* pDiscount);
    String* getPEmail();
    void setPEmail(String* pEmail);
    Double* getPFedTax();
    void setPFedTax(Double* pFed_tax);
    Double* getPGrandTotal();
    void setPGrandTotal(Double* pGrand_total);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPInvoiceNumber();
    void setPInvoiceNumber(String* pInvoice_number);
    IList* getPItems();
    void setPItems(IList* pItems);
    String* getPNamePrefix();
    void setPNamePrefix(String* pName_prefix);
    String* getPOrderNotes();
    void setPOrderNotes(String* pOrder_notes);
    Integer* getPParentInvoiceId();
    void setPParentInvoiceId(Integer* pParent_invoice_id);
    Integer* getPPaymentMethodId();
    void setPPaymentMethodId(Integer* pPayment_method_id);
    String* getPPhone();
    void setPPhone(String* pPhone);
    String* getPPhoneNumber();
    void setPPhoneNumber(String* pPhone_number);
    Double* getPShipping();
    void setPShipping(Double* pShipping);
    String* getPShippingAddress1();
    void setPShippingAddress1(String* pShipping_address1);
    String* getPShippingAddress2();
    void setPShippingAddress2(String* pShipping_address2);
    String* getPShippingCityName();
    void setPShippingCityName(String* pShipping_city_name);
    String* getPShippingCountryName();
    void setPShippingCountryName(String* pShipping_country_name);
    String* getPShippingFullName();
    void setPShippingFullName(String* pShipping_full_name);
    String* getPShippingPostalCode();
    void setPShippingPostalCode(String* pShipping_postal_code);
    String* getPShippingStateName();
    void setPShippingStateName(String* pShipping_state_name);
    Integer* getPSort();
    void setPSort(Integer* pSort);
    Double* getPStateTax();
    void setPStateTax(Double* pState_tax);
    Double* getPSubtotal();
    void setPSubtotal(Double* pSubtotal);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);
    String* getPVendorName();
    void setPVendorName(String* pVendor_name);

private:
    String* pBilling_address1;
String* pBilling_address2;
String* pBilling_city_name;
String* pBilling_country_name;
String* pBilling_full_name;
String* pBilling_postal_code;
String* pBilling_state_name;
String* pCart_id;
Long* pCreated_date;
String* pCurrency;
String* pCurrent_fulfillment_status;
String* pCurrent_payment_status;
Double* pDiscount;
String* pEmail;
Double* pFed_tax;
Double* pGrand_total;
Integer* pId;
String* pInvoice_number;
IList* pItems;
String* pName_prefix;
String* pOrder_notes;
Integer* pParent_invoice_id;
Integer* pPayment_method_id;
String* pPhone;
String* pPhone_number;
Double* pShipping;
String* pShipping_address1;
String* pShipping_address2;
String* pShipping_city_name;
String* pShipping_country_name;
String* pShipping_full_name;
String* pShipping_postal_code;
String* pShipping_state_name;
Integer* pSort;
Double* pState_tax;
Double* pSubtotal;
Long* pUpdated_date;
SamiSimpleUserResource* pUser;
Integer* pVendor_id;
String* pVendor_name;
};

} /* namespace Swagger */

#endif /* SamiInvoiceResource_H_ */
