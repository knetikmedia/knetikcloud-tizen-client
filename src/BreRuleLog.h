/*
 * BreRuleLog.h
 *
 * 
 */

#ifndef _BreRuleLog_H_
#define _BreRuleLog_H_


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

class BreRuleLog : public Object {
public:
	/*! \brief Constructor.
	 */
	BreRuleLog();
	BreRuleLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreRuleLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the rule ran
	 */
	bool getRan();

	/*! \brief Set Whether the rule ran
	 */
	void setRan(bool  ran);
	/*! \brief Get The reason for the rule
	 */
	std::string getReason();

	/*! \brief Set The reason for the rule
	 */
	void setReason(std::string  reason);
	/*! \brief Get The end date of the rule in seconds
	 */
	long long getRuleEndDate();

	/*! \brief Set The end date of the rule in seconds
	 */
	void setRuleEndDate(long long  rule_end_date);
	/*! \brief Get The id of the rule
	 */
	std::string getRuleId();

	/*! \brief Set The id of the rule
	 */
	void setRuleId(std::string  rule_id);
	/*! \brief Get The name of the rule
	 */
	std::string getRuleName();

	/*! \brief Set The name of the rule
	 */
	void setRuleName(std::string  rule_name);
	/*! \brief Get The start date of the rule in seconds
	 */
	long long getRuleStartDate();

	/*! \brief Set The start date of the rule in seconds
	 */
	void setRuleStartDate(long long  rule_start_date);

private:
	bool ran;
	std::string reason;
	long long rule_end_date;
	std::string rule_id;
	std::string rule_name;
	long long rule_start_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreRuleLog_H_ */
