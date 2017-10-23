/*
 * SampleCountriesResponse.h
 *
 * 
 */

#ifndef _SampleCountriesResponse_H_
#define _SampleCountriesResponse_H_


#include <string>
#include "Country.h"
#include <list>
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

class SampleCountriesResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	SampleCountriesResponse();
	SampleCountriesResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SampleCountriesResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<Country> getVendorId1();

	/*! \brief Set 
	 */
	void setVendorId1(std::list <Country> vendor_id1);
	/*! \brief Get 
	 */
	std::list<Country> getVendorId2();

	/*! \brief Set 
	 */
	void setVendorId2(std::list <Country> vendor_id2);

private:
	std::list <Country>vendor_id1;
	std::list <Country>vendor_id2;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SampleCountriesResponse_H_ */
