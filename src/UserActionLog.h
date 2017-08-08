/*
 * UserActionLog.h
 *
 * 
 */

#ifndef _UserActionLog_H_
#define _UserActionLog_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class UserActionLog : public Object {
public:
	/*! \brief Constructor.
	 */
	UserActionLog();
	UserActionLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserActionLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A description of the action taken
	 */
	std::string getActionDescription();

	/*! \brief Set A description of the action taken
	 */
	void setActionDescription(std::string  action_description);
	/*! \brief Get The name of the action taken
	 */
	std::string getActionName();

	/*! \brief Set The name of the action taken
	 */
	void setActionName(std::string  action_name);
	/*! \brief Get The date of the action, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date of the action, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get A map of additional details such as the target of the action
	 */
	std::map<std::string, std::string> getDetails();

	/*! \brief Set A map of additional details such as the target of the action
	 */
	void setDetails(std::map <std::string, std::string> details);
	/*! \brief Get The id of the log entry
	 */
	std::string getId();

	/*! \brief Set The id of the log entry
	 */
	void setId(std::string  id);
	/*! \brief Get The id of the api request that spawned the action, if generated internally
	 */
	std::string getRequestId();

	/*! \brief Set The id of the api request that spawned the action, if generated internally
	 */
	void setRequestId(std::string  request_id);
	/*! \brief Get The id of the user that took the action, if any. Read-only if not posting with LOGS_ADMIN
	 */
	int getUserId();

	/*! \brief Set The id of the user that took the action, if any. Read-only if not posting with LOGS_ADMIN
	 */
	void setUserId(int  user_id);

private:
	std::string action_description;
	std::string action_name;
	long long created_date;
	std::map <std::string, std::string>details;
	std::string id;
	std::string request_id;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserActionLog_H_ */
