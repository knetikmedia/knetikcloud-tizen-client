/*
 * StripeCreatePaymentMethod.h
 *
 * 
 */

#ifndef _StripeCreatePaymentMethod_H_
#define _StripeCreatePaymentMethod_H_


#include <string>
#include "PaymentMethodDetails.h"
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

class StripeCreatePaymentMethod : public Object {
public:
	/*! \brief Constructor.
	 */
	StripeCreatePaymentMethod();
	StripeCreatePaymentMethod(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StripeCreatePaymentMethod();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Additional optional details to store on the payment method. If included, all fields in the details will override any defaults
	 */
	PaymentMethodDetails getDetails();

	/*! \brief Set Additional optional details to store on the payment method. If included, all fields in the details will override any defaults
	 */
	void setDetails(PaymentMethodDetails  details);
	/*! \brief Get A token from Stripe to identify payment info to be tied to the customer
	 */
	std::string getToken();

	/*! \brief Set A token from Stripe to identify payment info to be tied to the customer
	 */
	void setToken(std::string  token);
	/*! \brief Get The id of the user, if null the logged in user is used. Admin privilege need to specify other users
	 */
	int getUserId();

	/*! \brief Set The id of the user, if null the logged in user is used. Admin privilege need to specify other users
	 */
	void setUserId(int  user_id);

private:
	PaymentMethodDetails details;
	std::string token;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _StripeCreatePaymentMethod_H_ */
