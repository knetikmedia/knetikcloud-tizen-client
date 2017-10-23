/*
 * DoubleProperty.h
 *
 * 
 */

#ifndef _DoubleProperty_H_
#define _DoubleProperty_H_


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

class DoubleProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	DoubleProperty();
	DoubleProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DoubleProperty();

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
	double getValue();

	/*! \brief Set The value
	 */
	void setValue(double  value);

private:
	std::string type;
	double value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DoubleProperty_H_ */
