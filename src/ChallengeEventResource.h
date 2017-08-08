/*
 * ChallengeEventResource.h
 *
 * 
 */

#ifndef _ChallengeEventResource_H_
#define _ChallengeEventResource_H_


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

class ChallengeEventResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChallengeEventResource();
	ChallengeEventResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChallengeEventResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the challenge
	 */
	long long getChallengeId();

	/*! \brief Set The id of the challenge
	 */
	void setChallengeId(long long  challenge_id);
	/*! \brief Get The end date in seconds
	 */
	long long getEndDate();

	/*! \brief Set The end date in seconds
	 */
	void setEndDate(long long  end_date);
	/*! \brief Get The id of the challenge event
	 */
	long long getId();

	/*! \brief Set The id of the challenge event
	 */
	void setId(long long  id);
	/*! \brief Get Indicate if the rewards have been given out already 
	 */
	std::string getRewardStatus();

	/*! \brief Set Indicate if the rewards have been given out already 
	 */
	void setRewardStatus(std::string  reward_status);
	/*! \brief Get The start date in seconds
	 */
	long long getStartDate();

	/*! \brief Set The start date in seconds
	 */
	void setStartDate(long long  start_date);

private:
	long long challenge_id;
	long long end_date;
	long long id;
	std::string reward_status;
	long long start_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChallengeEventResource_H_ */
