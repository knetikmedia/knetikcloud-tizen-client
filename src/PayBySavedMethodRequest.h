/*
 * PayBySavedMethodRequest.h
 *
 * 
 */

#ifndef _PayBySavedMethodRequest_H_
#define _PayBySavedMethodRequest_H_


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

class PayBySavedMethodRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	PayBySavedMethodRequest();
	PayBySavedMethodRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PayBySavedMethodRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the payment method to use. Must belong to the caller, be public or have PAYMENTS_ADMIN permission
	 */
	int getPaymentMethod();

	/*! \brief Set The id of the payment method to use. Must belong to the caller, be public or have PAYMENTS_ADMIN permission
	 */
	void setPaymentMethod(int  payment_method);
	/*! \brief Get The id of a user to bill. Must have PAYMENTS_ADMIN permission
	 */
	int getUserId();

	/*! \brief Set The id of a user to bill. Must have PAYMENTS_ADMIN permission
	 */
	void setUserId(int  user_id);

private:
	int payment_method;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PayBySavedMethodRequest_H_ */
