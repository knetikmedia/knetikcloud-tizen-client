/*
 * PredicateResource.h
 *
 * 
 */

#ifndef _PredicateResource_H_
#define _PredicateResource_H_


#include <string>
#include "ExpressionResource.h"
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

class PredicateResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PredicateResource();
	PredicateResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PredicateResource();

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
	/*! \brief Get The operator to be used in this predicate. See notes for details.
	 */
	std::string getOp();

	/*! \brief Set The operator to be used in this predicate. See notes for details.
	 */
	void setOp(std::string  op);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::list <ExpressionResource>args;
	std::string op;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PredicateResource_H_ */
