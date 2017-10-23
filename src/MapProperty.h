/*
 * MapProperty.h
 *
 * 
 */

#ifndef _MapProperty_H_
#define _MapProperty_H_


#include <string>
#include "Property.h"
#include <list>
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

class MapProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	MapProperty();
	MapProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MapProperty();

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
	/*! \brief Get A map/object of string to sub-property
	 */
	std::map<std::string, std::string> getMap();

	/*! \brief Set A map/object of string to sub-property
	 */
	void setMap(std::map <std::string, std::string> map);

private:
	std::string type;
	std::map <std::string, std::string>map;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MapProperty_H_ */
