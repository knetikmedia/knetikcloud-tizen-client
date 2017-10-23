/*
 * UserRelationshipReferenceResource.h
 *
 * 
 */

#ifndef _UserRelationshipReferenceResource_H_
#define _UserRelationshipReferenceResource_H_


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

class UserRelationshipReferenceResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserRelationshipReferenceResource();
	UserRelationshipReferenceResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserRelationshipReferenceResource();

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
	/*! \brief Get The context of the relationship
	 */
	std::string getContext();

	/*! \brief Set The context of the relationship
	 */
	void setContext(std::string  context);
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
	/*! \brief Get The id of the relationship
	 */
	long long getRelationshipId();

	/*! \brief Set The id of the relationship
	 */
	void setRelationshipId(long long  relationship_id);
	/*! \brief Get The username of the user
	 */
	std::string getUsername();

	/*! \brief Set The username of the user
	 */
	void setUsername(std::string  username);

private:
	std::string avatar_url;
	std::string context;
	std::string display_name;
	int id;
	long long relationship_id;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserRelationshipReferenceResource_H_ */
