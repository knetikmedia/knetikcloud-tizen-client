/*
 * Collection«string».h
 *
 * 
 */

#ifndef _Collection«string»_H_
#define _Collection«string»_H_


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

class Collection«string» : public Object {
public:
	/*! \brief Constructor.
	 */
	Collection«string»();
	Collection«string»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Collection«string»();

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

#endif /* _Collection«string»_H_ */
