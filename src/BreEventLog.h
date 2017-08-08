/*
 * BreEventLog.h
 *
 * 
 */

#ifndef _BreEventLog_H_
#define _BreEventLog_H_


#include <string>
#include "BreRuleLog.h"
#include <list>
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

class BreEventLog : public Object {
public:
	/*! \brief Constructor.
	 */
	BreEventLog();
	BreEventLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreEventLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The customer of the BRE event log
	 */
	std::string getCustomer();

	/*! \brief Set The customer of the BRE event log
	 */
	void setCustomer(std::string  customer);
	/*! \brief Get The event id of the BRE event log
	 */
	std::string getEventId();

	/*! \brief Set The event id of the BRE event log
	 */
	void setEventId(std::string  event_id);
	/*! \brief Get The event name of the BRE event log
	 */
	std::string getEventName();

	/*! \brief Set The event name of the BRE event log
	 */
	void setEventName(std::string  event_name);
	/*! \brief Get The event start date of the BRE event log
	 */
	long long getEventStartDate();

	/*! \brief Set The event start date of the BRE event log
	 */
	void setEventStartDate(long long  event_start_date);
	/*! \brief Get The id of the BRE event log
	 */
	std::string getId();

	/*! \brief Set The id of the BRE event log
	 */
	void setId(std::string  id);
	/*! \brief Get The event paramters of the BRE event log
	 */
	std::string getParameters();

	/*! \brief Set The event paramters of the BRE event log
	 */
	void setParameters(std::string  parameters);
	/*! \brief Get The rules of the BRE event log
	 */
	std::list<BreRuleLog> getRules();

	/*! \brief Set The rules of the BRE event log
	 */
	void setRules(std::list <BreRuleLog> rules);

private:
	std::string customer;
	std::string event_id;
	std::string event_name;
	long long event_start_date;
	std::string id;
	std::string parameters;
	std::list <BreRuleLog>rules;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreEventLog_H_ */
