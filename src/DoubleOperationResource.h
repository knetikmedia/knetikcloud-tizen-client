/*
 * DoubleOperationResource.h
 *
 * 
 */

#ifndef _DoubleOperationResource_H_
#define _DoubleOperationResource_H_


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

class DoubleOperationResource : public Object {
public:
	/*! \brief Constructor.
	 */
	DoubleOperationResource();
	DoubleOperationResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DoubleOperationResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<ExpressionResource> getArgs();

	/*! \brief Set 
	 */
	void setArgs(std::list <ExpressionResource> args);
	/*! \brief Get 
	 */
	std::string getOp();

	/*! \brief Set 
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

#endif /* _DoubleOperationResource_H_ */
