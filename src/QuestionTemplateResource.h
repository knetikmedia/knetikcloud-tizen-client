/*
 * QuestionTemplateResource.h
 *
 * 
 */

#ifndef _QuestionTemplateResource_H_
#define _QuestionTemplateResource_H_


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

class QuestionTemplateResource : public Object {
public:
	/*! \brief Constructor.
	 */
	QuestionTemplateResource();
	QuestionTemplateResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuestionTemplateResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A property definition for all answers. If included each answer must match this definition's type and be valid
	 */
	PropertyDefinitionResource getAnswerProperty();

	/*! \brief Set A property definition for all answers. If included each answer must match this definition's type and be valid
	 */
	void setAnswerProperty(PropertyDefinitionResource  answer_property);
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
	/*! \brief Get A property definition for the question itself. If included the answer must match this definition's type and be valid
	 */
	PropertyDefinitionResource getQuestionProperty();

	/*! \brief Set A property definition for the question itself. If included the answer must match this definition's type and be valid
	 */
	void setQuestionProperty(PropertyDefinitionResource  question_property);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	PropertyDefinitionResource answer_property;
	long long created_date;
	std::string id;
	std::string name;
	std::list <PropertyDefinitionResource>properties;
	PropertyDefinitionResource question_property;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuestionTemplateResource_H_ */
