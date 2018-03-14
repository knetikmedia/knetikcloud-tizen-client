#ifndef _Gamification_AchievementsManager_H_
#define _Gamification_AchievementsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "AchievementDefinitionResource.h"
#include "BreTriggerResource.h"
#include "IntWrapper.h"
#include "PageResource«AchievementDefinitionResource».h"
#include "PageResource«TemplateResource».h"
#include "PageResource«UserAchievementGroupResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include "UserAchievementGroupResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Gamification_Achievements Gamification_Achievements
 * \ingroup Operations
 *  @{
 */
class Gamification_AchievementsManager {
public:
	Gamification_AchievementsManager();
	virtual ~Gamification_AchievementsManager();

/*! \brief Create a new achievement definition. *Synchronous*
 *
 * If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user's achievement status must manually be updated via the API. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param achievement The achievement definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createAchievementSync(char * accessToken,
	AchievementDefinitionResource achievement, 
	void(* handler)(AchievementDefinitionResource, Error, void* )
	, void* userData);

/*! \brief Create a new achievement definition. *Asynchronous*
 *
 * If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user's achievement status must manually be updated via the API. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param achievement The achievement definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createAchievementAsync(char * accessToken,
	AchievementDefinitionResource achievement, 
	void(* handler)(AchievementDefinitionResource, Error, void* )
	, void* userData);


/*! \brief Create an achievement template. *Synchronous*
 *
 * Achievement templates define a type of achievement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param _template The achievement template to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createAchievementTemplateSync(char * accessToken,
	TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an achievement template. *Asynchronous*
 *
 * Achievement templates define a type of achievement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param _template The achievement template to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createAchievementTemplateAsync(char * accessToken,
	TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an achievement definition. *Synchronous*
 *
 * Will also disable the associated generated rule, if any. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param name The name of the achievement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAchievementSync(char * accessToken,
	std::string name, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an achievement definition. *Asynchronous*
 *
 * Will also disable the associated generated rule, if any. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param name The name of the achievement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAchievementAsync(char * accessToken,
	std::string name, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an achievement template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAchievementTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an achievement template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAchievementTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single achievement definition. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER
 * \param name The name of the achievement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementSync(char * accessToken,
	std::string name, 
	void(* handler)(AchievementDefinitionResource, Error, void* )
	, void* userData);

/*! \brief Get a single achievement definition. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER
 * \param name The name of the achievement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementAsync(char * accessToken,
	std::string name, 
	void(* handler)(AchievementDefinitionResource, Error, void* )
	, void* userData);


/*! \brief Get a single achievement template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single achievement template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search achievement templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search achievement templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Get the list of triggers that can be used to trigger an achievement progress update. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementTriggersSync(char * accessToken,
	
	void(* handler)(std::list<BreTriggerResource>, Error, void* )
	, void* userData);

/*! \brief Get the list of triggers that can be used to trigger an achievement progress update. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementTriggersAsync(char * accessToken,
	
	void(* handler)(std::list<BreTriggerResource>, Error, void* )
	, void* userData);


/*! \brief Get all achievement definitions in the system. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER
 * \param filterTagset Filter for achievements with specified tags (separated by comma)
 * \param filterName Filter for achievements whose name contains a string
 * \param filterHidden Filter for achievements that are hidden or not
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param filterDerived Filter for achievements that are derived from other services
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementsSync(char * accessToken,
	std::string filterTagset, std::string filterName, bool filterHidden, int size, int page, std::string order, bool filterDerived, 
	void(* handler)(PageResource«AchievementDefinitionResource», Error, void* )
	, void* userData);

/*! \brief Get all achievement definitions in the system. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER
 * \param filterTagset Filter for achievements with specified tags (separated by comma)
 * \param filterName Filter for achievements whose name contains a string
 * \param filterHidden Filter for achievements that are hidden or not
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param filterDerived Filter for achievements that are derived from other services
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAchievementsAsync(char * accessToken,
	std::string filterTagset, std::string filterName, bool filterHidden, int size, int page, std::string order, bool filterDerived, 
	void(* handler)(PageResource«AchievementDefinitionResource», Error, void* )
	, void* userData);


/*! \brief Get a list of derived achievements. *Synchronous*
 *
 * Used by other services that depend on achievements.  <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param name The name of the derived achievement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDerivedAchievementsSync(char * accessToken,
	std::string name, 
	void(* handler)(std::list<AchievementDefinitionResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of derived achievements. *Asynchronous*
 *
 * Used by other services that depend on achievements.  <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param name The name of the derived achievement *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDerivedAchievementsAsync(char * accessToken,
	std::string name, 
	void(* handler)(std::list<AchievementDefinitionResource>, Error, void* )
	, void* userData);


/*! \brief Retrieve progress on a given achievement for a given user. *Synchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param achievementName The achievement's name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserAchievementProgressSync(char * accessToken,
	int userId, std::string achievementName, 
	void(* handler)(UserAchievementGroupResource, Error, void* )
	, void* userData);

/*! \brief Retrieve progress on a given achievement for a given user. *Asynchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param achievementName The achievement's name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserAchievementProgressAsync(char * accessToken,
	int userId, std::string achievementName, 
	void(* handler)(UserAchievementGroupResource, Error, void* )
	, void* userData);


/*! \brief Retrieve progress on achievements for a given user. *Synchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param filterAchievementDerived Filter for achievements that are derived from other services
 * \param filterAchievementTagset Filter for achievements with specified tags (separated by comma)
 * \param filterAchievementName Filter for achievements whose name contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserAchievementsProgressSync(char * accessToken,
	int userId, bool filterAchievementDerived, std::string filterAchievementTagset, std::string filterAchievementName, int size, int page, 
	void(* handler)(PageResource«UserAchievementGroupResource», Error, void* )
	, void* userData);

/*! \brief Retrieve progress on achievements for a given user. *Asynchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param filterAchievementDerived Filter for achievements that are derived from other services
 * \param filterAchievementTagset Filter for achievements with specified tags (separated by comma)
 * \param filterAchievementName Filter for achievements whose name contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserAchievementsProgressAsync(char * accessToken,
	int userId, bool filterAchievementDerived, std::string filterAchievementTagset, std::string filterAchievementName, int size, int page, 
	void(* handler)(PageResource«UserAchievementGroupResource», Error, void* )
	, void* userData);


/*! \brief Retrieve progress on a given achievement for all users. *Synchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param achievementName The achievement's name *Required*
 * \param filterAchievementDerived Filter for achievements that are derived from other services
 * \param filterAchievementTagset Filter for achievements with specified tags (separated by comma)
 * \param filterAchievementName Filter for achievements whose name contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersAchievementProgressSync(char * accessToken,
	std::string achievementName, bool filterAchievementDerived, std::string filterAchievementTagset, std::string filterAchievementName, int size, int page, 
	void(* handler)(PageResource«UserAchievementGroupResource», Error, void* )
	, void* userData);

/*! \brief Retrieve progress on a given achievement for all users. *Asynchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param achievementName The achievement's name *Required*
 * \param filterAchievementDerived Filter for achievements that are derived from other services
 * \param filterAchievementTagset Filter for achievements with specified tags (separated by comma)
 * \param filterAchievementName Filter for achievements whose name contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersAchievementProgressAsync(char * accessToken,
	std::string achievementName, bool filterAchievementDerived, std::string filterAchievementTagset, std::string filterAchievementName, int size, int page, 
	void(* handler)(PageResource«UserAchievementGroupResource», Error, void* )
	, void* userData);


/*! \brief Retrieve progress on achievements for all users. *Synchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param filterAchievementDerived Filter for achievements that are derived from other services
 * \param filterAchievementTagset Filter for achievements with specified tags (separated by comma)
 * \param filterAchievementName Filter for achievements whose name contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersAchievementsProgressSync(char * accessToken,
	bool filterAchievementDerived, std::string filterAchievementTagset, std::string filterAchievementName, int size, int page, 
	void(* handler)(PageResource«UserAchievementGroupResource», Error, void* )
	, void* userData);

/*! \brief Retrieve progress on achievements for all users. *Asynchronous*
 *
 * Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param filterAchievementDerived Filter for achievements that are derived from other services
 * \param filterAchievementTagset Filter for achievements with specified tags (separated by comma)
 * \param filterAchievementName Filter for achievements whose name contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersAchievementsProgressAsync(char * accessToken,
	bool filterAchievementDerived, std::string filterAchievementTagset, std::string filterAchievementName, int size, int page, 
	void(* handler)(PageResource«UserAchievementGroupResource», Error, void* )
	, void* userData);


/*! \brief Increment an achievement progress record for a user. *Synchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated and the provided value added to the existing progress. May be negative. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param achievementName The achievement's name *Required*
 * \param progress The amount to add to the progress value
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool incrementAchievementProgressSync(char * accessToken,
	int userId, std::string achievementName, IntWrapper progress, 
	void(* handler)(UserAchievementGroupResource, Error, void* )
	, void* userData);

/*! \brief Increment an achievement progress record for a user. *Asynchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated and the provided value added to the existing progress. May be negative. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param achievementName The achievement's name *Required*
 * \param progress The amount to add to the progress value
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool incrementAchievementProgressAsync(char * accessToken,
	int userId, std::string achievementName, IntWrapper progress, 
	void(* handler)(UserAchievementGroupResource, Error, void* )
	, void* userData);


/*! \brief Set an achievement progress record for a user. *Synchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated and progress set to the provided value. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param achievementName The achievement's name *Required*
 * \param progress The new progress value
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setAchievementProgressSync(char * accessToken,
	int userId, std::string achievementName, IntWrapper progress, 
	void(* handler)(UserAchievementGroupResource, Error, void* )
	, void* userData);

/*! \brief Set an achievement progress record for a user. *Asynchronous*
 *
 * If no progress record yet exists for the user, it will be created. Otherwise it will be updated and progress set to the provided value. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param userId The user's id *Required*
 * \param achievementName The achievement's name *Required*
 * \param progress The new progress value
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setAchievementProgressAsync(char * accessToken,
	int userId, std::string achievementName, IntWrapper progress, 
	void(* handler)(UserAchievementGroupResource, Error, void* )
	, void* userData);


/*! \brief Update an achievement definition. *Synchronous*
 *
 * The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param name The name of the achievement *Required*
 * \param achievement The achievement definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAchievementSync(char * accessToken,
	std::string name, AchievementDefinitionResource achievement, 
	void(* handler)(AchievementDefinitionResource, Error, void* )
	, void* userData);

/*! \brief Update an achievement definition. *Asynchronous*
 *
 * The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
 * \param name The name of the achievement *Required*
 * \param achievement The achievement definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAchievementAsync(char * accessToken,
	std::string name, AchievementDefinitionResource achievement, 
	void(* handler)(AchievementDefinitionResource, Error, void* )
	, void* userData);


/*! \brief Update an achievement template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param _template The updated template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAchievementTemplateSync(char * accessToken,
	std::string id, TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an achievement template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param _template The updated template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAchievementTemplateAsync(char * accessToken,
	std::string id, TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Gamification_AchievementsManager_H_ */
