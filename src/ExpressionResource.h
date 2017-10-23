/*
 * ExpressionResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
 */

#ifndef _ExpressionResource_H_
#define _ExpressionResource_H_


#include <string>
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

class ExpressionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ExpressionResource();
	ExpressionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ExpressionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDefinition();

	/*! \brief Set 
	 */
	void setDefinition(std::string  definition);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::string definition;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ExpressionResource_H_ */
