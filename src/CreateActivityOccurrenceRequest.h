/*
 * CreateActivityOccurrenceRequest.h
 *
 * A occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings
 */

#ifndef _CreateActivityOccurrenceRequest_H_
#define _CreateActivityOccurrenceRequest_H_


#include <string>
#include "ItemIdRequest.h"
#include "Participant.h"
#include "SelectedSettingRequest.h"
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

class CreateActivityOccurrenceRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateActivityOccurrenceRequest();
	CreateActivityOccurrenceRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateActivityOccurrenceRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the activity, only needed when outside of challenge/event
	 */
	long long getActivityId();

	/*! \brief Set The id of the activity, only needed when outside of challenge/event
	 */
	void setActivityId(long long  activity_id);
	/*! \brief Get The id of the challenge activity (required if playing in a challenge/event). Note that this is the challenge_activity_id in case the same activity apears twice in the challenge.
	 */
	long long getChallengeActivityId();

	/*! \brief Set The id of the challenge activity (required if playing in a challenge/event). Note that this is the challenge_activity_id in case the same activity apears twice in the challenge.
	 */
	void setChallengeActivityId(long long  challenge_activity_id);
	/*! \brief Get The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity
	 */
	ItemIdRequest getEntitlement();

	/*! \brief Set The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity
	 */
	void setEntitlement(ItemIdRequest  entitlement);
	/*! \brief Get The id of the event this occurence is a part of, if any
	 */
	long long getEventId();

	/*! \brief Set The id of the event this occurence is a part of, if any
	 */
	void setEventId(long long  event_id);
	/*! \brief Get The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
	 */
	std::list<SelectedSettingRequest> getSettings();

	/*! \brief Set The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
	 */
	void setSettings(std::list <SelectedSettingRequest> settings);
	/*! \brief Get Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials
	 */
	bool getSimulated();

	/*! \brief Set Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials
	 */
	void setSimulated(bool  simulated);
	/*! \brief Get The current status of the occurrence (default: SETUP).
	 */
	std::string getStatus();

	/*! \brief Set The current status of the occurrence (default: SETUP).
	 */
	void setStatus(std::string  status);
	/*! \brief Get The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission
	 */
	std::list<Participant> getUsers();

	/*! \brief Set The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission
	 */
	void setUsers(std::list <Participant> users);

private:
	long long activity_id;
	long long challenge_activity_id;
	ItemIdRequest entitlement;
	long long event_id;
	std::list <SelectedSettingRequest>settings;
	bool simulated;
	std::string status;
	std::list <Participant>users;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateActivityOccurrenceRequest_H_ */
