/*
 * ListProperty.h
 *
 * 
 */

#ifndef _ListProperty_H_
#define _ListProperty_H_


#include <string>
#include "Property.h"
#include <list>
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

class ListProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	ListProperty();
	ListProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ListProperty();

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
	/*! \brief Get The list of properties
	 */
	std::list<Property> getValues();

	/*! \brief Set The list of properties
	 */
	void setValues(std::list <Property> values);

private:
	std::string type;
	std::list <Property>values;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ListProperty_H_ */
