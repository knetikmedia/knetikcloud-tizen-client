/*
 * ActivityOccurrenceCreationFailure.h
 *
 * 
 */

#ifndef _ActivityOccurrenceCreationFailure_H_
#define _ActivityOccurrenceCreationFailure_H_


#include <string>
#include "ActivityOccurrenceJoinResult.h"
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

class ActivityOccurrenceCreationFailure : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityOccurrenceCreationFailure();
	ActivityOccurrenceCreationFailure(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityOccurrenceCreationFailure();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The details of each user's entry, or just the current user's if not run with ACTIVITIES_ADMIN permission
	 */
	std::list<ActivityOccurrenceJoinResult> getUserResults();

	/*! \brief Set The details of each user's entry, or just the current user's if not run with ACTIVITIES_ADMIN permission
	 */
	void setUserResults(std::list <ActivityOccurrenceJoinResult> user_results);

private:
	std::list <ActivityOccurrenceJoinResult>user_results;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityOccurrenceCreationFailure_H_ */
