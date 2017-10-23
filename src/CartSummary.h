/*
 * CartSummary.h
 *
 * 
 */

#ifndef _CartSummary_H_
#define _CartSummary_H_


#include <string>
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

class CartSummary : public Object {
public:
	/*! \brief Constructor.
	 */
	CartSummary();
	CartSummary(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CartSummary();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The unique id code for the currency used in the cart
	 */
	std::string getCurrencyCode();

	/*! \brief Set The unique id code for the currency used in the cart
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The grand total for the cart
	 */
	long long getGrandTotal();

	/*! \brief Set The grand total for the cart
	 */
	void setGrandTotal(long long  grand_total);
	/*! \brief Get The unique ID for the cart
	 */
	std::string getId();

	/*! \brief Set The unique ID for the cart
	 */
	void setId(std::string  id);
	/*! \brief Get The ID of the invoice associated with this cart
	 */
	long long getInvoiceId();

	/*! \brief Set The ID of the invoice associated with this cart
	 */
	void setInvoiceId(long long  invoice_id);
	/*! \brief Get The number of items in the cart
	 */
	int getItemsInCart();

	/*! \brief Set The number of items in the cart
	 */
	void setItemsInCart(int  items_in_cart);
	/*! \brief Get The status of the cart
	 */
	std::string getStatus();

	/*! \brief Set The status of the cart
	 */
	void setStatus(std::string  status);
	/*! \brief Get The subtotal of all items in the cart
	 */
	long long getSubtotal();

	/*! \brief Set The subtotal of all items in the cart
	 */
	void setSubtotal(long long  subtotal);

private:
	long long created_date;
	std::string currency_code;
	long long grand_total;
	std::string id;
	long long invoice_id;
	int items_in_cart;
	std::string status;
	long long subtotal;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CartSummary_H_ */
