/*
 * PollAnswerResource.h
 *
 * 
 */

#ifndef _PollAnswerResource_H_
#define _PollAnswerResource_H_


#include <string>
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

class PollAnswerResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PollAnswerResource();
	PollAnswerResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PollAnswerResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of users that selected this answer
	 */
	int getCount();

	/*! \brief Set The number of users that selected this answer
	 */
	void setCount(int  count);
	/*! \brief Get The key to the answer (for code reference)
	 */
	std::string getKey();

	/*! \brief Set The key to the answer (for code reference)
	 */
	void setKey(std::string  key);
	/*! \brief Get The text of the answer (for user display)
	 */
	std::string getText();

	/*! \brief Set The text of the answer (for user display)
	 */
	void setText(std::string  text);

private:
	int count;
	std::string key;
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PollAnswerResource_H_ */
