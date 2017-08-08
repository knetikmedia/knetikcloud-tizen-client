#ifndef _PaymentsStripeManager_H_
#define _PaymentsStripeManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PaymentMethodResource.h"
#include "Result.h"
#include "StripeCreatePaymentMethod.h"
#include "StripePaymentRequest.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup PaymentsStripe PaymentsStripe
 * \ingroup Operations
 *  @{
 */
class PaymentsStripeManager {
public:
	PaymentsStripeManager();
	virtual ~PaymentsStripeManager();

/*! \brief Create a Stripe payment method for a user. *Synchronous*
 *
 * Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints.
 * \param request The request to create a Stripe customer with payment info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createStripePaymentMethodSync(char * accessToken,
	StripeCreatePaymentMethod request, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);

/*! \brief Create a Stripe payment method for a user. *Asynchronous*
 *
 * Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints.
 * \param request The request to create a Stripe customer with payment info
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createStripePaymentMethodAsync(char * accessToken,
	StripeCreatePaymentMethod request, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);


/*! \brief Pay with a single use token. *Synchronous*
 *
 * 
 * \param request The request to pay an invoice
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool payStripeInvoiceSync(char * accessToken,
	StripePaymentRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Pay with a single use token. *Asynchronous*
 *
 * 
 * \param request The request to pay an invoice
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool payStripeInvoiceAsync(char * accessToken,
	StripePaymentRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsStripeManager_H_ */
