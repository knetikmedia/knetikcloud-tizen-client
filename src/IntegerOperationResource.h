/*
 * IntegerOperationResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
 */

#ifndef _IntegerOperationResource_H_
#define _IntegerOperationResource_H_


#include <string>
#include "ExpressionResource.h"
#include "OperationDefinitionResource.h"
#include <list>
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

class IntegerOperationResource : public Object {
public:
	/*! \brief Constructor.
	 */
	IntegerOperationResource();
	IntegerOperationResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IntegerOperationResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The arguments the operator apply to. See notes for details.
	 */
	std::list<ExpressionResource> getArgs();

	/*! \brief Set The arguments the operator apply to. See notes for details.
	 */
	void setArgs(std::list <ExpressionResource> args);
	/*! \brief Get 
	 */
	std::string getDefinition();

	/*! \brief Set 
	 */
	void setDefinition(std::string  definition);
	/*! \brief Get The operator to be used in this predicate. See notes for details.
	 */
	std::string getOp();

	/*! \brief Set The operator to be used in this predicate. See notes for details.
	 */
	void setOp(std::string  op);
	/*! \brief Get 
	 */
	std::string getReturnType();

	/*! \brief Set 
	 */
	void setReturnType(std::string  return_type);
	/*! \brief Get The operators supported by this expression
	 */
	std::list<OperationDefinitionResource> getSupportedOperators();

	/*! \brief Set The operators supported by this expression
	 */
	void setSupportedOperators(std::list <OperationDefinitionResource> supported_operators);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::list <ExpressionResource>args;
	std::string definition;
	std::string op;
	std::string return_type;
	std::list <OperationDefinitionResource>supported_operators;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IntegerOperationResource_H_ */
