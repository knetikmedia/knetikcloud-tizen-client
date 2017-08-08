/*
 * PaymentMethodDetails.h
 *
 * 
 */

#ifndef _PaymentMethodDetails_H_
#define _PaymentMethodDetails_H_


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

class PaymentMethodDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	PaymentMethodDetails();
	PaymentMethodDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaymentMethodDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getDefault();

	/*! \brief Set 
	 */
	void setDefault(bool  _default);
	/*! \brief Get The expiration date for the payment method, expressed as seconds since epoch. Typically used for credit card payment methods
	 */
	long long getExpirationDate();

	/*! \brief Set The expiration date for the payment method, expressed as seconds since epoch. Typically used for credit card payment methods
	 */
	void setExpirationDate(long long  expiration_date);
	/*! \brief Get The expiration month (1 - 12) for the payment method. Typically used for credit card payment methods
	 */
	int getExpirationMonth();

	/*! \brief Set The expiration month (1 - 12) for the payment method. Typically used for credit card payment methods
	 */
	void setExpirationMonth(int  expiration_month);
	/*! \brief Get The expiration year for the payment method. Typically used for credit card payment methods
	 */
	int getExpirationYear();

	/*! \brief Set The expiration year for the payment method. Typically used for credit card payment methods
	 */
	void setExpirationYear(int  expiration_year);
	/*! \brief Get The last 4 digits of the account number for the payment method. Typically used for credit card payment methods
	 */
	std::string getLast4();

	/*! \brief Set The last 4 digits of the account number for the payment method. Typically used for credit card payment methods
	 */
	void setLast4(std::string  last4);
	/*! \brief Get The sort value for the payment method
	 */
	int getSort();

	/*! \brief Set The sort value for the payment method
	 */
	void setSort(int  sort);
	/*! \brief Get An optional unique identifier
	 */
	std::string getUniqueKey();

	/*! \brief Set An optional unique identifier
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get 
	 */
	bool getVerified();

	/*! \brief Set 
	 */
	void setVerified(bool  verified);

private:
	bool _default;
	long long expiration_date;
	int expiration_month;
	int expiration_year;
	std::string last4;
	int sort;
	std::string unique_key;
	bool verified;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaymentMethodDetails_H_ */
