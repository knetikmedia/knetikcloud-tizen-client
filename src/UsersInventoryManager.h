#ifndef _UsersInventoryManager_H_
#define _UsersInventoryManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "EntitlementGrantRequest.h"
#include "EntitlementItem.h"
#include "InvoiceResource.h"
#include "ItemTemplateResource.h"
#include "PageResource«EntitlementItem».h"
#include "PageResource«ItemTemplateResource».h"
#include "PageResource«UserInventoryResource».h"
#include "PageResource«UserItemLogResource».h"
#include "Result.h"
#include "UserInventoryAddRequest.h"
#include "UserInventoryResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UsersInventory UsersInventory
 * \ingroup Operations
 *  @{
 */
class UsersInventoryManager {
public:
	UsersInventoryManager();
	virtual ~UsersInventoryManager();

/*! \brief Adds an item to the user inventory. *Synchronous*
 *
 * The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time
 * \param id The id of the user *Required*
 * \param userInventoryAddRequest The user inventory add request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addItemToUserInventorySync(char * accessToken,
	int id, UserInventoryAddRequest userInventoryAddRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);

/*! \brief Adds an item to the user inventory. *Asynchronous*
 *
 * The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time
 * \param id The id of the user *Required*
 * \param userInventoryAddRequest The user inventory add request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addItemToUserInventoryAsync(char * accessToken,
	int id, UserInventoryAddRequest userInventoryAddRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);


/*! \brief Check for access to an item without consuming. *Synchronous*
 *
 * Useful for pre-check and accounts for all various buisness rules
 * \param userId The id of the user to check for or 'me' for logged in user *Required*
 * \param itemId The id of the item *Required*
 * \param sku The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool checkUserEntitlementItemSync(char * accessToken,
	std::string userId, int itemId, std::string sku, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Check for access to an item without consuming. *Asynchronous*
 *
 * Useful for pre-check and accounts for all various buisness rules
 * \param userId The id of the user to check for or 'me' for logged in user *Required*
 * \param itemId The id of the item *Required*
 * \param sku The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool checkUserEntitlementItemAsync(char * accessToken,
	std::string userId, int itemId, std::string sku, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Create an entitlement item. *Synchronous*
 *
 * 
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param entitlementItem The entitlement item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createEntitlementItemSync(char * accessToken,
	bool cascade, EntitlementItem entitlementItem, 
	void(* handler)(EntitlementItem, Error, void* )
	, void* userData);

/*! \brief Create an entitlement item. *Asynchronous*
 *
 * 
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param entitlementItem The entitlement item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createEntitlementItemAsync(char * accessToken,
	bool cascade, EntitlementItem entitlementItem, 
	void(* handler)(EntitlementItem, Error, void* )
	, void* userData);


/*! \brief Create an entitlement template. *Synchronous*
 *
 * Entitlement templates define a type of entitlement and the properties they have
 * \param _template The entitlement template to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createEntitlementTemplateSync(char * accessToken,
	ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an entitlement template. *Asynchronous*
 *
 * Entitlement templates define a type of entitlement and the properties they have
 * \param _template The entitlement template to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createEntitlementTemplateAsync(char * accessToken,
	ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an entitlement item. *Synchronous*
 *
 * 
 * \param entitlementId The id of the entitlement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteEntitlementItemSync(char * accessToken,
	int entitlementId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an entitlement item. *Asynchronous*
 *
 * 
 * \param entitlementId The id of the entitlement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteEntitlementItemAsync(char * accessToken,
	int entitlementId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an entitlement template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteEntitlementTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an entitlement template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteEntitlementTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single entitlement item. *Synchronous*
 *
 * 
 * \param entitlementId The id of the entitlement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementItemSync(char * accessToken,
	int entitlementId, 
	void(* handler)(EntitlementItem, Error, void* )
	, void* userData);

/*! \brief Get a single entitlement item. *Asynchronous*
 *
 * 
 * \param entitlementId The id of the entitlement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementItemAsync(char * accessToken,
	int entitlementId, 
	void(* handler)(EntitlementItem, Error, void* )
	, void* userData);


/*! \brief List and search entitlement items. *Synchronous*
 *
 * 
 * \param filterTemplate Filter for entitlements using a specified template
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementItemsSync(char * accessToken,
	std::string filterTemplate, int size, int page, std::string order, 
	void(* handler)(PageResource«EntitlementItem», Error, void* )
	, void* userData);

/*! \brief List and search entitlement items. *Asynchronous*
 *
 * 
 * \param filterTemplate Filter for entitlements using a specified template
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementItemsAsync(char * accessToken,
	std::string filterTemplate, int size, int page, std::string order, 
	void(* handler)(PageResource«EntitlementItem», Error, void* )
	, void* userData);


/*! \brief Get a single entitlement template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single entitlement template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search entitlement templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search entitlement templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getEntitlementTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief List the user inventory entries for a given user. *Synchronous*
 *
 * 
 * \param id The id of the user *Required*
 * \param inactive If true, accepts inactive user inventories
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param filterItemName Filter by items whose name starts with a string
 * \param filterItemId Filter by item id
 * \param filterUsername Filter by entries owned by the user with the specified username
 * \param filterGroup Filter by entries owned by the users in a given group, by unique name
 * \param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserInventoriesSync(char * accessToken,
	int id, bool inactive, int size, int page, std::string filterItemName, int filterItemId, std::string filterUsername, std::string filterGroup, std::string filterDate, 
	void(* handler)(PageResource«UserInventoryResource», Error, void* )
	, void* userData);

/*! \brief List the user inventory entries for a given user. *Asynchronous*
 *
 * 
 * \param id The id of the user *Required*
 * \param inactive If true, accepts inactive user inventories
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param filterItemName Filter by items whose name starts with a string
 * \param filterItemId Filter by item id
 * \param filterUsername Filter by entries owned by the user with the specified username
 * \param filterGroup Filter by entries owned by the users in a given group, by unique name
 * \param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserInventoriesAsync(char * accessToken,
	int id, bool inactive, int size, int page, std::string filterItemName, int filterItemId, std::string filterUsername, std::string filterGroup, std::string filterDate, 
	void(* handler)(PageResource«UserInventoryResource», Error, void* )
	, void* userData);


/*! \brief Get an inventory entry. *Synchronous*
 *
 * 
 * \param userId The id of the inventory owner or 'me' for the logged in user *Required*
 * \param id The id of the user inventory *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserInventorySync(char * accessToken,
	int userId, int id, 
	void(* handler)(UserInventoryResource, Error, void* )
	, void* userData);

/*! \brief Get an inventory entry. *Asynchronous*
 *
 * 
 * \param userId The id of the inventory owner or 'me' for the logged in user *Required*
 * \param id The id of the user inventory *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserInventoryAsync(char * accessToken,
	int userId, int id, 
	void(* handler)(UserInventoryResource, Error, void* )
	, void* userData);


/*! \brief List the log entries for this inventory entry. *Synchronous*
 *
 * 
 * \param userId The id of the inventory owner or 'me' for the logged in user *Required*
 * \param id The id of the user inventory *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserInventoryLogSync(char * accessToken,
	std::string userId, int id, int size, int page, 
	void(* handler)(PageResource«UserItemLogResource», Error, void* )
	, void* userData);

/*! \brief List the log entries for this inventory entry. *Asynchronous*
 *
 * 
 * \param userId The id of the inventory owner or 'me' for the logged in user *Required*
 * \param id The id of the user inventory *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserInventoryLogAsync(char * accessToken,
	std::string userId, int id, int size, int page, 
	void(* handler)(PageResource«UserItemLogResource», Error, void* )
	, void* userData);


/*! \brief List the user inventory entries for all users. *Synchronous*
 *
 * 
 * \param inactive If true, accepts inactive user inventories
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param filterItemName Filter by items whose name starts with a string
 * \param filterItemId Filter by item id
 * \param filterUsername Filter by entries owned by the user with the specified username
 * \param filterGroup Filter by entries owned by the users in a given group, by unique name
 * \param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersInventorySync(char * accessToken,
	bool inactive, int size, int page, std::string filterItemName, int filterItemId, std::string filterUsername, std::string filterGroup, std::string filterDate, 
	void(* handler)(PageResource«UserInventoryResource», Error, void* )
	, void* userData);

/*! \brief List the user inventory entries for all users. *Asynchronous*
 *
 * 
 * \param inactive If true, accepts inactive user inventories
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param filterItemName Filter by items whose name starts with a string
 * \param filterItemId Filter by item id
 * \param filterUsername Filter by entries owned by the user with the specified username
 * \param filterGroup Filter by entries owned by the users in a given group, by unique name
 * \param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersInventoryAsync(char * accessToken,
	bool inactive, int size, int page, std::string filterItemName, int filterItemId, std::string filterUsername, std::string filterGroup, std::string filterDate, 
	void(* handler)(PageResource«UserInventoryResource», Error, void* )
	, void* userData);


/*! \brief Grant an entitlement. *Synchronous*
 *
 * 
 * \param userId The id of the user to grant the entitlement to *Required*
 * \param grantRequest grantRequest *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool grantUserEntitlementSync(char * accessToken,
	int userId, EntitlementGrantRequest grantRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Grant an entitlement. *Asynchronous*
 *
 * 
 * \param userId The id of the user to grant the entitlement to *Required*
 * \param grantRequest grantRequest *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool grantUserEntitlementAsync(char * accessToken,
	int userId, EntitlementGrantRequest grantRequest, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an entitlement item. *Synchronous*
 *
 * 
 * \param entitlementId The id of the entitlement *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param entitlementItem The entitlement item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateEntitlementItemSync(char * accessToken,
	int entitlementId, bool cascade, EntitlementItem entitlementItem, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update an entitlement item. *Asynchronous*
 *
 * 
 * \param entitlementId The id of the entitlement *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param entitlementItem The entitlement item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateEntitlementItemAsync(char * accessToken,
	int entitlementId, bool cascade, EntitlementItem entitlementItem, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an entitlement template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param _template The updated template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateEntitlementTemplateSync(char * accessToken,
	std::string id, ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an entitlement template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param _template The updated template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateEntitlementTemplateAsync(char * accessToken,
	std::string id, ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Set the behavior data for an inventory entry. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the user inventory *Required*
 * \param data The data map
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserInventoryBehaviorDataSync(char * accessToken,
	int userId, int id, std::string data, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the behavior data for an inventory entry. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the user inventory *Required*
 * \param data The data map
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserInventoryBehaviorDataAsync(char * accessToken,
	int userId, int id, std::string data, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the expiration date. *Synchronous*
 *
 * Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill)
 * \param userId user_id *Required*
 * \param id The id of the user inventory *Required*
 * \param timestamp The new expiration date as a unix timestamp in seconds. May be null (no body).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserInventoryExpiresSync(char * accessToken,
	int userId, int id, long long timestamp, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the expiration date. *Asynchronous*
 *
 * Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill)
 * \param userId user_id *Required*
 * \param id The id of the user inventory *Required*
 * \param timestamp The new expiration date as a unix timestamp in seconds. May be null (no body).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserInventoryExpiresAsync(char * accessToken,
	int userId, int id, long long timestamp, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the status for an inventory entry. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the user inventory *Required*
 * \param inventoryStatus The inventory status object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserInventoryStatusSync(char * accessToken,
	int userId, int id, std::string inventoryStatus, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the status for an inventory entry. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the user inventory *Required*
 * \param inventoryStatus The inventory status object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserInventoryStatusAsync(char * accessToken,
	int userId, int id, std::string inventoryStatus, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Use an item. *Synchronous*
 *
 * 
 * \param userId The id of the user to check for or 'me' for logged in user *Required*
 * \param itemId The id of the item *Required*
 * \param sku The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out
 * \param info Any additional info to add to the log about this use
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool useUserEntitlementItemSync(char * accessToken,
	std::string userId, int itemId, std::string sku, std::string info, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Use an item. *Asynchronous*
 *
 * 
 * \param userId The id of the user to check for or 'me' for logged in user *Required*
 * \param itemId The id of the item *Required*
 * \param sku The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out
 * \param info Any additional info to add to the log about this use
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool useUserEntitlementItemAsync(char * accessToken,
	std::string userId, int itemId, std::string sku, std::string info, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersInventoryManager_H_ */
