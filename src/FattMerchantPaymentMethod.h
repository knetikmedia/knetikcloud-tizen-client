/*
 * FattMerchantPaymentMethod.h
 *
 * 
 */

#ifndef _FattMerchantPaymentMethod_H_
#define _FattMerchantPaymentMethod_H_


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

class FattMerchantPaymentMethod : public Object {
public:
	/*! \brief Constructor.
	 */
	FattMerchantPaymentMethod();
	FattMerchantPaymentMethod(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FattMerchantPaymentMethod();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAddress1();

	/*! \brief Set 
	 */
	void setAddress1(std::string  address1);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get 
	 */
	std::string getAddressCity();

	/*! \brief Set 
	 */
	void setAddressCity(std::string  address_city);
	/*! \brief Get 
	 */
	std::string getAddressCountry();

	/*! \brief Set 
	 */
	void setAddressCountry(std::string  address_country);
	/*! \brief Get 
	 */
	std::string getAddressState();

	/*! \brief Set 
	 */
	void setAddressState(std::string  address_state);
	/*! \brief Get 
	 */
	std::string getAddressZip();

	/*! \brief Set 
	 */
	void setAddressZip(std::string  address_zip);
	/*! \brief Get Last four digits of the credit card
	 */
	std::string getCardLastFour();

	/*! \brief Set Last four digits of the credit card
	 */
	void setCardLastFour(std::string  card_last_four);
	/*! \brief Get 
	 */
	std::string getCreatedAt();

	/*! \brief Set 
	 */
	void setCreatedAt(std::string  created_at);
	/*! \brief Get Unique FattMerchant customer ID
	 */
	std::string getCustomerId();

	/*! \brief Set Unique FattMerchant customer ID
	 */
	void setCustomerId(std::string  customer_id);
	/*! \brief Get 
	 */
	std::string getDeletedAt();

	/*! \brief Set 
	 */
	void setDeletedAt(std::string  deleted_at);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get Nickname given to the FattMerchant payment method
	 */
	std::string getNickname();

	/*! \brief Set Nickname given to the FattMerchant payment method
	 */
	void setNickname(std::string  nickname);
	/*! \brief Get 
	 */
	std::string getUpdatedAt();

	/*! \brief Set 
	 */
	void setUpdatedAt(std::string  updated_at);

private:
	std::string address1;
	std::string address2;
	std::string address_city;
	std::string address_country;
	std::string address_state;
	std::string address_zip;
	std::string card_last_four;
	std::string created_at;
	std::string customer_id;
	std::string deleted_at;
	std::string id;
	std::string nickname;
	std::string updated_at;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FattMerchantPaymentMethod_H_ */
