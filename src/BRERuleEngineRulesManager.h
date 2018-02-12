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
 * Rules define which actions to run when a given event verifies the specified condition. Full list of predicates and other type of expressions can be found at GET /bre/expressions/. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * Rules define which actions to run when a given event verifies the specified condition. Full list of predicates and other type of expressions can be found at GET /bre/expressions/. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * May fail if there are existing rules against it. Cannot delete core rules. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * May fail if there are existing rules against it. Cannot delete core rules. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * This is helpful for turning off systems rules which cannot be deleted or modified otherwise. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * This is helpful for turning off systems rules which cannot be deleted or modified otherwise. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * Cannot update system rules. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
 * Cannot update system rules. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN
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
