#ifndef _PaymentsTransactionsManager_H_
#define _PaymentsTransactionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«TransactionResource».h"
#include "RefundRequest.h"
#include "RefundResource.h"
#include "Result.h"
#include "TransactionResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup PaymentsTransactions PaymentsTransactions
 * \ingroup Operations
 *  @{
 */
class PaymentsTransactionsManager {
public:
	PaymentsTransactionsManager();
	virtual ~PaymentsTransactionsManager();

/*! \brief Get the details for a single transaction. *Synchronous*
 *
 * 
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTransactionSync(char * accessToken,
	int id, 
	void(* handler)(TransactionResource, Error, void* )
	, void* userData);

/*! \brief Get the details for a single transaction. *Asynchronous*
 *
 * 
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTransactionAsync(char * accessToken,
	int id, 
	void(* handler)(TransactionResource, Error, void* )
	, void* userData);


/*! \brief List and search transactions. *Synchronous*
 *
 * 
 * \param filterInvoice Filter for transactions from a specific invoice
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTransactionsSync(char * accessToken,
	int filterInvoice, int size, int page, std::string order, 
	void(* handler)(PageResource«TransactionResource», Error, void* )
	, void* userData);

/*! \brief List and search transactions. *Asynchronous*
 *
 * 
 * \param filterInvoice Filter for transactions from a specific invoice
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTransactionsAsync(char * accessToken,
	int filterInvoice, int size, int page, std::string order, 
	void(* handler)(PageResource«TransactionResource», Error, void* )
	, void* userData);


/*! \brief Refund a payment transaction, in full or in part. *Synchronous*
 *
 * Will not allow for refunding more than the full amount even with multiple partial refunds. Money is refunded to the payment method used to make the original payment. Payment method must support refunds.
 * \param id The id of the transaction to refund *Required*
 * \param request Request containing refund details
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool refundTransactionSync(char * accessToken,
	int id, RefundRequest request, 
	void(* handler)(RefundResource, Error, void* )
	, void* userData);

/*! \brief Refund a payment transaction, in full or in part. *Asynchronous*
 *
 * Will not allow for refunding more than the full amount even with multiple partial refunds. Money is refunded to the payment method used to make the original payment. Payment method must support refunds.
 * \param id The id of the transaction to refund *Required*
 * \param request Request containing refund details
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool refundTransactionAsync(char * accessToken,
	int id, RefundRequest request, 
	void(* handler)(RefundResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsTransactionsManager_H_ */
