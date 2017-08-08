/*
 * ParameterResource.h
 *
 * 
 */

#ifndef _ParameterResource_H_
#define _ParameterResource_H_


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

class ParameterResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ParameterResource();
	ParameterResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ParameterResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getOf();

	/*! \brief Set 
	 */
	void setOf(std::string  of);
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

private:
	std::string of;
	std::string type;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ParameterResource_H_ */
