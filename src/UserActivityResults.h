/*
 * UserActivityResults.h
 *
 * 
 */

#ifndef _UserActivityResults_H_
#define _UserActivityResults_H_


#include <string>
#include "RewardCurrencyResource.h"
#include "RewardItemResource.h"
#include "SimpleUserResource.h"
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

class UserActivityResults : public Object {
public:
	/*! \brief Constructor.
	 */
	UserActivityResults();
	UserActivityResults(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserActivityResults();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Any currency rewarded to this user
	 */
	std::list<RewardCurrencyResource> getCurrencyRewards();

	/*! \brief Set Any currency rewarded to this user
	 */
	void setCurrencyRewards(std::list <RewardCurrencyResource> currency_rewards);
	/*! \brief Get Any items rewarded to this user
	 */
	std::list<RewardItemResource> getItemRewards();

	/*! \brief Set Any items rewarded to this user
	 */
	void setItemRewards(std::list <RewardItemResource> item_rewards);
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
	/*! \brief Get Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 10 tags and 50 characters each
	 */
	std::list<std::string> getTags();

	/*! \brief Set Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 10 tags and 50 characters each
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get The number of users tied at this rank, including this user. 1 means no tie
	 */
	int getTies();

	/*! \brief Set The number of users tied at this rank, including this user. 1 means no tie
	 */
	void setTies(int  ties);
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
	std::list <RewardCurrencyResource>currency_rewards;
	std::list <RewardItemResource>item_rewards;
	long long rank;
	long long score;
	std::list <std::string>tags;
	int ties;
	long long updated_date;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserActivityResults_H_ */
