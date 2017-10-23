/*
 * BreTriggerResource.h
 *
 * 
 */

#ifndef _BreTriggerResource_H_
#define _BreTriggerResource_H_


#include <string>
#include "BreTriggerParameterDefinition.h"
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

class BreTriggerResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BreTriggerResource();
	BreTriggerResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreTriggerResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The category this trigger belongs to. See endpoints for related asset information. All new triggers are in category 'custom'
	 */
	std::string getCategory();

	/*! \brief Set The category this trigger belongs to. See endpoints for related asset information. All new triggers are in category 'custom'
	 */
	void setCategory(std::string  category);
	/*! \brief Get The unique name for the event. This serves as the unique identifier. Cannot be changed after creation
	 */
	std::string getEventName();

	/*! \brief Set The unique name for the event. This serves as the unique identifier. Cannot be changed after creation
	 */
	void setEventName(std::string  event_name);
	/*! \brief Get A list of parameters that will be sent with the event when the trigger is fired. These must be included in the event and match the described types
	 */
	std::list<BreTriggerParameterDefinition> getParameters();

	/*! \brief Set A list of parameters that will be sent with the event when the trigger is fired. These must be included in the event and match the described types
	 */
	void setParameters(std::list <BreTriggerParameterDefinition> parameters);
	/*! \brief Get Where this trigger came from. System triggers cannot be removed or updated
	 */
	bool getSystemTrigger();

	/*! \brief Set Where this trigger came from. System triggers cannot be removed or updated
	 */
	void setSystemTrigger(bool  system_trigger);
	/*! \brief Get A list of tags for filtering
	 */
	std::list<std::string> getTags();

	/*! \brief Set A list of tags for filtering
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get A description of the trigger
	 */
	std::string getTriggerDescription();

	/*! \brief Set A description of the trigger
	 */
	void setTriggerDescription(std::string  trigger_description);
	/*! \brief Get A human readable name for this trigger
	 */
	std::string getTriggerName();

	/*! \brief Set A human readable name for this trigger
	 */
	void setTriggerName(std::string  trigger_name);

private:
	std::string category;
	std::string event_name;
	std::list <BreTriggerParameterDefinition>parameters;
	bool system_trigger;
	std::list <std::string>tags;
	std::string trigger_description;
	std::string trigger_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreTriggerResource_H_ */
