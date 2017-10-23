/*
 * ObjectResource.h
 *
 * 
 */

#ifndef _ObjectResource_H_
#define _ObjectResource_H_


#include <string>
#include "Behavior.h"
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

class ObjectResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ObjectResource();
	ObjectResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ObjectResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

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
	/*! \brief Get A map of additional data. The template will define requirements for the object
	 */
	std::string getData();

	/*! \brief Set A map of additional data. The template will define requirements for the object
	 */
	void setData(std::string  data);
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
	std::list <Behavior>behaviors;
	std::string category;
	long long created_date;
	std::string data;
	int id;
	std::string long_description;
	std::string name;
	std::string short_description;
	int sort;
	std::list <std::string>tags;
	std::string unique_key;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ObjectResource_H_ */
