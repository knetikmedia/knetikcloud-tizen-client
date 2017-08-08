/*
 * TimePeriodGettable.h
 *
 * 
 */

#ifndef _TimePeriodGettable_H_
#define _TimePeriodGettable_H_


#include <string>
#include "Behavior.h"
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

class TimePeriodGettable : public Object {
public:
	/*! \brief Constructor.
	 */
	TimePeriodGettable();
	TimePeriodGettable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TimePeriodGettable();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get Used for polymorphic type recognition and thus must match an expected type with additional properties
	 */
	std::string getTypeHint();

	/*! \brief Set Used for polymorphic type recognition and thus must match an expected type with additional properties
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get The time period limit
	 */
	int getGetLimit();

	/*! \brief Set The time period limit
	 */
	void setGetLimit(int  get_limit);
	/*! \brief Get The name of a group of items. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that the other properties here will be the same for all, but this is not enforced and the item being recieved will use its settings.
	 */
	std::string getGroupName();

	/*! \brief Set The name of a group of items. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that the other properties here will be the same for all, but this is not enforced and the item being recieved will use its settings.
	 */
	void setGroupName(std::string  group_name);
	/*! \brief Get The length of time
	 */
	int getTimeLength();

	/*! \brief Set The length of time
	 */
	void setTimeLength(int  time_length);
	/*! \brief Get The unit of time
	 */
	std::string getUnitOfTime();

	/*! \brief Set The unit of time
	 */
	void setUnitOfTime(std::string  unit_of_time);

private:
	std::string description;
	std::string type_hint;
	int get_limit;
	std::string group_name;
	int time_length;
	std::string unit_of_time;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TimePeriodGettable_H_ */
