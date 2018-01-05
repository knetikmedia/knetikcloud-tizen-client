/*
 * GroupMemberResource.h
 *
 * 
 */

#ifndef _GroupMemberResource_H_
#define _GroupMemberResource_H_


#include <string>
#include "Property.h"
#include "SimpleGroupResource.h"
#include "SimpleUserResource.h"
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
	/*! \brief Get The group. Id is the unique name
	 */
	SimpleGroupResource getGroup();

	/*! \brief Set The group. Id is the unique name
	 */
	void setGroup(SimpleGroupResource  group);
	/*! \brief Get Whether this membership is explicit (the user was added directly to the group) or implicit (the user was added only to one or more child groups)
	 */
	bool getImplicit();

	/*! \brief Set Whether this membership is explicit (the user was added directly to the group) or implicit (the user was added only to one or more child groups)
	 */
	void setImplicit(bool  implicit);
	/*! \brief Get The id of the membership entry
	 */
	long long getMembershipId();

	/*! \brief Set The id of the membership entry
	 */
	void setMembershipId(long long  membership_id);
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
	/*! \brief Get The user
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user
	 */
	void setUser(SimpleUserResource  user);

private:
	std::map <std::string, std::string>additional_properties;
	SimpleGroupResource group;
	bool implicit;
	long long membership_id;
	std::string order;
	std::string status;
	std::string _template;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GroupMemberResource_H_ */
