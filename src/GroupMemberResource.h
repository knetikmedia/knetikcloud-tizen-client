/*
 * GroupMemberResource.h
 *
 * 
 */

#ifndef _GroupMemberResource_H_
#define _GroupMemberResource_H_


#include <string>
#include "Property.h"
#include <list>
#include <map>
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

class GroupMemberResource : public Object {
public:
	/*! \brief Constructor.
	 */
	GroupMemberResource();
	GroupMemberResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GroupMemberResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this type, or be an extra not from the template
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this type, or be an extra not from the template
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
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
	/*! \brief Get The position of the member in the group if applicable. Read notes for details
	 */
	std::string getOrder();

	/*! \brief Set The position of the member in the group if applicable. Read notes for details
	 */
	void setOrder(std::string  order);
	/*! \brief Get The member's access level. Default: member
	 */
	std::string getStatus();

	/*! \brief Set The member's access level. Default: member
	 */
	void setStatus(std::string  status);
	/*! \brief Get A template this member additional properties are validated against (private). May be null and no validation of properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A template this member additional properties are validated against (private). May be null and no validation of properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The username of the user
	 */
	std::string getUsername();

	/*! \brief Set The username of the user
	 */
	void setUsername(std::string  username);

private:
	std::map <std::string, std::string>additional_properties;
	std::string avatar_url;
	std::string display_name;
	int id;
	std::string order;
	std::string status;
	std::string _template;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GroupMemberResource_H_ */
