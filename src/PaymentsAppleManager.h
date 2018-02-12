#ifndef _PaymentsAppleManager_H_
#define _PaymentsAppleManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ApplyPaymentRequest.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup PaymentsApple PaymentsApple
 * \ingroup Operations
 *  @{
 */
class PaymentsAppleManager {
public:
	PaymentsAppleManager();
	virtual ~PaymentsAppleManager();

/*! \brief Pay invoice with Apple receipt. *Synchronous*
 *
 * Mark an invoice paid using Apple payment receipt. A receipt will only be accepted once and the details of the transaction must match the invoice, including the product_id matching the sku text of the item in the invoice. Returns the transaction ID if successful. <br><br><b>Permissions Needed:</b> ANY
 * \param request The request for paying an invoice through an Apple receipt
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool verifyAppleReceiptSync(char * accessToken,
	ApplyPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Pay invoice with Apple receipt. *Asynchronous*
 *
 * Mark an invoice paid using Apple payment receipt. A receipt will only be accepted once and the details of the transaction must match the invoice, including the product_id matching the sku text of the item in the invoice. Returns the transaction ID if successful. <br><br><b>Permissions Needed:</b> ANY
 * \param request The request for paying an invoice through an Apple receipt
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool verifyAppleReceiptAsync(char * accessToken,
	ApplyPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsAppleManager_H_ */
