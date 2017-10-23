/*
 * PropertyFieldResource.h
 *
 * 
 */

#ifndef _PropertyFieldResource_H_
#define _PropertyFieldResource_H_


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

class PropertyFieldResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PropertyFieldResource();
	PropertyFieldResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PropertyFieldResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A description of the field
	 */
	std::string getDescription();

	/*! \brief Set A description of the field
	 */
	void setDescription(std::string  description);
	/*! \brief Get The type of values within a 'list' type field
	 */
	std::string getInnerType();

	/*! \brief Set The type of values within a 'list' type field
	 */
	void setInnerType(std::string  inner_type);
	/*! \brief Get A description of fields within objects within a 'list' type field, when inner_type is 'object'
	 */
	std::list<PropertyFieldResource> getInnerTypeFields();

	/*! \brief Set A description of fields within objects within a 'list' type field, when inner_type is 'object'
	 */
	void setInnerTypeFields(std::list <PropertyFieldResource> inner_type_fields);
	/*! \brief Get The name of the field
	 */
	std::string getName();

	/*! \brief Set The name of the field
	 */
	void setName(std::string  name);
	/*! \brief Get Whether the field is required
	 */
	bool getRequired();

	/*! \brief Set Whether the field is required
	 */
	void setRequired(bool  required);
	/*! \brief Get The type of the field
	 */
	std::string getType();

	/*! \brief Set The type of the field
	 */
	void setType(std::string  type);
	/*! \brief Get A list of valid values for 'enum' type fields
	 */
	std::list<std::string> getValidValues();

	/*! \brief Set A list of valid values for 'enum' type fields
	 */
	void setValidValues(std::list <std::string> valid_values);

private:
	std::string description;
	std::string inner_type;
	std::list <PropertyFieldResource>inner_type_fields;
	std::string name;
	bool required;
	std::string type;
	std::list <std::string>valid_values;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PropertyFieldResource_H_ */
