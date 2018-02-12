/*
 * MessageTemplateResource.h
 *
 * 
 */

#ifndef _MessageTemplateResource_H_
#define _MessageTemplateResource_H_


#include <string>
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

class MessageTemplateResource : public Object {
public:
	/*! \brief Constructor.
	 */
	MessageTemplateResource();
	MessageTemplateResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MessageTemplateResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The content of the template. See Apache Velocity documentation for formatting
	 */
	std::string getContent();

	/*! \brief Set The content of the template. See Apache Velocity documentation for formatting
	 */
	void setContent(std::string  content);
	/*! \brief Get The id of the template. Cannot be changed after creation. default: auto generated
	 */
	std::string getId();

	/*! \brief Set The id of the template. Cannot be changed after creation. default: auto generated
	 */
	void setId(std::string  id);
	/*! \brief Get The name of the template
	 */
	std::string getName();

	/*! \brief Set The name of the template
	 */
	void setName(std::string  name);
	/*! \brief Get A list of tags for search purposes. Will be converted to lower case
	 */
	std::list<std::string> getTags();

	/*! \brief Set A list of tags for search purposes. Will be converted to lower case
	 */
	void setTags(std::list <std::string> tags);

private:
	std::string content;
	std::string id;
	std::string name;
	std::list <std::string>tags;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MessageTemplateResource_H_ */
