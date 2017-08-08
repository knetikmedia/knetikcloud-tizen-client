/*
 * Cart.h
 *
 * 
 */

#ifndef _Cart_H_
#define _Cart_H_


#include <string>
#include "CartLineItem.h"
#include "CartShippingAddressRequest.h"
#include "CartShippingOption.h"
#include "CouponDefinition.h"
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

class Cart : public Object {
public:
	/*! \brief Constructor.
	 */
	Cart();
	Cart(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Cart();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<CartShippingOption> getAvailableShippingOptions();

	/*! \brief Set 
	 */
	void setAvailableShippingOptions(std::list <CartShippingOption> available_shipping_options);
	/*! \brief Get 
	 */
	double getCountryTax();

	/*! \brief Set 
	 */
	void setCountryTax(double  country_tax);
	/*! \brief Get 
	 */
	std::list<CouponDefinition> getCoupons();

	/*! \brief Set 
	 */
	void setCoupons(std::list <CouponDefinition> coupons);
	/*! \brief Get 
	 */
	long long getCreated();

	/*! \brief Set 
	 */
	void setCreated(long long  created);
	/*! \brief Get 
	 */
	std::string getCurrencyCode();

	/*! \brief Set 
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get 
	 */
	double getDiscountTotal();

	/*! \brief Set 
	 */
	void setDiscountTotal(double  discount_total);
	/*! \brief Get 
	 */
	int getErrorCode();

	/*! \brief Set 
	 */
	void setErrorCode(int  error_code);
	/*! \brief Get 
	 */
	std::string getErrorMessage();

	/*! \brief Set 
	 */
	void setErrorMessage(std::string  error_message);
	/*! \brief Get 
	 */
	double getGrandTotal();

	/*! \brief Set 
	 */
	void setGrandTotal(double  grand_total);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	double getInvoiceId();

	/*! \brief Set 
	 */
	void setInvoiceId(double  invoice_id);
	/*! \brief Get 
	 */
	std::list<CartLineItem> getItems();

	/*! \brief Set 
	 */
	void setItems(std::list <CartLineItem> items);
	/*! \brief Get 
	 */
	int getOwner();

	/*! \brief Set 
	 */
	void setOwner(int  owner);
	/*! \brief Get 
	 */
	std::list<CartShippingOption> getSelectedShippingOptions();

	/*! \brief Set 
	 */
	void setSelectedShippingOptions(std::list <CartShippingOption> selected_shipping_options);
	/*! \brief Get 
	 */
	bool getShippable();

	/*! \brief Set 
	 */
	void setShippable(bool  shippable);
	/*! \brief Get 
	 */
	CartShippingAddressRequest getShippingAddress();

	/*! \brief Set 
	 */
	void setShippingAddress(CartShippingAddressRequest  shipping_address);
	/*! \brief Get 
	 */
	double getShippingCost();

	/*! \brief Set 
	 */
	void setShippingCost(double  shipping_cost);
	/*! \brief Get 
	 */
	double getStateTax();

	/*! \brief Set 
	 */
	void setStateTax(double  state_tax);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	double getSubtotal();

	/*! \brief Set 
	 */
	void setSubtotal(double  subtotal);
	/*! \brief Get 
	 */
	long long getUpdated();

	/*! \brief Set 
	 */
	void setUpdated(long long  updated);

private:
	std::list <CartShippingOption>available_shipping_options;
	double country_tax;
	std::list <CouponDefinition>coupons;
	long long created;
	std::string currency_code;
	double discount_total;
	int error_code;
	std::string error_message;
	double grand_total;
	std::string id;
	double invoice_id;
	std::list <CartLineItem>items;
	int owner;
	std::list <CartShippingOption>selected_shipping_options;
	bool shippable;
	CartShippingAddressRequest shipping_address;
	double shipping_cost;
	double state_tax;
	std::string status;
	double subtotal;
	long long updated;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Cart_H_ */
