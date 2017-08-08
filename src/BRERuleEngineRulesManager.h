#ifndef _BRERuleEngineRulesManager_H_
#define _BRERuleEngineRulesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BooleanResource.h"
#include "BreRule.h"
#include "Expression«object».h"
#include "PageResource«BreRule».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup BRERuleEngineRules BRERuleEngineRules
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineRulesManager {
public:
	BRERuleEngineRulesManager();
	virtual ~BRERuleEngineRulesManager();

/*! \brief Create a rule. *Synchronous*
 *
 * Rules define which actions to run when a given event verifies the specified conditions. Conditions and actions are defined by binding event or context parameters to arguments. Conditions also known as Predicates are logical expressions that result in a boolean. Operators are used to describe rules between arguments to form that condition. There are 3 families of operators: Boolean, Math and String. Math and String operators are functions that transform arguments into numbers or strings...<h1>Boolean Operators</h1><br /><br />1 arg:<br />======<br /><br /><ul> <li>IS_NULL</li> <li>IS_NOT_NULL</li> <li>STRING_IS_EMPTY</li> <li>NOT </li> <li>MAP_IS_EMPTY</li></ul><br />2 args:<br />=======<br /><br /><ul> <li>EQ</li> <li>NE (Not Equals)</li> <li>GT (Greater Than)</li> <li>GOE (Greater Or Equals)</li> <li>LT (Lesser Than)</li> <li>LOE (Lesser Or Equals)</li> <li>OR</li> <li>AND</li> <li>XNOR</li> <li>XOR</li> <li>CONTAINS_KEY (for maps only)</li> <li>CONTAINS_VALUE (for maps only)</li> <li>MATCHES (regex)</li> <li>MATCHES_IC (regex ignore case)</li> <li>STARTS_WITH</li> <li>STARTS_WITH_IC</li> <li>EQ_IGNORE_CASE</li> <li>ENDS_WITH</li> <li>ENDS_WITH_IC</li> <li>STRING_CONTAINS</li> <li>STRING_CONTAINS_IC</li> <li>LIKE (SQL like)</li></ul><br />3 args exceptions:<br />=================<br /><br /><ul> <li>BETWEEN</li></ul><br />n args:<br />=======<br /><br /><ul> <li>IN</li> <li>NOT_INT</li></ul><h1>Math Operators</h1>1 arg:<br />=====<br /><br /><ul> <li>NEGATE</li> <li>MAP_SIZE</li> <li>STRING_LENGTH</li> <li>CEIL</li> <li>ABS</li> <li>FLOOR</li> <li>ROUND</li> <li>RANDOM (no arg)</li> <li>RANDOM2 (seed arg)</li> <li>NUMCAST</li> <li>HOUR</li> <li>MINUTE</li> <li>SECOND</li> <li>MILLISECOND</li> <li>YEAR</li> <li>WEEK</li> <li>YEAR_MONTH</li> <li>YEAR_WEEK</li> <li>DAY_OF_WEEK</li> <li>DAY_OF_MONTH</li> <li>DAY_OF_YEAR</li> <li>WEEK</li> <li>WEEK</li> <li>WEEK</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>ADD</li> <li>DIV</li> <li>MULT</li> <li>SUB</li> <li>POWER</li> <li>MOD</li> <li>LOCATE (index of (string, char))</li> <li>DIFF_YEARS</li> <li>DIFF_MONTHS</li> <li>DIFF_WEEKS</li> <li>DIFF_DAYS</li> <li>DIFF_HOURS</li> <li>DIFF_MINUTES</li> <li>DIFF_SECONDS</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>MIN</li> <li>MAX</li></ul><h1>String Operators</h1>0 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li></ul><br /><br />1 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li> <li>LOWER</li> <li>UPPER</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />2 args:<br />=====<br /><br /><ul> <li>CHAR_AT</li> <li>SUBSTR_1ARG (substr(string, start))</li> <li>CONCAT</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />3 args:<br />=====<br /><br /><ul> <li>SUBSTR_2ARGS (substr(string, start, length))</li></ul>
 * \param breRule The BRE rule object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBRERuleSync(char * accessToken,
	BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData);

/*! \brief Create a rule. *Asynchronous*
 *
 * Rules define which actions to run when a given event verifies the specified conditions. Conditions and actions are defined by binding event or context parameters to arguments. Conditions also known as Predicates are logical expressions that result in a boolean. Operators are used to describe rules between arguments to form that condition. There are 3 families of operators: Boolean, Math and String. Math and String operators are functions that transform arguments into numbers or strings...<h1>Boolean Operators</h1><br /><br />1 arg:<br />======<br /><br /><ul> <li>IS_NULL</li> <li>IS_NOT_NULL</li> <li>STRING_IS_EMPTY</li> <li>NOT </li> <li>MAP_IS_EMPTY</li></ul><br />2 args:<br />=======<br /><br /><ul> <li>EQ</li> <li>NE (Not Equals)</li> <li>GT (Greater Than)</li> <li>GOE (Greater Or Equals)</li> <li>LT (Lesser Than)</li> <li>LOE (Lesser Or Equals)</li> <li>OR</li> <li>AND</li> <li>XNOR</li> <li>XOR</li> <li>CONTAINS_KEY (for maps only)</li> <li>CONTAINS_VALUE (for maps only)</li> <li>MATCHES (regex)</li> <li>MATCHES_IC (regex ignore case)</li> <li>STARTS_WITH</li> <li>STARTS_WITH_IC</li> <li>EQ_IGNORE_CASE</li> <li>ENDS_WITH</li> <li>ENDS_WITH_IC</li> <li>STRING_CONTAINS</li> <li>STRING_CONTAINS_IC</li> <li>LIKE (SQL like)</li></ul><br />3 args exceptions:<br />=================<br /><br /><ul> <li>BETWEEN</li></ul><br />n args:<br />=======<br /><br /><ul> <li>IN</li> <li>NOT_INT</li></ul><h1>Math Operators</h1>1 arg:<br />=====<br /><br /><ul> <li>NEGATE</li> <li>MAP_SIZE</li> <li>STRING_LENGTH</li> <li>CEIL</li> <li>ABS</li> <li>FLOOR</li> <li>ROUND</li> <li>RANDOM (no arg)</li> <li>RANDOM2 (seed arg)</li> <li>NUMCAST</li> <li>HOUR</li> <li>MINUTE</li> <li>SECOND</li> <li>MILLISECOND</li> <li>YEAR</li> <li>WEEK</li> <li>YEAR_MONTH</li> <li>YEAR_WEEK</li> <li>DAY_OF_WEEK</li> <li>DAY_OF_MONTH</li> <li>DAY_OF_YEAR</li> <li>WEEK</li> <li>WEEK</li> <li>WEEK</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>ADD</li> <li>DIV</li> <li>MULT</li> <li>SUB</li> <li>POWER</li> <li>MOD</li> <li>LOCATE (index of (string, char))</li> <li>DIFF_YEARS</li> <li>DIFF_MONTHS</li> <li>DIFF_WEEKS</li> <li>DIFF_DAYS</li> <li>DIFF_HOURS</li> <li>DIFF_MINUTES</li> <li>DIFF_SECONDS</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>MIN</li> <li>MAX</li></ul><h1>String Operators</h1>0 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li></ul><br /><br />1 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li> <li>LOWER</li> <li>UPPER</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />2 args:<br />=====<br /><br /><ul> <li>CHAR_AT</li> <li>SUBSTR_1ARG (substr(string, start))</li> <li>CONCAT</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />3 args:<br />=====<br /><br /><ul> <li>SUBSTR_2ARGS (substr(string, start, length))</li></ul>
 * \param breRule The BRE rule object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBRERuleAsync(char * accessToken,
	BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData);


/*! \brief Delete a rule. *Synchronous*
 *
 * May fail if there are existing rules against it. Cannot delete core rules
 * \param id The id of the rule *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBRERuleSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a rule. *Asynchronous*
 *
 * May fail if there are existing rules against it. Cannot delete core rules
 * \param id The id of the rule *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBRERuleAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Returns a string representation of the provided expression. *Synchronous*
 *
 * 
 * \param expression The expression
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionAsStringSync(char * accessToken,
	Expression«object» expression, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Returns a string representation of the provided expression. *Asynchronous*
 *
 * 
 * \param expression The expression
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionAsStringAsync(char * accessToken,
	Expression«object» expression, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get a single rule. *Synchronous*
 *
 * 
 * \param id The id of the rule *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRERuleSync(char * accessToken,
	std::string id, 
	void(* handler)(BreRule, Error, void* )
	, void* userData);

/*! \brief Get a single rule. *Asynchronous*
 *
 * 
 * \param id The id of the rule *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRERuleAsync(char * accessToken,
	std::string id, 
	void(* handler)(BreRule, Error, void* )
	, void* userData);


/*! \brief List rules. *Synchronous*
 *
 * 
 * \param filterName Filter for rules containing the given name
 * \param filterEnabled Filter for rules by active status, null for both
 * \param filterSystem Filter for rules that are system rules when true, or not when false. Leave off for both mixed
 * \param filterTrigger Filter for rules that are for the trigger with the given name
 * \param filterAction Filter for rules that use the action with the given name
 * \param filterCondition Filter for rules that have a condition containing the given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRERulesSync(char * accessToken,
	std::string filterName, bool filterEnabled, bool filterSystem, std::string filterTrigger, std::string filterAction, std::string filterCondition, int size, int page, 
	void(* handler)(PageResource«BreRule», Error, void* )
	, void* userData);

/*! \brief List rules. *Asynchronous*
 *
 * 
 * \param filterName Filter for rules containing the given name
 * \param filterEnabled Filter for rules by active status, null for both
 * \param filterSystem Filter for rules that are system rules when true, or not when false. Leave off for both mixed
 * \param filterTrigger Filter for rules that are for the trigger with the given name
 * \param filterAction Filter for rules that use the action with the given name
 * \param filterCondition Filter for rules that have a condition containing the given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRERulesAsync(char * accessToken,
	std::string filterName, bool filterEnabled, bool filterSystem, std::string filterTrigger, std::string filterAction, std::string filterCondition, int size, int page, 
	void(* handler)(PageResource«BreRule», Error, void* )
	, void* userData);


/*! \brief Enable or disable a rule. *Synchronous*
 *
 * This is helpful for turning off systems rules which cannot be deleted or modified otherwise
 * \param id The id of the rule *Required*
 * \param enabled The boolean value
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setBRERuleSync(char * accessToken,
	std::string id, BooleanResource enabled, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Enable or disable a rule. *Asynchronous*
 *
 * This is helpful for turning off systems rules which cannot be deleted or modified otherwise
 * \param id The id of the rule *Required*
 * \param enabled The boolean value
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setBRERuleAsync(char * accessToken,
	std::string id, BooleanResource enabled, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a rule. *Synchronous*
 *
 * Cannot update system rules
 * \param id The id of the rule *Required*
 * \param breRule The BRE rule object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRERuleSync(char * accessToken,
	std::string id, BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData);

/*! \brief Update a rule. *Asynchronous*
 *
 * Cannot update system rules
 * \param id The id of the rule *Required*
 * \param breRule The BRE rule object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRERuleAsync(char * accessToken,
	std::string id, BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineRulesManager_H_ */
