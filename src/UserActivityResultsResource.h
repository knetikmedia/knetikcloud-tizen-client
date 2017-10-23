/*
 * UserActivityResultsResource.h
 *
 * 
 */

#ifndef _UserActivityResultsResource_H_
#define _UserActivityResultsResource_H_


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

class UserActivityResultsResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserActivityResultsResource();
	UserActivityResultsResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserActivityResultsResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The raw score. Null means non-compete or disqualification
	 */
	long long getScore();

	/*! \brief Set The raw score. Null means non-compete or disqualification
	 */
	void setScore(long long  score);
	/*! \brief Get Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each
	 */
	std::list<std::string> getTags();

	/*! \brief Set Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get The id of the player
	 */
	int getUserId();

	/*! \brief Set The id of the player
	 */
	void setUserId(int  user_id);

private:
	long long score;
	std::list <std::string>tags;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserActivityResultsResource_H_ */
