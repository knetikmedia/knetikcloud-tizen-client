/*
 * PaymentMethodResource.h
 *
 * 
 */

#ifndef _PaymentMethodResource_H_
#define _PaymentMethodResource_H_


#include <string>
#include "PaymentMethodTypeResource.h"
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

class PaymentMethodResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PaymentMethodResource();
	PaymentMethodResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaymentMethodResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get 
	 */
	bool getDefault();

	/*! \brief Set 
	 */
	void setDefault(bool  _default);
	/*! \brief Get Whether this payment method is disabled or not
	 */
	bool getDisabled();

	/*! \brief Set Whether this payment method is disabled or not
	 */
	void setDisabled(bool  disabled);
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
	/*! \brief Get The unique ID of the resource
	 */
	long long getId();

	/*! \brief Set The unique ID of the resource
	 */
	void setId(long long  id);
	/*! \brief Get The last 4 digits of the account number for the payment method. Typically used for credit card payment methods
	 */
	std::string getLast4();

	/*! \brief Set The last 4 digits of the account number for the payment method. Typically used for credit card payment methods
	 */
	void setLast4(std::string  last4);
	/*! \brief Get The user friendly name of the resource
	 */
	std::string getName();

	/*! \brief Set The user friendly name of the resource
	 */
	void setName(std::string  name);
	/*! \brief Get The type of payment method. Must be a pre-existing value
	 */
	PaymentMethodTypeResource getPaymentMethodType();

	/*! \brief Set The type of payment method. Must be a pre-existing value
	 */
	void setPaymentMethodType(PaymentMethodTypeResource  payment_method_type);
	/*! \brief Get The generic payment type. Default is card
	 */
	std::string getPaymentType();

	/*! \brief Set The generic payment type. Default is card
	 */
	void setPaymentType(std::string  payment_type);
	/*! \brief Get The sort value for the payment method
	 */
	int getSort();

	/*! \brief Set The sort value for the payment method
	 */
	void setSort(int  sort);
	/*! \brief Get The unique token for the payment method
	 */
	std::string getToken();

	/*! \brief Set The unique token for the payment method
	 */
	void setToken(std::string  token);
	/*! \brief Get An optional unique identifier
	 */
	std::string getUniqueKey();

	/*! \brief Set An optional unique identifier
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The user's id. If null, indicates a shared payment method that any user can use (i.e., 'wallet')
	 */
	int getUserId();

	/*! \brief Set The user's id. If null, indicates a shared payment method that any user can use (i.e., 'wallet')
	 */
	void setUserId(int  user_id);
	/*! \brief Get 
	 */
	bool getVerified();

	/*! \brief Set 
	 */
	void setVerified(bool  verified);

private:
	long long created_date;
	bool _default;
	bool disabled;
	long long expiration_date;
	int expiration_month;
	int expiration_year;
	long long id;
	std::string last4;
	std::string name;
	PaymentMethodTypeResource payment_method_type;
	std::string payment_type;
	int sort;
	std::string token;
	std::string unique_key;
	long long updated_date;
	int user_id;
	bool verified;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaymentMethodResource_H_ */
