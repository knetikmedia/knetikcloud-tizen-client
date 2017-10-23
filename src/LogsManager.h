#ifndef _LogsManager_H_
#define _LogsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BreEventLog.h"
#include "ForwardLog.h"
#include "PageResource«BreEventLog».h"
#include "PageResource«ForwardLog».h"
#include "PageResource«UserActionLog».h"
#include "Result.h"
#include "UserActionLog.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Logs Logs
 * \ingroup Operations
 *  @{
 */
class LogsManager {
public:
	LogsManager();
	virtual ~LogsManager();

/*! \brief Add a user log entry. *Synchronous*
 *
 * 
 * \param logEntry The user log entry to be added
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserLogSync(char * accessToken,
	UserActionLog logEntry, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a user log entry. *Asynchronous*
 *
 * 
 * \param logEntry The user log entry to be added
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserLogAsync(char * accessToken,
	UserActionLog logEntry, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get an existing BRE event log entry by id. *Synchronous*
 *
 * 
 * \param id The BRE event log entry id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREEventLogSync(char * accessToken,
	std::string id, 
	void(* handler)(BreEventLog, Error, void* )
	, void* userData);

/*! \brief Get an existing BRE event log entry by id. *Asynchronous*
 *
 * 
 * \param id The BRE event log entry id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREEventLogAsync(char * accessToken,
	std::string id, 
	void(* handler)(BreEventLog, Error, void* )
	, void* userData);


/*! \brief Returns a list of BRE event log entries. *Synchronous*
 *
 * 
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEventName Filter event logs by event name
 * \param filterEventId Filter event logs by request id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREEventLogsSync(char * accessToken,
	std::string filterStartDate, std::string filterEventName, std::string filterEventId, int size, int page, std::string order, 
	void(* handler)(PageResource«BreEventLog», Error, void* )
	, void* userData);

/*! \brief Returns a list of BRE event log entries. *Asynchronous*
 *
 * 
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEventName Filter event logs by event name
 * \param filterEventId Filter event logs by request id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREEventLogsAsync(char * accessToken,
	std::string filterStartDate, std::string filterEventName, std::string filterEventId, int size, int page, std::string order, 
	void(* handler)(PageResource«BreEventLog», Error, void* )
	, void* userData);


/*! \brief Get an existing forward log entry by id. *Synchronous*
 *
 * 
 * \param id The forward log entry id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREForwardLogSync(char * accessToken,
	std::string id, 
	void(* handler)(ForwardLog, Error, void* )
	, void* userData);

/*! \brief Get an existing forward log entry by id. *Asynchronous*
 *
 * 
 * \param id The forward log entry id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREForwardLogAsync(char * accessToken,
	std::string id, 
	void(* handler)(ForwardLog, Error, void* )
	, void* userData);


/*! \brief Returns a list of forward log entries. *Synchronous*
 *
 * 
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterStatusCode Filter forward logs by http status code
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREForwardLogsSync(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, int filterStatusCode, int size, int page, std::string order, 
	void(* handler)(PageResource«ForwardLog», Error, void* )
	, void* userData);

/*! \brief Returns a list of forward log entries. *Asynchronous*
 *
 * 
 * \param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterEndDate A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE).
 * \param filterStatusCode Filter forward logs by http status code
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREForwardLogsAsync(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, int filterStatusCode, int size, int page, std::string order, 
	void(* handler)(PageResource«ForwardLog», Error, void* )
	, void* userData);


/*! \brief Returns a user log entry by id. *Synchronous*
 *
 * 
 * \param id The user log entry id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLogSync(char * accessToken,
	std::string id, 
	void(* handler)(UserActionLog, Error, void* )
	, void* userData);

/*! \brief Returns a user log entry by id. *Asynchronous*
 *
 * 
 * \param id The user log entry id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLogAsync(char * accessToken,
	std::string id, 
	void(* handler)(UserActionLog, Error, void* )
	, void* userData);


/*! \brief Returns a page of user logs entries. *Synchronous*
 *
 * 
 * \param filterUser Filter for actions taken by a specific user by id
 * \param filterActionName Filter for actions of a specific name
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLogsSync(char * accessToken,
	int filterUser, std::string filterActionName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserActionLog», Error, void* )
	, void* userData);

/*! \brief Returns a page of user logs entries. *Asynchronous*
 *
 * 
 * \param filterUser Filter for actions taken by a specific user by id
 * \param filterActionName Filter for actions of a specific name
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLogsAsync(char * accessToken,
	int filterUser, std::string filterActionName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserActionLog», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* LogsManager_H_ */
