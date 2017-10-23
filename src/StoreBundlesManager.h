#ifndef _StoreBundlesManager_H_
#define _StoreBundlesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BundleItem.h"
#include "ItemTemplateResource.h"
#include "PageResource«ItemTemplateResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup StoreBundles StoreBundles
 * \ingroup Operations
 *  @{
 */
class StoreBundlesManager {
public:
	StoreBundlesManager();
	virtual ~StoreBundlesManager();

/*! \brief Create a bundle item. *Synchronous*
 *
 * The SKU for the bundle itself must be unique and there can only be one SKU.  Extra notes for price_override:  The price of all the items (multiplied by the quantity) must equal the price of the bundle.  With individual prices set, items will be processed individually and can be refunded as such.  However, if all prices are set to null, the price of the bundle will be used and will be treated as one item.
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param bundleItem The bundle item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBundleItemSync(char * accessToken,
	bool cascade, BundleItem bundleItem, 
	void(* handler)(BundleItem, Error, void* )
	, void* userData);

/*! \brief Create a bundle item. *Asynchronous*
 *
 * The SKU for the bundle itself must be unique and there can only be one SKU.  Extra notes for price_override:  The price of all the items (multiplied by the quantity) must equal the price of the bundle.  With individual prices set, items will be processed individually and can be refunded as such.  However, if all prices are set to null, the price of the bundle will be used and will be treated as one item.
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param bundleItem The bundle item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBundleItemAsync(char * accessToken,
	bool cascade, BundleItem bundleItem, 
	void(* handler)(BundleItem, Error, void* )
	, void* userData);


/*! \brief Create a bundle template. *Synchronous*
 *
 * Bundle Templates define a type of bundle and the properties they have.
 * \param bundleTemplateResource The new bundle template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBundleTemplateSync(char * accessToken,
	ItemTemplateResource bundleTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a bundle template. *Asynchronous*
 *
 * Bundle Templates define a type of bundle and the properties they have.
 * \param bundleTemplateResource The new bundle template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBundleTemplateAsync(char * accessToken,
	ItemTemplateResource bundleTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a bundle item. *Synchronous*
 *
 * 
 * \param id The id of the bundle *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBundleItemSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a bundle item. *Asynchronous*
 *
 * 
 * \param id The id of the bundle *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBundleItemAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a bundle template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBundleTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a bundle template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBundleTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single bundle item. *Synchronous*
 *
 * 
 * \param id The id of the bundle *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBundleItemSync(char * accessToken,
	int id, 
	void(* handler)(BundleItem, Error, void* )
	, void* userData);

/*! \brief Get a single bundle item. *Asynchronous*
 *
 * 
 * \param id The id of the bundle *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBundleItemAsync(char * accessToken,
	int id, 
	void(* handler)(BundleItem, Error, void* )
	, void* userData);


/*! \brief Get a single bundle template. *Synchronous*
 *
 * Bundle Templates define a type of bundle and the properties they have.
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBundleTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single bundle template. *Asynchronous*
 *
 * Bundle Templates define a type of bundle and the properties they have.
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBundleTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search bundle templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBundleTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search bundle templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBundleTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief Update a bundle item. *Synchronous*
 *
 * 
 * \param id The id of the bundle *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param bundleItem The bundle item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBundleItemSync(char * accessToken,
	int id, bool cascade, BundleItem bundleItem, 
	void(* handler)(BundleItem, Error, void* )
	, void* userData);

/*! \brief Update a bundle item. *Asynchronous*
 *
 * 
 * \param id The id of the bundle *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param bundleItem The bundle item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBundleItemAsync(char * accessToken,
	int id, bool cascade, BundleItem bundleItem, 
	void(* handler)(BundleItem, Error, void* )
	, void* userData);


/*! \brief Update a bundle template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param bundleTemplateResource The bundle template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBundleTemplateSync(char * accessToken,
	std::string id, ItemTemplateResource bundleTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a bundle template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param bundleTemplateResource The bundle template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBundleTemplateAsync(char * accessToken,
	std::string id, ItemTemplateResource bundleTemplateResource, 
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
#endif /* StoreBundlesManager_H_ */
