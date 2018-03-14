#ifndef _Gamification_LeaderboardsManager_H_
#define _Gamification_LeaderboardsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "LeaderboardEntryResource.h"
#include "LeaderboardResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Gamification_Leaderboards Gamification_Leaderboards
 * \ingroup Operations
 *  @{
 */
class Gamification_LeaderboardsManager {
public:
	Gamification_LeaderboardsManager();
	virtual ~Gamification_LeaderboardsManager();

/*! \brief Retrieves leaderboard details and paginated entries. *Synchronous*
 *
 * The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. Sorting is based on the fields of LeaderboardEntryResource rather than the returned LeaderboardResource. <br><br><b>Permissions Needed:</b> ANY
 * \param contextType The context type for the leaderboard *Required*
 * \param contextId The context id for the leaderboard *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLeaderboardSync(char * accessToken,
	std::string contextType, std::string contextId, int size, int page, std::string order, 
	void(* handler)(LeaderboardResource, Error, void* )
	, void* userData);

/*! \brief Retrieves leaderboard details and paginated entries. *Asynchronous*
 *
 * The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. Sorting is based on the fields of LeaderboardEntryResource rather than the returned LeaderboardResource. <br><br><b>Permissions Needed:</b> ANY
 * \param contextType The context type for the leaderboard *Required*
 * \param contextId The context id for the leaderboard *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLeaderboardAsync(char * accessToken,
	std::string contextType, std::string contextId, int size, int page, std::string order, 
	void(* handler)(LeaderboardResource, Error, void* )
	, void* userData);


/*! \brief Retrieves a specific user entry with rank. *Synchronous*
 *
 * The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. <br><br><b>Permissions Needed:</b> ANY
 * \param contextType The context type for the leaderboard *Required*
 * \param contextId The context id for the leaderboard *Required*
 * \param id The id of a user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLeaderboardRankSync(char * accessToken,
	std::string contextType, std::string contextId, std::string id, 
	void(* handler)(LeaderboardEntryResource, Error, void* )
	, void* userData);

/*! \brief Retrieves a specific user entry with rank. *Asynchronous*
 *
 * The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. <br><br><b>Permissions Needed:</b> ANY
 * \param contextType The context type for the leaderboard *Required*
 * \param contextId The context id for the leaderboard *Required*
 * \param id The id of a user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLeaderboardRankAsync(char * accessToken,
	std::string contextType, std::string contextId, std::string id, 
	void(* handler)(LeaderboardEntryResource, Error, void* )
	, void* userData);


/*! \brief Get a list of available leaderboard strategy names. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLeaderboardStrategiesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Get a list of available leaderboard strategy names. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLeaderboardStrategiesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Gamification_LeaderboardsManager_H_ */
