/*
 * GroupResource.h
 *
 * 
 */

#ifndef _GroupResource_H_
#define _GroupResource_H_


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

class GroupResource : public Object {
public:
	/*! \brief Constructor.
	 */
	GroupResource();
	GroupResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GroupResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get A description of the group. Max 250 characters
	 */
	std::string getDescription();

	/*! \brief Set A description of the group. Max 250 characters
	 */
	void setDescription(std::string  description);
	/*! \brief Get The number of users in the group
	 */
	int getMemberCount();

	/*! \brief Set The number of users in the group
	 */
	void setMemberCount(int  member_count);
	/*! \brief Get A message of the day for members of the group
	 */
	std::string getMessageOfTheDay();

	/*! \brief Set A message of the day for members of the group
	 */
	void setMessageOfTheDay(std::string  message_of_the_day);
	/*! \brief Get The name of the group. Max 50 characters
	 */
	std::string getName();

	/*! \brief Set The name of the group. Max 50 characters
	 */
	void setName(std::string  name);
	/*! \brief Get The unique name of another group that this group is a subset of
	 */
	std::string getParent();

	/*! \brief Set The unique name of another group that this group is a subset of
	 */
	void setParent(std::string  parent);
	/*! \brief Get The status which describes whether other users can freely join the group or not
	 */
	std::string getStatus();

	/*! \brief Set The status which describes whether other users can freely join the group or not
	 */
	void setStatus(std::string  status);
	/*! \brief Get The number of users in child groups
	 */
	int getSubMemberCount();

	/*! \brief Set The number of users in child groups
	 */
	void setSubMemberCount(int  sub_member_count);
	/*! \brief Get A group template this group is validated against. May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A group template this group is validated against. May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created
	 */
	std::string getUniqueName();

	/*! \brief Set Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created
	 */
	void setUniqueName(std::string  unique_name);

private:
	std::map <std::string, std::string>additional_properties;
	std::string description;
	int member_count;
	std::string message_of_the_day;
	std::string name;
	std::string parent;
	std::string status;
	int sub_member_count;
	std::string _template;
	std::string unique_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GroupResource_H_ */
