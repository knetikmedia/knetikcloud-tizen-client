/*
 * AnswerResource.h
 *
 * 
 */

#ifndef _AnswerResource_H_
#define _AnswerResource_H_


#include <string>
#include "Property.h"
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

class AnswerResource : public Object {
public:
	/*! \brief Constructor.
	 */
	AnswerResource();
	AnswerResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AnswerResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The answer to the question. Different 'type' values indicate different structures as the answer may be test, image, etc. See information on additional properties for the list and their structures
	 */
	Property getAnswer();

	/*! \brief Set The answer to the question. Different 'type' values indicate different structures as the answer may be test, image, etc. See information on additional properties for the list and their structures
	 */
	void setAnswer(Property  answer);
	/*! \brief Get Whether the answer is correct or not
	 */
	bool getCorrect();

	/*! \brief Set Whether the answer is correct or not
	 */
	void setCorrect(bool  correct);
	/*! \brief Get The unique ID for that resource
	 */
	std::string getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(std::string  id);

private:
	Property answer;
	bool correct;
	std::string id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AnswerResource_H_ */
