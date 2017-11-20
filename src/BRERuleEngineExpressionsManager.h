#ifndef _BRERuleEngineExpressionsManager_H_
#define _BRERuleEngineExpressionsManager_H_

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
/** \addtogroup BRERuleEngineExpressions BRERuleEngineExpressions
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineExpressionsManager {
public:
	BRERuleEngineExpressionsManager();
	virtual ~BRERuleEngineExpressionsManager();

/*! \brief Lookup a specific expression. *Synchronous*
 *
 * 
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
 * 
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
 * Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule.
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
 * Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule.
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
 * 
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
 * 
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
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineExpressionsManager_H_ */