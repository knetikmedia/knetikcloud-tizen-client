#ifndef _StoreVendorsManager_H_
#define _StoreVendorsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ItemTemplateResource.h"
#include "PageResource«ItemTemplateResource».h"
#include "PageResource«VendorResource».h"
#include "Result.h"
#include "VendorResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup StoreVendors StoreVendors
 * \ingroup Operations
 *  @{
 */
class StoreVendorsManager {
public:
	StoreVendorsManager();
	virtual ~StoreVendorsManager();

/*! \brief Create a vendor. *Synchronous*
 *
 * <b>Permissions Needed:</b> VENDORS_ADMIN
 * \param vendor The vendor
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVendorSync(char * accessToken,
	VendorResource vendor, 
	void(* handler)(VendorResource, Error, void* )
	, void* userData);

/*! \brief Create a vendor. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VENDORS_ADMIN
 * \param vendor The vendor
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVendorAsync(char * accessToken,
	VendorResource vendor, 
	void(* handler)(VendorResource, Error, void* )
	, void* userData);


/*! \brief Create a vendor template. *Synchronous*
 *
 * Vendor Templates define a type of vendor and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param vendorTemplateResource The new vendor template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVendorTemplateSync(char * accessToken,
	ItemTemplateResource vendorTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a vendor template. *Asynchronous*
 *
 * Vendor Templates define a type of vendor and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param vendorTemplateResource The new vendor template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVendorTemplateAsync(char * accessToken,
	ItemTemplateResource vendorTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a vendor. *Synchronous*
 *
 * <b>Permissions Needed:</b> VENDORS_ADMIN
 * \param id The id of the vendor *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVendorSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a vendor. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VENDORS_ADMIN
 * \param id The id of the vendor *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVendorAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a vendor template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVendorTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a vendor template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVendorTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single vendor. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the vendor *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorSync(char * accessToken,
	int id, 
	void(* handler)(VendorResource, Error, void* )
	, void* userData);

/*! \brief Get a single vendor. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the vendor *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorAsync(char * accessToken,
	int id, 
	void(* handler)(VendorResource, Error, void* )
	, void* userData);


/*! \brief Get a single vendor template. *Synchronous*
 *
 * Vendor Templates define a type of vendor and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single vendor template. *Asynchronous*
 *
 * Vendor Templates define a type of vendor and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search vendor templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search vendor templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search vendors. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param filterName Filters vendors by name starting with the text provided in the filter
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorsSync(char * accessToken,
	std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«VendorResource», Error, void* )
	, void* userData);

/*! \brief List and search vendors. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param filterName Filters vendors by name starting with the text provided in the filter
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVendorsAsync(char * accessToken,
	std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«VendorResource», Error, void* )
	, void* userData);


/*! \brief Update a vendor. *Synchronous*
 *
 * <b>Permissions Needed:</b> VENDORS_ADMIN
 * \param id The id of the vendor *Required*
 * \param vendor The vendor
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVendorSync(char * accessToken,
	int id, VendorResource vendor, 
	void(* handler)(VendorResource, Error, void* )
	, void* userData);

/*! \brief Update a vendor. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VENDORS_ADMIN
 * \param id The id of the vendor *Required*
 * \param vendor The vendor
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVendorAsync(char * accessToken,
	int id, VendorResource vendor, 
	void(* handler)(VendorResource, Error, void* )
	, void* userData);


/*! \brief Update a vendor template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param vendorTemplateResource The vendor template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVendorTemplateSync(char * accessToken,
	std::string id, ItemTemplateResource vendorTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a vendor template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param vendorTemplateResource The vendor template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVendorTemplateAsync(char * accessToken,
	std::string id, ItemTemplateResource vendorTemplateResource, 
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
#endif /* StoreVendorsManager_H_ */
