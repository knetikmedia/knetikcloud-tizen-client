/*
 * ArgumentResource.h
 *
 * 
 */

#ifndef _ArgumentResource_H_
#define _ArgumentResource_H_


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

class ArgumentResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ArgumentResource();
	ArgumentResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArgumentResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
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

#endif /* _ArgumentResource_H_ */
