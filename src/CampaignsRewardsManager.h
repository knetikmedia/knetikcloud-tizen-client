#ifndef _CampaignsRewardsManager_H_
#define _CampaignsRewardsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«RewardSetResource».h"
#include "Result.h"
#include "RewardSetResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup CampaignsRewards CampaignsRewards
 * \ingroup Operations
 *  @{
 */
class CampaignsRewardsManager {
public:
	CampaignsRewardsManager();
	virtual ~CampaignsRewardsManager();

/*! \brief Create a reward set. *Synchronous*
 *
 * 
 * \param rewardSetResource The reward set resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRewardSetSync(char * accessToken,
	RewardSetResource rewardSetResource, 
	void(* handler)(RewardSetResource, Error, void* )
	, void* userData);

/*! \brief Create a reward set. *Asynchronous*
 *
 * 
 * \param rewardSetResource The reward set resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRewardSetAsync(char * accessToken,
	RewardSetResource rewardSetResource, 
	void(* handler)(RewardSetResource, Error, void* )
	, void* userData);


/*! \brief Delete a reward set. *Synchronous*
 *
 * 
 * \param id The reward id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRewardSetSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a reward set. *Asynchronous*
 *
 * 
 * \param id The reward id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRewardSetAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single reward set. *Synchronous*
 *
 * 
 * \param id The reward id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRewardSetSync(char * accessToken,
	int id, 
	void(* handler)(RewardSetResource, Error, void* )
	, void* userData);

/*! \brief Get a single reward set. *Asynchronous*
 *
 * 
 * \param id The reward id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRewardSetAsync(char * accessToken,
	int id, 
	void(* handler)(RewardSetResource, Error, void* )
	, void* userData);


/*! \brief List and search reward sets. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRewardSetsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«RewardSetResource», Error, void* )
	, void* userData);

/*! \brief List and search reward sets. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRewardSetsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«RewardSetResource», Error, void* )
	, void* userData);


/*! \brief Update a reward set. *Synchronous*
 *
 * 
 * \param id The reward id *Required*
 * \param rewardSetResource The reward set resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateRewardSetSync(char * accessToken,
	int id, RewardSetResource rewardSetResource, 
	void(* handler)(RewardSetResource, Error, void* )
	, void* userData);

/*! \brief Update a reward set. *Asynchronous*
 *
 * 
 * \param id The reward id *Required*
 * \param rewardSetResource The reward set resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateRewardSetAsync(char * accessToken,
	int id, RewardSetResource rewardSetResource, 
	void(* handler)(RewardSetResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* CampaignsRewardsManager_H_ */
