#ifndef _CampaignsManager_H_
#define _CampaignsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CampaignResource.h"
#include "PageResource«CampaignResource».h"
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
/** \addtogroup Campaigns Campaigns
 * \ingroup Operations
 *  @{
 */
class CampaignsManager {
public:
	CampaignsManager();
	virtual ~CampaignsManager();

/*! \brief Add a challenge to a campaign. *Synchronous*
 *
 * 
 * \param id The id of the campaign *Required*
 * \param challengeId The id of the challenge
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addChallengeToCampaignSync(char * accessToken,
	long long id, long long challengeId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a challenge to a campaign. *Asynchronous*
 *
 * 
 * \param id The id of the campaign *Required*
 * \param challengeId The id of the challenge
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addChallengeToCampaignAsync(char * accessToken,
	long long id, long long challengeId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Create a campaign. *Synchronous*
 *
 * 
 * \param campaignResource The campaign resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCampaignSync(char * accessToken,
	CampaignResource campaignResource, 
	void(* handler)(CampaignResource, Error, void* )
	, void* userData);

/*! \brief Create a campaign. *Asynchronous*
 *
 * 
 * \param campaignResource The campaign resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCampaignAsync(char * accessToken,
	CampaignResource campaignResource, 
	void(* handler)(CampaignResource, Error, void* )
	, void* userData);


/*! \brief Create a campaign template. *Synchronous*
 *
 * Campaign Templates define a type of campaign and the properties they have
 * \param campaignTemplateResource The campaign template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCampaignTemplateSync(char * accessToken,
	TemplateResource campaignTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a campaign template. *Asynchronous*
 *
 * Campaign Templates define a type of campaign and the properties they have
 * \param campaignTemplateResource The campaign template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCampaignTemplateAsync(char * accessToken,
	TemplateResource campaignTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a campaign. *Synchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCampaignSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a campaign. *Asynchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCampaignAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a campaign template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCampaignTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a campaign template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCampaignTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Returns a single campaign. *Synchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignSync(char * accessToken,
	long long id, 
	void(* handler)(CampaignResource, Error, void* )
	, void* userData);

/*! \brief Returns a single campaign. *Asynchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignAsync(char * accessToken,
	long long id, 
	void(* handler)(CampaignResource, Error, void* )
	, void* userData);


/*! \brief List the challenges associated with a campaign. *Synchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignChallengesSync(char * accessToken,
	long long id, std::string filterStartDate, std::string filterEndDate, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeResource», Error, void* )
	, void* userData);

/*! \brief List the challenges associated with a campaign. *Asynchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignChallengesAsync(char * accessToken,
	long long id, std::string filterStartDate, std::string filterEndDate, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeResource», Error, void* )
	, void* userData);


/*! \brief Get a single campaign template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single campaign template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search campaign templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search campaign templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search campaigns. *Synchronous*
 *
 * 
 * \param filterActive Filter for campaigns that are active
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignsSync(char * accessToken,
	bool filterActive, int size, int page, std::string order, 
	void(* handler)(PageResource«CampaignResource», Error, void* )
	, void* userData);

/*! \brief List and search campaigns. *Asynchronous*
 *
 * 
 * \param filterActive Filter for campaigns that are active
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCampaignsAsync(char * accessToken,
	bool filterActive, int size, int page, std::string order, 
	void(* handler)(PageResource«CampaignResource», Error, void* )
	, void* userData);


/*! \brief Remove a challenge from a campaign. *Synchronous*
 *
 * 
 * \param campaignId The campaign id *Required*
 * \param id The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeChallengeFromCampaignSync(char * accessToken,
	long long campaignId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove a challenge from a campaign. *Asynchronous*
 *
 * 
 * \param campaignId The campaign id *Required*
 * \param id The challenge id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeChallengeFromCampaignAsync(char * accessToken,
	long long campaignId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a campaign. *Synchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param campaignResource The campaign resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCampaignSync(char * accessToken,
	long long id, CampaignResource campaignResource, 
	void(* handler)(CampaignResource, Error, void* )
	, void* userData);

/*! \brief Update a campaign. *Asynchronous*
 *
 * 
 * \param id The campaign id *Required*
 * \param campaignResource The campaign resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCampaignAsync(char * accessToken,
	long long id, CampaignResource campaignResource, 
	void(* handler)(CampaignResource, Error, void* )
	, void* userData);


/*! \brief Update an campaign template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param campaignTemplateResource The campaign template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCampaignTemplateSync(char * accessToken,
	std::string id, TemplateResource campaignTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an campaign template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param campaignTemplateResource The campaign template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCampaignTemplateAsync(char * accessToken,
	std::string id, TemplateResource campaignTemplateResource, 
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
#endif /* CampaignsManager_H_ */
