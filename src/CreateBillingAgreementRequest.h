/*
 * CreateBillingAgreementRequest.h
 *
 * 
 */

#ifndef _CreateBillingAgreementRequest_H_
#define _CreateBillingAgreementRequest_H_


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

class CreateBillingAgreementRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateBillingAgreementRequest();
	CreateBillingAgreementRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateBillingAgreementRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The endpoint URL to which PayPal should forward the user if they cancel (do not accept) the agreement
	 */
	std::string getCancelUrl();

	/*! \brief Set The endpoint URL to which PayPal should forward the user if they cancel (do not accept) the agreement
	 */
	void setCancelUrl(std::string  cancel_url);
	/*! \brief Get The endpoint URL to which PayPal should forward the user after they accept the agreement. This endpoint will receive information needed for the next step
	 */
	std::string getReturnUrl();

	/*! \brief Set The endpoint URL to which PayPal should forward the user after they accept the agreement. This endpoint will receive information needed for the next step
	 */
	void setReturnUrl(std::string  return_url);
	/*! \brief Get The ID of the user. Defaults to the logged in user
	 */
	int getUserId();

	/*! \brief Set The ID of the user. Defaults to the logged in user
	 */
	void setUserId(int  user_id);

private:
	std::string cancel_url;
	std::string return_url;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateBillingAgreementRequest_H_ */
