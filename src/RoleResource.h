/*
 * RoleResource.h
 *
 * 
 */

#ifndef _RoleResource_H_
#define _RoleResource_H_


#include <string>
#include "PermissionResource.h"
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

class RoleResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RoleResource();
	RoleResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RoleResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of clients this role is assigned to
	 */
	int getClientCount();

	/*! \brief Set The number of clients this role is assigned to
	 */
	void setClientCount(int  client_count);
	/*! \brief Get The date the role was added. Unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the role was added. Unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get Whether a role is locked from being deleted
	 */
	bool getLocked();

	/*! \brief Set Whether a role is locked from being deleted
	 */
	void setLocked(bool  locked);
	/*! \brief Get The name of the role used for display purposes
	 */
	std::string getName();

	/*! \brief Set The name of the role used for display purposes
	 */
	void setName(std::string  name);
	/*! \brief Get The keyword that defines the role
	 */
	std::string getRole();

	/*! \brief Set The keyword that defines the role
	 */
	void setRole(std::string  role);
	/*! \brief Get The list of permissions this role has
	 */
	std::list<PermissionResource> getRolePermission();

	/*! \brief Set The list of permissions this role has
	 */
	void setRolePermission(std::list <PermissionResource> role_permission);
	/*! \brief Get The number of users this role is assigned to
	 */
	int getUserCount();

	/*! \brief Set The number of users this role is assigned to
	 */
	void setUserCount(int  user_count);

private:
	int client_count;
	long long created_date;
	bool locked;
	std::string name;
	std::string role;
	std::list <PermissionResource>role_permission;
	int user_count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RoleResource_H_ */
