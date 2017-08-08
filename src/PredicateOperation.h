/*
 * PredicateOperation.h
 *
 * 
 */

#ifndef _PredicateOperation_H_
#define _PredicateOperation_H_


#include <string>
#include "Expression«object».h"
#include "Operator.h"
#include <list>
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

class PredicateOperation : public Object {
public:
	/*! \brief Constructor.
	 */
	PredicateOperation();
	PredicateOperation(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PredicateOperation();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<Expression«object»> getArgs();

	/*! \brief Set 
	 */
	void setArgs(std::list <Expression«object»> args);
	/*! \brief Get 
	 */
	Operator getOperator();

	/*! \brief Set 
	 */
	void setOperator(Operator  _operator);

private:
	std::list <Expression«object»>args;
	Operator _operator;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PredicateOperation_H_ */
