/*
 * StripePaymentRequest.h
 *
 * 
 */

#ifndef _StripePaymentRequest_H_
#define _StripePaymentRequest_H_


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

class StripePaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	StripePaymentRequest();
	StripePaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StripePaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The amount to pay, if not the full remaining balance (leave out to pay in full, but be careful no other partial payment has been started)
	 */
	long long getAmount();

	/*! \brief Set The amount to pay, if not the full remaining balance (leave out to pay in full, but be careful no other partial payment has been started)
	 */
	void setAmount(long long  amount);
	/*! \brief Get The id of the invoice to pay
	 */
	int getInvoiceId();

	/*! \brief Set The id of the invoice to pay
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get A token from Stripe to identify payment info to be tied to the customer
	 */
	std::string getToken();

	/*! \brief Set A token from Stripe to identify payment info to be tied to the customer
	 */
	void setToken(std::string  token);

private:
	long long amount;
	int invoice_id;
	std::string token;
	void __init();
	void __cleanup();

};
}
}

#endif /* _StripePaymentRequest_H_ */
