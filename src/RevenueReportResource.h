/*
 * RevenueReportResource.h
 *
 * 
 */

#ifndef _RevenueReportResource_H_
#define _RevenueReportResource_H_


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

class RevenueReportResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RevenueReportResource();
	RevenueReportResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RevenueReportResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCustomerCount();

	/*! \brief Set 
	 */
	void setCustomerCount(long long  customer_count);
	/*! \brief Get 
	 */
	long long getSaleCount();

	/*! \brief Set 
	 */
	void setSaleCount(long long  sale_count);
	/*! \brief Get 
	 */
	double getSalesAverage();

	/*! \brief Set 
	 */
	void setSalesAverage(double  sales_average);
	/*! \brief Get 
	 */
	double getSalesTotal();

	/*! \brief Set 
	 */
	void setSalesTotal(double  sales_total);

private:
	long long customer_count;
	long long sale_count;
	double sales_average;
	double sales_total;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RevenueReportResource_H_ */
