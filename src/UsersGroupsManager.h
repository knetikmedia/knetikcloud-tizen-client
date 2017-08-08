#ifndef _UsersGroupsManager_H_
#define _UsersGroupsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "GroupMemberResource.h"
#include "GroupResource.h"
#include "PageResource«GroupMemberResource».h"
#include "PageResource«GroupResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UsersGroups UsersGroups
 * \ingroup Operations
 *  @{
 */
class UsersGroupsManager {
public:
	UsersGroupsManager();
	virtual ~UsersGroupsManager();

/*! \brief Adds a new member to the group. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param user The id and status for a user to add to the group *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMemberToGroupSync(char * accessToken,
	std::string uniqueName, GroupMemberResource user, 
	void(* handler)(GroupMemberResource, Error, void* )
	, void* userData);

/*! \brief Adds a new member to the group. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param user The id and status for a user to add to the group *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMemberToGroupAsync(char * accessToken,
	std::string uniqueName, GroupMemberResource user, 
	void(* handler)(GroupMemberResource, Error, void* )
	, void* userData);


/*! \brief Adds multiple members to the group. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param users The id and status for a list of users to add to the group *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMembersToGroupSync(char * accessToken,
	std::string uniqueName, std::list<GroupMemberResource> users, 
	void(* handler)(std::list<GroupMemberResource>, Error, void* )
	, void* userData);

/*! \brief Adds multiple members to the group. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param users The id and status for a list of users to add to the group *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMembersToGroupAsync(char * accessToken,
	std::string uniqueName, std::list<GroupMemberResource> users, 
	void(* handler)(std::list<GroupMemberResource>, Error, void* )
	, void* userData);


/*! \brief Create a group. *Synchronous*
 *
 * 
 * \param groupResource The new group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupSync(char * accessToken,
	GroupResource groupResource, 
	void(* handler)(GroupResource, Error, void* )
	, void* userData);

/*! \brief Create a group. *Asynchronous*
 *
 * 
 * \param groupResource The new group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupAsync(char * accessToken,
	GroupResource groupResource, 
	void(* handler)(GroupResource, Error, void* )
	, void* userData);


/*! \brief Create a group template. *Synchronous*
 *
 * Group Templates define a type of group and the properties they have
 * \param groupTemplateResource The group template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupTemplateSync(char * accessToken,
	TemplateResource groupTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a group template. *Asynchronous*
 *
 * Group Templates define a type of group and the properties they have
 * \param groupTemplateResource The group template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupTemplateAsync(char * accessToken,
	TemplateResource groupTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Removes a group from the system IF no resources are attached to it. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupSync(char * accessToken,
	std::string uniqueName, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes a group from the system IF no resources are attached to it. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupAsync(char * accessToken,
	std::string uniqueName, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a group template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a group template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Loads a specific group's details. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupSync(char * accessToken,
	std::string uniqueName, 
	void(* handler)(GroupResource, Error, void* )
	, void* userData);

/*! \brief Loads a specific group's details. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupAsync(char * accessToken,
	std::string uniqueName, 
	void(* handler)(GroupResource, Error, void* )
	, void* userData);


/*! \brief Get a user from a group. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMemberSync(char * accessToken,
	std::string uniqueName, int userId, 
	void(* handler)(GroupMemberResource, Error, void* )
	, void* userData);

/*! \brief Get a user from a group. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMemberAsync(char * accessToken,
	std::string uniqueName, int userId, 
	void(* handler)(GroupMemberResource, Error, void* )
	, void* userData);


/*! \brief Lists members of the group. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMembersSync(char * accessToken,
	std::string uniqueName, int size, int page, std::string order, 
	void(* handler)(PageResource«GroupMemberResource», Error, void* )
	, void* userData);

/*! \brief Lists members of the group. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMembersAsync(char * accessToken,
	std::string uniqueName, int size, int page, std::string order, 
	void(* handler)(PageResource«GroupMemberResource», Error, void* )
	, void* userData);


/*! \brief Get a single group template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single group template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search group templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search group templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List groups a user is in. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupsForUserSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief List groups a user is in. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupsForUserAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Removes a user from a group. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The id of the user to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeGroupMemberSync(char * accessToken,
	std::string uniqueName, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes a user from a group. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The id of the user to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeGroupMemberAsync(char * accessToken,
	std::string uniqueName, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a group. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param groupResource The updated group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupSync(char * accessToken,
	std::string uniqueName, GroupResource groupResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a group. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param groupResource The updated group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupAsync(char * accessToken,
	std::string uniqueName, GroupResource groupResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Change a user's status. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member to modify *Required*
 * \param status The new status for the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberStatusSync(char * accessToken,
	std::string uniqueName, int userId, std::string status, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Change a user's status. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member to modify *Required*
 * \param status The new status for the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberStatusAsync(char * accessToken,
	std::string uniqueName, int userId, std::string status, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a group template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param groupTemplateResource The group template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupTemplateSync(char * accessToken,
	std::string id, TemplateResource groupTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a group template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param groupTemplateResource The group template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupTemplateAsync(char * accessToken,
	std::string id, TemplateResource groupTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search groups. *Synchronous*
 *
 * 
 * \param filterTemplate Filter for groups using a specific template, by id
 * \param filterMemberCount Filters groups by member count. Multiple values possible for range search. Format: filter_member_count=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_member_count=GT,14,LT,17
 * \param filterName Filter for groups with names starting with the given string
 * \param filterUniqueName Filter for groups whose unique_name starts with provided string
 * \param filterParent Filter for groups with a specific parent, by unique name
 * \param filterStatus Filter for groups with a certain status
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupsSync(char * accessToken,
	std::string filterTemplate, std::string filterMemberCount, std::string filterName, std::string filterUniqueName, std::string filterParent, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«GroupResource», Error, void* )
	, void* userData);

/*! \brief List and search groups. *Asynchronous*
 *
 * 
 * \param filterTemplate Filter for groups using a specific template, by id
 * \param filterMemberCount Filters groups by member count. Multiple values possible for range search. Format: filter_member_count=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_member_count=GT,14,LT,17
 * \param filterName Filter for groups with names starting with the given string
 * \param filterUniqueName Filter for groups whose unique_name starts with provided string
 * \param filterParent Filter for groups with a specific parent, by unique name
 * \param filterStatus Filter for groups with a certain status
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupsAsync(char * accessToken,
	std::string filterTemplate, std::string filterMemberCount, std::string filterName, std::string filterUniqueName, std::string filterParent, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«GroupResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersGroupsManager_H_ */
