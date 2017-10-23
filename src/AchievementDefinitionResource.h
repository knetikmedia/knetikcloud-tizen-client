/*
 * AchievementDefinitionResource.h
 *
 * 
 */

#ifndef _AchievementDefinitionResource_H_
#define _AchievementDefinitionResource_H_


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

class AchievementDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	AchievementDefinitionResource();
	AchievementDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AchievementDefinitionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this resource type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this resource type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The description of the achievement. Must be at least 2 characters in length.
	 */
	std::string getDescription();

	/*! \brief Set The description of the achievement. Must be at least 2 characters in length.
	 */
	void setDescription(std::string  description);
	/*! \brief Get Whether the achievement is hidden from the user
	 */
	bool getHidden();

	/*! \brief Set Whether the achievement is hidden from the user
	 */
	void setHidden(bool  hidden);
	/*! \brief Get The name of the achievement. Must be at least 6 characters in length. IMMUTABLE
	 */
	std::string getName();

	/*! \brief Set The name of the achievement. Must be at least 6 characters in length. IMMUTABLE
	 */
	void setName(std::string  name);
	/*! \brief Get The required progress for the achievement definition
	 */
	int getRequiredProgress();

	/*! \brief Set The required progress for the achievement definition
	 */
	void setRequiredProgress(int  required_progress);
	/*! \brief Get The id of the rule generated for this achievement
	 */
	std::string getRuleId();

	/*! \brief Set The id of the rule generated for this achievement
	 */
	void setRuleId(std::string  rule_id);
	/*! \brief Get The tags for the achievement definition
	 */
	std::list<std::string> getTags();

	/*! \brief Set The tags for the achievement definition
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get An achievement template this achievement is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set An achievement template this achievement is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The name of the trigger event associated with this achievement
	 */
	std::string getTriggerEventName();

	/*! \brief Set The name of the trigger event associated with this achievement
	 */
	void setTriggerEventName(std::string  trigger_event_name);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::map <std::string, std::string>additional_properties;
	long long created_date;
	std::string description;
	bool hidden;
	std::string name;
	int required_progress;
	std::string rule_id;
	std::list <std::string>tags;
	std::string _template;
	std::string trigger_event_name;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AchievementDefinitionResource_H_ */
