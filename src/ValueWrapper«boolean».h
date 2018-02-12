/*
 * ValueWrapper«boolean».h
 *
 * 
 */

#ifndef _ValueWrapper«boolean»_H_
#define _ValueWrapper«boolean»_H_


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

class ValueWrapper«boolean» : public Object {
public:
	/*! \brief Constructor.
	 */
	ValueWrapper«boolean»();
	ValueWrapper«boolean»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ValueWrapper«boolean»();

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

#endif /* _ValueWrapper«boolean»_H_ */
