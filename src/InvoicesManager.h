#ifndef _InvoicesManager_H_
#define _InvoicesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "AddressResource.h"
#include "InvoiceCreateRequest.h"
#include "InvoicePaymentStatusRequest.h"
#include "InvoiceResource.h"
#include "PageResource«InvoiceLogEntry».h"
#include "PageResource«InvoiceResource».h"
#include "PayBySavedMethodRequest.h"
#include "Result.h"
#include "StringWrapper.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Invoices Invoices
 * \ingroup Operations
 *  @{
 */
class InvoicesManager {
public:
	InvoicesManager();
	virtual ~InvoicesManager();

/*! \brief Create an invoice. *Synchronous*
 *
 * Create an invoice(s) by providing a cart GUID. Note that there may be multiple invoices created, one per vendor. <br><br><b>Permissions Needed:</b> INVOICES_USER or INVOICES_ADMIN
 * \param req Invoice to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createInvoiceSync(char * accessToken,
	InvoiceCreateRequest req, 
	void(* handler)(std::list<InvoiceResource>, Error, void* )
	, void* userData);

/*! \brief Create an invoice. *Asynchronous*
 *
 * Create an invoice(s) by providing a cart GUID. Note that there may be multiple invoices created, one per vendor. <br><br><b>Permissions Needed:</b> INVOICES_USER or INVOICES_ADMIN
 * \param req Invoice to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createInvoiceAsync(char * accessToken,
	InvoiceCreateRequest req, 
	void(* handler)(std::list<InvoiceResource>, Error, void* )
	, void* userData);


/*! \brief Lists available fulfillment statuses. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFulFillmentStatusesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Lists available fulfillment statuses. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFulFillmentStatusesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Retrieve an invoice. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoiceSync(char * accessToken,
	int id, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);

/*! \brief Retrieve an invoice. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoiceAsync(char * accessToken,
	int id, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);


/*! \brief List invoice logs. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoiceLogsSync(char * accessToken,
	int id, int size, int page, 
	void(* handler)(PageResource«InvoiceLogEntry», Error, void* )
	, void* userData);

/*! \brief List invoice logs. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoiceLogsAsync(char * accessToken,
	int id, int size, int page, 
	void(* handler)(PageResource«InvoiceLogEntry», Error, void* )
	, void* userData);


/*! \brief Retrieve invoices. *Synchronous*
 *
 * Without INVOICES_ADMIN permission the results are automatically filtered for only the logged in user's invoices. It is recomended however that filter_user be added to avoid issues for admin users accidentally getting additional invoices. <br><br><b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param filterUser The id of a user to get invoices for. Automtically added if not being called with admin permissions.
 * \param filterEmail Filters invoices by customer's email. Admins only.
 * \param filterFulfillmentStatus Filters invoices by fulfillment status type. Can be a comma separated list of statuses
 * \param filterPaymentStatus Filters invoices by payment status type. Can be a comma separated list of statuses
 * \param filterItemName Filters invoices by item name containing the given string
 * \param filterExternalRef Filters invoices by external reference.
 * \param filterCreatedDate Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date=GT,1452154258,LT,1554254874
 * \param filterVendorIds Filters invoices for ones from one of the vendors whose id is in the given comma separated list
 * \param filterCurrency Filters invoices by currency. ISO3 currency code
 * \param filterShippingStateName Filters invoices by shipping address: Exact match state name
 * \param filterShippingCountryName Filters invoices by shipping address: Exact match country name
 * \param filterShipping Filters invoices by shipping price. Multiple values possible for range search. Format: filter_shipping=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_shipping=GT,14.58,LT,15.54
 * \param filterVendorName Filters invoices by vendor name starting with given string
 * \param filterSku Filters invoices by item sku
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoicesSync(char * accessToken,
	int filterUser, std::string filterEmail, std::string filterFulfillmentStatus, std::string filterPaymentStatus, std::string filterItemName, std::string filterExternalRef, std::string filterCreatedDate, std::string filterVendorIds, std::string filterCurrency, std::string filterShippingStateName, std::string filterShippingCountryName, std::string filterShipping, std::string filterVendorName, std::string filterSku, int size, int page, std::string order, 
	void(* handler)(PageResource«InvoiceResource», Error, void* )
	, void* userData);

/*! \brief Retrieve invoices. *Asynchronous*
 *
 * Without INVOICES_ADMIN permission the results are automatically filtered for only the logged in user's invoices. It is recomended however that filter_user be added to avoid issues for admin users accidentally getting additional invoices. <br><br><b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param filterUser The id of a user to get invoices for. Automtically added if not being called with admin permissions.
 * \param filterEmail Filters invoices by customer's email. Admins only.
 * \param filterFulfillmentStatus Filters invoices by fulfillment status type. Can be a comma separated list of statuses
 * \param filterPaymentStatus Filters invoices by payment status type. Can be a comma separated list of statuses
 * \param filterItemName Filters invoices by item name containing the given string
 * \param filterExternalRef Filters invoices by external reference.
 * \param filterCreatedDate Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date=GT,1452154258,LT,1554254874
 * \param filterVendorIds Filters invoices for ones from one of the vendors whose id is in the given comma separated list
 * \param filterCurrency Filters invoices by currency. ISO3 currency code
 * \param filterShippingStateName Filters invoices by shipping address: Exact match state name
 * \param filterShippingCountryName Filters invoices by shipping address: Exact match country name
 * \param filterShipping Filters invoices by shipping price. Multiple values possible for range search. Format: filter_shipping=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_shipping=GT,14.58,LT,15.54
 * \param filterVendorName Filters invoices by vendor name starting with given string
 * \param filterSku Filters invoices by item sku
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoicesAsync(char * accessToken,
	int filterUser, std::string filterEmail, std::string filterFulfillmentStatus, std::string filterPaymentStatus, std::string filterItemName, std::string filterExternalRef, std::string filterCreatedDate, std::string filterVendorIds, std::string filterCurrency, std::string filterShippingStateName, std::string filterShippingCountryName, std::string filterShipping, std::string filterVendorName, std::string filterSku, int size, int page, std::string order, 
	void(* handler)(PageResource«InvoiceResource», Error, void* )
	, void* userData);


/*! \brief Lists available payment statuses. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentStatusesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Lists available payment statuses. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentStatusesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Pay an invoice using a saved payment method. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param request The payment method details. Will default to the appropriate user's wallet in the invoice currency if ommited.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool payInvoiceSync(char * accessToken,
	int id, PayBySavedMethodRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Pay an invoice using a saved payment method. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param request The payment method details. Will default to the appropriate user's wallet in the invoice currency if ommited.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool payInvoiceAsync(char * accessToken,
	int id, PayBySavedMethodRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the fulfillment status of a bundled invoice item. *Synchronous*
 *
 * This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param bundleSku The sku of the bundle in the invoice that contains the given target *Required*
 * \param sku The sku of an item in the bundle in the invoice *Required*
 * \param status The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setBundledInvoiceItemFulfillmentStatusSync(char * accessToken,
	int id, std::string bundleSku, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the fulfillment status of a bundled invoice item. *Asynchronous*
 *
 * This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param bundleSku The sku of the bundle in the invoice that contains the given target *Required*
 * \param sku The sku of an item in the bundle in the invoice *Required*
 * \param status The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setBundledInvoiceItemFulfillmentStatusAsync(char * accessToken,
	int id, std::string bundleSku, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the external reference of an invoice. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param externalRef External reference info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setExternalRefSync(char * accessToken,
	int id, StringWrapper externalRef, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the external reference of an invoice. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param externalRef External reference info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setExternalRefAsync(char * accessToken,
	int id, StringWrapper externalRef, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the fulfillment status of an invoice item. *Synchronous*
 *
 * This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param sku The sku of an item in the invoice *Required*
 * \param status The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setInvoiceItemFulfillmentStatusSync(char * accessToken,
	int id, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the fulfillment status of an invoice item. *Asynchronous*
 *
 * This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param sku The sku of an item in the invoice *Required*
 * \param status The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setInvoiceItemFulfillmentStatusAsync(char * accessToken,
	int id, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the order notes of an invoice. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param orderNotes Payment status info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setOrderNotesSync(char * accessToken,
	int id, StringWrapper orderNotes, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the order notes of an invoice. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param orderNotes Payment status info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setOrderNotesAsync(char * accessToken,
	int id, StringWrapper orderNotes, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the payment status of an invoice. *Synchronous*
 *
 * This may trigger fulfillment if setting the status to 'paid'. This is mainly intended to support external payment systems that cannot be incorporated into the payment method system. Payment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param request Payment status info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setPaymentStatusSync(char * accessToken,
	int id, InvoicePaymentStatusRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the payment status of an invoice. *Asynchronous*
 *
 * This may trigger fulfillment if setting the status to 'paid'. This is mainly intended to support external payment systems that cannot be incorporated into the payment method system. Payment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param request Payment status info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setPaymentStatusAsync(char * accessToken,
	int id, InvoicePaymentStatusRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set or update billing info. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param billingInfoRequest Address info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBillingInfoSync(char * accessToken,
	int id, AddressResource billingInfoRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set or update billing info. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
 * \param id The id of the invoice *Required*
 * \param billingInfoRequest Address info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBillingInfoAsync(char * accessToken,
	int id, AddressResource billingInfoRequest, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* InvoicesManager_H_ */
