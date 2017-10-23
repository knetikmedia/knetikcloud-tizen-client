/*
 * TemplateResource.h
 *
 * 
 */

#ifndef _TemplateResource_H_
#define _TemplateResource_H_


#include <string>
#include "PropertyDefinitionResource.h"
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

class TemplateResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TemplateResource();
	TemplateResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TemplateResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether to allow additional properties beyond those specified or not
	 */
	bool getAllowAdditional();

	/*! \brief Set Whether to allow additional properties beyond those specified or not
	 */
	void setAllowAdditional(bool  allow_additional);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the template
	 */
	std::string getId();

	/*! \brief Set The id of the template
	 */
	void setId(std::string  id);
	/*! \brief Get The name of the template
	 */
	std::string getName();

	/*! \brief Set The name of the template
	 */
	void setName(std::string  name);
	/*! \brief Get The customized properties that are present
	 */
	std::list<PropertyDefinitionResource> getProperties();

	/*! \brief Set The customized properties that are present
	 */
	void setProperties(std::list <PropertyDefinitionResource> properties);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	bool allow_additional;
	long long created_date;
	std::string id;
	std::string name;
	std::list <PropertyDefinitionResource>properties;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TemplateResource_H_ */
