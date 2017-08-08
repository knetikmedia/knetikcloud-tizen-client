/*
 * ActionVariableResource.h
 *
 * 
 */

#ifndef _ActionVariableResource_H_
#define _ActionVariableResource_H_


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

class ActionVariableResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActionVariableResource();
	ActionVariableResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActionVariableResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The name of the variable
	 */
	std::string getName();

	/*! \brief Set The name of the variable
	 */
	void setName(std::string  name);
	/*! \brief Get Whether this variable is optional and can be left out/null
	 */
	bool getOptional();

	/*! \brief Set Whether this variable is optional and can be left out/null
	 */
	void setOptional(bool  optional);
	/*! \brief Get The type of the variable (see variable type endpoint for list)
	 */
	std::string getType();

	/*! \brief Set The type of the variable (see variable type endpoint for list)
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

#endif /* _ActionVariableResource_H_ */
