#ifndef _CampaignsChallengesManager_H_
#define _CampaignsChallengesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChallengeActivityResource.h"
#include "ChallengeEventResource.h"
#include "ChallengeResource.h"
#include "PageResource«BareChallengeActivityResource».h"
#include "PageResource«ChallengeEventResource».h"
#include "PageResource«ChallengeResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup CampaignsChallenges CampaignsChallenges
 * \ingroup Operations
 *  @{
 */
class CampaignsChallengesManager {
public:
	CampaignsChallengesManager();
	virtual ~CampaignsChallengesManager();

/*! \brief Create a challenge. *Synchronous*
 *
 * Challenges do not run on their own.  They must be added to a campaign before events will spawn.
 * \param challengeResource The challenge resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeSync(char * accessToken,
	ChallengeResource challengeResource, 
	void(* handler)(ChallengeResource, Error, void* )
	, void* userData);

/*! \brief Create a challenge. *Asynchronous*
 *
 * Challenges do not run on their own.  They must be added to a campaign before events will spawn.
 * \param challengeResource The challenge resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeAsync(char * accessToken,
	ChallengeResource challengeResource, 
	void(* handler)(ChallengeResource, Error, void* )
	, void* userData);


/*! \brief Create a challenge activity. *Synchronous*
 *
 * 
 * \param challengeId The challenge id *Required*
 * \param challengeActivityResource The challenge activity resource object
 * \param validateSettings Whether to validate the settings being sent against the available settings on the base activity.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeActivitySync(char * accessToken,
	long long challengeId, ChallengeActivityResource challengeActivityResource, bool validateSettings, 
	void(* handler)(ChallengeActivityResource, Error, void* )
	, void* userData);

/*! \brief Create a challenge activity. *Asynchronous*
 *
 * 
 * \param challengeId The challenge id *Required*
 * \param challengeActivityResource The challenge activity resource object
 * \param validateSettings Whether to validate the settings being sent against the available settings on the base activity.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeActivityAsync(char * accessToken,
	long long challengeId, ChallengeActivityResource challengeActivityResource, bool validateSettings, 
	void(* handler)(ChallengeActivityResource, Error, void* )
	, void* userData);


/*! \brief Create a challenge activity template. *Synchronous*
 *
 * Challenge Activity Templates define a type of challenge activity and the properties they have
 * \param challengeActivityTemplateResource The challengeActivity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeActivityTemplateSync(char * accessToken,
	TemplateResource challengeActivityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a challenge activity template. *Asynchronous*
 *
 * Challenge Activity Templates define a type of challenge activity and the properties they have
 * \param challengeActivityTemplateResource The challengeActivity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeActivityTemplateAsync(char * accessToken,
	TemplateResource challengeActivityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Create a challenge template. *Synchronous*
 *
 * Challenge Templates define a type of challenge and the properties they have
 * \param challengeTemplateResource The challenge template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeTemplateSync(char * accessToken,
	TemplateResource challengeTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a challenge template. *Asynchronous*
 *
 * Challenge Templates define a type of challenge and the properties they have
 * \param challengeTemplateResource The challenge template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createChallengeTemplateAsync(char * accessToken,
	TemplateResource challengeTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a challenge. *Synchronous*
 *
 * 
 * \param id The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a challenge. *Asynchronous*
 *
 * 
 * \param id The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a challenge activity. *Synchronous*
 *
 * A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge
 * \param id The challenge_activity id *Required*
 * \param challengeId The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeActivitySync(char * accessToken,
	long long id, long long challengeId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a challenge activity. *Asynchronous*
 *
 * A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge
 * \param id The challenge_activity id *Required*
 * \param challengeId The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeActivityAsync(char * accessToken,
	long long id, long long challengeId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a challenge activity template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeActivityTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a challenge activity template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeActivityTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a challenge event. *Synchronous*
 *
 * 
 * \param id The challenge event id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeEventSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a challenge event. *Asynchronous*
 *
 * 
 * \param id The challenge event id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeEventAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a challenge template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a challenge template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChallengeTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Retrieve a challenge. *Synchronous*
 *
 * 
 * \param id The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeSync(char * accessToken,
	long long id, 
	void(* handler)(ChallengeResource, Error, void* )
	, void* userData);

/*! \brief Retrieve a challenge. *Asynchronous*
 *
 * 
 * \param id The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeAsync(char * accessToken,
	long long id, 
	void(* handler)(ChallengeResource, Error, void* )
	, void* userData);


/*! \brief List and search challenge activities. *Synchronous*
 *
 * 
 * \param challengeId The challenge id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivitiesSync(char * accessToken,
	long long challengeId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareChallengeActivityResource», Error, void* )
	, void* userData);

/*! \brief List and search challenge activities. *Asynchronous*
 *
 * 
 * \param challengeId The challenge id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivitiesAsync(char * accessToken,
	long long challengeId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareChallengeActivityResource», Error, void* )
	, void* userData);


/*! \brief Get a single challenge activity. *Synchronous*
 *
 * A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge
 * \param id The challenge_activity id *Required*
 * \param challengeId The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivitySync(char * accessToken,
	long long id, long long challengeId, 
	void(* handler)(ChallengeActivityResource, Error, void* )
	, void* userData);

/*! \brief Get a single challenge activity. *Asynchronous*
 *
 * A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge
 * \param id The challenge_activity id *Required*
 * \param challengeId The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivityAsync(char * accessToken,
	long long id, long long challengeId, 
	void(* handler)(ChallengeActivityResource, Error, void* )
	, void* userData);


/*! \brief Get a single challenge activity template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivityTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single challenge activity template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivityTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search challenge activity templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivityTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search challenge activity templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeActivityTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Retrieve a single challenge event details. *Synchronous*
 *
 * 
 * \param id The challenge event id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventSync(char * accessToken,
	long long id, 
	void(* handler)(ChallengeEventResource, Error, void* )
	, void* userData);

/*! \brief Retrieve a single challenge event details. *Asynchronous*
 *
 * 
 * \param id The challenge event id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventAsync(char * accessToken,
	long long id, 
	void(* handler)(ChallengeEventResource, Error, void* )
	, void* userData);


/*! \brief Retrieve a list of challenge events. *Synchronous*
 *
 * 
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the event start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the event end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterCampaigns check only for events from currently running campaigns
 * \param filterChallenge check only for events from the challenge specified by id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventsSync(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, bool filterCampaigns, long long filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventResource», Error, void* )
	, void* userData);

/*! \brief Retrieve a list of challenge events. *Asynchronous*
 *
 * 
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the event start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the event end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterCampaigns check only for events from currently running campaigns
 * \param filterChallenge check only for events from the challenge specified by id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventsAsync(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, bool filterCampaigns, long long filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventResource», Error, void* )
	, void* userData);


/*! \brief Get a single challenge template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single challenge template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search challenge templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search challenge templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Retrieve a list of challenges. *Synchronous*
 *
 * 
 * \param filterActiveCampaign Filter for challenges that are tied to active campaigns
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengesSync(char * accessToken,
	bool filterActiveCampaign, std::string filterStartDate, std::string filterEndDate, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeResource», Error, void* )
	, void* userData);

/*! \brief Retrieve a list of challenges. *Asynchronous*
 *
 * 
 * \param filterActiveCampaign Filter for challenges that are tied to active campaigns
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengesAsync(char * accessToken,
	bool filterActiveCampaign, std::string filterStartDate, std::string filterEndDate, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeResource», Error, void* )
	, void* userData);


/*! \brief Update a challenge. *Synchronous*
 *
 * If the challenge is a copy, changes will propagate to all the related challenges
 * \param id The challenge id *Required*
 * \param challengeResource The challenge resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeSync(char * accessToken,
	long long id, ChallengeResource challengeResource, 
	void(* handler)(ChallengeResource, Error, void* )
	, void* userData);

/*! \brief Update a challenge. *Asynchronous*
 *
 * If the challenge is a copy, changes will propagate to all the related challenges
 * \param id The challenge id *Required*
 * \param challengeResource The challenge resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeAsync(char * accessToken,
	long long id, ChallengeResource challengeResource, 
	void(* handler)(ChallengeResource, Error, void* )
	, void* userData);


/*! \brief Update a challenge activity. *Synchronous*
 *
 * A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge
 * \param id The challenge_activity id *Required*
 * \param challengeId The challenge id *Required*
 * \param challengeActivityResource The challenge activity resource object
 * \param validateSettings Whether to validate the settings being sent against the available settings on the base activity.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeActivitySync(char * accessToken,
	long long id, long long challengeId, ChallengeActivityResource challengeActivityResource, bool validateSettings, 
	void(* handler)(ChallengeActivityResource, Error, void* )
	, void* userData);

/*! \brief Update a challenge activity. *Asynchronous*
 *
 * A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge
 * \param id The challenge_activity id *Required*
 * \param challengeId The challenge id *Required*
 * \param challengeActivityResource The challenge activity resource object
 * \param validateSettings Whether to validate the settings being sent against the available settings on the base activity.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeActivityAsync(char * accessToken,
	long long id, long long challengeId, ChallengeActivityResource challengeActivityResource, bool validateSettings, 
	void(* handler)(ChallengeActivityResource, Error, void* )
	, void* userData);


/*! \brief Update an challenge activity template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param challengeActivityTemplateResource The challengeActivity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeActivityTemplateSync(char * accessToken,
	std::string id, TemplateResource challengeActivityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an challenge activity template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param challengeActivityTemplateResource The challengeActivity template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeActivityTemplateAsync(char * accessToken,
	std::string id, TemplateResource challengeActivityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Update a challenge template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param challengeTemplateResource The challenge template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeTemplateSync(char * accessToken,
	std::string id, TemplateResource challengeTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a challenge template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param challengeTemplateResource The challenge template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateChallengeTemplateAsync(char * accessToken,
	std::string id, TemplateResource challengeTemplateResource, 
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
#endif /* CampaignsChallengesManager_H_ */
