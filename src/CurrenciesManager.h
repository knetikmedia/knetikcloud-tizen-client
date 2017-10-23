#ifndef _CurrenciesManager_H_
#define _CurrenciesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CurrencyResource.h"
#include "PageResource«CurrencyResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Currencies Currencies
 * \ingroup Operations
 *  @{
 */
class CurrenciesManager {
public:
	CurrenciesManager();
	virtual ~CurrenciesManager();

/*! \brief Create a currency. *Synchronous*
 *
 * 
 * \param currency The currency object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCurrencySync(char * accessToken,
	CurrencyResource currency, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData);

/*! \brief Create a currency. *Asynchronous*
 *
 * 
 * \param currency The currency object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCurrencyAsync(char * accessToken,
	CurrencyResource currency, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData);


/*! \brief Delete a currency. *Synchronous*
 *
 * 
 * \param code The currency code *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCurrencySync(char * accessToken,
	std::string code, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a currency. *Asynchronous*
 *
 * 
 * \param code The currency code *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCurrencyAsync(char * accessToken,
	std::string code, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief List and search currencies. *Synchronous*
 *
 * 
 * \param filterEnabledCurrencies Filter for alternate currencies setup explicitely in system config
 * \param filterType Filter currencies by type.  Allowable values: ('virtual', 'real')
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCurrenciesSync(char * accessToken,
	bool filterEnabledCurrencies, std::string filterType, int size, int page, std::string order, 
	void(* handler)(PageResource«CurrencyResource», Error, void* )
	, void* userData);

/*! \brief List and search currencies. *Asynchronous*
 *
 * 
 * \param filterEnabledCurrencies Filter for alternate currencies setup explicitely in system config
 * \param filterType Filter currencies by type.  Allowable values: ('virtual', 'real')
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCurrenciesAsync(char * accessToken,
	bool filterEnabledCurrencies, std::string filterType, int size, int page, std::string order, 
	void(* handler)(PageResource«CurrencyResource», Error, void* )
	, void* userData);


/*! \brief Get a single currency. *Synchronous*
 *
 * 
 * \param code The currency code *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCurrencySync(char * accessToken,
	std::string code, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData);

/*! \brief Get a single currency. *Asynchronous*
 *
 * 
 * \param code The currency code *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCurrencyAsync(char * accessToken,
	std::string code, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData);


/*! \brief Update a currency. *Synchronous*
 *
 * 
 * \param code The currency code *Required*
 * \param currency The currency object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCurrencySync(char * accessToken,
	std::string code, CurrencyResource currency, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a currency. *Asynchronous*
 *
 * 
 * \param code The currency code *Required*
 * \param currency The currency object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCurrencyAsync(char * accessToken,
	std::string code, CurrencyResource currency, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* CurrenciesManager_H_ */
