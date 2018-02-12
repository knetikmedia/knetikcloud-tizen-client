#ifndef _ReportingChallengesManager_H_
#define _ReportingChallengesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«ChallengeEventParticipantResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ReportingChallenges ReportingChallenges
 * \ingroup Operations
 *  @{
 */
class ReportingChallengesManager {
public:
	ReportingChallengesManager();
	virtual ~ReportingChallengesManager();

/*! \brief Retrieve a challenge event leaderboard details. *Synchronous*
 *
 * Lists all leaderboard entries with additional user details. <br><br><b>Permissions Needed:</b> REPORTING_CHALLENGES_ADMIN
 * \param filterEvent A sepecific challenge event id
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventLeaderboardSync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData);

/*! \brief Retrieve a challenge event leaderboard details. *Asynchronous*
 *
 * Lists all leaderboard entries with additional user details. <br><br><b>Permissions Needed:</b> REPORTING_CHALLENGES_ADMIN
 * \param filterEvent A sepecific challenge event id
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventLeaderboardAsync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData);


/*! \brief Retrieve a challenge event participant details. *Synchronous*
 *
 * Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation. <br><br><b>Permissions Needed:</b> REPORTING_CHALLENGES_ADMIN
 * \param filterEvent A sepecific challenge event id
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventParticipantsSync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData);

/*! \brief Retrieve a challenge event participant details. *Asynchronous*
 *
 * Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation. <br><br><b>Permissions Needed:</b> REPORTING_CHALLENGES_ADMIN
 * \param filterEvent A sepecific challenge event id
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChallengeEventParticipantsAsync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ReportingChallengesManager_H_ */
