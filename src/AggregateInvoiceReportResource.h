/*
 * AggregateInvoiceReportResource.h
 *
 * 
 */

#ifndef _AggregateInvoiceReportResource_H_
#define _AggregateInvoiceReportResource_H_


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

class AggregateInvoiceReportResource : public Object {
public:
	/*! \brief Constructor.
	 */
	AggregateInvoiceReportResource();
	AggregateInvoiceReportResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AggregateInvoiceReportResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCount();

	/*! \brief Set 
	 */
	void setCount(long long  count);
	/*! \brief Get 
	 */
	std::string getDate();

	/*! \brief Set 
	 */
	void setDate(std::string  date);
	/*! \brief Get 
	 */
	double getRevenue();

	/*! \brief Set 
	 */
	void setRevenue(double  revenue);
	/*! \brief Get 
	 */
	long long getUserCount();

	/*! \brief Set 
	 */
	void setUserCount(long long  user_count);

private:
	long long count;
	std::string date;
	double revenue;
	long long user_count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AggregateInvoiceReportResource_H_ */
