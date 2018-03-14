#ifndef _Gamification_LevelingManager_H_
#define _Gamification_LevelingManager_H_

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
/** \addtogroup Gamification_Leveling Gamification_Leveling
 * \ingroup Operations
 *  @{
 */
class Gamification_LevelingManager {
public:
	Gamification_LevelingManager();
	virtual ~Gamification_LevelingManager();

/*! \brief Create a level schema. *Synchronous*
 *
 * <b>Permissions Needed:</b> LEVELING_ADMIN
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
 * <b>Permissions Needed:</b> LEVELING_ADMIN
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
 * <b>Permissions Needed:</b> LEVELING_ADMIN
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
 * <b>Permissions Needed:</b> LEVELING_ADMIN
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
 * <b>Permissions Needed:</b> LEVELING_USER
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
 * <b>Permissions Needed:</b> LEVELING_USER
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
 * <b>Permissions Needed:</b> LEVELING_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelTriggersSync(char * accessToken,
	
	void(* handler)(std::list<BreTriggerResource>, Error, void* )
	, void* userData);

/*! \brief Get the list of triggers that can be used to trigger a leveling progress update. *Asynchronous*
 *
 * <b>Permissions Needed:</b> LEVELING_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLevelTriggersAsync(char * accessToken,
	
	void(* handler)(std::list<BreTriggerResource>, Error, void* )
	, void* userData);


/*! \brief List and search levels. *Synchronous*
 *
 * Get a list of levels schemas with optional filtering. <br><br><b>Permissions Needed:</b> LEVELING_USER
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
 * Get a list of levels schemas with optional filtering. <br><br><b>Permissions Needed:</b> LEVELING_USER
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
 * <b>Permissions Needed:</b> LEVELING_USER or self
 * \param userId The id of the user or 'me' *Required*
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelSync(char * accessToken,
	std::string userId, std::string name, 
	void(* handler)(UserLevelingResource, Error, void* )
	, void* userData);

/*! \brief Get a user's progress for a given level schema. *Asynchronous*
 *
 * <b>Permissions Needed:</b> LEVELING_USER or self
 * \param userId The id of the user or 'me' *Required*
 * \param name The level schema name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelAsync(char * accessToken,
	std::string userId, std::string name, 
	void(* handler)(UserLevelingResource, Error, void* )
	, void* userData);


/*! \brief Get a user's progress for all level schemas. *Synchronous*
 *
 * Filtering and sorting is based on the LevelingResource object, not the UserLevelingResource that is returned here. <br><br><b>Permissions Needed:</b> LEVELING_USER or self
 * \param userId The id of the user or 'me' *Required*
 * \param filterName Filter for level schemas whose name contains a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelsSync(char * accessToken,
	std::string userId, std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserLevelingResource», Error, void* )
	, void* userData);

/*! \brief Get a user's progress for all level schemas. *Asynchronous*
 *
 * Filtering and sorting is based on the LevelingResource object, not the UserLevelingResource that is returned here. <br><br><b>Permissions Needed:</b> LEVELING_USER or self
 * \param userId The id of the user or 'me' *Required*
 * \param filterName Filter for level schemas whose name contains a given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLevelsAsync(char * accessToken,
	std::string userId, std::string filterName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserLevelingResource», Error, void* )
	, void* userData);


/*! \brief Update or create a leveling progress record for a user. *Synchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise the provided value will be added to it. May be negative. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> LEVELING_ADMIN
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
 * If no progress record yet exists for the user, it will be created. Otherwise the provided value will be added to it. May be negative. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> LEVELING_ADMIN
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
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated to the provided value. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> LEVELING_ADMIN
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
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated to the provided value. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> LEVELING_ADMIN
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
 * <b>Permissions Needed:</b> LEVELING_ADMIN
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
 * <b>Permissions Needed:</b> LEVELING_ADMIN
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
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Gamification_LevelingManager_H_ */
