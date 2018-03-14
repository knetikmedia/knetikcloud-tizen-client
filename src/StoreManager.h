#ifndef _StoreManager_H_
#define _StoreManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BehaviorDefinitionResource.h"
#include "InvoiceResource.h"
#include "PageResource«StoreItemTemplateResource».h"
#include "PageResource«StoreItem».h"
#include "QuickBuyRequest.h"
#include "Result.h"
#include "StoreItem.h"
#include "StoreItemTemplateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Store Store
 * \ingroup Operations
 *  @{
 */
class StoreManager {
public:
	StoreManager();
	virtual ~StoreManager();

/*! \brief Create an item template. *Synchronous*
 *
 * Item Templates define a type of item and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param itemTemplateResource The new item template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createItemTemplateSync(char * accessToken,
	StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an item template. *Asynchronous*
 *
 * Item Templates define a type of item and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param itemTemplateResource The new item template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createItemTemplateAsync(char * accessToken,
	StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Create a store item. *Synchronous*
 *
 * SKUs have to be unique in the entire store. If a duplicate SKU is found, a 400 error is generated and the response will have a \"parameters\" field that is a list of duplicates. A duplicate is an object like {item_id, offending_sku_list}. Ex:<br /> {..., parameters: [[{item: 1, skus: [\"SKU-1\"]}]]}<br /> If an item is brand new and has duplicate SKUs within itself, the item ID will be 0.  Item subclasses are not allowed here, you will have to use their respective endpoints. <br><br><b>Permissions Needed:</b> STORE_ADMIN
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param storeItem The store item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createStoreItemSync(char * accessToken,
	bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData);

/*! \brief Create a store item. *Asynchronous*
 *
 * SKUs have to be unique in the entire store. If a duplicate SKU is found, a 400 error is generated and the response will have a \"parameters\" field that is a list of duplicates. A duplicate is an object like {item_id, offending_sku_list}. Ex:<br /> {..., parameters: [[{item: 1, skus: [\"SKU-1\"]}]]}<br /> If an item is brand new and has duplicate SKUs within itself, the item ID will be 0.  Item subclasses are not allowed here, you will have to use their respective endpoints. <br><br><b>Permissions Needed:</b> STORE_ADMIN
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param storeItem The store item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createStoreItemAsync(char * accessToken,
	bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData);


/*! \brief Delete an item template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteItemTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an item template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteItemTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a store item. *Synchronous*
 *
 * <b>Permissions Needed:</b> STORE_ADMIN
 * \param id The id of the item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteStoreItemSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a store item. *Asynchronous*
 *
 * <b>Permissions Needed:</b> STORE_ADMIN
 * \param id The id of the item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteStoreItemAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief List available item behaviors. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBehaviorsSync(char * accessToken,
	
	void(* handler)(std::list<BehaviorDefinitionResource>, Error, void* )
	, void* userData);

/*! \brief List available item behaviors. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBehaviorsAsync(char * accessToken,
	
	void(* handler)(std::list<BehaviorDefinitionResource>, Error, void* )
	, void* userData);


/*! \brief Get a single item template. *Synchronous*
 *
 * Item Templates define a type of item and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getItemTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single item template. *Asynchronous*
 *
 * Item Templates define a type of item and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getItemTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search item templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getItemTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search item templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getItemTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief Get a single store item. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStoreItemSync(char * accessToken,
	int id, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData);

/*! \brief Get a single store item. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStoreItemAsync(char * accessToken,
	int id, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData);


/*! \brief List and search store items. *Synchronous*
 *
 * If called without permission STORE_ADMIN the only items marked displayable, whose start and end date are null or appropriate to the current date, and whose geo policy allows the caller's country will be returned. Similarly skus will be filtered, possibly resulting in an item returned with no skus the user can purchase. br><br><b>Permissions Needed:</b> ANY
 * \param filterNameSearch Filter for items whose name starts with a given string.
 * \param filterUniqueKey Filter for items whose unique_key is a given string.
 * \param filterPublished Filter for skus that have been published.
 * \param filterDisplayable Filter for items that are displayable.
 * \param filterStart A comma separated string without spaces.  First value is the operator to search on, second value is the store start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterEnd A comma separated string without spaces.  First value is the operator to search on, second value is the store end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the sku start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterStopDate A comma separated string without spaces.  First value is the operator to search on, second value is the sku end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterSku Filter for skus whose name starts with a given string.
 * \param filterPrice A colon separated string without spaces.  First value is the operator to search on, second value is the price of a sku.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterTag A comma separated list without spaces of the names of tags. Will only return items with at least one of the tags.
 * \param filterItemsByType Filter for item type based on its type hint.
 * \param filterBundledSkus Filter for skus inside bundles whose name starts with a given string.  Used only when type hint is 'bundle_item'
 * \param filterVendor Filter for items from a given vendor, by id.
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStoreItemsSync(char * accessToken,
	std::string filterNameSearch, std::string filterUniqueKey, bool filterPublished, bool filterDisplayable, std::string filterStart, std::string filterEnd, std::string filterStartDate, std::string filterStopDate, std::string filterSku, std::string filterPrice, std::string filterTag, std::string filterItemsByType, std::string filterBundledSkus, int filterVendor, int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItem», Error, void* )
	, void* userData);

/*! \brief List and search store items. *Asynchronous*
 *
 * If called without permission STORE_ADMIN the only items marked displayable, whose start and end date are null or appropriate to the current date, and whose geo policy allows the caller's country will be returned. Similarly skus will be filtered, possibly resulting in an item returned with no skus the user can purchase. br><br><b>Permissions Needed:</b> ANY
 * \param filterNameSearch Filter for items whose name starts with a given string.
 * \param filterUniqueKey Filter for items whose unique_key is a given string.
 * \param filterPublished Filter for skus that have been published.
 * \param filterDisplayable Filter for items that are displayable.
 * \param filterStart A comma separated string without spaces.  First value is the operator to search on, second value is the store start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterEnd A comma separated string without spaces.  First value is the operator to search on, second value is the store end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the sku start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterStopDate A comma separated string without spaces.  First value is the operator to search on, second value is the sku end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterSku Filter for skus whose name starts with a given string.
 * \param filterPrice A colon separated string without spaces.  First value is the operator to search on, second value is the price of a sku.  Allowed operators: (LT, GT, LTE, GTE, EQ).
 * \param filterTag A comma separated list without spaces of the names of tags. Will only return items with at least one of the tags.
 * \param filterItemsByType Filter for item type based on its type hint.
 * \param filterBundledSkus Filter for skus inside bundles whose name starts with a given string.  Used only when type hint is 'bundle_item'
 * \param filterVendor Filter for items from a given vendor, by id.
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStoreItemsAsync(char * accessToken,
	std::string filterNameSearch, std::string filterUniqueKey, bool filterPublished, bool filterDisplayable, std::string filterStart, std::string filterEnd, std::string filterStartDate, std::string filterStopDate, std::string filterSku, std::string filterPrice, std::string filterTag, std::string filterItemsByType, std::string filterBundledSkus, int filterVendor, int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItem», Error, void* )
	, void* userData);


/*! \brief One-step purchase and pay for a single SKU item from a user's wallet. *Synchronous*
 *
 * Used to create and automatically pay an invoice for a single unit of a single SKU from a user's wallet. SKU must be priced in virtual currency and must not be an item that requires shipping. PAYMENTS_ADMIN permission is required if user ID is specified and is not the ID of the currently logged in user. If invoice price does not match expected price, purchase is aborted. <br><br><b>Permissions Needed:</b> PAYMENTS_USER and owner, or PAYMENTS_ADMIN
 * \param quickBuyRequest Quick buy details
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool quickBuySync(char * accessToken,
	QuickBuyRequest quickBuyRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);

/*! \brief One-step purchase and pay for a single SKU item from a user's wallet. *Asynchronous*
 *
 * Used to create and automatically pay an invoice for a single unit of a single SKU from a user's wallet. SKU must be priced in virtual currency and must not be an item that requires shipping. PAYMENTS_ADMIN permission is required if user ID is specified and is not the ID of the currently logged in user. If invoice price does not match expected price, purchase is aborted. <br><br><b>Permissions Needed:</b> PAYMENTS_USER and owner, or PAYMENTS_ADMIN
 * \param quickBuyRequest Quick buy details
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool quickBuyAsync(char * accessToken,
	QuickBuyRequest quickBuyRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);


/*! \brief Update an item template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param itemTemplateResource The item template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateItemTemplateSync(char * accessToken,
	std::string id, StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an item template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param itemTemplateResource The item template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateItemTemplateAsync(char * accessToken,
	std::string id, StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Update a store item. *Synchronous*
 *
 * <b>Permissions Needed:</b> STORE_ADMIN
 * \param id The id of the item *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param storeItem The store item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateStoreItemSync(char * accessToken,
	int id, bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData);

/*! \brief Update a store item. *Asynchronous*
 *
 * <b>Permissions Needed:</b> STORE_ADMIN
 * \param id The id of the item *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param storeItem The store item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateStoreItemAsync(char * accessToken,
	int id, bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* StoreManager_H_ */
