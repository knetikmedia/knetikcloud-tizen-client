#ifndef _TaxesManager_H_
#define _TaxesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CountryTaxResource.h"
#include "PageResource«CountryTaxResource».h"
#include "PageResource«StateTaxResource».h"
#include "Result.h"
#include "StateTaxResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Taxes Taxes
 * \ingroup Operations
 *  @{
 */
class TaxesManager {
public:
	TaxesManager();
	virtual ~TaxesManager();

/*! \brief Create a country tax. *Synchronous*
 *
 * 
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCountryTaxSync(char * accessToken,
	CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData);

/*! \brief Create a country tax. *Asynchronous*
 *
 * 
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCountryTaxAsync(char * accessToken,
	CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData);


/*! \brief Create a state tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createStateTaxSync(char * accessToken,
	std::string countryCodeIso3, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData);

/*! \brief Create a state tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData);


/*! \brief Delete an existing tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCountryTaxSync(char * accessToken,
	std::string countryCodeIso3, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCountryTaxAsync(char * accessToken,
	std::string countryCodeIso3, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an existing state tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param stateCode The code of the state *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteStateTaxSync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing state tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param stateCode The code of the state *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryTaxSync(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData);

/*! \brief Get a single tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryTaxAsync(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData);


/*! \brief List and search taxes. *Synchronous*
 *
 * Get a list of taxes
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryTaxesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CountryTaxResource», Error, void* )
	, void* userData);

/*! \brief List and search taxes. *Asynchronous*
 *
 * Get a list of taxes
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryTaxesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CountryTaxResource», Error, void* )
	, void* userData);


/*! \brief Get a single state tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param stateCode The code of the state *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStateTaxSync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData);

/*! \brief Get a single state tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param stateCode The code of the state *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData);


/*! \brief List and search taxes across all countries. *Synchronous*
 *
 * Get a list of taxes
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStateTaxesForCountriesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData);

/*! \brief List and search taxes across all countries. *Asynchronous*
 *
 * Get a list of taxes
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStateTaxesForCountriesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData);


/*! \brief List and search taxes within a country. *Synchronous*
 *
 * Get a list of taxes
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStateTaxesForCountrySync(char * accessToken,
	std::string countryCodeIso3, int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData);

/*! \brief List and search taxes within a country. *Asynchronous*
 *
 * Get a list of taxes
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStateTaxesForCountryAsync(char * accessToken,
	std::string countryCodeIso3, int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData);


/*! \brief Create or update a tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCountryTaxSync(char * accessToken,
	std::string countryCodeIso3, CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData);

/*! \brief Create or update a tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCountryTaxAsync(char * accessToken,
	std::string countryCodeIso3, CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData);


/*! \brief Create or update a state tax. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param stateCode The code of the state *Required*
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateStateTaxSync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData);

/*! \brief Create or update a state tax. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param stateCode The code of the state *Required*
 * \param taxResource The tax object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* TaxesManager_H_ */
