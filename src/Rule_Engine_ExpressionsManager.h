#ifndef _Rule_Engine_ExpressionsManager_H_
#define _Rule_Engine_ExpressionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ExpressionResource.h"
#include "Result.h"
#include "StringWrapper.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Rule_Engine_Expressions Rule_Engine_Expressions
 * \ingroup Operations
 *  @{
 */
class Rule_Engine_ExpressionsManager {
public:
	Rule_Engine_ExpressionsManager();
	virtual ~Rule_Engine_ExpressionsManager();

/*! \brief Lookup a specific expression. *Synchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER
 * \param type Specifiy the type of expression as returned by the listing endpoint *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionSync(char * accessToken,
	std::string type, 
	void(* handler)(ExpressionResource, Error, void* )
	, void* userData);

/*! \brief Lookup a specific expression. *Asynchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER
 * \param type Specifiy the type of expression as returned by the listing endpoint *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionAsync(char * accessToken,
	std::string type, 
	void(* handler)(ExpressionResource, Error, void* )
	, void* userData);


/*! \brief Get a list of supported expressions to use in conditions or actions.. *Synchronous*
 *
 * Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER
 * \param filterTypeGroup Filter for expressions by type group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionsSync(char * accessToken,
	std::string filterTypeGroup, 
	void(* handler)(std::list<ExpressionResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of supported expressions to use in conditions or actions.. *Asynchronous*
 *
 * Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER
 * \param filterTypeGroup Filter for expressions by type group
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionsAsync(char * accessToken,
	std::string filterTypeGroup, 
	void(* handler)(std::list<ExpressionResource>, Error, void* )
	, void* userData);


/*! \brief Returns the textual representation of an expression. *Synchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER
 * \param expression The expression resource to be converted
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExpressionAsTextSync(char * accessToken,
	ExpressionResource expression, 
	void(* handler)(StringWrapper, Error, void* )
	, void* userData);

/*! \brief Returns the textual representation of an expression. *Asynchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER
 * \param expression The expression resource to be converted
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExpressionAsTextAsync(char * accessToken,
	ExpressionResource expression, 
	void(* handler)(StringWrapper, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Rule_Engine_ExpressionsManager_H_ */
