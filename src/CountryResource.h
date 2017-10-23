/*
 * CountryResource.h
 *
 * 
 */

#ifndef _CountryResource_H_
#define _CountryResource_H_


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

class CountryResource : public Object {
public:
	/*! \brief Constructor.
	 */
	CountryResource();
	CountryResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CountryResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The iso2 of the country
	 */
	std::string getIso2();

	/*! \brief Set The iso2 of the country
	 */
	void setIso2(std::string  iso2);
	/*! \brief Get The iso3 of the country
	 */
	std::string getIso3();

	/*! \brief Set The iso3 of the country
	 */
	void setIso3(std::string  iso3);
	/*! \brief Get The name of the country resource
	 */
	std::string getName();

	/*! \brief Set The name of the country resource
	 */
	void setName(std::string  name);

private:
	std::string iso2;
	std::string iso3;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CountryResource_H_ */
