/*
 * Expression«object».h
 *
 * 
 */

#ifndef _Expression«object»_H_
#define _Expression«object»_H_


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

class Expression«object» : public Object {
public:
	/*! \brief Constructor.
	 */
	Expression«object»();
	Expression«object»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Expression«object»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _Expression«object»_H_ */
