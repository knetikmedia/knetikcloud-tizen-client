#ifndef _ConfigsManager_H_
#define _ConfigsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Config.h"
#include "PageResource«Config».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Configs Configs
 * \ingroup Operations
 *  @{
 */
class ConfigsManager {
public:
	ConfigsManager();
	virtual ~ConfigsManager();

/*! \brief Create a new config. *Synchronous*
 *
 * 
 * \param config The config object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createConfigSync(char * accessToken,
	Config config, 
	void(* handler)(Config, Error, void* )
	, void* userData);

/*! \brief Create a new config. *Asynchronous*
 *
 * 
 * \param config The config object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createConfigAsync(char * accessToken,
	Config config, 
	void(* handler)(Config, Error, void* )
	, void* userData);


/*! \brief Delete an existing config. *Synchronous*
 *
 * 
 * \param name The config name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteConfigSync(char * accessToken,
	std::string name, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing config. *Asynchronous*
 *
 * 
 * \param name The config name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteConfigAsync(char * accessToken,
	std::string name, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single config. *Synchronous*
 *
 * Only configs that are public readable will be shown without admin access
 * \param name The config name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getConfigSync(char * accessToken,
	std::string name, 
	void(* handler)(Config, Error, void* )
	, void* userData);

/*! \brief Get a single config. *Asynchronous*
 *
 * Only configs that are public readable will be shown without admin access
 * \param name The config name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getConfigAsync(char * accessToken,
	std::string name, 
	void(* handler)(Config, Error, void* )
	, void* userData);


/*! \brief List and search configs. *Synchronous*
 *
 * 
 * \param filterSearch Filter for configs whose name contains the given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getConfigsSync(char * accessToken,
	std::string filterSearch, int size, int page, std::string order, 
	void(* handler)(PageResource«Config», Error, void* )
	, void* userData);

/*! \brief List and search configs. *Asynchronous*
 *
 * 
 * \param filterSearch Filter for configs whose name contains the given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getConfigsAsync(char * accessToken,
	std::string filterSearch, int size, int page, std::string order, 
	void(* handler)(PageResource«Config», Error, void* )
	, void* userData);


/*! \brief Update an existing config. *Synchronous*
 *
 * 
 * \param name The config name *Required*
 * \param config The config object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateConfigSync(char * accessToken,
	std::string name, Config config, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update an existing config. *Asynchronous*
 *
 * 
 * \param name The config name *Required*
 * \param config The config object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateConfigAsync(char * accessToken,
	std::string name, Config config, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ConfigsManager_H_ */
