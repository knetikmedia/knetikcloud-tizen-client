/*
 * BreTriggerParameterDefinition.h
 *
 * 
 */

#ifndef _BreTriggerParameterDefinition_H_
#define _BreTriggerParameterDefinition_H_


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

class BreTriggerParameterDefinition : public Object {
public:
	/*! \brief Constructor.
	 */
	BreTriggerParameterDefinition();
	BreTriggerParameterDefinition(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreTriggerParameterDefinition();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The name of the parameter. This is used as the unique identifier of this parameter
	 */
	std::string getName();

	/*! \brief Set The name of the parameter. This is used as the unique identifier of this parameter
	 */
	void setName(std::string  name);
	/*! \brief Get Whether this parameter can be left off when firing the event. Default false
	 */
	bool getOptional();

	/*! \brief Set Whether this parameter can be left off when firing the event. Default false
	 */
	void setOptional(bool  optional);
	/*! \brief Get The variable type of this parameter. See Bre Variables endpoint for list
	 */
	std::string getType();

	/*! \brief Set The variable type of this parameter. See Bre Variables endpoint for list
	 */
	void setType(std::string  type);

private:
	std::string name;
	bool optional;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreTriggerParameterDefinition_H_ */
