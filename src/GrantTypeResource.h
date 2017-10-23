/*
 * GrantTypeResource.h
 *
 * 
 */

#ifndef _GrantTypeResource_H_
#define _GrantTypeResource_H_


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

class GrantTypeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	GrantTypeResource();
	GrantTypeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GrantTypeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the grant type
	 */
	std::string getDescription();

	/*! \brief Set The description of the grant type
	 */
	void setDescription(std::string  description);
	/*! \brief Get The name of the grant type
	 */
	std::string getName();

	/*! \brief Set The name of the grant type
	 */
	void setName(std::string  name);

private:
	std::string description;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GrantTypeResource_H_ */
