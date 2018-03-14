#ifndef _Payments_XsollaManager_H_
#define _Payments_XsollaManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Result.h"
#include "XsollaPaymentRequest.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Payments_Xsolla Payments_Xsolla
 * \ingroup Operations
 *  @{
 */
class Payments_XsollaManager {
public:
	Payments_XsollaManager();
	virtual ~Payments_XsollaManager();

/*! \brief Create a payment token that should be used to forward the user to Xsolla so they can complete payment. *Synchronous*
 *
 * <b>Permissions Needed:</b> XSOLLA_ADMIN or owner
 * \param request The payment request to be sent to XSolla
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createXsollaTokenUrlSync(char * accessToken,
	XsollaPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Create a payment token that should be used to forward the user to Xsolla so they can complete payment. *Asynchronous*
 *
 * <b>Permissions Needed:</b> XSOLLA_ADMIN or owner
 * \param request The payment request to be sent to XSolla
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createXsollaTokenUrlAsync(char * accessToken,
	XsollaPaymentRequest request, 
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
#endif /* Payments_XsollaManager_H_ */
