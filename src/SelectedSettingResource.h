/*
 * SelectedSettingResource.h
 *
 * 
 */

#ifndef _SelectedSettingResource_H_
#define _SelectedSettingResource_H_


#include <string>
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

class SelectedSettingResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SelectedSettingResource();
	SelectedSettingResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SelectedSettingResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The unique ID for the setting
	 */
	std::string getKey();

	/*! \brief Set The unique ID for the setting
	 */
	void setKey(std::string  key);
	/*! \brief Get The textual name of the setting
	 */
	std::string getKeyName();

	/*! \brief Set The textual name of the setting
	 */
	void setKeyName(std::string  key_name);
	/*! \brief Get The unique ID for the option. Must match one of the options from this setting in the activity, if not part of a challenge
	 */
	std::string getValue();

	/*! \brief Set The unique ID for the option. Must match one of the options from this setting in the activity, if not part of a challenge
	 */
	void setValue(std::string  value);
	/*! \brief Get The textual name of the option
	 */
	std::string getValueName();

	/*! \brief Set The textual name of the option
	 */
	void setValueName(std::string  value_name);

private:
	std::string key;
	std::string key_name;
	std::string value;
	std::string value_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SelectedSettingResource_H_ */
