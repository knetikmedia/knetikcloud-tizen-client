/*
 * ArticleResource.h
 *
 * 
 */

#ifndef _ArticleResource_H_
#define _ArticleResource_H_


#include <string>
#include "NestedCategory.h"
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

class ArticleResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ArticleResource();
	ArticleResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArticleResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the article is active
	 */
	bool getActive();

	/*! \brief Set Whether the article is active
	 */
	void setActive(bool  active);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The body of the article
	 */
	std::string getBody();

	/*! \brief Set The body of the article
	 */
	void setBody(std::string  body);
	/*! \brief Get The category for the article
	 */
	NestedCategory getCategory();

	/*! \brief Set The category for the article
	 */
	void setCategory(NestedCategory  category);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the article
	 */
	std::string getId();

	/*! \brief Set The id of the article
	 */
	void setId(std::string  id);
	/*! \brief Get The tags for the article
	 */
	std::list<std::string> getTags();

	/*! \brief Set The tags for the article
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get An article template this article is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set An article template this article is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The title of the article
	 */
	std::string getTitle();

	/*! \brief Set The title of the article
	 */
	void setTitle(std::string  title);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	bool active;
	std::map <std::string, std::string>additional_properties;
	std::string body;
	NestedCategory category;
	long long created_date;
	std::string id;
	std::list <std::string>tags;
	std::string _template;
	std::string title;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ArticleResource_H_ */
