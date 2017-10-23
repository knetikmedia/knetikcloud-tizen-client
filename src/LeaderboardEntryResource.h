/*
 * LeaderboardEntryResource.h
 *
 * 
 */

#ifndef _LeaderboardEntryResource_H_
#define _LeaderboardEntryResource_H_


#include <string>
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

class LeaderboardEntryResource : public Object {
public:
	/*! \brief Constructor.
	 */
	LeaderboardEntryResource();
	LeaderboardEntryResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LeaderboardEntryResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The position of the user in the leaderboard. Null means non-compete or disqualification
	 */
	long long getRank();

	/*! \brief Set The position of the user in the leaderboard. Null means non-compete or disqualification
	 */
	void setRank(long long  rank);
	/*! \brief Get The raw score in this leaderboard. Null means non-compete or disqualification
	 */
	long long getScore();

	/*! \brief Set The raw score in this leaderboard. Null means non-compete or disqualification
	 */
	void setScore(long long  score);
	/*! \brief Get The date this score was recorded or updated. Unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date this score was recorded or updated. Unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The player for this entry
	 */
	SimpleUserResource getUser();

	/*! \brief Set The player for this entry
	 */
	void setUser(SimpleUserResource  user);

private:
	long long rank;
	long long score;
	long long updated_date;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LeaderboardEntryResource_H_ */
