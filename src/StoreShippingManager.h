#ifndef _StoreShippingManager_H_
#define _StoreShippingManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ItemTemplateResource.h"
#include "PageResource«ItemTemplateResource».h"
#include "Result.h"
#include "ShippingItem.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup StoreShipping StoreShipping
 * \ingroup Operations
 *  @{
 */
class StoreShippingManager {
public:
	StoreShippingManager();
	virtual ~StoreShippingManager();

/*! \brief Create a shipping item. *Synchronous*
 *
 * A shipping item represents a shipping option and cost. SKUs have to be unique in the entire store. <br><br><b>Permissions Needed:</b> SHIPPING_ADMIN
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param shippingItem The shipping item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createShippingItemSync(char * accessToken,
	bool cascade, ShippingItem shippingItem, 
	void(* handler)(ShippingItem, Error, void* )
	, void* userData);

/*! \brief Create a shipping item. *Asynchronous*
 *
 * A shipping item represents a shipping option and cost. SKUs have to be unique in the entire store. <br><br><b>Permissions Needed:</b> SHIPPING_ADMIN
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param shippingItem The shipping item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createShippingItemAsync(char * accessToken,
	bool cascade, ShippingItem shippingItem, 
	void(* handler)(ShippingItem, Error, void* )
	, void* userData);


/*! \brief Create a shipping template. *Synchronous*
 *
 * Shipping Templates define a type of shipping and the properties they have.
 * \param shippingTemplateResource The new shipping template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createShippingTemplateSync(char * accessToken,
	ItemTemplateResource shippingTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a shipping template. *Asynchronous*
 *
 * Shipping Templates define a type of shipping and the properties they have.
 * \param shippingTemplateResource The new shipping template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createShippingTemplateAsync(char * accessToken,
	ItemTemplateResource shippingTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a shipping item. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHIPPING_ADMIN
 * \param id The id of the shipping item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteShippingItemSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a shipping item. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHIPPING_ADMIN
 * \param id The id of the shipping item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteShippingItemAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a shipping template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteShippingTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a shipping template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteShippingTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single shipping item. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the shipping item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingItemSync(char * accessToken,
	int id, 
	void(* handler)(ShippingItem, Error, void* )
	, void* userData);

/*! \brief Get a single shipping item. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the shipping item *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingItemAsync(char * accessToken,
	int id, 
	void(* handler)(ShippingItem, Error, void* )
	, void* userData);


/*! \brief Get a single shipping template. *Synchronous*
 *
 * Shipping Templates define a type of shipping and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN or SHIPPING_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single shipping template. *Asynchronous*
 *
 * Shipping Templates define a type of shipping and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN or SHIPPING_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search shipping templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or SHIPPING_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search shipping templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or SHIPPING_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief Update a shipping item. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHIPPING_ADMIN
 * \param id The id of the shipping item *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param shippingItem The shipping item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateShippingItemSync(char * accessToken,
	int id, bool cascade, ShippingItem shippingItem, 
	void(* handler)(ShippingItem, Error, void* )
	, void* userData);

/*! \brief Update a shipping item. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHIPPING_ADMIN
 * \param id The id of the shipping item *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param shippingItem The shipping item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateShippingItemAsync(char * accessToken,
	int id, bool cascade, ShippingItem shippingItem, 
	void(* handler)(ShippingItem, Error, void* )
	, void* userData);


/*! \brief Update a shipping template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param shippingTemplateResource The shipping template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateShippingTemplateSync(char * accessToken,
	std::string id, ItemTemplateResource shippingTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a shipping template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param shippingTemplateResource The shipping template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateShippingTemplateAsync(char * accessToken,
	std::string id, ItemTemplateResource shippingTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* StoreShippingManager_H_ */
