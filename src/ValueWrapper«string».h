/*
 * ValueWrapper«string».h
 *
 * 
 */

#ifndef _ValueWrapper«string»_H_
#define _ValueWrapper«string»_H_


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

class ValueWrapper«string» : public Object {
public:
	/*! \brief Constructor.
	 */
	ValueWrapper«string»();
	ValueWrapper«string»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ValueWrapper«string»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);

private:
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ValueWrapper«string»_H_ */
