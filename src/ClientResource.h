/*
 * ClientResource.h
 *
 * 
 */

#ifndef _ClientResource_H_
#define _ClientResource_H_


#include <string>
#include <list>
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

class ClientResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ClientResource();
	ClientResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ClientResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The expiration time of an initial oauth token in seconds
	 */
	int getAccessTokenValiditySeconds();

	/*! \brief Set The expiration time of an initial oauth token in seconds
	 */
	void setAccessTokenValiditySeconds(int  access_token_validity_seconds);
	/*! \brief Get The client_id field of the oauth token request
	 */
	std::string getClientKey();

	/*! \brief Set The client_id field of the oauth token request
	 */
	void setClientKey(std::string  client_key);
	/*! \brief Get The oauth grant type as in: password (username/password auth), client_credentials (server-to-server, private clients), refresh_token (to allow clients to refresh their initial token), facebook, google, etc) See documentation for a complete list. Use dedicated endpoint PUT /grant-types to edit this list
	 */
	std::list<std::string> getGrantTypes();

	/*! \brief Set The oauth grant type as in: password (username/password auth), client_credentials (server-to-server, private clients), refresh_token (to allow clients to refresh their initial token), facebook, google, etc) See documentation for a complete list. Use dedicated endpoint PUT /grant-types to edit this list
	 */
	void setGrantTypes(std::list <std::string> grant_types);
	/*! \brief Get Generated unique ID for the client
	 */
	int getId();

	/*! \brief Set Generated unique ID for the client
	 */
	void setId(int  id);
	/*! \brief Get Set to true if the client is public i.e the secret key can be secured
	 */
	bool getIsPublic();

	/*! \brief Set Set to true if the client is public i.e the secret key can be secured
	 */
	void setIsPublic(bool  is_public);
	/*! \brief Get Used to flag system clients that are not meant to be tinkered with
	 */
	bool getLocked();

	/*! \brief Set Used to flag system clients that are not meant to be tinkered with
	 */
	void setLocked(bool  locked);
	/*! \brief Get The friendly name of the client
	 */
	std::string getName();

	/*! \brief Set The friendly name of the client
	 */
	void setName(std::string  name);
	/*! \brief Get A redirection URL to use when granting access to third-parties (seldomly used)
	 */
	std::list<std::string> getRedirectUris();

	/*! \brief Set A redirection URL to use when granting access to third-parties (seldomly used)
	 */
	void setRedirectUris(std::list <std::string> redirect_uris);
	/*! \brief Get The expiration time of a refresh oauth token in seconds
	 */
	int getRefreshTokenValiditySeconds();

	/*! \brief Set The expiration time of a refresh oauth token in seconds
	 */
	void setRefreshTokenValiditySeconds(int  refresh_token_validity_seconds);
	/*! \brief Get The client-secret field of the oauth request when creating a private client
	 */
	std::string getSecret();

	/*! \brief Set The client-secret field of the oauth request when creating a private client
	 */
	void setSecret(std::string  secret);

private:
	int access_token_validity_seconds;
	std::string client_key;
	std::list <std::string>grant_types;
	int id;
	bool is_public;
	bool locked;
	std::string name;
	std::list <std::string>redirect_uris;
	int refresh_token_validity_seconds;
	std::string secret;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ClientResource_H_ */
