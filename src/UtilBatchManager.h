#ifndef _UtilBatchManager_H_
#define _UtilBatchManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Batch.h"
#include "BatchResult.h"
#include "BatchReturn.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UtilBatch UtilBatch
 * \ingroup Operations
 *  @{
 */
class UtilBatchManager {
public:
	UtilBatchManager();
	virtual ~UtilBatchManager();

/*! \brief Get batch result with token. *Synchronous*
 *
 * Tokens expire in 24 hours. <br><br><b>Permissions Needed:</b> ANY
 * \param token token *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBatchSync(char * accessToken,
	std::string token, 
	void(* handler)(std::list<BatchReturn>, Error, void* )
	, void* userData);

/*! \brief Get batch result with token. *Asynchronous*
 *
 * Tokens expire in 24 hours. <br><br><b>Permissions Needed:</b> ANY
 * \param token token *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBatchAsync(char * accessToken,
	std::string token, 
	void(* handler)(std::list<BatchReturn>, Error, void* )
	, void* userData);


/*! \brief Request to run API call given the method, content type, path url, and body of request. *Synchronous*
 *
 * Should the request take longer than one of the alloted timeout parameters, a token will be returned instead, which can be used on the token endpoint in this service. <br><br><b>Permissions Needed:</b> ANY
 * \param batch The batch object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendBatchSync(char * accessToken,
	Batch batch, 
	void(* handler)(std::list<BatchReturn>, Error, void* )
	, void* userData);

/*! \brief Request to run API call given the method, content type, path url, and body of request. *Asynchronous*
 *
 * Should the request take longer than one of the alloted timeout parameters, a token will be returned instead, which can be used on the token endpoint in this service. <br><br><b>Permissions Needed:</b> ANY
 * \param batch The batch object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendBatchAsync(char * accessToken,
	Batch batch, 
	void(* handler)(std::list<BatchReturn>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UtilBatchManager_H_ */
