/*
 * BillingReport.h
 *
 * 
 */

#ifndef _BillingReport_H_
#define _BillingReport_H_


#include <string>
#include <list>
#include <map>
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

class BillingReport : public Object {
public:
	/*! \brief Constructor.
	 */
	BillingReport();
	BillingReport(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BillingReport();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCreated();

	/*! \brief Set 
	 */
	void setCreated(long long  created);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::list<std::string> getLastKnownFailures();

	/*! \brief Set 
	 */
	void setLastKnownFailures(std::list <std::string> last_known_failures);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getStatistics();

	/*! \brief Set 
	 */
	void setStatistics(std::map <std::string, std::string> statistics);

private:
	long long created;
	std::string id;
	std::list <std::string>last_known_failures;
	std::map <std::string, std::string>statistics;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BillingReport_H_ */
