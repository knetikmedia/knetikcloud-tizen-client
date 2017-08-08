#ifndef _GamificationLevelingManager_H_
#define _GamificationLevelingManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BreTriggerResource.h"
#include "IntWrapper.h"
#include "LevelingResource.h"
#include "PageResource«LevelingResource».h"
#include "PageResource«UserLevelingResource».h"
#include "Result.h"
#include "UserLevelingResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup GamificationLeveling GamificationLeveling
 * \ingroup Operations
 *  @{
 */
class GamificationLevelingManager {
public:
	GamificationLevelingManager();
	virtual ~GamificationLevelingManager();

/*! \brief Create a level schema. *Synchronous*
 *
 * 
 * \param level The level schema definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createLevelSync(char * accessToken,
	LevelingResource level, 
	void(* handler)(LevelingResource, Error, void* )
	, void* userData);

/*! \brief Create a level schema. *Asynchronous*
 *
 * 
 * \param level The level schema definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createLevelAsync(char * accessToken,
	LevelingResource level, 
	void(* handler)(LevelingResource, Error, void* )
	, void* userData);


/*! \brief Delete a level. *Synchronous*
 *
 * 
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteLevelSync(char * accessToken,
	std::string name, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a level. *Asynchronous*
 *
 * 
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteLevelAsync(char * accessToken,
	std::string name, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Retrieve a level. *Synchronous*
 *
 * 
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelSync(char * accessToken,
	std::string name, 
	void(* handler)(LevelingResource, Error, void* )
	, void* userData);

/*! \brief Retrieve a level. *Asynchronous*
 *
 * 
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelAsync(char * accessToken,
	std::string name, 
	void(* handler)(LevelingResource, Error, void* )
	, void* userData);


/*! \brief Get the list of triggers that can be used to trigger a leveling progress update. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelTriggersSync(char * accessToken,
	
	void(* handler)(std::list<BreTriggerResource>, Error, void* )
	, void* userData);

/*! \brief Get the list of triggers that can be used to trigger a leveling progress update. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelTriggersAsync(char * accessToken,
	
	void(* handler)(std::list<BreTriggerResource>, Error, void* )
	, void* userData);


/*! \brief List and search levels. *Synchronous*
 *
 * Get a list of levels schemas with optional filtering
 * \param filterName Filter for level schemas whose name contains a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelsSync(char * accessToken,
	std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«LevelingResource», Error, void* )
	, void* userData);

/*! \brief List and search levels. *Asynchronous*
 *
 * Get a list of levels schemas with optional filtering
 * \param filterName Filter for level schemas whose name contains a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelsAsync(char * accessToken,
	std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«LevelingResource», Error, void* )
	, void* userData);


/*! \brief Get a user's progress for a given level schema. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelSync(char * accessToken,
	int userId, std::string name, 
	void(* handler)(UserLevelingResource, Error, void* )
	, void* userData);

/*! \brief Get a user's progress for a given level schema. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelAsync(char * accessToken,
	int userId, std::string name, 
	void(* handler)(UserLevelingResource, Error, void* )
	, void* userData);


/*! \brief Get a user's progress for all level schemas. *Synchronous*
 *
 * Filtering and sorting is based on the LevelingResource object, not the UserLevelingResource that is returned here.
 * \param userId The id of the user *Required*
 * \param filterName Filter for level schemas whose name contains a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelsSync(char * accessToken,
	int userId, std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserLevelingResource», Error, void* )
	, void* userData);

/*! \brief Get a user's progress for all level schemas. *Asynchronous*
 *
 * Filtering and sorting is based on the LevelingResource object, not the UserLevelingResource that is returned here.
 * \param userId The id of the user *Required*
 * \param filterName Filter for level schemas whose name contains a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelsAsync(char * accessToken,
	int userId, std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserLevelingResource», Error, void* )
	, void* userData);


/*! \brief Update or create a leveling progress record for a user. *Synchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise the provided value will be added to it. May be negative. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.
 * \param userId The id of the user *Required*
 * \param name The level schema name *Required*
 * \param progress The amount of progress to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool incrementProgressSync(char * accessToken,
	int userId, std::string name, IntWrapper progress, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update or create a leveling progress record for a user. *Asynchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise the provided value will be added to it. May be negative. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.
 * \param userId The id of the user *Required*
 * \param name The level schema name *Required*
 * \param progress The amount of progress to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool incrementProgressAsync(char * accessToken,
	int userId, std::string name, IntWrapper progress, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set leveling progress for a user. *Synchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated to the provided value. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.
 * \param userId The id of the user *Required*
 * \param name The level schema name *Required*
 * \param progress The new progress amount
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setProgressSync(char * accessToken,
	int userId, std::string name, IntWrapper progress, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set leveling progress for a user. *Asynchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated to the provided value. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.
 * \param userId The id of the user *Required*
 * \param name The level schema name *Required*
 * \param progress The new progress amount
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setProgressAsync(char * accessToken,
	int userId, std::string name, IntWrapper progress, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a level. *Synchronous*
 *
 * 
 * \param name The level schema name *Required*
 * \param newLevel The level schema definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateLevelSync(char * accessToken,
	std::string name, LevelingResource newLevel, 
	void(* handler)(LevelingResource, Error, void* )
	, void* userData);

/*! \brief Update a level. *Asynchronous*
 *
 * 
 * \param name The level schema name *Required*
 * \param newLevel The level schema definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateLevelAsync(char * accessToken,
	std::string name, LevelingResource newLevel, 
	void(* handler)(LevelingResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* GamificationLevelingManager_H_ */
