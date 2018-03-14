#ifndef _Payments_StripeManager_H_
#define _Payments_StripeManager_H_

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
/** \addtogroup Payments_Stripe Payments_Stripe
 * \ingroup Operations
 *  @{
 */
class Payments_StripeManager {
public:
	Payments_StripeManager();
	virtual ~Payments_StripeManager();

/*! \brief Create a Stripe payment method for a user. *Synchronous*
 *
 * Obtain a token from Stripe, following their examples and documentation. Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> STRIPE_ADMIN or owner
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
 * Obtain a token from Stripe, following their examples and documentation. Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> STRIPE_ADMIN or owner
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
 * Obtain a token from Stripe, following their examples and documentation. Pays an invoice without creating a payment method. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> ANY
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
 * Obtain a token from Stripe, following their examples and documentation. Pays an invoice without creating a payment method. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> ANY
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
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Payments_StripeManager_H_ */
