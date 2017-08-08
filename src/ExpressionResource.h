/*
 * ExpressionResource.h
 *
 * 
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


/*! \brief 
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
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ExpressionResource_H_ */
