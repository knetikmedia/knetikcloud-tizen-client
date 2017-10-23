/*
 * PollResponseResource.h
 *
 * 
 */

#ifndef _PollResponseResource_H_
#define _PollResponseResource_H_


#include <string>
#include "SimpleUserResource.h"
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

class PollResponseResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PollResponseResource();
	PollResponseResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PollResponseResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The answer to the poll
	 */
	std::string getAnswer();

	/*! \brief Set The answer to the poll
	 */
	void setAnswer(std::string  answer);
	/*! \brief Get The date the poll was answered, in seconds since unix epoc
	 */
	long long getAnsweredDate();

	/*! \brief Set The date the poll was answered, in seconds since unix epoc
	 */
	void setAnsweredDate(long long  answered_date);
	/*! \brief Get The id of the poll response
	 */
	std::string getId();

	/*! \brief Set The id of the poll response
	 */
	void setId(std::string  id);
	/*! \brief Get The id of the poll
	 */
	std::string getPollId();

	/*! \brief Set The id of the poll
	 */
	void setPollId(std::string  poll_id);
	/*! \brief Get The user
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user
	 */
	void setUser(SimpleUserResource  user);

private:
	std::string answer;
	long long answered_date;
	std::string id;
	std::string poll_id;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PollResponseResource_H_ */
