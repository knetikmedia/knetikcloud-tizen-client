#ifndef _UsersGroupsManager_H_
#define _UsersGroupsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChatMessageRequest.h"
#include "ChatMessageResource.h"
#include "GroupMemberResource.h"
#include "GroupResource.h"
#include "PageResource«ChatMessageResource».h"
#include "PageResource«GroupMemberResource».h"
#include "PageResource«GroupResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "StringWrapper.h"
#include "TemplateResource.h"
#include "ValueWrapper«boolean».h"
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
 * <b>Permissions Needed:</b> GROUP_ADMIN or self if open
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
 * <b>Permissions Needed:</b> GROUP_ADMIN or self if open
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
 * <b>Permissions Needed:</b> GROUP_ADMIN
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
 * <b>Permissions Needed:</b> GROUP_ADMIN
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
 * <b>Permissions Needed:</b> GROUP_ADMIN
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
 * <b>Permissions Needed:</b> GROUP_ADMIN
 * \param groupResource The new group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupAsync(char * accessToken,
	GroupResource groupResource, 
	void(* handler)(GroupResource, Error, void* )
	, void* userData);


/*! \brief Create an group member template. *Synchronous*
 *
 * GroupMember Templates define a type of group member and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param groupMemberTemplateResource The group member template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupMemberTemplateSync(char * accessToken,
	TemplateResource groupMemberTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an group member template. *Asynchronous*
 *
 * GroupMember Templates define a type of group member and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param groupMemberTemplateResource The group member template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupMemberTemplateAsync(char * accessToken,
	TemplateResource groupMemberTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Create a group template. *Synchronous*
 *
 * Group Templates define a type of group and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
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
 * Group Templates define a type of group and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param groupTemplateResource The group template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGroupTemplateAsync(char * accessToken,
	TemplateResource groupTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Removes a group from the system. *Synchronous*
 *
 * All groups listing this as the parent are also removed and users are in turn removed from this and those groups. This may result in users no longer being in this group's parent if they were not added to it directly as well. <br><br><b>Permissions Needed:</b> GROUP_ADMIN
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupSync(char * accessToken,
	std::string uniqueName, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes a group from the system. *Asynchronous*
 *
 * All groups listing this as the parent are also removed and users are in turn removed from this and those groups. This may result in users no longer being in this group's parent if they were not added to it directly as well. <br><br><b>Permissions Needed:</b> GROUP_ADMIN
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupAsync(char * accessToken,
	std::string uniqueName, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an group member template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupMemberTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an group member template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupMemberTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a group template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
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
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteGroupTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Enable or disable notification of group messages. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member or 'me' *Required*
 * \param disabled disabled *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool disableGroupNotificationSync(char * accessToken,
	std::string uniqueName, std::string userId, ValueWrapper«boolean» disabled, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Enable or disable notification of group messages. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member or 'me' *Required*
 * \param disabled disabled *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool disableGroupNotificationAsync(char * accessToken,
	std::string uniqueName, std::string userId, ValueWrapper«boolean» disabled, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Loads a specific group's details. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
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
 * <b>Permissions Needed:</b> ANY
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupAsync(char * accessToken,
	std::string uniqueName, 
	void(* handler)(GroupResource, Error, void* )
	, void* userData);


/*! \brief Get group ancestors. *Synchronous*
 *
 * Returns a list of ancestor groups in reverse order (parent, then grandparent, etc). <br><br><b>Permissions Needed:</b> ANY
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupAncestorsSync(char * accessToken,
	std::string uniqueName, 
	void(* handler)(std::list<GroupResource>, Error, void* )
	, void* userData);

/*! \brief Get group ancestors. *Asynchronous*
 *
 * Returns a list of ancestor groups in reverse order (parent, then grandparent, etc). <br><br><b>Permissions Needed:</b> ANY
 * \param uniqueName The group unique name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupAncestorsAsync(char * accessToken,
	std::string uniqueName, 
	void(* handler)(std::list<GroupResource>, Error, void* )
	, void* userData);


/*! \brief Get a user from a group. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
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
 * <b>Permissions Needed:</b> ANY
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


/*! \brief Get a single group member template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMemberTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single group member template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMemberTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search group member templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMemberTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search group member templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMemberTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Lists members of the group. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
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
 * <b>Permissions Needed:</b> ANY
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


/*! \brief Get a list of group messages. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param uniqueName The group unique name *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMessagesSync(char * accessToken,
	std::string uniqueName, int size, int page, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);

/*! \brief Get a list of group messages. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param uniqueName The group unique name *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupMessagesAsync(char * accessToken,
	std::string uniqueName, int size, int page, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);


/*! \brief Get a single group template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
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
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
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
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
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
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
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
 * <b>Permissions Needed:</b> ANY
 * \param userId The id of the user *Required*
 * \param filterChildren Whether to limit group list to children of groups only. If true, shows only groups with parents. If false, shows only groups with no parent.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupsForUserSync(char * accessToken,
	int userId, bool filterChildren, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief List groups a user is in. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param userId The id of the user *Required*
 * \param filterChildren Whether to limit group list to children of groups only. If true, shows only groups with parents. If false, shows only groups with no parent.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getGroupsForUserAsync(char * accessToken,
	int userId, bool filterChildren, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief List and search groups. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
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
bool listGroupsSync(char * accessToken,
	std::string filterTemplate, std::string filterMemberCount, std::string filterName, std::string filterUniqueName, std::string filterParent, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«GroupResource», Error, void* )
	, void* userData);

/*! \brief List and search groups. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
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
bool listGroupsAsync(char * accessToken,
	std::string filterTemplate, std::string filterMemberCount, std::string filterName, std::string filterUniqueName, std::string filterParent, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«GroupResource», Error, void* )
	, void* userData);


/*! \brief Send a group message. *Synchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param chatMessageRequest The chat message request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postGroupMessageSync(char * accessToken,
	std::string uniqueName, ChatMessageRequest chatMessageRequest, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);

/*! \brief Send a group message. *Asynchronous*
 *
 * 
 * \param uniqueName The group unique name *Required*
 * \param chatMessageRequest The chat message request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postGroupMessageAsync(char * accessToken,
	std::string uniqueName, ChatMessageRequest chatMessageRequest, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);


/*! \brief Removes a user from a group. *Synchronous*
 *
 * <b>Permissions Needed:</b> GROUP_ADMIN or self if open
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
 * <b>Permissions Needed:</b> GROUP_ADMIN or self if open
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
 * If adding/removing/changing parent, user membership in group/new parent groups may be modified. The parent being removed will remove members from this sub group unless they were added explicitly to the parent and the new parent will gain members unless they were already a part of it. <br><br><b>Permissions Needed:</b> GROUP_ADMIN or admin of the group
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
 * If adding/removing/changing parent, user membership in group/new parent groups may be modified. The parent being removed will remove members from this sub group unless they were added explicitly to the parent and the new parent will gain members unless they were already a part of it. <br><br><b>Permissions Needed:</b> GROUP_ADMIN or admin of the group
 * \param uniqueName The group unique name *Required*
 * \param groupResource The updated group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupAsync(char * accessToken,
	std::string uniqueName, GroupResource groupResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Change a user's order. *Synchronous*
 *
 * <b>Permissions Needed:</b> GROUP_ADMIN
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member to modify *Required*
 * \param order The new order for the membership *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberPropertiesSync(char * accessToken,
	std::string uniqueName, int userId, StringWrapper order, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Change a user's order. *Asynchronous*
 *
 * <b>Permissions Needed:</b> GROUP_ADMIN
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member to modify *Required*
 * \param order The new order for the membership *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberPropertiesAsync(char * accessToken,
	std::string uniqueName, int userId, StringWrapper order, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Change a user's membership properties. *Synchronous*
 *
 * <b>Permissions Needed:</b> GROUP_ADMIN
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member to modify *Required*
 * \param properties The new properties for the membership *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberProperties1Sync(char * accessToken,
	std::string uniqueName, int userId, std::string properties, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Change a user's membership properties. *Asynchronous*
 *
 * <b>Permissions Needed:</b> GROUP_ADMIN
 * \param uniqueName The group unique name *Required*
 * \param userId The user id of the member to modify *Required*
 * \param properties The new properties for the membership *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberProperties1Async(char * accessToken,
	std::string uniqueName, int userId, std::string properties, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Change a user's status. *Synchronous*
 *
 * <b>Permissions Needed:</b> GROUP_ADMIN
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
 * <b>Permissions Needed:</b> GROUP_ADMIN
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


/*! \brief Update an group member template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param groupMemberTemplateResource The group member template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberTemplateSync(char * accessToken,
	std::string id, TemplateResource groupMemberTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an group member template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param groupMemberTemplateResource The group member template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateGroupMemberTemplateAsync(char * accessToken,
	std::string id, TemplateResource groupMemberTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Update a group template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
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
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
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



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersGroupsManager_H_ */
