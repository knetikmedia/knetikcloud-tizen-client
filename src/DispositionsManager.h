#ifndef _DispositionsManager_H_
#define _DispositionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "DispositionCount.h"
#include "DispositionResource.h"
#include "PageResource«DispositionResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Dispositions Dispositions
 * \ingroup Operations
 *  @{
 */
class DispositionsManager {
public:
	DispositionsManager();
	virtual ~DispositionsManager();

/*! \brief Add a new disposition. *Synchronous*
 *
 * 
 * \param disposition The new disposition record
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDispositionSync(char * accessToken,
	DispositionResource disposition, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData);

/*! \brief Add a new disposition. *Asynchronous*
 *
 * 
 * \param disposition The new disposition record
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDispositionAsync(char * accessToken,
	DispositionResource disposition, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData);


/*! \brief Delete a disposition. *Synchronous*
 *
 * 
 * \param id The id of the disposition record *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDispositionSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a disposition. *Asynchronous*
 *
 * 
 * \param id The id of the disposition record *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDispositionAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Returns a disposition. *Synchronous*
 *
 * 
 * \param id The id of the disposition record *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDispositionSync(char * accessToken,
	long long id, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData);

/*! \brief Returns a disposition. *Asynchronous*
 *
 * 
 * \param id The id of the disposition record *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDispositionAsync(char * accessToken,
	long long id, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData);


/*! \brief Returns a list of disposition counts. *Synchronous*
 *
 * 
 * \param filterContext Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47
 * \param filterOwner Filter for dispositions from a specific user by id or 'me'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDispositionCountsSync(char * accessToken,
	std::string filterContext, std::string filterOwner, 
	void(* handler)(std::list<DispositionCount>, Error, void* )
	, void* userData);

/*! \brief Returns a list of disposition counts. *Asynchronous*
 *
 * 
 * \param filterContext Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47
 * \param filterOwner Filter for dispositions from a specific user by id or 'me'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDispositionCountsAsync(char * accessToken,
	std::string filterContext, std::string filterOwner, 
	void(* handler)(std::list<DispositionCount>, Error, void* )
	, void* userData);


/*! \brief Returns a page of dispositions. *Synchronous*
 *
 * 
 * \param filterContext Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47
 * \param filterOwner Filter for dispositions from a specific user by id or 'me'
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDispositionsSync(char * accessToken,
	std::string filterContext, std::string filterOwner, int size, int page, std::string order, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of dispositions. *Asynchronous*
 *
 * 
 * \param filterContext Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47
 * \param filterOwner Filter for dispositions from a specific user by id or 'me'
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDispositionsAsync(char * accessToken,
	std::string filterContext, std::string filterOwner, int size, int page, std::string order, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* DispositionsManager_H_ */
