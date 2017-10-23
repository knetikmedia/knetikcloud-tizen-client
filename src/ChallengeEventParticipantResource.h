/*
 * ChallengeEventParticipantResource.h
 *
 * 
 */

#ifndef _ChallengeEventParticipantResource_H_
#define _ChallengeEventParticipantResource_H_


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

class ChallengeEventParticipantResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChallengeEventParticipantResource();
	ChallengeEventParticipantResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChallengeEventParticipantResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The email address of the user
	 */
	std::string getEmail();

	/*! \brief Set The email address of the user
	 */
	void setEmail(std::string  email);
	/*! \brief Get The full name of the user
	 */
	std::string getFullname();

	/*! \brief Set The full name of the user
	 */
	void setFullname(std::string  fullname);
	/*! \brief Get The user's score
	 */
	long long getScore();

	/*! \brief Set The user's score
	 */
	void setScore(long long  score);
	/*! \brief Get The id of the user
	 */
	int getUserId();

	/*! \brief Set The id of the user
	 */
	void setUserId(int  user_id);
	/*! \brief Get The username of the user
	 */
	std::string getUsername();

	/*! \brief Set The username of the user
	 */
	void setUsername(std::string  username);

private:
	std::string email;
	std::string fullname;
	long long score;
	int user_id;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChallengeEventParticipantResource_H_ */
