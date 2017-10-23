/*
 * GlobalCheckAndIncrementResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
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


/*! \brief Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
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
	std::string getDefinition();

	/*! \brief Set 
	 */
	void setDefinition(std::string  definition);
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
	std::string definition;
	ExpressionResource global_resource;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GlobalCheckAndIncrementResource_H_ */
