/*
 * IntWrapper.h
 *
 * 
 */

#ifndef _IntWrapper_H_
#define _IntWrapper_H_


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

class IntWrapper : public Object {
public:
	/*! \brief Constructor.
	 */
	IntWrapper();
	IntWrapper(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IntWrapper();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getValue();

	/*! \brief Set 
	 */
	void setValue(int  value);

private:
	int value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IntWrapper_H_ */
