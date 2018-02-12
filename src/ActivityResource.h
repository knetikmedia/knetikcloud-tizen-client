/*
 * ActivityResource.h
 *
 * Represents an activity that can be parameterized and tracked through metrics (scores, etc)
 */

#ifndef _ActivityResource_H_
#define _ActivityResource_H_


#include <string>
#include "ActivityEntitlementResource.h"
#include "AvailableSettingResource.h"
#include "CoreActivitySettings.h"
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


/*! \brief Represents an activity that can be parameterized and tracked through metrics (scores, etc)
 *
 *  \ingroup Models
 *
 */

class ActivityResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityResource();
	ActivityResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties keyed on the property name. Used to further describe an activity. While settings will vary from one activity occurrence (a game) to another, additional properties are shared by all the occurrences of this activity. Ex: Activity Logo, Disclaimer, Greeting, etc. Validated against template if one exists for activities
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties keyed on the property name. Used to further describe an activity. While settings will vary from one activity occurrence (a game) to another, additional properties are shared by all the occurrences of this activity. Ex: Activity Logo, Disclaimer, Greeting, etc. Validated against template if one exists for activities
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get Defines core settings about the activity that affect how it can be created/played by users.
	 */
	CoreActivitySettings getCoreSettings();

	/*! \brief Set Defines core settings about the activity that affect how it can be created/played by users.
	 */
	void setCoreSettings(CoreActivitySettings  core_settings);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The list of items that can be used for entitlement (wager amounts/etc)
	 */
	std::list<ActivityEntitlementResource> getEntitlements();

	/*! \brief Set The list of items that can be used for entitlement (wager amounts/etc)
	 */
	void setEntitlements(std::list <ActivityEntitlementResource> entitlements);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get Details about how to launch the activity
	 */
	std::string getLaunch();

	/*! \brief Set Details about how to launch the activity
	 */
	void setLaunch(std::string  launch);
	/*! \brief Get The strategy for calculating the leaderboard. No strategy means no leaderboard for the top level context. Value MUST come from the list of available strategies from the Leaderboard Service
	 */
	std::string getLeaderboardStrategy();

	/*! \brief Set The strategy for calculating the leaderboard. No strategy means no leaderboard for the top level context. Value MUST come from the list of available strategies from the Leaderboard Service
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
	/*! \brief Get The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing
	 */
	RewardSetResource getRewardSet();

	/*! \brief Set The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing
	 */
	void setRewardSet(RewardSetResource  reward_set);
	/*! \brief Get Define what parameters are required/available to start and run an activity. For example: Difficulty, Number of Questions, Character name, Avatar, Duration, etc. Not populated when getting listing
	 */
	std::list<AvailableSettingResource> getSettings();

	/*! \brief Set Define what parameters are required/available to start and run an activity. For example: Difficulty, Number of Questions, Character name, Avatar, Duration, etc. Not populated when getting listing
	 */
	void setSettings(std::list <AvailableSettingResource> settings);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getShortDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get Whether this activity is a template for other activities. Default: false
	 */
	bool getTemplate();

	/*! \brief Set Whether this activity is a template for other activities. Default: false
	 */
	void setTemplate(bool  _template);
	/*! \brief Get An activity template this activity is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplateId();

	/*! \brief Set An activity template this activity is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplateId(std::string  template_id);
	/*! \brief Get The type of the activity
	 */
	std::string getType();

	/*! \brief Set The type of the activity
	 */
	void setType(std::string  type);
	/*! \brief Get The unique key (for static reference in code) of the activity
	 */
	std::string getUniqueKey();

	/*! \brief Set The unique key (for static reference in code) of the activity
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::map <std::string, std::string>additional_properties;
	CoreActivitySettings core_settings;
	long long created_date;
	std::list <ActivityEntitlementResource>entitlements;
	long long id;
	std::string launch;
	std::string leaderboard_strategy;
	std::string long_description;
	std::string name;
	RewardSetResource reward_set;
	std::list <AvailableSettingResource>settings;
	std::string short_description;
	bool _template;
	std::string template_id;
	std::string type;
	std::string unique_key;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityResource_H_ */
