/*
 * Schedule.h
 *
 * 
 */

#ifndef _Schedule_H_
#define _Schedule_H_


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

class Schedule : public Object {
public:
	/*! \brief Constructor.
	 */
	Schedule();
	Schedule(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Schedule();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The duration of the repeatable events
	 */
	int getDuration();

	/*! \brief Set The duration of the repeatable events
	 */
	void setDuration(int  duration);
	/*! \brief Get The unit of time for the duration field
	 */
	std::string getDurationUnit();

	/*! \brief Set The unit of time for the duration field
	 */
	void setDurationUnit(std::string  duration_unit);
	/*! \brief Get How often the event is scheduled
	 */
	std::string getRepeat();

	/*! \brief Set How often the event is scheduled
	 */
	void setRepeat(std::string  repeat);

private:
	int duration;
	std::string duration_unit;
	std::string repeat;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Schedule_H_ */
