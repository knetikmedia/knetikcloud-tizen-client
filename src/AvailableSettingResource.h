/*
 * AvailableSettingResource.h
 *
 * The definition of an activity parameters: ex: difficulty level
 */

#ifndef _AvailableSettingResource_H_
#define _AvailableSettingResource_H_


#include <string>
#include "SettingOption.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The definition of an activity parameters: ex: difficulty level
 *
 *  \ingroup Models
 *
 */

class AvailableSettingResource : public Object {
public:
	/*! \brief Constructor.
	 */
	AvailableSettingResource();
	AvailableSettingResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AvailableSettingResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the setting is advanced. Default: false
	 */
	bool getAdvancedOption();

	/*! \brief Set Whether the setting is advanced. Default: false
	 */
	void setAdvancedOption(bool  advanced_option);
	/*! \brief Get The default value of the setting (must be in options array). Ex: easy
	 */
	std::string getDefaultValue();

	/*! \brief Set The default value of the setting (must be in options array). Ex: easy
	 */
	void setDefaultValue(std::string  default_value);
	/*! \brief Get The description of the setting: Ex: Choose the difficulty level to show more or less complicated questions (for a trivia activity)
	 */
	std::string getDescription();

	/*! \brief Set The description of the setting: Ex: Choose the difficulty level to show more or less complicated questions (for a trivia activity)
	 */
	void setDescription(std::string  description);
	/*! \brief Get The unique ID for the setting: Ex: difficulty
	 */
	std::string getKey();

	/*! \brief Set The unique ID for the setting: Ex: difficulty
	 */
	void setKey(std::string  key);
	/*! \brief Get The textual name of the setting: Ex: Difficulty Level
	 */
	std::string getName();

	/*! \brief Set The textual name of the setting: Ex: Difficulty Level
	 */
	void setName(std::string  name);
	/*! \brief Get The set of options available for this setting, Ex: easy, medium, hard
	 */
	std::list<SettingOption> getOptions();

	/*! \brief Set The set of options available for this setting, Ex: easy, medium, hard
	 */
	void setOptions(std::list <SettingOption> options);

private:
	bool advanced_option;
	std::string default_value;
	std::string description;
	std::string key;
	std::string name;
	std::list <SettingOption>options;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AvailableSettingResource_H_ */
