/*
 * DateProperty.h
 *
 * 
 */

#ifndef _DateProperty_H_
#define _DateProperty_H_


#include <string>
#include "Property.h"
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

class DateProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	DateProperty();
	DateProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DateProperty();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	std::string getType();

	/*! \brief Set The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	void setType(std::string  type);
	/*! \brief Get The value
	 */
	long long getValue();

	/*! \brief Set The value
	 */
	void setValue(long long  value);

private:
	std::string type;
	long long value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DateProperty_H_ */
