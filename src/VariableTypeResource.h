/*
 * VariableTypeResource.h
 *
 * 
 */

#ifndef _VariableTypeResource_H_
#define _VariableTypeResource_H_


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

class VariableTypeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	VariableTypeResource();
	VariableTypeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VariableTypeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The base class of the type
	 */
	std::string getBase();

	/*! \brief Set The base class of the type
	 */
	void setBase(std::string  base);
	/*! \brief Get Whether the type comes from a set of valid values that the system can provided (such as users)
	 */
	bool getEnumerable();

	/*! \brief Set Whether the type comes from a set of valid values that the system can provided (such as users)
	 */
	void setEnumerable(bool  enumerable);
	/*! \brief Get The name of the variable type. Used as the unique id
	 */
	std::string getName();

	/*! \brief Set The name of the variable type. Used as the unique id
	 */
	void setName(std::string  name);

private:
	std::string base;
	bool enumerable;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VariableTypeResource_H_ */
