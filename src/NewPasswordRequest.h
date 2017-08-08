/*
 * NewPasswordRequest.h
 *
 * 
 */

#ifndef _NewPasswordRequest_H_
#define _NewPasswordRequest_H_


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

class NewPasswordRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	NewPasswordRequest();
	NewPasswordRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~NewPasswordRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The new password in plain text
	 */
	std::string getPassword();

	/*! \brief Set The new password in plain text
	 */
	void setPassword(std::string  password);
	/*! \brief Get The secret provided after the password reset
	 */
	std::string getSecret();

	/*! \brief Set The secret provided after the password reset
	 */
	void setSecret(std::string  secret);

private:
	std::string password;
	std::string secret;
	void __init();
	void __cleanup();

};
}
}

#endif /* _NewPasswordRequest_H_ */
