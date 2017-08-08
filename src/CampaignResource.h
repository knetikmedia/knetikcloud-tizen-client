/*
 * CampaignResource.h
 *
 * 
 */

#ifndef _CampaignResource_H_
#define _CampaignResource_H_


#include <string>
#include "Property.h"
#include "RewardSetResource.h"
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

class CampaignResource : public Object {
public:
	/*! \brief Constructor.
	 */
	CampaignResource();
	CampaignResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CampaignResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the campaign is active or not.  Defaults to false
	 */
	bool getActive();

	/*! \brief Set Whether the campaign is active or not.  Defaults to false
	 */
	void setActive(bool  active);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service
	 */
	std::string getLeaderboardStrategy();

	/*! \brief Set The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service
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
	/*! \brief Get The name of the next challenge coming up
	 */
	std::string getNextChallenge();

	/*! \brief Set The name of the next challenge coming up
	 */
	void setNextChallenge(std::string  next_challenge);
	/*! \brief Get The date/time of the next challenge coming up
	 */
	long long getNextChallengeDate();

	/*! \brief Set The date/time of the next challenge coming up
	 */
	void setNextChallengeDate(long long  next_challenge_date);
	/*! \brief Get The rewards to give at the end of the campaign. When creating/updating only id is used. Reward set must be pre-existing
	 */
	RewardSetResource getRewardSet();

	/*! \brief Set The rewards to give at the end of the campaign. When creating/updating only id is used. Reward set must be pre-existing
	 */
	void setRewardSet(RewardSetResource  reward_set);
	/*! \brief Get Indicate if the rewards have been given out already
	 */
	std::string getRewardStatus();

	/*! \brief Set Indicate if the rewards have been given out already
	 */
	void setRewardStatus(std::string  reward_status);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getShortDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get A campaign template this campaign is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A campaign template this campaign is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	bool active;
	std::map <std::string, std::string>additional_properties;
	long long created_date;
	long long id;
	std::string leaderboard_strategy;
	std::string long_description;
	std::string name;
	std::string next_challenge;
	long long next_challenge_date;
	RewardSetResource reward_set;
	std::string reward_status;
	std::string short_description;
	std::string _template;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CampaignResource_H_ */
