/*
 * WalletTransactionResource.h
 *
 * 
 */

#ifndef _WalletTransactionResource_H_
#define _WalletTransactionResource_H_


#include <string>
#include "SimpleUserResource.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WalletTransactionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	WalletTransactionResource();
	WalletTransactionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WalletTransactionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The new balance of the wallet after the transaction
	 */
	long long getBalance();

	/*! \brief Set The new balance of the wallet after the transaction
	 */
	void setBalance(long long  balance);
	/*! \brief Get The unix timestamp in seconds of the transaction
	 */
	long long getCreateDate();

	/*! \brief Set The unix timestamp in seconds of the transaction
	 */
	void setCreateDate(long long  create_date);
	/*! \brief Get The code of the currency for the transaction
	 */
	std::string getCurrencyCode();

	/*! \brief Set The code of the currency for the transaction
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The specific details of the transaction, such as a message from the admin that created it
	 */
	std::string getDetails();

	/*! \brief Set The specific details of the transaction, such as a message from the admin that created it
	 */
	void setDetails(std::string  details);
	/*! \brief Get The id of the transaction
	 */
	int getId();

	/*! \brief Set The id of the transaction
	 */
	void setId(int  id);
	/*! \brief Get The id of the invoice that spawned the transaction, if any
	 */
	int getInvoiceId();

	/*! \brief Set The id of the invoice that spawned the transaction, if any
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get Whether the transaction has been refunded
	 */
	bool getIsRefunded();

	/*! \brief Set Whether the transaction has been refunded
	 */
	void setIsRefunded(bool  is_refunded);
	/*! \brief Get The response
	 */
	std::string getResponse();

	/*! \brief Set The response
	 */
	void setResponse(std::string  response);
	/*! \brief Get The root source of the transaction
	 */
	std::string getSource();

	/*! \brief Set The root source of the transaction
	 */
	void setSource(std::string  source);
	/*! \brief Get If the transaction was successful
	 */
	bool getSuccessful();

	/*! \brief Set If the transaction was successful
	 */
	void setSuccessful(bool  successful);
	/*! \brief Get The payment gateway (external) transaction ID
	 */
	std::string getTransactionId();

	/*! \brief Set The payment gateway (external) transaction ID
	 */
	void setTransactionId(std::string  transaction_id);
	/*! \brief Get The general type of the transaction
	 */
	std::string getType();

	/*! \brief Set The general type of the transaction
	 */
	void setType(std::string  type);
	/*! \brief Get The table name of the subclass
	 */
	std::string getTypeHint();

	/*! \brief Set The table name of the subclass
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get The owner of the wallet
	 */
	SimpleUserResource getUser();

	/*! \brief Set The owner of the wallet
	 */
	void setUser(SimpleUserResource  user);
	/*! \brief Get The amount of the transaction, positive if a gain, negative if an expenditure
	 */
	long long getValue();

	/*! \brief Set The amount of the transaction, positive if a gain, negative if an expenditure
	 */
	void setValue(long long  value);
	/*! \brief Get The id of the wallet this transaction affected
	 */
	int getWalletId();

	/*! \brief Set The id of the wallet this transaction affected
	 */
	void setWalletId(int  wallet_id);

private:
	long long balance;
	long long create_date;
	std::string currency_code;
	std::string details;
	int id;
	int invoice_id;
	bool is_refunded;
	std::string response;
	std::string source;
	bool successful;
	std::string transaction_id;
	std::string type;
	std::string type_hint;
	SimpleUserResource user;
	long long value;
	int wallet_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WalletTransactionResource_H_ */
