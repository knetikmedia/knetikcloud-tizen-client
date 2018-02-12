#ifndef _ActivitiesManager_H_
#define _ActivitiesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ActivityOccurrenceCreationFailure.h"
#include "ActivityOccurrenceJoinResult.h"
#include "ActivityOccurrenceResource.h"
#include "ActivityOccurrenceResults.h"
#include "ActivityOccurrenceResultsResource.h"
#include "ActivityOccurrenceSettingsResource.h"
#include "ActivityResource.h"
#include "ActivityUserResource.h"
#include "CreateActivityOccurrenceRequest.h"
#include "IntWrapper.h"
#include "PageResource«ActivityOccurrenceResource».h"
#include "PageResource«BareActivityResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include "ValueWrapper«string».h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Activities Activities
 * \ingroup Operations
 *  @{
 */
class ActivitiesManager {
public:
	ActivitiesManager();
	virtual ~ActivitiesManager();

/*! \brief Add a user to an occurrence. *Synchronous*
 *
 * If called with no body, defaults to the user making the call.
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param test if true, indicates that the user should NOT be added. This can be used to test for eligibility
 * \param bypassRestrictions if true, indicates that restrictions such as max player count should be ignored. Can only be used with ACTIVITIES_ADMIN
 * \param userId The id of the user, or null for 'caller'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserSync(char * accessToken,
	long long activityOccurrenceId, bool test, bool bypassRestrictions, IntWrapper userId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);

/*! \brief Add a user to an occurrence. *Asynchronous*
 *
 * If called with no body, defaults to the user making the call.
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param test if true, indicates that the user should NOT be added. This can be used to test for eligibility
 * \param bypassRestrictions if true, indicates that restrictions such as max player count should be ignored. Can only be used with ACTIVITIES_ADMIN
 * \param userId The id of the user, or null for 'caller'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserAsync(char * accessToken,
	long long activityOccurrenceId, bool test, bool bypassRestrictions, IntWrapper userId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);


/*! \brief Create an activity. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param activityResource The activity resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createActivitySync(char * accessToken,
	ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData);

/*! \brief Create an activity. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param activityResource The activity resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createActivityAsync(char * accessToken,
	ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData);


/*! \brief Create a new activity occurrence. Ex: start a game. *Synchronous*
 *
 * Has to enforce extra rules if not used as an admin. <br><br><b>Permissions Needed:</b> ACTIVITIES_USER or ACTIVITIES_ADMIN
 * \param test if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings
 * \param activityOccurrenceResource The activity occurrence object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createActivityOccurrenceSync(char * accessToken,
	bool test, CreateActivityOccurrenceRequest activityOccurrenceResource, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);

/*! \brief Create a new activity occurrence. Ex: start a game. *Asynchronous*
 *
 * Has to enforce extra rules if not used as an admin. <br><br><b>Permissions Needed:</b> ACTIVITIES_USER or ACTIVITIES_ADMIN
 * \param test if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings
 * \param activityOccurrenceResource The activity occurrence object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createActivityOccurrenceAsync(char * accessToken,
	bool test, CreateActivityOccurrenceRequest activityOccurrenceResource, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);


/*! \brief Create a activity template. *Synchronous*
 *
 * Activity Templates define a type of activity and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param activityTemplateResource The activity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createActivityTemplateSync(char * accessToken,
	TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a activity template. *Asynchronous*
 *
 * Activity Templates define a type of activity and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param activityTemplateResource The activity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createActivityTemplateAsync(char * accessToken,
	TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an activity. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param id The id of the activity *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteActivitySync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an activity. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param id The id of the activity *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteActivityAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a activity template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteActivityTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a activity template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteActivityTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief List activity definitions. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param filterTemplate Filter for activities that are templates, or specifically not if false
 * \param filterName Filter for activities that have a name starting with specified string
 * \param filterId Filter for activities with an id in the given comma separated list of ids
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivitiesSync(char * accessToken,
	bool filterTemplate, std::string filterName, std::string filterId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareActivityResource», Error, void* )
	, void* userData);

/*! \brief List activity definitions. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param filterTemplate Filter for activities that are templates, or specifically not if false
 * \param filterName Filter for activities that have a name starting with specified string
 * \param filterId Filter for activities with an id in the given comma separated list of ids
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivitiesAsync(char * accessToken,
	bool filterTemplate, std::string filterName, std::string filterId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareActivityResource», Error, void* )
	, void* userData);


/*! \brief Get a single activity. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the activity *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivitySync(char * accessToken,
	long long id, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData);

/*! \brief Get a single activity. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the activity *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityAsync(char * accessToken,
	long long id, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData);


/*! \brief Load a single activity occurrence details. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityOccurrenceDetailsSync(char * accessToken,
	long long activityOccurrenceId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);

/*! \brief Load a single activity occurrence details. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityOccurrenceDetailsAsync(char * accessToken,
	long long activityOccurrenceId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);


/*! \brief Get a single activity template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACTIVITIES_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single activity template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACTIVITIES_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search activity templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACTIVITIES_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search activity templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACTIVITIES_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getActivityTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List activity occurrences. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param filterActivity Filter for occurrences of the given activity ID
 * \param filterStatus Filter for occurrences in the given status
 * \param filterEvent Filter for occurrences played during the given event
 * \param filterChallenge Filter for occurrences played within the given challenge
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listActivityOccurrencesSync(char * accessToken,
	std::string filterActivity, std::string filterStatus, int filterEvent, int filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ActivityOccurrenceResource», Error, void* )
	, void* userData);

/*! \brief List activity occurrences. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param filterActivity Filter for occurrences of the given activity ID
 * \param filterStatus Filter for occurrences in the given status
 * \param filterEvent Filter for occurrences played during the given event
 * \param filterChallenge Filter for occurrences played within the given challenge
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listActivityOccurrencesAsync(char * accessToken,
	std::string filterActivity, std::string filterStatus, int filterEvent, int filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ActivityOccurrenceResource», Error, void* )
	, void* userData);


/*! \brief Remove a user from an occurrence. *Synchronous*
 *
 * 
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param userId The id of the user, or 'me' *Required*
 * \param ban if true, indicates that the user should not be allowed to re-join. Can only be set by host or admin
 * \param bypassRestrictions if true, indicates that restrictions such as current status should be ignored. Can only be used with ACTIVITIES_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeUserSync(char * accessToken,
	long long activityOccurrenceId, std::string userId, bool ban, bool bypassRestrictions, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove a user from an occurrence. *Asynchronous*
 *
 * 
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param userId The id of the user, or 'me' *Required*
 * \param ban if true, indicates that the user should not be allowed to re-join. Can only be set by host or admin
 * \param bypassRestrictions if true, indicates that restrictions such as current status should be ignored. Can only be used with ACTIVITIES_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeUserAsync(char * accessToken,
	long long activityOccurrenceId, std::string userId, bool ban, bool bypassRestrictions, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Sets the status of an activity occurrence to FINISHED and logs metrics. *Synchronous*
 *
 * In addition to user permissions requirements there is security based on the core_settings.results_trust setting.
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param activityOccurrenceResults The activity occurrence object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setActivityOccurrenceResultsSync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceResultsResource activityOccurrenceResults, 
	void(* handler)(ActivityOccurrenceResults, Error, void* )
	, void* userData);

/*! \brief Sets the status of an activity occurrence to FINISHED and logs metrics. *Asynchronous*
 *
 * In addition to user permissions requirements there is security based on the core_settings.results_trust setting.
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param activityOccurrenceResults The activity occurrence object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setActivityOccurrenceResultsAsync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceResultsResource activityOccurrenceResults, 
	void(* handler)(ActivityOccurrenceResults, Error, void* )
	, void* userData);


/*! \brief Sets the settings of an activity occurrence. *Synchronous*
 *
 * 
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param settings The new settings
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setActivityOccurrenceSettingsSync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceSettingsResource settings, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);

/*! \brief Sets the settings of an activity occurrence. *Asynchronous*
 *
 * 
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param settings The new settings
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setActivityOccurrenceSettingsAsync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceSettingsResource settings, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData);


/*! \brief Set a user's status within an occurrence. *Synchronous*
 *
 * 
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param userId The id of the user *Required*
 * \param status The new status
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserStatusSync(char * accessToken,
	long long activityOccurrenceId, std::string userId, std::string status, 
	void(* handler)(ActivityUserResource, Error, void* )
	, void* userData);

/*! \brief Set a user's status within an occurrence. *Asynchronous*
 *
 * 
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param userId The id of the user *Required*
 * \param status The new status
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserStatusAsync(char * accessToken,
	long long activityOccurrenceId, std::string userId, std::string status, 
	void(* handler)(ActivityUserResource, Error, void* )
	, void* userData);


/*! \brief Update an activity. *Synchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param id The id of the activity *Required*
 * \param activityResource The activity resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateActivitySync(char * accessToken,
	long long id, ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData);

/*! \brief Update an activity. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ACTIVITIES_ADMIN
 * \param id The id of the activity *Required*
 * \param activityResource The activity resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateActivityAsync(char * accessToken,
	long long id, ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData);


/*! \brief Update the status of an activity occurrence. *Synchronous*
 *
 * If setting to 'FINISHED' reward will be run based on current metrics that have been recorded already. Alternatively, see results endpoint to finish and record all metrics at once. Can be called by non-host participants if non_host_status_control is true
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param activityOccurrenceStatus The activity occurrence status object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateActivityOccurrenceStatusSync(char * accessToken,
	long long activityOccurrenceId, ValueWrapper«string» activityOccurrenceStatus, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update the status of an activity occurrence. *Asynchronous*
 *
 * If setting to 'FINISHED' reward will be run based on current metrics that have been recorded already. Alternatively, see results endpoint to finish and record all metrics at once. Can be called by non-host participants if non_host_status_control is true
 * \param activityOccurrenceId The id of the activity occurrence *Required*
 * \param activityOccurrenceStatus The activity occurrence status object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateActivityOccurrenceStatusAsync(char * accessToken,
	long long activityOccurrenceId, ValueWrapper«string» activityOccurrenceStatus, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an activity template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param activityTemplateResource The activity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateActivityTemplateSync(char * accessToken,
	std::string id, TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an activity template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param activityTemplateResource The activity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateActivityTemplateAsync(char * accessToken,
	std::string id, TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ActivitiesManager_H_ */
