/*
 * PasswordResetRequest.h
 *
 * A request to reset a user&#39;s password by using a known user property
 */

#ifndef _PasswordResetRequest_H_
#define _PasswordResetRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A request to reset a user's password by using a known user property
 *
 *  \ingroup Models
 *
 */

class PasswordResetRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	PasswordResetRequest();
	PasswordResetRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PasswordResetRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The user's email address
	 */
	std::string getEmail();

	/*! \brief Set The user's email address
	 */
	void setEmail(std::string  email);
	/*! \brief Get The user's mobile phone number
	 */
	std::string getMobileNumber();

	/*! \brief Set The user's mobile phone number
	 */
	void setMobileNumber(std::string  mobile_number);
	/*! \brief Get The user's username
	 */
	std::string getUsername();

	/*! \brief Set The user's username
	 */
	void setUsername(std::string  username);

private:
	std::string email;
	std::string mobile_number;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PasswordResetRequest_H_ */
