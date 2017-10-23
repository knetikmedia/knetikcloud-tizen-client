/*
 * AddressResource.h
 *
 * 
 */

#ifndef _AddressResource_H_
#define _AddressResource_H_


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

class AddressResource : public Object {
public:
	/*! \brief Constructor.
	 */
	AddressResource();
	AddressResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AddressResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The first line of the address
	 */
	std::string getAddress1();

	/*! \brief Set The first line of the address
	 */
	void setAddress1(std::string  address1);
	/*! \brief Get A second line of the address
	 */
	std::string getAddress2();

	/*! \brief Set A second line of the address
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get The city
	 */
	std::string getCity();

	/*! \brief Set The city
	 */
	void setCity(std::string  city);
	/*! \brief Get The iso3 code for the country
	 */
	std::string getCountryCode();

	/*! \brief Set The iso3 code for the country
	 */
	void setCountryCode(std::string  country_code);
	/*! \brief Get The postal code
	 */
	std::string getPostalCode();

	/*! \brief Set The postal code
	 */
	void setPostalCode(std::string  postal_code);
	/*! \brief Get The code for the state. Required if the country has states/provinces/equivalent
	 */
	std::string getStateCode();

	/*! \brief Set The code for the state. Required if the country has states/provinces/equivalent
	 */
	void setStateCode(std::string  state_code);

private:
	std::string address1;
	std::string address2;
	std::string city;
	std::string country_code;
	std::string postal_code;
	std::string state_code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AddressResource_H_ */
