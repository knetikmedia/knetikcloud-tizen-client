/*
 * SimpleGroupResource.h
 *
 * 
 */

#ifndef _SimpleGroupResource_H_
#define _SimpleGroupResource_H_


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

class SimpleGroupResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SimpleGroupResource();
	SimpleGroupResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SimpleGroupResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The name of the group. Max 50 characters
	 */
	std::string getName();

	/*! \brief Set The name of the group. Max 50 characters
	 */
	void setName(std::string  name);
	/*! \brief Get Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created. Default: random UUID
	 */
	std::string getUniqueName();

	/*! \brief Set Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created. Default: random UUID
	 */
	void setUniqueName(std::string  unique_name);

private:
	std::string name;
	std::string unique_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SimpleGroupResource_H_ */
