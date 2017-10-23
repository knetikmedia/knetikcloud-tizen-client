/*
 * PropertyFieldListResource.h
 *
 * 
 */

#ifndef _PropertyFieldListResource_H_
#define _PropertyFieldListResource_H_


#include <string>
#include "PropertyFieldResource.h"
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

class PropertyFieldListResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PropertyFieldListResource();
	PropertyFieldListResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PropertyFieldListResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of fields for the property definition.
	 */
	std::list<PropertyFieldResource> getPropertyDefinitionFields();

	/*! \brief Set A list of fields for the property definition.
	 */
	void setPropertyDefinitionFields(std::list <PropertyFieldResource> property_definition_fields);
	/*! \brief Get A list of fields for the property.
	 */
	std::list<PropertyFieldResource> getPropertyFields();

	/*! \brief Set A list of fields for the property.
	 */
	void setPropertyFields(std::list <PropertyFieldResource> property_fields);
	/*! \brief Get The type for the property this describes.
	 */
	std::string getPropertyType();

	/*! \brief Set The type for the property this describes.
	 */
	void setPropertyType(std::string  property_type);

private:
	std::list <PropertyFieldResource>property_definition_fields;
	std::list <PropertyFieldResource>property_fields;
	std::string property_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PropertyFieldListResource_H_ */
