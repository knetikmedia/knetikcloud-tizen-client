/*
 * TokenDetailsResource.h
 *
 * 
 */

#ifndef _TokenDetailsResource_H_
#define _TokenDetailsResource_H_


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

class TokenDetailsResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TokenDetailsResource();
	TokenDetailsResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TokenDetailsResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClientId();

	/*! \brief Set 
	 */
	void setClientId(std::string  client_id);
	/*! \brief Get 
	 */
	std::list<std::string> getRoles();

	/*! \brief Set 
	 */
	void setRoles(std::list <std::string> roles);
	/*! \brief Get 
	 */
	int getUserId();

	/*! \brief Set 
	 */
	void setUserId(int  user_id);

private:
	std::string client_id;
	std::list <std::string>roles;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TokenDetailsResource_H_ */
