#ifndef _PaymentsGoogleManager_H_
#define _PaymentsGoogleManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "GooglePaymentRequest.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup PaymentsGoogle PaymentsGoogle
 * \ingroup Operations
 *  @{
 */
class PaymentsGoogleManager {
public:
	PaymentsGoogleManager();
	virtual ~PaymentsGoogleManager();

/*! \brief Mark an invoice paid with Google. *Synchronous*
 *
 * Mark an invoice paid with Google. Verifies signature from Google and treats the developerPayload field inside the json payload as the id of the invoice to pay. Returns the transaction ID if successful. <br><br><b>Permissions Needed:</b> ANY
 * \param request The request for paying an invoice through a Google in-app payment
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool handleGooglePaymentSync(char * accessToken,
	GooglePaymentRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData);

/*! \brief Mark an invoice paid with Google. *Asynchronous*
 *
 * Mark an invoice paid with Google. Verifies signature from Google and treats the developerPayload field inside the json payload as the id of the invoice to pay. Returns the transaction ID if successful. <br><br><b>Permissions Needed:</b> ANY
 * \param request The request for paying an invoice through a Google in-app payment
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool handleGooglePaymentAsync(char * accessToken,
	GooglePaymentRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsGoogleManager_H_ */
