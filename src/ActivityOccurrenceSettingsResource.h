/*
 * ActivityOccurrenceSettingsResource.h
 *
 * 
 */

#ifndef _ActivityOccurrenceSettingsResource_H_
#define _ActivityOccurrenceSettingsResource_H_


#include <string>
#include "CoreActivityOccurrenceSettings.h"
#include "SelectedSettingRequest.h"
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

class ActivityOccurrenceSettingsResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityOccurrenceSettingsResource();
	ActivityOccurrenceSettingsResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityOccurrenceSettingsResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Defines core settings about the activity occurrence that affect how it behaves in the system. Validated against core settings in activity/challenge-activity.
	 */
	CoreActivityOccurrenceSettings getCoreSettings();

	/*! \brief Set Defines core settings about the activity occurrence that affect how it behaves in the system. Validated against core settings in activity/challenge-activity.
	 */
	void setCoreSettings(CoreActivityOccurrenceSettings  core_settings);
	/*! \brief Get The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
	 */
	std::list<SelectedSettingRequest> getSettings();

	/*! \brief Set The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity.
	 */
	void setSettings(std::list <SelectedSettingRequest> settings);

private:
	CoreActivityOccurrenceSettings core_settings;
	std::list <SelectedSettingRequest>settings;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityOccurrenceSettingsResource_H_ */
