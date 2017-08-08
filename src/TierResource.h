/*
 * TierResource.h
 *
 * 
 */

#ifndef _TierResource_H_
#define _TierResource_H_


#include <string>
#include "Property.h"
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

class TierResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TierResource();
	TierResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TierResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The name of the tier
	 */
	std::string getName();

	/*! \brief Set The name of the tier
	 */
	void setName(std::string  name);
	/*! \brief Get The required progress for the tier
	 */
	int getRequiredProgress();

	/*! \brief Set The required progress for the tier
	 */
	void setRequiredProgress(int  required_progress);
	/*! \brief Get The name of the triggered event
	 */
	std::string getTriggerEventName();

	/*! \brief Set The name of the triggered event
	 */
	void setTriggerEventName(std::string  trigger_event_name);

private:
	std::map <std::string, std::string>additional_properties;
	std::string name;
	int required_progress;
	std::string trigger_event_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TierResource_H_ */
