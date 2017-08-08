/*
 * EventContextResource.h
 *
 * 
 */

#ifndef _EventContextResource_H_
#define _EventContextResource_H_


#include <string>
#include "ExpressionResource.h"
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

class EventContextResource : public Object {
public:
	/*! \brief Constructor.
	 */
	EventContextResource();
	EventContextResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~EventContextResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getEventName();

	/*! \brief Set 
	 */
	void setEventName(std::string  event_name);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getParameters();

	/*! \brief Set 
	 */
	void setParameters(std::map <std::string, std::string> parameters);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::string event_name;
	std::map <std::string, std::string>parameters;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _EventContextResource_H_ */
