/*
 * OauthAccessTokenResource.h
 *
 * 
 */

#ifndef _OauthAccessTokenResource_H_
#define _OauthAccessTokenResource_H_


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

class OauthAccessTokenResource : public Object {
public:
	/*! \brief Constructor.
	 */
	OauthAccessTokenResource();
	OauthAccessTokenResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OauthAccessTokenResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The key of the client assosciated with the token
	 */
	std::string getClientId();

	/*! \brief Set The key of the client assosciated with the token
	 */
	void setClientId(std::string  client_id);
	/*! \brief Get The token.  Not shown in list view
	 */
	std::string getToken();

	/*! \brief Set The token.  Not shown in list view
	 */
	void setToken(std::string  token);
	/*! \brief Get The username of the user associated with the token
	 */
	std::string getUsername();

	/*! \brief Set The username of the user associated with the token
	 */
	void setUsername(std::string  username);

private:
	std::string client_id;
	std::string token;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OauthAccessTokenResource_H_ */
