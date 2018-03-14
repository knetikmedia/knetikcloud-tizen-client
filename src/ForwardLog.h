/*
 * ForwardLog.h
 *
 * 
 */

#ifndef _ForwardLog_H_
#define _ForwardLog_H_


#include <string>
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

class ForwardLog : public Object {
public:
	/*! \brief Constructor.
	 */
	ForwardLog();
	ForwardLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ForwardLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The end date of the forward log entry
	 */
	long long getEndDate();

	/*! \brief Set The end date of the forward log entry
	 */
	void setEndDate(long long  end_date);
	/*! \brief Get 
	 */
	std::string getErrorMsg();

	/*! \brief Set 
	 */
	void setErrorMsg(std::string  error_msg);
	/*! \brief Get 
	 */
	std::string getEventId();

	/*! \brief Set 
	 */
	void setEventId(std::string  event_id);
	/*! \brief Get 
	 */
	std::string getHeaders();

	/*! \brief Set 
	 */
	void setHeaders(std::string  headers);
	/*! \brief Get The http status code the forward log entry
	 */
	int getHttpStatusCode();

	/*! \brief Set The http status code the forward log entry
	 */
	void setHttpStatusCode(int  http_status_code);
	/*! \brief Get The id of the forward log entry
	 */
	std::string getId();

	/*! \brief Set The id of the forward log entry
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getMethod();

	/*! \brief Set 
	 */
	void setMethod(std::string  method);
	/*! \brief Get The payload of the forward log entry
	 */
	std::string getPayload();

	/*! \brief Set The payload of the forward log entry
	 */
	void setPayload(std::string  payload);
	/*! \brief Get The response string of the forward log entry
	 */
	std::string getResponse();

	/*! \brief Set The response string of the forward log entry
	 */
	void setResponse(std::string  response);
	/*! \brief Get The retry count of the forward log entry
	 */
	int getRetryCount();

	/*! \brief Set The retry count of the forward log entry
	 */
	void setRetryCount(int  retry_count);
	/*! \brief Get 
	 */
	bool getRetryable();

	/*! \brief Set 
	 */
	void setRetryable(bool  retryable);
	/*! \brief Get 
	 */
	std::string getRuleId();

	/*! \brief Set 
	 */
	void setRuleId(std::string  rule_id);
	/*! \brief Get The start date of the forward log entry
	 */
	long long getStartDate();

	/*! \brief Set The start date of the forward log entry
	 */
	void setStartDate(long long  start_date);
	/*! \brief Get 
	 */
	bool getSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool  success);
	/*! \brief Get The endpoint url of the forward log entry
	 */
	std::string getUrl();

	/*! \brief Set The endpoint url of the forward log entry
	 */
	void setUrl(std::string  url);

private:
	long long end_date;
	std::string error_msg;
	std::string event_id;
	std::string headers;
	int http_status_code;
	std::string id;
	std::string method;
	std::string payload;
	std::string response;
	int retry_count;
	bool retryable;
	std::string rule_id;
	long long start_date;
	bool success;
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ForwardLog_H_ */
