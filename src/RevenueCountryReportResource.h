/*
 * RevenueCountryReportResource.h
 *
 * 
 */

#ifndef _RevenueCountryReportResource_H_
#define _RevenueCountryReportResource_H_


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

class RevenueCountryReportResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RevenueCountryReportResource();
	RevenueCountryReportResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RevenueCountryReportResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	long long getRevenue();

	/*! \brief Set 
	 */
	void setRevenue(long long  revenue);
	/*! \brief Get 
	 */
	long long getVolume();

	/*! \brief Set 
	 */
	void setVolume(long long  volume);

private:
	std::string country;
	long long revenue;
	long long volume;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RevenueCountryReportResource_H_ */
