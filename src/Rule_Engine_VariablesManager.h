#ifndef _Rule_Engine_VariablesManager_H_
#define _Rule_Engine_VariablesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«SimpleReferenceResource«object»».h"
#include "Result.h"
#include "VariableTypeResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Rule_Engine_Variables Rule_Engine_Variables
 * \ingroup Operations
 *  @{
 */
class Rule_Engine_VariablesManager {
public:
	Rule_Engine_VariablesManager();
	virtual ~Rule_Engine_VariablesManager();

/*! \brief Get a list of variable types available. *Synchronous*
 *
 * Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_VARIABLES_USER
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREVariableTypesSync(char * accessToken,
	
	void(* handler)(std::list<VariableTypeResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of variable types available. *Asynchronous*
 *
 * Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_VARIABLES_USER
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREVariableTypesAsync(char * accessToken,
	
	void(* handler)(std::list<VariableTypeResource>, Error, void* )
	, void* userData);


/*! \brief List valid values for a type. *Synchronous*
 *
 * Used to lookup users to fill in a user constant for example. Only types marked as enumerable are suppoorted here. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_VARIABLES_USER
 * \param name The name of the type *Required*
 * \param filterName Filter results by those with names starting with this string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREVariableValuesSync(char * accessToken,
	std::string name, std::string filterName, int size, int page, 
	void(* handler)(PageResource«SimpleReferenceResource«object»», Error, void* )
	, void* userData);

/*! \brief List valid values for a type. *Asynchronous*
 *
 * Used to lookup users to fill in a user constant for example. Only types marked as enumerable are suppoorted here. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_VARIABLES_USER
 * \param name The name of the type *Required*
 * \param filterName Filter results by those with names starting with this string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREVariableValuesAsync(char * accessToken,
	std::string name, std::string filterName, int size, int page, 
	void(* handler)(PageResource«SimpleReferenceResource«object»», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Rule_Engine_VariablesManager_H_ */
