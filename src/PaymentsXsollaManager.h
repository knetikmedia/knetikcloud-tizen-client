#ifndef _PaymentsXsollaManager_H_
#define _PaymentsXsollaManager_H_

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
/** \addtogroup PaymentsXsolla PaymentsXsolla
 * \ingroup Operations
 *  @{
 */
class PaymentsXsollaManager {
public:
	PaymentsXsollaManager();
	virtual ~PaymentsXsollaManager();

/*! \brief Create a payment token that should be used to forward the user to Xsolla so they can complete payment. *Synchronous*
 *
 * 
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
 * 
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
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsXsollaManager_H_ */
