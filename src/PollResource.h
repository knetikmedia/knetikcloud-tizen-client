/*
 * PollResource.h
 *
 * 
 */

#ifndef _PollResource_H_
#define _PollResource_H_


#include <string>
#include "NestedCategory.h"
#include "PollAnswerResource.h"
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

class PollResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PollResource();
	PollResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PollResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the poll is active
	 */
	bool getActive();

	/*! \brief Set Whether the poll is active
	 */
	void setActive(bool  active);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The answers to the poll
	 */
	std::list<PollAnswerResource> getAnswers();

	/*! \brief Set The answers to the poll
	 */
	void setAnswers(std::list <PollAnswerResource> answers);
	/*! \brief Get The category for the poll
	 */
	NestedCategory getCategory();

	/*! \brief Set The category for the poll
	 */
	void setCategory(NestedCategory  category);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the poll
	 */
	std::string getId();

	/*! \brief Set The id of the poll
	 */
	void setId(std::string  id);
	/*! \brief Get The tags for the poll
	 */
	std::list<std::string> getTags();

	/*! \brief Set The tags for the poll
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get A poll template this poll is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A poll template this poll is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The text of the poll
	 */
	std::string getText();

	/*! \brief Set The text of the poll
	 */
	void setText(std::string  text);
	/*! \brief Get The media type of the poll
	 */
	std::string getType();

	/*! \brief Set The media type of the poll
	 */
	void setType(std::string  type);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	bool active;
	std::map <std::string, std::string>additional_properties;
	std::list <PollAnswerResource>answers;
	NestedCategory category;
	long long created_date;
	std::string id;
	std::list <std::string>tags;
	std::string _template;
	std::string text;
	std::string type;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PollResource_H_ */
