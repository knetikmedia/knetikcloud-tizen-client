/*
 * ActivityOccurrenceResource.h
 *
 * A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
 */

#ifndef _ActivityOccurrenceResource_H_
#define _ActivityOccurrenceResource_H_


#include <string>
#include "ActivityEntitlementResource.h"
#include "ActivityUserResource.h"
#include "CoreActivityOccurrenceSettings.h"
#include "SelectedSettingResource.h"
#include "SimpleUserResource.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
 *
 *  \ingroup Models
 *
 */

class ActivityOccurrenceResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityOccurrenceResource();
	ActivityOccurrenceResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityOccurrenceResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the activity
	 */
	long long getActivityId();

	/*! \brief Set The id of the activity
	 */
	void setActivityId(long long  activity_id);
	/*! \brief Get The ids of banned users that cannot join the occurrence. See occurrence-user delete endpoint
	 */
	std::list<int> getBans();

	/*! \brief Set The ids of banned users that cannot join the occurrence. See occurrence-user delete endpoint
	 */
	void setBans(std::list <int> bans);
	/*! \brief Get The id of the challenge activity (as part of the event, required if eventId set)
	 */
	long long getChallengeActivityId();

	/*! \brief Set The id of the challenge activity (as part of the event, required if eventId set)
	 */
	void setChallengeActivityId(long long  challenge_activity_id);
	/*! \brief Get Defines core settings about the activity occurrence that affect how it behaves in the system. Validated against core settings in activity/challenge-activity.
	 */
	CoreActivityOccurrenceSettings getCoreSettings();

	/*! \brief Set Defines core settings about the activity occurrence that affect how it behaves in the system. Validated against core settings in activity/challenge-activity.
	 */
	void setCoreSettings(CoreActivityOccurrenceSettings  core_settings);
	/*! \brief Get The date this occurrence was created, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date this occurrence was created, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity
	 */
	ActivityEntitlementResource getEntitlement();

	/*! \brief Set The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity
	 */
	void setEntitlement(ActivityEntitlementResource  entitlement);
	/*! \brief Get The id of the event
	 */
	long long getEventId();

	/*! \brief Set The id of the event
	 */
	void setEventId(long long  event_id);
	/*! \brief Get The host of the occurrence, if not a participant (will be left out of users array). Must be the caller that creates the occurrence unless admin. Requires activity/challenge to allow host_option of 'non_player' if not admin as well
	 */
	SimpleUserResource getHost();

	/*! \brief Set The host of the occurrence, if not a participant (will be left out of users array). Must be the caller that creates the occurrence unless admin. Requires activity/challenge to allow host_option of 'non_player' if not admin as well
	 */
	void setHost(SimpleUserResource  host);
	/*! \brief Get The id of the activity occurrence
	 */
	long long getId();

	/*! \brief Set The id of the activity occurrence
	 */
	void setId(long long  id);
	/*! \brief Get Indicate if the rewards have been given out already
	 */
	std::string getRewardStatus();

	/*! \brief Set Indicate if the rewards have been given out already
	 */
	void setRewardStatus(std::string  reward_status);
	/*! \brief Get The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
	 */
	std::list<SelectedSettingResource> getSettings();

	/*! \brief Set The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
	 */
	void setSettings(std::list <SelectedSettingResource> settings);
	/*! \brief Get Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials
	 */
	bool getSimulated();

	/*! \brief Set Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials
	 */
	void setSimulated(bool  simulated);
	/*! \brief Get The date this occurrence was started, unix timestamp in seconds. null if not yet started
	 */
	long long getStartDate();

	/*! \brief Set The date this occurrence was started, unix timestamp in seconds. null if not yet started
	 */
	void setStartDate(long long  start_date);
	/*! \brief Get The current status of the occurrence (default: OPEN)
	 */
	std::string getStatus();

	/*! \brief Set The current status of the occurrence (default: OPEN)
	 */
	void setStatus(std::string  status);
	/*! \brief Get The date this occurrence was last updated, unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date this occurrence was last updated, unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission
	 */
	std::list<ActivityUserResource> getUsers();

	/*! \brief Set The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission
	 */
	void setUsers(std::list <ActivityUserResource> users);

private:
	long long activity_id;
	std::list <int>bans;
	long long challenge_activity_id;
	CoreActivityOccurrenceSettings core_settings;
	long long created_date;
	ActivityEntitlementResource entitlement;
	long long event_id;
	SimpleUserResource host;
	long long id;
	std::string reward_status;
	std::list <SelectedSettingResource>settings;
	bool simulated;
	long long start_date;
	std::string status;
	long long updated_date;
	std::list <ActivityUserResource>users;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityOccurrenceResource_H_ */
