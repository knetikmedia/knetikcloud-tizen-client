#ifndef _LocationsManager_H_
#define _LocationsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CountryResource.h"
#include "CurrencyResource.h"
#include "Result.h"
#include "StateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Locations Locations
 * \ingroup Operations
 *  @{
 */
class LocationsManager {
public:
	LocationsManager();
	virtual ~LocationsManager();

/*! \brief Get a list of countries. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountriesSync(char * accessToken,
	
	void(* handler)(std::list<CountryResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of countries. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountriesAsync(char * accessToken,
	
	void(* handler)(std::list<CountryResource>, Error, void* )
	, void* userData);


/*! \brief Get the iso3 code of your country. *Synchronous*
 *
 * Determined by geo ip location
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryByGeoLocationSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get the iso3 code of your country. *Asynchronous*
 *
 * Determined by geo ip location
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryByGeoLocationAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get a list of a country's states. *Synchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryStatesSync(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(std::list<StateResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of a country's states. *Asynchronous*
 *
 * 
 * \param countryCodeIso3 The iso3 code of the country *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountryStatesAsync(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(std::list<StateResource>, Error, void* )
	, void* userData);


/*! \brief Get the currency information of your country. *Synchronous*
 *
 * Determined by geo ip location, currency to country mapping and a fallback setting
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCurrencyByGeoLocationSync(char * accessToken,
	
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData);

/*! \brief Get the currency information of your country. *Asynchronous*
 *
 * Determined by geo ip location, currency to country mapping and a fallback setting
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCurrencyByGeoLocationAsync(char * accessToken,
	
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* LocationsManager_H_ */
