/*
 * TimePeriodUsable.h
 *
 * 
 */

#ifndef _TimePeriodUsable_H_
#define _TimePeriodUsable_H_


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

class TimePeriodUsable : public Object {
public:
	/*! \brief Constructor.
	 */
	TimePeriodUsable();
	TimePeriodUsable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TimePeriodUsable();

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
	/*! \brief Get The amount of times it can be used
	 */
	int getMaxUse();

	/*! \brief Set The amount of times it can be used
	 */
	void setMaxUse(int  max_use);
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
	int max_use;
	int time_length;
	std::string unit_of_time;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TimePeriodUsable_H_ */
