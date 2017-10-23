/*
 * BreEvent.h
 *
 * 
 */

#ifndef _BreEvent_H_
#define _BreEvent_H_


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

class BreEvent : public Object {
public:
	/*! \brief Constructor.
	 */
	BreEvent();
	BreEvent(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreEvent();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The event name of the trigger to be fired
	 */
	std::string getEventName();

	/*! \brief Set The event name of the trigger to be fired
	 */
	void setEventName(std::string  event_name);
	/*! \brief Get The parameters to the event. A Map (assosiative array) with a key for each trigger parameter name and a corrosponding value.
	 */
	std::string getParams();

	/*! \brief Set The parameters to the event. A Map (assosiative array) with a key for each trigger parameter name and a corrosponding value.
	 */
	void setParams(std::string  params);

private:
	std::string event_name;
	std::string params;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreEvent_H_ */
