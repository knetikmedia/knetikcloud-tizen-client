/*
 * ConstantResource.h
 *
 * 
 */

#ifndef _ConstantResource_H_
#define _ConstantResource_H_


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

class ConstantResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ConstantResource();
	ConstantResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ConstantResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);
	/*! \brief Get 
	 */
	std::string getValueType();

	/*! \brief Set 
	 */
	void setValueType(std::string  value_type);

private:
	std::string type;
	std::string value;
	std::string value_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ConstantResource_H_ */
