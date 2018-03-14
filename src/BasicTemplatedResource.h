/*
 * BasicTemplatedResource.h
 *
 * 
 */

#ifndef _BasicTemplatedResource_H_
#define _BasicTemplatedResource_H_


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

class BasicTemplatedResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BasicTemplatedResource();
	BasicTemplatedResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BasicTemplatedResource();

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
	/*! \brief Get An article template this article is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set An article template this article is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);

private:
	std::map <std::string, std::string>additional_properties;
	std::string _template;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BasicTemplatedResource_H_ */
