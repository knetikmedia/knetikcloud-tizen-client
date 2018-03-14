#ifndef _Payments_FattMerchantManager_H_
#define _Payments_FattMerchantManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "FattMerchantPaymentMethodRequest.h"
#include "PaymentMethodResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Payments_FattMerchant Payments_FattMerchant
 * \ingroup Operations
 *  @{
 */
class Payments_FattMerchantManager {
public:
	Payments_FattMerchantManager();
	virtual ~Payments_FattMerchantManager();

/*! \brief Create or update a FattMerchant payment method for a user. *Synchronous*
 *
 * Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. <br><br><b>Permissions Needed:</b> FATTMERCHANT_ADMIN or owner
 * \param request Request containing payment method information for user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createOrUpdateFattMerchantPaymentMethodSync(char * accessToken,
	FattMerchantPaymentMethodRequest request, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);

/*! \brief Create or update a FattMerchant payment method for a user. *Asynchronous*
 *
 * Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. <br><br><b>Permissions Needed:</b> FATTMERCHANT_ADMIN or owner
 * \param request Request containing payment method information for user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createOrUpdateFattMerchantPaymentMethodAsync(char * accessToken,
	FattMerchantPaymentMethodRequest request, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Payments_FattMerchantManager_H_ */
