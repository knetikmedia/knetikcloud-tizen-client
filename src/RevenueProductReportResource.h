/*
 * RevenueProductReportResource.h
 *
 * 
 */

#ifndef _RevenueProductReportResource_H_
#define _RevenueProductReportResource_H_


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

class RevenueProductReportResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RevenueProductReportResource();
	RevenueProductReportResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RevenueProductReportResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getItemId();

	/*! \brief Set 
	 */
	void setItemId(int  item_id);
	/*! \brief Get 
	 */
	std::string getItemName();

	/*! \brief Set 
	 */
	void setItemName(std::string  item_name);
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
	int item_id;
	std::string item_name;
	long long revenue;
	long long volume;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RevenueProductReportResource_H_ */
