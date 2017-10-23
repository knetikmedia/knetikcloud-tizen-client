/*
 * BreCategoryResource.h
 *
 * 
 */

#ifndef _BreCategoryResource_H_
#define _BreCategoryResource_H_


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

class BreCategoryResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BreCategoryResource();
	BreCategoryResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreCategoryResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The name of the category. Serves as the unique id
	 */
	std::string getName();

	/*! \brief Set The name of the category. Serves as the unique id
	 */
	void setName(std::string  name);
	/*! \brief Get A template this BRE category is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A template this BRE category is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);

private:
	std::map <std::string, std::string>additional_properties;
	std::string name;
	std::string _template;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreCategoryResource_H_ */
