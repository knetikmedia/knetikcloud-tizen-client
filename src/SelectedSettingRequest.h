/*
 * SelectedSettingRequest.h
 *
 * 
 */

#ifndef _SelectedSettingRequest_H_
#define _SelectedSettingRequest_H_


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

class SelectedSettingRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	SelectedSettingRequest();
	SelectedSettingRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SelectedSettingRequest();

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
	/*! \brief Get The unique ID for the option. Must match one of the options from this setting in the activity, if not part of a challenge
	 */
	std::string getValue();

	/*! \brief Set The unique ID for the option. Must match one of the options from this setting in the activity, if not part of a challenge
	 */
	void setValue(std::string  value);

private:
	std::string key;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SelectedSettingRequest_H_ */
