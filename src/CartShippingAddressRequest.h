/*
 * CartShippingAddressRequest.h
 *
 * 
 */

#ifndef _CartShippingAddressRequest_H_
#define _CartShippingAddressRequest_H_


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

class CartShippingAddressRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CartShippingAddressRequest();
	CartShippingAddressRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CartShippingAddressRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The city of the user
	 */
	std::string getCity();

	/*! \brief Set The city of the user
	 */
	void setCity(std::string  city);
	/*! \brief Get The country code of the user
	 */
	std::string getCountryCodeIso3();

	/*! \brief Set The country code of the user
	 */
	void setCountryCodeIso3(std::string  country_code_iso3);
	/*! \brief Get The email of the user
	 */
	std::string getEmail();

	/*! \brief Set The email of the user
	 */
	void setEmail(std::string  email);
	/*! \brief Get The first name of the user
	 */
	std::string getFirstName();

	/*! \brief Set The first name of the user
	 */
	void setFirstName(std::string  first_name);
	/*! \brief Get The last name of the user
	 */
	std::string getLastName();

	/*! \brief Set The last name of the user
	 */
	void setLastName(std::string  last_name);
	/*! \brief Get 
	 */
	std::string getNamePrefix();

	/*! \brief Set 
	 */
	void setNamePrefix(std::string  name_prefix);
	/*! \brief Get The order notes the user
	 */
	std::string getOrderNotes();

	/*! \brief Set The order notes the user
	 */
	void setOrderNotes(std::string  order_notes);
	/*! \brief Get The phone number of the user
	 */
	std::string getPhoneNumber();

	/*! \brief Set The phone number of the user
	 */
	void setPhoneNumber(std::string  phone_number);
	/*! \brief Get The postal state code of the user
	 */
	std::string getPostalStateCode();

	/*! \brief Set The postal state code of the user
	 */
	void setPostalStateCode(std::string  postal_state_code);
	/*! \brief Get The shipping address of the user, first line
	 */
	std::string getShippingAddressLine1();

	/*! \brief Set The shipping address of the user, first line
	 */
	void setShippingAddressLine1(std::string  shipping_address_line1);
	/*! \brief Get The shipping address of the user, second line
	 */
	std::string getShippingAddressLine2();

	/*! \brief Set The shipping address of the user, second line
	 */
	void setShippingAddressLine2(std::string  shipping_address_line2);
	/*! \brief Get The zipcode of the user
	 */
	std::string getZip();

	/*! \brief Set The zipcode of the user
	 */
	void setZip(std::string  zip);

private:
	std::string city;
	std::string country_code_iso3;
	std::string email;
	std::string first_name;
	std::string last_name;
	std::string name_prefix;
	std::string order_notes;
	std::string phone_number;
	std::string postal_state_code;
	std::string shipping_address_line1;
	std::string shipping_address_line2;
	std::string zip;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CartShippingAddressRequest_H_ */
