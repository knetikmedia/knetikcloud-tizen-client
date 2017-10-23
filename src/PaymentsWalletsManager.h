#ifndef _PaymentsWalletsManager_H_
#define _PaymentsWalletsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«SimpleWallet».h"
#include "PageResource«WalletTotalResponse».h"
#include "PageResource«WalletTransactionResource».h"
#include "Result.h"
#include "SimpleWallet.h"
#include "WalletAlterRequest.h"
#include "WalletTransactionResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup PaymentsWallets PaymentsWallets
 * \ingroup Operations
 *  @{
 */
class PaymentsWalletsManager {
public:
	PaymentsWalletsManager();
	virtual ~PaymentsWalletsManager();

/*! \brief Returns the user's wallet for the given currency code. *Synchronous*
 *
 * 
 * \param userId The ID of the user for whom wallet is being retrieved *Required*
 * \param currencyCode Currency code of the user's wallet *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserWalletSync(char * accessToken,
	int userId, std::string currencyCode, 
	void(* handler)(SimpleWallet, Error, void* )
	, void* userData);

/*! \brief Returns the user's wallet for the given currency code. *Asynchronous*
 *
 * 
 * \param userId The ID of the user for whom wallet is being retrieved *Required*
 * \param currencyCode Currency code of the user's wallet *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserWalletAsync(char * accessToken,
	int userId, std::string currencyCode, 
	void(* handler)(SimpleWallet, Error, void* )
	, void* userData);


/*! \brief Retrieve a user's wallet transactions. *Synchronous*
 *
 * 
 * \param userId The ID of the user for whom wallet transactions are being retrieved *Required*
 * \param currencyCode Currency code of the user's wallet *Required*
 * \param filterType Filter for transactions with specified type
 * \param filterMaxDate Filter for transactions from no earlier than the specified date as a unix timestamp in seconds
 * \param filterMinDate Filter for transactions from no later than the specified date as a unix timestamp in seconds
 * \param filterSign Filter for transactions with amount with the given sign.  Allowable values: ('positive', 'negative')
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserWalletTransactionsSync(char * accessToken,
	int userId, std::string currencyCode, std::string filterType, long long filterMaxDate, long long filterMinDate, std::string filterSign, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData);

/*! \brief Retrieve a user's wallet transactions. *Asynchronous*
 *
 * 
 * \param userId The ID of the user for whom wallet transactions are being retrieved *Required*
 * \param currencyCode Currency code of the user's wallet *Required*
 * \param filterType Filter for transactions with specified type
 * \param filterMaxDate Filter for transactions from no earlier than the specified date as a unix timestamp in seconds
 * \param filterMinDate Filter for transactions from no later than the specified date as a unix timestamp in seconds
 * \param filterSign Filter for transactions with amount with the given sign.  Allowable values: ('positive', 'negative')
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserWalletTransactionsAsync(char * accessToken,
	int userId, std::string currencyCode, std::string filterType, long long filterMaxDate, long long filterMinDate, std::string filterSign, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData);


/*! \brief List all of a user's wallets. *Synchronous*
 *
 * 
 * \param userId The ID of the user for whom wallets are being retrieved *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserWalletsSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<SimpleWallet>, Error, void* )
	, void* userData);

/*! \brief List all of a user's wallets. *Asynchronous*
 *
 * 
 * \param userId The ID of the user for whom wallets are being retrieved *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserWalletsAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<SimpleWallet>, Error, void* )
	, void* userData);


/*! \brief Retrieves a summation of wallet balances by currency code. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWalletBalancesSync(char * accessToken,
	
	void(* handler)(PageResource«WalletTotalResponse», Error, void* )
	, void* userData);

/*! \brief Retrieves a summation of wallet balances by currency code. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWalletBalancesAsync(char * accessToken,
	
	void(* handler)(PageResource«WalletTotalResponse», Error, void* )
	, void* userData);


/*! \brief Retrieve wallet transactions across the system. *Synchronous*
 *
 * 
 * \param filterInvoice Filter for transactions from a specific invoice
 * \param filterType Filter for transactions with specified type
 * \param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterSign Filter for transactions with amount with the given sign
 * \param filterUserId Filter for transactions for specific userId
 * \param filterUsername Filter for transactions for specific username that start with the given string
 * \param filterDetails Filter for transactions for specific details that start with the given string
 * \param filterCurrencyCode Filter for transactions for specific currency code
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWalletTransactionsSync(char * accessToken,
	int filterInvoice, std::string filterType, std::string filterDate, std::string filterSign, int filterUserId, std::string filterUsername, std::string filterDetails, std::string filterCurrencyCode, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData);

/*! \brief Retrieve wallet transactions across the system. *Asynchronous*
 *
 * 
 * \param filterInvoice Filter for transactions from a specific invoice
 * \param filterType Filter for transactions with specified type
 * \param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterSign Filter for transactions with amount with the given sign
 * \param filterUserId Filter for transactions for specific userId
 * \param filterUsername Filter for transactions for specific username that start with the given string
 * \param filterDetails Filter for transactions for specific details that start with the given string
 * \param filterCurrencyCode Filter for transactions for specific currency code
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWalletTransactionsAsync(char * accessToken,
	int filterInvoice, std::string filterType, std::string filterDate, std::string filterSign, int filterUserId, std::string filterUsername, std::string filterDetails, std::string filterCurrencyCode, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData);


/*! \brief Retrieve a list of wallets across the system. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWalletsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SimpleWallet», Error, void* )
	, void* userData);

/*! \brief Retrieve a list of wallets across the system. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWalletsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SimpleWallet», Error, void* )
	, void* userData);


/*! \brief Updates the balance for a user's wallet. *Synchronous*
 *
 * 
 * \param userId The ID of the user for whom wallet is being modified *Required*
 * \param currencyCode Currency code of the user's wallet *Required*
 * \param request The requested balance modification to be made to the user's wallet
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateWalletBalanceSync(char * accessToken,
	int userId, std::string currencyCode, WalletAlterRequest request, 
	void(* handler)(WalletTransactionResource, Error, void* )
	, void* userData);

/*! \brief Updates the balance for a user's wallet. *Asynchronous*
 *
 * 
 * \param userId The ID of the user for whom wallet is being modified *Required*
 * \param currencyCode Currency code of the user's wallet *Required*
 * \param request The requested balance modification to be made to the user's wallet
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateWalletBalanceAsync(char * accessToken,
	int userId, std::string currencyCode, WalletAlterRequest request, 
	void(* handler)(WalletTransactionResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* PaymentsWalletsManager_H_ */
