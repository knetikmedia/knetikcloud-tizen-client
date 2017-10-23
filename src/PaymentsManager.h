#ifndef _PaymentsManager_H_
#define _PaymentsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«PaymentMethodTypeResource».h"
#include "PaymentAuthorizationResource.h"
#include "PaymentMethodResource.h"
#include "PaymentMethodTypeResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Payments Payments
 * \ingroup Operations
 *  @{
 */
class PaymentsManager {
public:
	PaymentsManager();
	virtual ~PaymentsManager();

/*! \brief Create a new payment method for a user. *Synchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being created *Required*
 * \param paymentMethod Payment method being created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPaymentMethodSync(char * accessToken,
	int userId, PaymentMethodResource paymentMethod, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);

/*! \brief Create a new payment method for a user. *Asynchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being created *Required*
 * \param paymentMethod Payment method being created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPaymentMethodAsync(char * accessToken,
	int userId, PaymentMethodResource paymentMethod, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);


/*! \brief Delete an existing payment method for a user. *Synchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being updated *Required*
 * \param id ID of the payment method being deleted *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePaymentMethodSync(char * accessToken,
	int userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing payment method for a user. *Asynchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being updated *Required*
 * \param id ID of the payment method being deleted *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePaymentMethodAsync(char * accessToken,
	int userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single payment method for a user. *Synchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being retrieved *Required*
 * \param id ID of the payment method being retrieved *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodSync(char * accessToken,
	int userId, int id, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);

/*! \brief Get a single payment method for a user. *Asynchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being retrieved *Required*
 * \param id ID of the payment method being retrieved *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodAsync(char * accessToken,
	int userId, int id, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);


/*! \brief Get a single payment method type. *Synchronous*
 *
 * 
 * \param id ID of the payment method type being retrieved *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodTypeSync(char * accessToken,
	int id, 
	void(* handler)(PaymentMethodTypeResource, Error, void* )
	, void* userData);

/*! \brief Get a single payment method type. *Asynchronous*
 *
 * 
 * \param id ID of the payment method type being retrieved *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodTypeAsync(char * accessToken,
	int id, 
	void(* handler)(PaymentMethodTypeResource, Error, void* )
	, void* userData);


/*! \brief Get all payment method types. *Synchronous*
 *
 * 
 * \param filterName Filter for payment method types whose name matches a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodTypesSync(char * accessToken,
	std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«PaymentMethodTypeResource», Error, void* )
	, void* userData);

/*! \brief Get all payment method types. *Asynchronous*
 *
 * 
 * \param filterName Filter for payment method types whose name matches a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodTypesAsync(char * accessToken,
	std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«PaymentMethodTypeResource», Error, void* )
	, void* userData);


/*! \brief Get all payment methods for a user. *Synchronous*
 *
 * 
 * \param userId ID of the user for whom the payment methods are being retrieved *Required*
 * \param filterName Filter for payment methods whose name starts with a given string
 * \param filterPaymentType Filter for payment methods with a specific payment type
 * \param filterPaymentMethodTypeId Filter for payment methods with a specific payment method type by id
 * \param filterPaymentMethodTypeName Filter for payment methods whose payment method type name starts with a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodsSync(char * accessToken,
	int userId, std::string filterName, std::string filterPaymentType, int filterPaymentMethodTypeId, std::string filterPaymentMethodTypeName, int size, int page, std::string order, 
	void(* handler)(std::list<PaymentMethodResource>, Error, void* )
	, void* userData);

/*! \brief Get all payment methods for a user. *Asynchronous*
 *
 * 
 * \param userId ID of the user for whom the payment methods are being retrieved *Required*
 * \param filterName Filter for payment methods whose name starts with a given string
 * \param filterPaymentType Filter for payment methods with a specific payment type
 * \param filterPaymentMethodTypeId Filter for payment methods with a specific payment method type by id
 * \param filterPaymentMethodTypeName Filter for payment methods whose payment method type name starts with a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPaymentMethodsAsync(char * accessToken,
	int userId, std::string filterName, std::string filterPaymentType, int filterPaymentMethodTypeId, std::string filterPaymentMethodTypeName, int size, int page, std::string order, 
	void(* handler)(std::list<PaymentMethodResource>, Error, void* )
	, void* userData);


/*! \brief Authorize payment of an invoice for later capture. *Synchronous*
 *
 * 
 * \param request Payment authorization request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool paymentAuthorizationSync(char * accessToken,
	PaymentAuthorizationResource request, 
	void(* handler)(PaymentAuthorizationResource, Error, void* )
	, void* userData);

/*! \brief Authorize payment of an invoice for later capture. *Asynchronous*
 *
 * 
 * \param request Payment authorization request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool paymentAuthorizationAsync(char * accessToken,
	PaymentAuthorizationResource request, 
	void(* handler)(PaymentAuthorizationResource, Error, void* )
	, void* userData);


/*! \brief Capture an existing invoice payment authorization. *Synchronous*
 *
 * 
 * \param id ID of the payment authorization to capture *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool paymentCaptureSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Capture an existing invoice payment authorization. *Asynchronous*
 *
 * 
 * \param id ID of the payment authorization to capture *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool paymentCaptureAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an existing payment method for a user. *Synchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being updated *Required*
 * \param id ID of the payment method being updated *Required*
 * \param paymentMethod The updated payment method data
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePaymentMethodSync(char * accessToken,
	int userId, int id, PaymentMethodResource paymentMethod, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);

/*! \brief Update an existing payment method for a user. *Asynchronous*
 *
 * 
 * \param userId ID of the user for whom the payment method is being updated *Required*
 * \param id ID of the payment method being updated *Required*
 * \param paymentMethod The updated payment method data
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePaymentMethodAsync(char * accessToken,
	int userId, int id, PaymentMethodResource paymentMethod, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsManager_H_ */
