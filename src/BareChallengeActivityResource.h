/*
 * BareChallengeActivityResource.h
 *
 * 
 */

#ifndef _BareChallengeActivityResource_H_
#define _BareChallengeActivityResource_H_


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

class BareChallengeActivityResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BareChallengeActivityResource();
	BareChallengeActivityResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BareChallengeActivityResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the activity
	 */
	long long getActivityId();

	/*! \brief Set The id of the activity
	 */
	void setActivityId(long long  activity_id);
	/*! \brief Get The id of the challenge
	 */
	long long getChallengeId();

	/*! \brief Set The id of the challenge
	 */
	void setChallengeId(long long  challenge_id);
	/*! \brief Get The unique ID for this resource
	 */
	long long getId();

	/*! \brief Set The unique ID for this resource
	 */
	void setId(long long  id);

private:
	long long activity_id;
	long long challenge_id;
	long long id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BareChallengeActivityResource_H_ */
