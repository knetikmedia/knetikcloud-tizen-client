/*
 * ActivityOccurrenceResultsResource.h
 *
 * 
 */

#ifndef _ActivityOccurrenceResultsResource_H_
#define _ActivityOccurrenceResultsResource_H_


#include <string>
#include "UserActivityResultsResource.h"
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

class ActivityOccurrenceResultsResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityOccurrenceResultsResource();
	ActivityOccurrenceResultsResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityOccurrenceResultsResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The game results for each user. Include all users that played (paid to get in) even if they were eliminated without a result. A null metric is allowed
	 */
	std::list<UserActivityResultsResource> getUsers();

	/*! \brief Set The game results for each user. Include all users that played (paid to get in) even if they were eliminated without a result. A null metric is allowed
	 */
	void setUsers(std::list <UserActivityResultsResource> users);

private:
	std::list <UserActivityResultsResource>users;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityOccurrenceResultsResource_H_ */
