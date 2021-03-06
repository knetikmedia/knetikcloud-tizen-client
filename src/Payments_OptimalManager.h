#ifndef _Payments_OptimalManager_H_
#define _Payments_OptimalManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "OptimalPaymentRequest.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Payments_Optimal Payments_Optimal
 * \ingroup Operations
 *  @{
 */
class Payments_OptimalManager {
public:
	Payments_OptimalManager();
	virtual ~Payments_OptimalManager();

/*! \brief Initiate silent post with Optimal. *Synchronous*
 *
 * Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details. <br><br><b>Permissions Needed:</b> OPTIMAL_ADMIN or owner
 * \param request The payment request to initiate
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool silentPostOptimalSync(char * accessToken,
	OptimalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Initiate silent post with Optimal. *Asynchronous*
 *
 * Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details. <br><br><b>Permissions Needed:</b> OPTIMAL_ADMIN or owner
 * \param request The payment request to initiate
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool silentPostOptimalAsync(char * accessToken,
	OptimalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Payments_OptimalManager_H_ */
