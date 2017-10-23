/*
 * WalletTotalResponse.h
 *
 * 
 */

#ifndef _WalletTotalResponse_H_
#define _WalletTotalResponse_H_


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

class WalletTotalResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	WalletTotalResponse();
	WalletTotalResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WalletTotalResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The currency code
	 */
	std::string getCurrencyCode();

	/*! \brief Set The currency code
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The sum of all wallets in the system for this currency
	 */
	long long getTotal();

	/*! \brief Set The sum of all wallets in the system for this currency
	 */
	void setTotal(long long  total);

private:
	std::string currency_code;
	long long total;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WalletTotalResponse_H_ */
