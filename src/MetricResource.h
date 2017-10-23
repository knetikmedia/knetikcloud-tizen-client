/*
 * MetricResource.h
 *
 * 
 */

#ifndef _MetricResource_H_
#define _MetricResource_H_


#include <string>
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

class MetricResource : public Object {
public:
	/*! \brief Constructor.
	 */
	MetricResource();
	MetricResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MetricResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the activity occurence where this score/metric occurred
	 */
	long long getActivityOccurenceId();

	/*! \brief Set The id of the activity occurence where this score/metric occurred
	 */
	void setActivityOccurenceId(long long  activity_occurence_id);
	/*! \brief Get Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each
	 */
	std::list<std::string> getTags();

	/*! \brief Set Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get The id of the user this metric is for. Default to caller and requires METRICS_ADMIN permission to specify another
	 */
	int getUserId();

	/*! \brief Set The id of the user this metric is for. Default to caller and requires METRICS_ADMIN permission to specify another
	 */
	void setUserId(int  user_id);
	/*! \brief Get The value/score of the metric
	 */
	long long getValue();

	/*! \brief Set The value/score of the metric
	 */
	void setValue(long long  value);

private:
	long long activity_occurence_id;
	std::list <std::string>tags;
	int user_id;
	long long value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MetricResource_H_ */
