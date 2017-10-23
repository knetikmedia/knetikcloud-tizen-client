/*
 * Map«string,object».h
 *
 * 
 */

#ifndef _Map«string,object»_H_
#define _Map«string,object»_H_


#include <string>
#include <map>
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

class Map«string,object» : public Object {
public:
	/*! \brief Constructor.
	 */
	Map«string,object»();
	Map«string,object»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Map«string,object»();

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

#endif /* _Map«string,object»_H_ */
