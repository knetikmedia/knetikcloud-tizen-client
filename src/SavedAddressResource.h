/*
 * SavedAddressResource.h
 *
 * 
 */

#ifndef _SavedAddressResource_H_
#define _SavedAddressResource_H_


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

class SavedAddressResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SavedAddressResource();
	SavedAddressResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SavedAddressResource();

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
	/*! \brief Get 
	 */
	bool getDefault();

	/*! \brief Set 
	 */
	void setDefault(bool  _default);
	/*! \brief Get The first name of the user
	 */
	std::string getFirstName();

	/*! \brief Set The first name of the user
	 */
	void setFirstName(std::string  first_name);
	/*! \brief Get The id of the address
	 */
	int getId();

	/*! \brief Set The id of the address
	 */
	void setId(int  id);
	/*! \brief Get The last name of the user
	 */
	std::string getLastName();

	/*! \brief Set The last name of the user
	 */
	void setLastName(std::string  last_name);
	/*! \brief Get The name of the address
	 */
	std::string getName();

	/*! \brief Set The name of the address
	 */
	void setName(std::string  name);
	/*! \brief Get The first phone number of the user
	 */
	std::string getPhone1();

	/*! \brief Set The first phone number of the user
	 */
	void setPhone1(std::string  phone1);
	/*! \brief Get The second phone number of the user
	 */
	std::string getPhone2();

	/*! \brief Set The second phone number of the user
	 */
	void setPhone2(std::string  phone2);
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
	bool _default;
	std::string first_name;
	int id;
	std::string last_name;
	std::string name;
	std::string phone1;
	std::string phone2;
	std::string postal_code;
	std::string state_code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SavedAddressResource_H_ */
