#ifndef _UsersManager_H_
#define _UsersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChatMessageRequest.h"
#include "ChatMessageResource.h"
#include "NewPasswordRequest.h"
#include "PageResource«ChatMessageResource».h"
#include "PageResource«TemplateResource».h"
#include "PageResource«UserBaseResource».h"
#include "PasswordResetRequest.h"
#include "Result.h"
#include "StringWrapper.h"
#include "TemplateResource.h"
#include "UserResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Users Users
 * \ingroup Operations
 *  @{
 */
class UsersManager {
public:
	UsersManager();
	virtual ~UsersManager();

/*! \brief Add a tag to a user. *Synchronous*
 *
 * <b>Permissions Needed:</b> USERS_ADMIN
 * \param userId The id of the user *Required*
 * \param tag tag *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserTagSync(char * accessToken,
	int userId, StringWrapper tag, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a tag to a user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USERS_ADMIN
 * \param userId The id of the user *Required*
 * \param tag tag *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserTagAsync(char * accessToken,
	int userId, StringWrapper tag, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Create a user template. *Synchronous*
 *
 * User Templates define a type of user and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param userTemplateResource The user template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createUserTemplateSync(char * accessToken,
	TemplateResource userTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a user template. *Asynchronous*
 *
 * User Templates define a type of user and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param userTemplateResource The user template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createUserTemplateAsync(char * accessToken,
	TemplateResource userTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a user template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteUserTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a user template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteUserTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a list of direct messages with this user. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param recipientId The user id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDirectMessages1Sync(char * accessToken,
	int recipientId, int size, int page, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);

/*! \brief Get a list of direct messages with this user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param recipientId The user id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDirectMessages1Async(char * accessToken,
	int recipientId, int size, int page, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);


/*! \brief Get a single user. *Synchronous*
 *
 * Additional private info is included as USERS_ADMIN. <br><br><b>Permissions Needed:</b> ANY
 * \param id The id of the user or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserSync(char * accessToken,
	std::string id, 
	void(* handler)(UserResource, Error, void* )
	, void* userData);

/*! \brief Get a single user. *Asynchronous*
 *
 * Additional private info is included as USERS_ADMIN. <br><br><b>Permissions Needed:</b> ANY
 * \param id The id of the user or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserAsync(char * accessToken,
	std::string id, 
	void(* handler)(UserResource, Error, void* )
	, void* userData);


/*! \brief List tags for a user. *Synchronous*
 *
 * <b>Permissions Needed:</b> USERS_ADMIN
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTagsSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief List tags for a user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USERS_ADMIN
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTagsAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Get a single user template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or USERS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single user template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or USERS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search user templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or USERS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search user templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or USERS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search users. *Synchronous*
 *
 * Additional private info is included as USERS_ADMIN. <br><br><b>Permissions Needed:</b> ANY
 * \param filterDisplayname Filter for users whose display name starts with provided string.
 * \param filterEmail Filter for users whose email starts with provided string. Requires USERS_ADMIN permission
 * \param filterFirstname Filter for users whose first name starts with provided string. Requires USERS_ADMIN permission
 * \param filterFullname Filter for users whose full name starts with provided string. Requires USERS_ADMIN permission
 * \param filterLastname Filter for users whose last name starts with provided string. Requires USERS_ADMIN permission
 * \param filterUsername Filter for users whose username starts with the provided string. Requires USERS_ADMIN permission
 * \param filterTag Filter for users who have a given tag
 * \param filterGroup Filter for users in a given group, by unique name
 * \param filterRole Filter for users with a given role
 * \param filterLastActivity A comma separated string without spaces.  First value is the operator to search on, second value is the date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterIdList A comma separated list of ids.
 * \param filterSearch Filter for users whose display_name starts with the provided string, or username if display_name is null
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersSync(char * accessToken,
	std::string filterDisplayname, std::string filterEmail, std::string filterFirstname, std::string filterFullname, std::string filterLastname, std::string filterUsername, std::string filterTag, std::string filterGroup, std::string filterRole, std::string filterLastActivity, std::string filterIdList, std::string filterSearch, int size, int page, std::string order, 
	void(* handler)(PageResource«UserBaseResource», Error, void* )
	, void* userData);

/*! \brief List and search users. *Asynchronous*
 *
 * Additional private info is included as USERS_ADMIN. <br><br><b>Permissions Needed:</b> ANY
 * \param filterDisplayname Filter for users whose display name starts with provided string.
 * \param filterEmail Filter for users whose email starts with provided string. Requires USERS_ADMIN permission
 * \param filterFirstname Filter for users whose first name starts with provided string. Requires USERS_ADMIN permission
 * \param filterFullname Filter for users whose full name starts with provided string. Requires USERS_ADMIN permission
 * \param filterLastname Filter for users whose last name starts with provided string. Requires USERS_ADMIN permission
 * \param filterUsername Filter for users whose username starts with the provided string. Requires USERS_ADMIN permission
 * \param filterTag Filter for users who have a given tag
 * \param filterGroup Filter for users in a given group, by unique name
 * \param filterRole Filter for users with a given role
 * \param filterLastActivity A comma separated string without spaces.  First value is the operator to search on, second value is the date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterIdList A comma separated list of ids.
 * \param filterSearch Filter for users whose display_name starts with the provided string, or username if display_name is null
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersAsync(char * accessToken,
	std::string filterDisplayname, std::string filterEmail, std::string filterFirstname, std::string filterFullname, std::string filterLastname, std::string filterUsername, std::string filterTag, std::string filterGroup, std::string filterRole, std::string filterLastActivity, std::string filterIdList, std::string filterSearch, int size, int page, std::string order, 
	void(* handler)(PageResource«UserBaseResource», Error, void* )
	, void* userData);


/*! \brief Choose a new password after a reset. *Synchronous*
 *
 * Finish resetting a user's password using the secret provided from the password-reset endpoint.  Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> ANY
 * \param id The id of the user *Required*
 * \param newPasswordRequest The new password request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool passwordResetSync(char * accessToken,
	int id, NewPasswordRequest newPasswordRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Choose a new password after a reset. *Asynchronous*
 *
 * Finish resetting a user's password using the secret provided from the password-reset endpoint.  Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> ANY
 * \param id The id of the user *Required*
 * \param newPasswordRequest The new password request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool passwordResetAsync(char * accessToken,
	int id, NewPasswordRequest newPasswordRequest, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a user message. *Synchronous*
 *
 * 
 * \param recipientId The user id *Required*
 * \param chatMessageRequest The chat message request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postUserMessageSync(char * accessToken,
	int recipientId, ChatMessageRequest chatMessageRequest, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);

/*! \brief Send a user message. *Asynchronous*
 *
 * 
 * \param recipientId The user id *Required*
 * \param chatMessageRequest The chat message request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postUserMessageAsync(char * accessToken,
	int recipientId, ChatMessageRequest chatMessageRequest, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);


/*! \brief Register a new user. *Synchronous*
 *
 * Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> ANY
 * \param userResource The user resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool registerUserSync(char * accessToken,
	UserResource userResource, 
	void(* handler)(UserResource, Error, void* )
	, void* userData);

/*! \brief Register a new user. *Asynchronous*
 *
 * Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> ANY
 * \param userResource The user resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool registerUserAsync(char * accessToken,
	UserResource userResource, 
	void(* handler)(UserResource, Error, void* )
	, void* userData);


/*! \brief Remove a tag from a user. *Synchronous*
 *
 * <b>Permissions Needed:</b> USERS_ADMIN
 * \param userId The id of the user *Required*
 * \param tag The tag to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeUserTagSync(char * accessToken,
	int userId, std::string tag, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove a tag from a user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USERS_ADMIN
 * \param userId The id of the user *Required*
 * \param tag The tag to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeUserTagAsync(char * accessToken,
	int userId, std::string tag, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set a user's password. *Synchronous*
 *
 * Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> USERS_ADMIN or (USERS_USER and owner)
 * \param id The id of the user *Required*
 * \param password The new plain text password
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setPasswordSync(char * accessToken,
	int id, StringWrapper password, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set a user's password. *Asynchronous*
 *
 * Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> USERS_ADMIN or (USERS_USER and owner)
 * \param id The id of the user *Required*
 * \param password The new plain text password
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setPasswordAsync(char * accessToken,
	int id, StringWrapper password, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Reset a user's password. *Synchronous*
 *
 * A reset code will be generated and a 'forgot_password' BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit. <br><br><b>Permissions Needed:</b> ANY
 * \param id The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool startPasswordResetSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Reset a user's password. *Asynchronous*
 *
 * A reset code will be generated and a 'forgot_password' BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit. <br><br><b>Permissions Needed:</b> ANY
 * \param id The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool startPasswordResetAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Reset a user's password without user id. *Synchronous*
 *
 * A reset code will be generated and a 'forgot_password' BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit.  Must submit their email, username, or mobile phone number. <br><br><b>Permissions Needed:</b> ANY
 * \param passwordReset An object containing one of three methods to look up a user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool submitPasswordResetSync(char * accessToken,
	PasswordResetRequest passwordReset, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Reset a user's password without user id. *Asynchronous*
 *
 * A reset code will be generated and a 'forgot_password' BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit.  Must submit their email, username, or mobile phone number. <br><br><b>Permissions Needed:</b> ANY
 * \param passwordReset An object containing one of three methods to look up a user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool submitPasswordResetAsync(char * accessToken,
	PasswordResetRequest passwordReset, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a user. *Synchronous*
 *
 * Password will not be edited on this endpoint, use password specific endpoints. <br><br><b>Permissions Needed:</b> USERS_ADMIN or owner
 * \param id The id of the user or 'me' *Required*
 * \param userResource The user resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserSync(char * accessToken,
	std::string id, UserResource userResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a user. *Asynchronous*
 *
 * Password will not be edited on this endpoint, use password specific endpoints. <br><br><b>Permissions Needed:</b> USERS_ADMIN or owner
 * \param id The id of the user or 'me' *Required*
 * \param userResource The user resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserAsync(char * accessToken,
	std::string id, UserResource userResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a user template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param userTemplateResource The user template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserTemplateSync(char * accessToken,
	std::string id, TemplateResource userTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a user template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param userTemplateResource The user template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserTemplateAsync(char * accessToken,
	std::string id, TemplateResource userTemplateResource, 
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
#endif /* UsersManager_H_ */
