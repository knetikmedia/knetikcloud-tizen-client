/*
 * CategoryResource.h
 *
 * 
 */

#ifndef _CategoryResource_H_
#define _CategoryResource_H_


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

class CategoryResource : public Object {
public:
	/*! \brief Constructor.
	 */
	CategoryResource();
	CategoryResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CategoryResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the category is currently active. If not, it and its questions will be filtered out.
	 */
	bool getActive();

	/*! \brief Set Whether the category is currently active. If not, it and its questions will be filtered out.
	 */
	void setActive(bool  active);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The unique ID for this category
	 */
	std::string getId();

	/*! \brief Set The unique ID for this category
	 */
	void setId(std::string  id);
	/*! \brief Get The name of this category. Cannot be blank
	 */
	std::string getName();

	/*! \brief Set The name of this category. Cannot be blank
	 */
	void setName(std::string  name);
	/*! \brief Get A category template this category is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A category template this category is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);

private:
	bool active;
	std::map <std::string, std::string>additional_properties;
	std::string id;
	std::string name;
	std::string _template;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CategoryResource_H_ */
