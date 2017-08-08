/*
 * SimpleUserResource.h
 *
 * 
 */

#ifndef _SimpleUserResource_H_
#define _SimpleUserResource_H_


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

class SimpleUserResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SimpleUserResource();
	SimpleUserResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SimpleUserResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The url of the user's avatar image
	 */
	std::string getAvatarUrl();

	/*! \brief Set The url of the user's avatar image
	 */
	void setAvatarUrl(std::string  avatar_url);
	/*! \brief Get The public username of the user
	 */
	std::string getDisplayName();

	/*! \brief Set The public username of the user
	 */
	void setDisplayName(std::string  display_name);
	/*! \brief Get The id of the user
	 */
	int getId();

	/*! \brief Set The id of the user
	 */
	void setId(int  id);
	/*! \brief Get The username of the user
	 */
	std::string getUsername();

	/*! \brief Set The username of the user
	 */
	void setUsername(std::string  username);

private:
	std::string avatar_url;
	std::string display_name;
	int id;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SimpleUserResource_H_ */
