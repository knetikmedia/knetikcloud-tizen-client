/*
 * BreGlobalScopeDefinition.h
 *
 * 
 */

#ifndef _BreGlobalScopeDefinition_H_
#define _BreGlobalScopeDefinition_H_


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

class BreGlobalScopeDefinition : public Object {
public:
	/*! \brief Constructor.
	 */
	BreGlobalScopeDefinition();
	BreGlobalScopeDefinition(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreGlobalScopeDefinition();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The name of the scoping parameter. This is used as the unique identifier of this scope
	 */
	std::string getName();

	/*! \brief Set The name of the scoping parameter. This is used as the unique identifier of this scope
	 */
	void setName(std::string  name);
	/*! \brief Get The variable type of this scoping parameter. See Bre Variables endpoint for list
	 */
	std::string getType();

	/*! \brief Set The variable type of this scoping parameter. See Bre Variables endpoint for list
	 */
	void setType(std::string  type);

private:
	std::string name;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreGlobalScopeDefinition_H_ */
