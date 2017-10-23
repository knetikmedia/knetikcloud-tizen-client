/*
 * LeaderboardResource.h
 *
 * 
 */

#ifndef _LeaderboardResource_H_
#define _LeaderboardResource_H_


#include <string>
#include "LeaderboardEntryResource.h"
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

class LeaderboardResource : public Object {
public:
	/*! \brief Constructor.
	 */
	LeaderboardResource();
	LeaderboardResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LeaderboardResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The paginated list of user results, in order from best to worst
	 */
	std::list<LeaderboardEntryResource> getEntries();

	/*! \brief Set The paginated list of user results, in order from best to worst
	 */
	void setEntries(std::list <LeaderboardEntryResource> entries);
	/*! \brief Get The id of the leaderboard
	 */
	long long getId();

	/*! \brief Set The id of the leaderboard
	 */
	void setId(long long  id);
	/*! \brief Get The name of the strategy that defines how entries are stored and compared
	 */
	std::string getStrategy();

	/*! \brief Set The name of the strategy that defines how entries are stored and compared
	 */
	void setStrategy(std::string  strategy);

private:
	std::list <LeaderboardEntryResource>entries;
	long long id;
	std::string strategy;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LeaderboardResource_H_ */
