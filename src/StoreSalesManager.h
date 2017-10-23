#ifndef _StoreSalesManager_H_
#define _StoreSalesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CatalogSale.h"
#include "PageResource«CatalogSale».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup StoreSales StoreSales
 * \ingroup Operations
 *  @{
 */
class StoreSalesManager {
public:
	StoreSalesManager();
	virtual ~StoreSalesManager();

/*! \brief Create a sale. *Synchronous*
 *
 * 
 * \param catalogSale The catalog sale object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCatalogSaleSync(char * accessToken,
	CatalogSale catalogSale, 
	void(* handler)(CatalogSale, Error, void* )
	, void* userData);

/*! \brief Create a sale. *Asynchronous*
 *
 * 
 * \param catalogSale The catalog sale object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCatalogSaleAsync(char * accessToken,
	CatalogSale catalogSale, 
	void(* handler)(CatalogSale, Error, void* )
	, void* userData);


/*! \brief Delete a sale. *Synchronous*
 *
 * 
 * \param id The id of the sale *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCatalogSaleSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a sale. *Asynchronous*
 *
 * 
 * \param id The id of the sale *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCatalogSaleAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single sale. *Synchronous*
 *
 * 
 * \param id The id of the sale *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCatalogSaleSync(char * accessToken,
	int id, 
	void(* handler)(CatalogSale, Error, void* )
	, void* userData);

/*! \brief Get a single sale. *Asynchronous*
 *
 * 
 * \param id The id of the sale *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCatalogSaleAsync(char * accessToken,
	int id, 
	void(* handler)(CatalogSale, Error, void* )
	, void* userData);


/*! \brief List and search sales. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCatalogSalesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CatalogSale», Error, void* )
	, void* userData);

/*! \brief List and search sales. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCatalogSalesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CatalogSale», Error, void* )
	, void* userData);


/*! \brief Update a sale. *Synchronous*
 *
 * 
 * \param id The id of the sale *Required*
 * \param catalogSale The catalog sale object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCatalogSaleSync(char * accessToken,
	int id, CatalogSale catalogSale, 
	void(* handler)(CatalogSale, Error, void* )
	, void* userData);

/*! \brief Update a sale. *Asynchronous*
 *
 * 
 * \param id The id of the sale *Required*
 * \param catalogSale The catalog sale object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCatalogSaleAsync(char * accessToken,
	int id, CatalogSale catalogSale, 
	void(* handler)(CatalogSale, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* StoreSalesManager_H_ */
