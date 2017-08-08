/*
 * OAuth2Resource.h
 *
 * 
 */

#ifndef _OAuth2Resource_H_
#define _OAuth2Resource_H_


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

class OAuth2Resource : public Object {
public:
	/*! \brief Constructor.
	 */
	OAuth2Resource();
	OAuth2Resource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OAuth2Resource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The access token issued by the authorization server
	 */
	std::string getAccessToken();

	/*! \brief Set The access token issued by the authorization server
	 */
	void setAccessToken(std::string  access_token);
	/*! \brief Get The lifetime in seconds of the access token
	 */
	std::string getExpiresIn();

	/*! \brief Set The lifetime in seconds of the access token
	 */
	void setExpiresIn(std::string  expires_in);
	/*! \brief Get The scope of the access token. Currently these values can be ignored, as security defaults to roles and permissions
	 */
	std::string getScope();

	/*! \brief Set The scope of the access token. Currently these values can be ignored, as security defaults to roles and permissions
	 */
	void setScope(std::string  scope);
	/*! \brief Get The type of the token issued
	 */
	std::string getTokenType();

	/*! \brief Set The type of the token issued
	 */
	void setTokenType(std::string  token_type);

private:
	std::string access_token;
	std::string expires_in;
	std::string scope;
	std::string token_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OAuth2Resource_H_ */
