#ifndef _BRERuleEngineGlobalsManager_H_
#define _BRERuleEngineGlobalsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BreGlobalResource.h"
#include "PageResource«BreGlobalResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup BRERuleEngineGlobals BRERuleEngineGlobals
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineGlobalsManager {
public:
	BRERuleEngineGlobalsManager();
	virtual ~BRERuleEngineGlobalsManager();

/*! \brief Create a global definition. *Synchronous*
 *
 * Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use.
 * \param breGlobalResource The BRE global resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBREGlobalSync(char * accessToken,
	BreGlobalResource breGlobalResource, 
	void(* handler)(BreGlobalResource, Error, void* )
	, void* userData);

/*! \brief Create a global definition. *Asynchronous*
 *
 * Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use.
 * \param breGlobalResource The BRE global resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBREGlobalAsync(char * accessToken,
	BreGlobalResource breGlobalResource, 
	void(* handler)(BreGlobalResource, Error, void* )
	, void* userData);


/*! \brief Delete a global. *Synchronous*
 *
 * May fail if there are existing rules against it. Cannot delete core globals
 * \param id The id of the global definition *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBREGlobalSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a global. *Asynchronous*
 *
 * May fail if there are existing rules against it. Cannot delete core globals
 * \param id The id of the global definition *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBREGlobalAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single global definition. *Synchronous*
 *
 * 
 * \param id The id of the global definition *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREGlobalSync(char * accessToken,
	std::string id, 
	void(* handler)(BreGlobalResource, Error, void* )
	, void* userData);

/*! \brief Get a single global definition. *Asynchronous*
 *
 * 
 * \param id The id of the global definition *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREGlobalAsync(char * accessToken,
	std::string id, 
	void(* handler)(BreGlobalResource, Error, void* )
	, void* userData);


/*! \brief List global definitions. *Synchronous*
 *
 * 
 * \param filterSystem Filter for globals that are system globals when true, or not when false. Leave off for both mixed
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREGlobalsSync(char * accessToken,
	bool filterSystem, int size, int page, 
	void(* handler)(PageResource«BreGlobalResource», Error, void* )
	, void* userData);

/*! \brief List global definitions. *Asynchronous*
 *
 * 
 * \param filterSystem Filter for globals that are system globals when true, or not when false. Leave off for both mixed
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREGlobalsAsync(char * accessToken,
	bool filterSystem, int size, int page, 
	void(* handler)(PageResource«BreGlobalResource», Error, void* )
	, void* userData);


/*! \brief Update a global definition. *Synchronous*
 *
 * May fail if new parameters mismatch requirements of existing rules. Cannot update core globals
 * \param id The id of the global definition *Required*
 * \param breGlobalResource The BRE global resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBREGlobalSync(char * accessToken,
	std::string id, BreGlobalResource breGlobalResource, 
	void(* handler)(BreGlobalResource, Error, void* )
	, void* userData);

/*! \brief Update a global definition. *Asynchronous*
 *
 * May fail if new parameters mismatch requirements of existing rules. Cannot update core globals
 * \param id The id of the global definition *Required*
 * \param breGlobalResource The BRE global resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBREGlobalAsync(char * accessToken,
	std::string id, BreGlobalResource breGlobalResource, 
	void(* handler)(BreGlobalResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineGlobalsManager_H_ */
