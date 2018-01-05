/*
 * IntegerPropertyDefinitionResource.h
 *
 * 
 */

#ifndef _IntegerPropertyDefinitionResource_H_
#define _IntegerPropertyDefinitionResource_H_


#include <string>
#include "PropertyDefinitionResource.h"
#include "PropertyFieldListResource.h"
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

class IntegerPropertyDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	IntegerPropertyDefinitionResource();
	IntegerPropertyDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IntegerPropertyDefinitionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the property
	 */
	std::string getDescription();

	/*! \brief Set The description of the property
	 */
	void setDescription(std::string  description);
	/*! \brief Get A list of the fields on both the property definition and property of this type
	 */
	PropertyFieldListResource getFieldList();

	/*! \brief Set A list of the fields on both the property definition and property of this type
	 */
	void setFieldList(PropertyFieldListResource  field_list);
	/*! \brief Get The friendly front-facing name of the property
	 */
	std::string getFriendlyName();

	/*! \brief Set The friendly front-facing name of the property
	 */
	void setFriendlyName(std::string  friendly_name);
	/*! \brief Get The name of the property
	 */
	std::string getName();

	/*! \brief Set The name of the property
	 */
	void setName(std::string  name);
	/*! \brief Get The JSON path to the option label
	 */
	std::string getOptionLabelPath();

	/*! \brief Set The JSON path to the option label
	 */
	void setOptionLabelPath(std::string  option_label_path);
	/*! \brief Get The JSON path to the option value
	 */
	std::string getOptionValuePath();

	/*! \brief Set The JSON path to the option value
	 */
	void setOptionValuePath(std::string  option_value_path);
	/*! \brief Get URL of service containing the property options (assumed JSON array)
	 */
	std::string getOptionsUrl();

	/*! \brief Set URL of service containing the property options (assumed JSON array)
	 */
	void setOptionsUrl(std::string  options_url);
	/*! \brief Get Whether the property is required
	 */
	bool getRequired();

	/*! \brief Set Whether the property is required
	 */
	void setRequired(bool  required);
	/*! \brief Get The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	std::string getType();

	/*! \brief Set The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	void setType(std::string  type);
	/*! \brief Get If provided, the maximum value
	 */
	int getMax();

	/*! \brief Set If provided, the maximum value
	 */
	void setMax(int  max);
	/*! \brief Get If provided, the minimum value
	 */
	int getMin();

	/*! \brief Set If provided, the minimum value
	 */
	void setMin(int  min);

private:
	std::string description;
	PropertyFieldListResource field_list;
	std::string friendly_name;
	std::string name;
	std::string option_label_path;
	std::string option_value_path;
	std::string options_url;
	bool required;
	std::string type;
	int max;
	int min;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IntegerPropertyDefinitionResource_H_ */
