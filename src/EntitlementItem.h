/*
 * EntitlementItem.h
 *
 * 
 */

#ifndef _EntitlementItem_H_
#define _EntitlementItem_H_


#include <string>
#include "Behavior.h"
#include "Item.h"
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

class EntitlementItem : public Object {
public:
	/*! \brief Constructor.
	 */
	EntitlementItem();
	EntitlementItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~EntitlementItem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The behaviors linked to the item, describing various options and interactions. May not be included in item lists
	 */
	std::list<Behavior> getBehaviors();

	/*! \brief Set The behaviors linked to the item, describing various options and interactions. May not be included in item lists
	 */
	void setBehaviors(std::list <Behavior> behaviors);
	/*! \brief Get A category for filtering items
	 */
	std::string getCategory();

	/*! \brief Set A category for filtering items
	 */
	void setCategory(std::string  category);
	/*! \brief Get The date the item was created, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the item was created, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the item
	 */
	int getId();

	/*! \brief Set The id of the item
	 */
	void setId(int  id);
	/*! \brief Get A long description of the item
	 */
	std::string getLongDescription();

	/*! \brief Set A long description of the item
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The name of the item
	 */
	std::string getName();

	/*! \brief Set The name of the item
	 */
	void setName(std::string  name);
	/*! \brief Get A short description of the item, max 255 chars
	 */
	std::string getShortDescription();

	/*! \brief Set A short description of the item, max 255 chars
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get A number to use in sorting items.  Default 500
	 */
	int getSort();

	/*! \brief Set A number to use in sorting items.  Default 500
	 */
	void setSort(int  sort);
	/*! \brief Get List of tags used for filtering items
	 */
	std::list<std::string> getTags();

	/*! \brief Set List of tags used for filtering items
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null
	 */
	std::string getTemplate();

	/*! \brief Set An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The type of the item
	 */
	std::string getTypeHint();

	/*! \brief Set The type of the item
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get The unique key for the item
	 */
	std::string getUniqueKey();

	/*! \brief Set The unique key for the item
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date the item was last updated, unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the item was last updated, unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::map <std::string, std::string>additional_properties;
	std::list <Behavior>behaviors;
	std::string category;
	long long created_date;
	int id;
	std::string long_description;
	std::string name;
	std::string short_description;
	int sort;
	std::list <std::string>tags;
	std::string _template;
	std::string type_hint;
	std::string unique_key;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _EntitlementItem_H_ */
