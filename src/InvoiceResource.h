/*
 * InvoiceResource.h
 *
 * 
 */

#ifndef _InvoiceResource_H_
#define _InvoiceResource_H_


#include <string>
#include "InvoiceItemResource.h"
#include "SimpleUserResource.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class InvoiceResource : public Object {
public:
	/*! \brief Constructor.
	 */
	InvoiceResource();
	InvoiceResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InvoiceResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Line one of the customer's billing address
	 */
	std::string getBillingAddress1();

	/*! \brief Set Line one of the customer's billing address
	 */
	void setBillingAddress1(std::string  billing_address1);
	/*! \brief Get Line two of the customer's billing address
	 */
	std::string getBillingAddress2();

	/*! \brief Set Line two of the customer's billing address
	 */
	void setBillingAddress2(std::string  billing_address2);
	/*! \brief Get The city for the customer's billing address
	 */
	std::string getBillingCityName();

	/*! \brief Set The city for the customer's billing address
	 */
	void setBillingCityName(std::string  billing_city_name);
	/*! \brief Get The country for the customer's billing address
	 */
	std::string getBillingCountryName();

	/*! \brief Set The country for the customer's billing address
	 */
	void setBillingCountryName(std::string  billing_country_name);
	/*! \brief Get The customer's name for the billing address
	 */
	std::string getBillingFullName();

	/*! \brief Set The customer's name for the billing address
	 */
	void setBillingFullName(std::string  billing_full_name);
	/*! \brief Get The postal code for the customer's billing address
	 */
	std::string getBillingPostalCode();

	/*! \brief Set The postal code for the customer's billing address
	 */
	void setBillingPostalCode(std::string  billing_postal_code);
	/*! \brief Get The state for the customer's billing address
	 */
	std::string getBillingStateName();

	/*! \brief Set The state for the customer's billing address
	 */
	void setBillingStateName(std::string  billing_state_name);
	/*! \brief Get The guid of the cart this invoice came from
	 */
	std::string getCartId();

	/*! \brief Set The guid of the cart this invoice came from
	 */
	void setCartId(std::string  cart_id);
	/*! \brief Get The date the invoice was created, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the invoice was created, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The code for the currency invoice prices are in
	 */
	std::string getCurrency();

	/*! \brief Set The code for the currency invoice prices are in
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get The fulfillment status of the invoice
	 */
	std::string getCurrentFulfillmentStatus();

	/*! \brief Set The fulfillment status of the invoice
	 */
	void setCurrentFulfillmentStatus(std::string  current_fulfillment_status);
	/*! \brief Get The payment status of the invoice
	 */
	std::string getCurrentPaymentStatus();

	/*! \brief Set The payment status of the invoice
	 */
	void setCurrentPaymentStatus(std::string  current_payment_status);
	/*! \brief Get The amount of money saved through coupons
	 */
	long long getDiscount();

	/*! \brief Set The amount of money saved through coupons
	 */
	void setDiscount(long long  discount);
	/*! \brief Get The customer's email address
	 */
	std::string getEmail();

	/*! \brief Set The customer's email address
	 */
	void setEmail(std::string  email);
	/*! \brief Get An external reference to filter on
	 */
	std::string getExternalRef();

	/*! \brief Set An external reference to filter on
	 */
	void setExternalRef(std::string  external_ref);
	/*! \brief Get The amount of federal tax added
	 */
	long long getFedTax();

	/*! \brief Set The amount of federal tax added
	 */
	void setFedTax(long long  fed_tax);
	/*! \brief Get The final price of the invoice
	 */
	long long getGrandTotal();

	/*! \brief Set The final price of the invoice
	 */
	void setGrandTotal(long long  grand_total);
	/*! \brief Get The id of the invoice
	 */
	int getId();

	/*! \brief Set The id of the invoice
	 */
	void setId(int  id);
	/*! \brief Get A reference number for the invoice
	 */
	std::string getInvoiceNumber();

	/*! \brief Set A reference number for the invoice
	 */
	void setInvoiceNumber(std::string  invoice_number);
	/*! \brief Get A list of items within the invoice
	 */
	std::list<InvoiceItemResource> getItems();

	/*! \brief Set A list of items within the invoice
	 */
	void setItems(std::list <InvoiceItemResource> items);
	/*! \brief Get The customer's name prefix
	 */
	std::string getNamePrefix();

	/*! \brief Set The customer's name prefix
	 */
	void setNamePrefix(std::string  name_prefix);
	/*! \brief Get Notes about the order
	 */
	std::string getOrderNotes();

	/*! \brief Set Notes about the order
	 */
	void setOrderNotes(std::string  order_notes);
	/*! \brief Get The id of an invoice this is a child of
	 */
	int getParentInvoiceId();

	/*! \brief Set The id of an invoice this is a child of
	 */
	void setParentInvoiceId(int  parent_invoice_id);
	/*! \brief Get The id of a saved payment method used to pay for the invoice
	 */
	int getPaymentMethodId();

	/*! \brief Set The id of a saved payment method used to pay for the invoice
	 */
	void setPaymentMethodId(int  payment_method_id);
	/*! \brief Get The customer's phone number
	 */
	std::string getPhone();

	/*! \brief Set The customer's phone number
	 */
	void setPhone(std::string  phone);
	/*! \brief Get The customer's phone number
	 */
	std::string getPhoneNumber();

	/*! \brief Set The customer's phone number
	 */
	void setPhoneNumber(std::string  phone_number);
	/*! \brief Get The remaining price of the invoice (after any payments made so far)
	 */
	long long getRemainingBalance();

	/*! \brief Set The remaining price of the invoice (after any payments made so far)
	 */
	void setRemainingBalance(long long  remaining_balance);
	/*! \brief Get The shipping cost
	 */
	long long getShipping();

	/*! \brief Set The shipping cost
	 */
	void setShipping(long long  shipping);
	/*! \brief Get Line one of the customer's shipping address
	 */
	std::string getShippingAddress1();

	/*! \brief Set Line one of the customer's shipping address
	 */
	void setShippingAddress1(std::string  shipping_address1);
	/*! \brief Get Line two of the customer's shipping address
	 */
	std::string getShippingAddress2();

	/*! \brief Set Line two of the customer's shipping address
	 */
	void setShippingAddress2(std::string  shipping_address2);
	/*! \brief Get The city for the customer's shipping address
	 */
	std::string getShippingCityName();

	/*! \brief Set The city for the customer's shipping address
	 */
	void setShippingCityName(std::string  shipping_city_name);
	/*! \brief Get The country for the customer's shipping address
	 */
	std::string getShippingCountryName();

	/*! \brief Set The country for the customer's shipping address
	 */
	void setShippingCountryName(std::string  shipping_country_name);
	/*! \brief Get The customer's name for the shipping address
	 */
	std::string getShippingFullName();

	/*! \brief Set The customer's name for the shipping address
	 */
	void setShippingFullName(std::string  shipping_full_name);
	/*! \brief Get The postal code for the customer's shipping address
	 */
	std::string getShippingPostalCode();

	/*! \brief Set The postal code for the customer's shipping address
	 */
	void setShippingPostalCode(std::string  shipping_postal_code);
	/*! \brief Get The state for the customer's shipping address
	 */
	std::string getShippingStateName();

	/*! \brief Set The state for the customer's shipping address
	 */
	void setShippingStateName(std::string  shipping_state_name);
	/*! \brief Get A number to use in sorting items. default 500.
	 */
	int getSort();

	/*! \brief Set A number to use in sorting items. default 500.
	 */
	void setSort(int  sort);
	/*! \brief Get The amount of state tax added
	 */
	long long getStateTax();

	/*! \brief Set The amount of state tax added
	 */
	void setStateTax(long long  state_tax);
	/*! \brief Get The sum price of all items before shipping, coupons and tax
	 */
	long long getSubtotal();

	/*! \brief Set The sum price of all items before shipping, coupons and tax
	 */
	void setSubtotal(long long  subtotal);
	/*! \brief Get The date the invoice was last updated, unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the invoice was last updated, unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The owner of the invoice
	 */
	SimpleUserResource getUser();

	/*! \brief Set The owner of the invoice
	 */
	void setUser(SimpleUserResource  user);
	/*! \brief Get The id of the vendor
	 */
	int getVendorId();

	/*! \brief Set The id of the vendor
	 */
	void setVendorId(int  vendor_id);
	/*! \brief Get The name of the invoice
	 */
	std::string getVendorName();

	/*! \brief Set The name of the invoice
	 */
	void setVendorName(std::string  vendor_name);

private:
	std::string billing_address1;
	std::string billing_address2;
	std::string billing_city_name;
	std::string billing_country_name;
	std::string billing_full_name;
	std::string billing_postal_code;
	std::string billing_state_name;
	std::string cart_id;
	long long created_date;
	std::string currency;
	std::string current_fulfillment_status;
	std::string current_payment_status;
	long long discount;
	std::string email;
	std::string external_ref;
	long long fed_tax;
	long long grand_total;
	int id;
	std::string invoice_number;
	std::list <InvoiceItemResource>items;
	std::string name_prefix;
	std::string order_notes;
	int parent_invoice_id;
	int payment_method_id;
	std::string phone;
	std::string phone_number;
	long long remaining_balance;
	long long shipping;
	std::string shipping_address1;
	std::string shipping_address2;
	std::string shipping_city_name;
	std::string shipping_country_name;
	std::string shipping_full_name;
	std::string shipping_postal_code;
	std::string shipping_state_name;
	int sort;
	long long state_tax;
	long long subtotal;
	long long updated_date;
	SimpleUserResource user;
	int vendor_id;
	std::string vendor_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InvoiceResource_H_ */
