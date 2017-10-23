/*
 * QuestionResource.h
 *
 * 
 */

#ifndef _QuestionResource_H_
#define _QuestionResource_H_


#include <string>
#include "AnswerResource.h"
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

class QuestionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	QuestionResource();
	QuestionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuestionResource();

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
	/*! \brief Get The list of available answers
	 */
	std::list<AnswerResource> getAnswers();

	/*! \brief Set The list of available answers
	 */
	void setAnswers(std::list <AnswerResource> answers);
	/*! \brief Get The category for the question
	 */
	NestedCategory getCategory();

	/*! \brief Set The category for the question
	 */
	void setCategory(NestedCategory  category);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The difficulty of the question
	 */
	int getDifficulty();

	/*! \brief Set The difficulty of the question
	 */
	void setDifficulty(int  difficulty);
	/*! \brief Get The unique ID for that resource
	 */
	std::string getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(std::string  id);
	/*! \brief Get The id of the import job that created the question, or null if not from an import
	 */
	long long getImportId();

	/*! \brief Set The id of the import job that created the question, or null if not from an import
	 */
	void setImportId(long long  import_id);
	/*! \brief Get When the question becomes available, null for never, in seconds since epoch
	 */
	long long getPublishedDate();

	/*! \brief Set When the question becomes available, null for never, in seconds since epoch
	 */
	void setPublishedDate(long long  published_date);
	/*! \brief Get The question. Different 'type' values indicate different structures as the question may be test, image, etc. See information on additional properties for the list and their structures
	 */
	Property getQuestion();

	/*! \brief Set The question. Different 'type' values indicate different structures as the question may be test, image, etc. See information on additional properties for the list and their structures
	 */
	void setQuestion(Property  question);
	/*! \brief Get The first source of the question
	 */
	std::string getSource1();

	/*! \brief Set The first source of the question
	 */
	void setSource1(std::string  source1);
	/*! \brief Get The second source of the question
	 */
	std::string getSource2();

	/*! \brief Set The second source of the question
	 */
	void setSource2(std::string  source2);
	/*! \brief Get The list of tags
	 */
	std::list<std::string> getTags();

	/*! \brief Set The list of tags
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get A question template this question is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A question template this question is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The supplier of the question
	 */
	std::string getVendor();

	/*! \brief Set The supplier of the question
	 */
	void setVendor(std::string  vendor);

private:
	std::map <std::string, std::string>additional_properties;
	std::list <AnswerResource>answers;
	NestedCategory category;
	long long created_date;
	int difficulty;
	std::string id;
	long long import_id;
	long long published_date;
	Property question;
	std::string source1;
	std::string source2;
	std::list <std::string>tags;
	std::string _template;
	long long updated_date;
	std::string vendor;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuestionResource_H_ */
