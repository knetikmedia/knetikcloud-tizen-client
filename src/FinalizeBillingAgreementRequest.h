/*
 * FinalizeBillingAgreementRequest.h
 *
 * 
 */

#ifndef _FinalizeBillingAgreementRequest_H_
#define _FinalizeBillingAgreementRequest_H_


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

class FinalizeBillingAgreementRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	FinalizeBillingAgreementRequest();
	FinalizeBillingAgreementRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FinalizeBillingAgreementRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the invoice being paid along with the creation of this agreement
	 */
	int getInvoiceId();

	/*! \brief Set The ID of the invoice being paid along with the creation of this agreement
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get Whether the new payment method created should be the user's default
	 */
	bool getNewDefault();

	/*! \brief Set Whether the new payment method created should be the user's default
	 */
	void setNewDefault(bool  new_default);
	/*! \brief Get The payer ID from PayPal (passed as a parameter in the return URL). Only required if an invoice ID was included
	 */
	std::string getPayerId();

	/*! \brief Set The payer ID from PayPal (passed as a parameter in the return URL). Only required if an invoice ID was included
	 */
	void setPayerId(std::string  payer_id);
	/*! \brief Get The token from PayPal (passed as a parameter in the return URL)
	 */
	std::string getToken();

	/*! \brief Set The token from PayPal (passed as a parameter in the return URL)
	 */
	void setToken(std::string  token);
	/*! \brief Get The ID of the user. Defaults to the logged in user
	 */
	int getUserId();

	/*! \brief Set The ID of the user. Defaults to the logged in user
	 */
	void setUserId(int  user_id);

private:
	int invoice_id;
	bool new_default;
	std::string payer_id;
	std::string token;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FinalizeBillingAgreementRequest_H_ */
