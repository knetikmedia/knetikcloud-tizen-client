/*
 * SimpleWallet.h
 *
 * 
 */

#ifndef _SimpleWallet_H_
#define _SimpleWallet_H_


#include <string>
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

class SimpleWallet : public Object {
public:
	/*! \brief Constructor.
	 */
	SimpleWallet();
	SimpleWallet(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SimpleWallet();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The current balance of the wallet
	 */
	double getBalance();

	/*! \brief Set The current balance of the wallet
	 */
	void setBalance(double  balance);
	/*! \brief Get The ISO currency code for the wallet
	 */
	std::string getCode();

	/*! \brief Set The ISO currency code for the wallet
	 */
	void setCode(std::string  code);
	/*! \brief Get The name of the currency stored in the wallet
	 */
	std::string getCurrencyName();

	/*! \brief Set The name of the currency stored in the wallet
	 */
	void setCurrencyName(std::string  currency_name);
	/*! \brief Get The unique ID of the wallet
	 */
	int getId();

	/*! \brief Set The unique ID of the wallet
	 */
	void setId(int  id);
	/*! \brief Get The ID of the user to whom the wallet belongs
	 */
	int getUserId();

	/*! \brief Set The ID of the user to whom the wallet belongs
	 */
	void setUserId(int  user_id);

private:
	double balance;
	std::string code;
	std::string currency_name;
	int id;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SimpleWallet_H_ */
