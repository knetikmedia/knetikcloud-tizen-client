/*
 * UsernameLookupResource.h
 *
 * 
 */

#ifndef _UsernameLookupResource_H_
#define _UsernameLookupResource_H_


#include <string>
#include "ExpressionResource.h"
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

class UsernameLookupResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UsernameLookupResource();
	UsernameLookupResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UsernameLookupResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ExpressionResource getLookupKey();

	/*! \brief Set 
	 */
	void setLookupKey(ExpressionResource  lookup_key);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getValueType();

	/*! \brief Set 
	 */
	void setValueType(std::string  value_type);

private:
	ExpressionResource lookup_key;
	std::string type;
	std::string value_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UsernameLookupResource_H_ */
