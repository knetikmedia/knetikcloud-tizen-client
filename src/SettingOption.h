/*
 * SettingOption.h
 *
 * 
 */

#ifndef _SettingOption_H_
#define _SettingOption_H_


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

class SettingOption : public Object {
public:
	/*! \brief Constructor.
	 */
	SettingOption();
	SettingOption(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SettingOption();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The textual name of the option: Ex: Hard (level 10)
	 */
	std::string getName();

	/*! \brief Set The textual name of the option: Ex: Hard (level 10)
	 */
	void setName(std::string  name);
	/*! \brief Get The value of the option. Ex: 10
	 */
	std::string getValue();

	/*! \brief Set The value of the option. Ex: 10
	 */
	void setValue(std::string  value);

private:
	std::string name;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SettingOption_H_ */
