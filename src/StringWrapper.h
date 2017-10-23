/*
 * StringWrapper.h
 *
 * 
 */

#ifndef _StringWrapper_H_
#define _StringWrapper_H_


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

class StringWrapper : public Object {
public:
	/*! \brief Constructor.
	 */
	StringWrapper();
	StringWrapper(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StringWrapper();

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

#endif /* _StringWrapper_H_ */
