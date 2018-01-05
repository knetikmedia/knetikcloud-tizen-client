/*
 * BreRule.h
 *
 * 
 */

#ifndef _BreRule_H_
#define _BreRule_H_


#include <string>
#include "ActionContext«object».h"
#include "PredicateResource.h"
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

class BreRule : public Object {
public:
	/*! \brief Constructor.
	 */
	BreRule();
	BreRule(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreRule();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of actions to execute, and the mapping for their parameters, when the rule runs. Minimum 1
	 */
	std::list<ActionContext«object»> getActions();

	/*! \brief Set A list of actions to execute, and the mapping for their parameters, when the rule runs. Minimum 1
	 */
	void setActions(std::list <ActionContext«object»> actions);
	/*! \brief Get A condition expression that must be met in a given event for the rule to run. Null to always run.
	 */
	PredicateResource getCondition();

	/*! \brief Set A condition expression that must be met in a given event for the rule to run. Null to always run.
	 */
	void setCondition(PredicateResource  condition);
	/*! \brief Get The condition as a readable string. Filled in by the system from the condition
	 */
	std::string getConditionText();

	/*! \brief Set The condition as a readable string. Filled in by the system from the condition
	 */
	void setConditionText(std::string  condition_text);
	/*! \brief Get The human readable description of the rule
	 */
	std::string getDescription();

	/*! \brief Set The human readable description of the rule
	 */
	void setDescription(std::string  description);
	/*! \brief Get Whether the rule is enabled to run (in conjunction with dates). Default true
	 */
	bool getEnabled();

	/*! \brief Set Whether the rule is enabled to run (in conjunction with dates). Default true
	 */
	void setEnabled(bool  enabled);
	/*! \brief Get The date the rule ceases to take effect, or null if never. Unix timestamp in seconds
	 */
	long long getEndDate();

	/*! \brief Set The date the rule ceases to take effect, or null if never. Unix timestamp in seconds
	 */
	void setEndDate(long long  end_date);
	/*! \brief Get How many times the rule has been evaluated (it's conditions checked, whether it then runs or not)
	 */
	long long getEvaluationCount();

	/*! \brief Set How many times the rule has been evaluated (it's conditions checked, whether it then runs or not)
	 */
	void setEvaluationCount(long long  evaluation_count);
	/*! \brief Get The event name of the trigger this rule runs for. Affects which parameters are available
	 */
	std::string getEventName();

	/*! \brief Set The event name of the trigger this rule runs for. Affects which parameters are available
	 */
	void setEventName(std::string  event_name);
	/*! \brief Get The id of the rule for later references. If left null a random guid will be generated. Must be unique. Cannot be changed
	 */
	std::string getId();

	/*! \brief Set The id of the rule for later references. If left null a random guid will be generated. Must be unique. Cannot be changed
	 */
	void setId(std::string  id);
	/*! \brief Get The human readable name of the rule
	 */
	std::string getName();

	/*! \brief Set The human readable name of the rule
	 */
	void setName(std::string  name);
	/*! \brief Get How many times the rule has run
	 */
	long long getRunCount();

	/*! \brief Set How many times the rule has run
	 */
	void setRunCount(long long  run_count);
	/*! \brief Get Used to sort rules to control the order they run in. Larger numbered sort values run first.  Default 500
	 */
	int getSort();

	/*! \brief Set Used to sort rules to control the order they run in. Larger numbered sort values run first.  Default 500
	 */
	void setSort(int  sort);
	/*! \brief Get The date the rule begins to take effect, or null if always. Unix timestamp in seconds
	 */
	long long getStartDate();

	/*! \brief Set The date the rule begins to take effect, or null if always. Unix timestamp in seconds
	 */
	void setStartDate(long long  start_date);
	/*! \brief Get Whether the rule is a default part of the system. System rules cannot be edited or deleted, but may be disabled
	 */
	bool getSystemRule();

	/*! \brief Set Whether the rule is a default part of the system. System rules cannot be edited or deleted, but may be disabled
	 */
	void setSystemRule(bool  system_rule);

private:
	std::list <ActionContext«object»>actions;
	PredicateResource condition;
	std::string condition_text;
	std::string description;
	bool enabled;
	long long end_date;
	long long evaluation_count;
	std::string event_name;
	std::string id;
	std::string name;
	long long run_count;
	int sort;
	long long start_date;
	bool system_rule;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreRule_H_ */
