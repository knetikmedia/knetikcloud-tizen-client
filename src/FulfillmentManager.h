#ifndef _FulfillmentManager_H_
#define _FulfillmentManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "FulfillmentType.h"
#include "PageResource«FulfillmentType».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Fulfillment Fulfillment
 * \ingroup Operations
 *  @{
 */
class FulfillmentManager {
public:
	FulfillmentManager();
	virtual ~FulfillmentManager();

/*! \brief Create a fulfillment type. *Synchronous*
 *
 * 
 * \param type The fulfillment type
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createFulfillmentTypeSync(char * accessToken,
	FulfillmentType type, 
	void(* handler)(FulfillmentType, Error, void* )
	, void* userData);

/*! \brief Create a fulfillment type. *Asynchronous*
 *
 * 
 * \param type The fulfillment type
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createFulfillmentTypeAsync(char * accessToken,
	FulfillmentType type, 
	void(* handler)(FulfillmentType, Error, void* )
	, void* userData);


/*! \brief Delete a fulfillment type. *Synchronous*
 *
 * 
 * \param id The id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteFulfillmentTypeSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a fulfillment type. *Asynchronous*
 *
 * 
 * \param id The id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteFulfillmentTypeAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single fulfillment type. *Synchronous*
 *
 * 
 * \param id The id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFulfillmentTypeSync(char * accessToken,
	int id, 
	void(* handler)(FulfillmentType, Error, void* )
	, void* userData);

/*! \brief Get a single fulfillment type. *Asynchronous*
 *
 * 
 * \param id The id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFulfillmentTypeAsync(char * accessToken,
	int id, 
	void(* handler)(FulfillmentType, Error, void* )
	, void* userData);


/*! \brief List and search fulfillment types. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFulfillmentTypesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«FulfillmentType», Error, void* )
	, void* userData);

/*! \brief List and search fulfillment types. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFulfillmentTypesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«FulfillmentType», Error, void* )
	, void* userData);


/*! \brief Update a fulfillment type. *Synchronous*
 *
 * 
 * \param id The id *Required*
 * \param fulfillmentType The fulfillment type
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateFulfillmentTypeSync(char * accessToken,
	int id, FulfillmentType fulfillmentType, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a fulfillment type. *Asynchronous*
 *
 * 
 * \param id The id *Required*
 * \param fulfillmentType The fulfillment type
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateFulfillmentTypeAsync(char * accessToken,
	int id, FulfillmentType fulfillmentType, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* FulfillmentManager_H_ */
