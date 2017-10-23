/*
 * DeltaResource.h
 *
 * 
 */

#ifndef _DeltaResource_H_
#define _DeltaResource_H_


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

class DeltaResource : public Object {
public:
	/*! \brief Constructor.
	 */
	DeltaResource();
	DeltaResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DeltaResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the category for question
	 */
	std::string getCategoryId();

	/*! \brief Set The id of the category for question
	 */
	void setCategoryId(std::string  category_id);
	/*! \brief Get The media type of the question
	 */
	std::string getMediaType();

	/*! \brief Set The media type of the question
	 */
	void setMediaType(std::string  media_type);
	/*! \brief Get The id of the question
	 */
	std::string getQuestionId();

	/*! \brief Set The id of the question
	 */
	void setQuestionId(std::string  question_id);
	/*! \brief Get Whether the question was updated or removed
	 */
	std::string getState();

	/*! \brief Set Whether the question was updated or removed
	 */
	void setState(std::string  state);
	/*! \brief Get The tags for the question
	 */
	std::list<std::string> getTags();

	/*! \brief Set The tags for the question
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get The date this question was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date this question was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::string category_id;
	std::string media_type;
	std::string question_id;
	std::string state;
	std::list <std::string>tags;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DeltaResource_H_ */
