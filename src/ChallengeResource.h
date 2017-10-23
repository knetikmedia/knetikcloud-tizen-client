/*
 * ChallengeResource.h
 *
 * 
 */

#ifndef _ChallengeResource_H_
#define _ChallengeResource_H_


#include <string>
#include "Property.h"
#include "RewardSetResource.h"
#include "Schedule.h"
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

class ChallengeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChallengeResource();
	ChallengeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChallengeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of activities allowed to this challenge
	 */
	int getActivities();

	/*! \brief Set The number of activities allowed to this challenge
	 */
	void setActivities(int  activities);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The id of the campaign this challenge is a part of. The challenge must be tied to an active campaign before it will spawn events
	 */
	long long getCampaignId();

	/*! \brief Set The id of the campaign this challenge is a part of. The challenge must be tied to an active campaign before it will spawn events
	 */
	void setCampaignId(long long  campaign_id);
	/*! \brief Get The ID of the original challenge it was copied from
	 */
	long long getCopyOf();

	/*! \brief Set The ID of the original challenge it was copied from
	 */
	void setCopyOf(long long  copy_of);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The end date of this challenge in seconds since epoch. required if part of a campaign
	 */
	long long getEndDate();

	/*! \brief Set The end date of this challenge in seconds since epoch. required if part of a campaign
	 */
	void setEndDate(long long  end_date);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service.
	 */
	std::string getLeaderboardStrategy();

	/*! \brief Set The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service.
	 */
	void setLeaderboardStrategy(std::string  leaderboard_strategy);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getLongDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The user friendly name of that resource
	 */
	std::string getName();

	/*! \brief Set The user friendly name of that resource
	 */
	void setName(std::string  name);
	/*! \brief Get The next date this challenge will be occur in seconds since epoch
	 */
	long long getNextEventDate();

	/*! \brief Set The next date this challenge will be occur in seconds since epoch
	 */
	void setNextEventDate(long long  next_event_date);
	/*! \brief Get The number of minutes minimum to wait at the end of this challenge before running rewards, to allow activities to complete
	 */
	int getRewardLagMinutes();

	/*! \brief Set The number of minutes minimum to wait at the end of this challenge before running rewards, to allow activities to complete
	 */
	void setRewardLagMinutes(int  reward_lag_minutes);
	/*! \brief Get The rewards to give at the end of the challenge. When creating/updating only id is used. Reward set must be pre-existing
	 */
	RewardSetResource getRewardSet();

	/*! \brief Set The rewards to give at the end of the challenge. When creating/updating only id is used. Reward set must be pre-existing
	 */
	void setRewardSet(RewardSetResource  reward_set);
	/*! \brief Get The repeat schedule for the challenge
	 */
	Schedule getSchedule();

	/*! \brief Set The repeat schedule for the challenge
	 */
	void setSchedule(Schedule  schedule);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getShortDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get The start date of this challenge in seconds since epoch. required if part of a campaign
	 */
	long long getStartDate();

	/*! \brief Set The start date of this challenge in seconds since epoch. required if part of a campaign
	 */
	void setStartDate(long long  start_date);
	/*! \brief Get A challenge template this challenge is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A challenge template this challenge is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	int activities;
	std::map <std::string, std::string>additional_properties;
	long long campaign_id;
	long long copy_of;
	long long created_date;
	long long end_date;
	long long id;
	std::string leaderboard_strategy;
	std::string long_description;
	std::string name;
	long long next_event_date;
	int reward_lag_minutes;
	RewardSetResource reward_set;
	Schedule schedule;
	std::string short_description;
	long long start_date;
	std::string _template;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChallengeResource_H_ */
