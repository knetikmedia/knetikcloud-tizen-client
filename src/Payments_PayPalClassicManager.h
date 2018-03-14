#ifndef _Payments_PayPalClassicManager_H_
#define _Payments_PayPalClassicManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CreateBillingAgreementRequest.h"
#include "CreatePayPalPaymentRequest.h"
#include "FinalizeBillingAgreementRequest.h"
#include "FinalizePayPalPaymentRequest.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Payments_PayPalClassic Payments_PayPalClassic
 * \ingroup Operations
 *  @{
 */
class Payments_PayPalClassicManager {
public:
	Payments_PayPalClassicManager();
	virtual ~Payments_PayPalClassicManager();

/*! \brief Create a PayPal Classic billing agreement for the user. *Synchronous*
 *
 * Returns the token that should be used to forward the user to PayPal so they can accept the agreement. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to create a PayPal billing agreement
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPayPalBillingAgreementUrlSync(char * accessToken,
	CreateBillingAgreementRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Create a PayPal Classic billing agreement for the user. *Asynchronous*
 *
 * Returns the token that should be used to forward the user to PayPal so they can accept the agreement. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to create a PayPal billing agreement
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPayPalBillingAgreementUrlAsync(char * accessToken,
	CreateBillingAgreementRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Create a payment token for PayPal express checkout. *Synchronous*
 *
 * Returns the token that should be used to forward the user to PayPal so they can complete the checkout. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to create a PayPal payment token
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPayPalExpressCheckoutSync(char * accessToken,
	CreatePayPalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Create a payment token for PayPal express checkout. *Asynchronous*
 *
 * Returns the token that should be used to forward the user to PayPal so they can complete the checkout. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to create a PayPal payment token
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPayPalExpressCheckoutAsync(char * accessToken,
	CreatePayPalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Finalizes a billing agreement after the user has accepted through PayPal. *Synchronous*
 *
 * Returns the ID of the new payment method created for the user for the billing agreement. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to finalize a PayPal billing agreement
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool finalizePayPalBillingAgreementSync(char * accessToken,
	FinalizeBillingAgreementRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData);

/*! \brief Finalizes a billing agreement after the user has accepted through PayPal. *Asynchronous*
 *
 * Returns the ID of the new payment method created for the user for the billing agreement. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to finalize a PayPal billing agreement
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool finalizePayPalBillingAgreementAsync(char * accessToken,
	FinalizeBillingAgreementRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData);


/*! \brief Finalizes a payment after the user has completed checkout with PayPal. *Synchronous*
 *
 * The invoice will be marked paid/failed by asynchronous IPN callback. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to finalize the payment
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool finalizePayPalCheckoutSync(char * accessToken,
	FinalizePayPalPaymentRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Finalizes a payment after the user has completed checkout with PayPal. *Asynchronous*
 *
 * The invoice will be marked paid/failed by asynchronous IPN callback. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner
 * \param request The request to finalize the payment
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool finalizePayPalCheckoutAsync(char * accessToken,
	FinalizePayPalPaymentRequest request, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Payments_PayPalClassicManager_H_ */
