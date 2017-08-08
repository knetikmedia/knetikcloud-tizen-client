/*
 * ActivityUserResource.h
 *
 * 
 */

#ifndef _ActivityUserResource_H_
#define _ActivityUserResource_H_


#include <string>
#include "MetricResource.h"
#include "SimpleUserResource.h"
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

class ActivityUserResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityUserResource();
	ActivityUserResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityUserResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether this user is the 'host' of the occurrence and has increased access to settings/etc (default: false)
	 */
	bool getHost();

	/*! \brief Set Whether this user is the 'host' of the occurrence and has increased access to settings/etc (default: false)
	 */
	void setHost(bool  host);
	/*! \brief Get The id of the activity user entry
	 */
	long long getId();

	/*! \brief Set The id of the activity user entry
	 */
	void setId(long long  id);
	/*! \brief Get The date this user last joined the occurrence, unix timestamp in seconds
	 */
	long long getJoinedDate();

	/*! \brief Set The date this user last joined the occurrence, unix timestamp in seconds
	 */
	void setJoinedDate(long long  joined_date);
	/*! \brief Get The date this user last left the occurrence, unix timestamp in seconds. Null if still present
	 */
	long long getLeftDate();

	/*! \brief Set The date this user last left the occurrence, unix timestamp in seconds. Null if still present
	 */
	void setLeftDate(long long  left_date);
	/*! \brief Get The metric for the user's results, after the game is over
	 */
	MetricResource getMetric();

	/*! \brief Set The metric for the user's results, after the game is over
	 */
	void setMetric(MetricResource  metric);
	/*! \brief Get The current status of the user in the occurrence (default: present)
	 */
	std::string getStatus();

	/*! \brief Set The current status of the user in the occurrence (default: present)
	 */
	void setStatus(std::string  status);
	/*! \brief Get The user
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user
	 */
	void setUser(SimpleUserResource  user);

private:
	bool host;
	long long id;
	long long joined_date;
	long long left_date;
	MetricResource metric;
	std::string status;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityUserResource_H_ */
