/*
 * BooleanResource.h
 *
 * 
 */

#ifndef _BooleanResource_H_
#define _BooleanResource_H_


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

class BooleanResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BooleanResource();
	BooleanResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BooleanResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getValue();

	/*! \brief Set 
	 */
	void setValue(bool  value);

private:
	bool value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BooleanResource_H_ */
