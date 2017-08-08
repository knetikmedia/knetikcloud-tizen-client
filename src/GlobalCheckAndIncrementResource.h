/*
 * GlobalCheckAndIncrementResource.h
 *
 * 
 */

#ifndef _GlobalCheckAndIncrementResource_H_
#define _GlobalCheckAndIncrementResource_H_


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

class GlobalCheckAndIncrementResource : public Object {
public:
	/*! \brief Constructor.
	 */
	GlobalCheckAndIncrementResource();
	GlobalCheckAndIncrementResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GlobalCheckAndIncrementResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ExpressionResource getCheckValueResource();

	/*! \brief Set 
	 */
	void setCheckValueResource(ExpressionResource  check_value_resource);
	/*! \brief Get 
	 */
	ExpressionResource getGlobalResource();

	/*! \brief Set 
	 */
	void setGlobalResource(ExpressionResource  global_resource);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	ExpressionResource check_value_resource;
	ExpressionResource global_resource;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GlobalCheckAndIncrementResource_H_ */
