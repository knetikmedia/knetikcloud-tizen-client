/*
 * LookupTypeResource.h
 *
 * 
 */

#ifndef _LookupTypeResource_H_
#define _LookupTypeResource_H_


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

class LookupTypeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	LookupTypeResource();
	LookupTypeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LookupTypeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the expression type
	 */
	std::string getDescription();

	/*! \brief Set The description of the expression type
	 */
	void setDescription(std::string  description);
	/*! \brief Get The variable type the key expression must be, or null if it's dependent (see description for explanation in this case)
	 */
	std::string getKeyType();

	/*! \brief Set The variable type the key expression must be, or null if it's dependent (see description for explanation in this case)
	 */
	void setKeyType(std::string  key_type);
	/*! \brief Get The name of the expression type
	 */
	std::string getName();

	/*! \brief Set The name of the expression type
	 */
	void setName(std::string  name);
	/*! \brief Get The variable type of the value this expression returns, or null if it's dependent (see description for explanation in this case)
	 */
	std::string getValueType();

	/*! \brief Set The variable type of the value this expression returns, or null if it's dependent (see description for explanation in this case)
	 */
	void setValueType(std::string  value_type);

private:
	std::string description;
	std::string key_type;
	std::string name;
	std::string value_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LookupTypeResource_H_ */
