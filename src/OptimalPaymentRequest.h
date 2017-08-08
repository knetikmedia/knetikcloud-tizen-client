/*
 * OptimalPaymentRequest.h
 *
 * 
 */

#ifndef _OptimalPaymentRequest_H_
#define _OptimalPaymentRequest_H_


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

class OptimalPaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	OptimalPaymentRequest();
	OptimalPaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OptimalPaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The email address of the user
	 */
	std::string getEmail();

	/*! \brief Set The email address of the user
	 */
	void setEmail(std::string  email);
	/*! \brief Get The first name of the user
	 */
	std::string getFirstName();

	/*! \brief Set The first name of the user
	 */
	void setFirstName(std::string  first_name);
	/*! \brief Get The id of the invoice to pay
	 */
	int getInvoiceId();

	/*! \brief Set The id of the invoice to pay
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The last name of the user
	 */
	std::string getLastName();

	/*! \brief Set The last name of the user
	 */
	void setLastName(std::string  last_name);
	/*! \brief Get The url to redirect the user to after declining payment
	 */
	std::string getOnDecline();

	/*! \brief Set The url to redirect the user to after declining payment
	 */
	void setOnDecline(std::string  on_decline);
	/*! \brief Get The url to redirect the user to after an error in payment
	 */
	std::string getOnError();

	/*! \brief Set The url to redirect the user to after an error in payment
	 */
	void setOnError(std::string  on_error);
	/*! \brief Get The url to redirect the user to after successful payment
	 */
	std::string getOnSuccess();

	/*! \brief Set The url to redirect the user to after successful payment
	 */
	void setOnSuccess(std::string  on_success);

private:
	std::string email;
	std::string first_name;
	int invoice_id;
	std::string last_name;
	std::string on_decline;
	std::string on_error;
	std::string on_success;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OptimalPaymentRequest_H_ */
