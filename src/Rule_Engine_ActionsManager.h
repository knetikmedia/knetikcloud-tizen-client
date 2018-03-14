#ifndef _Rule_Engine_ActionsManager_H_
#define _Rule_Engine_ActionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ActionResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Rule_Engine_Actions Rule_Engine_Actions
 * \ingroup Operations
 *  @{
 */
class Rule_Engine_ActionsManager {
public:
	Rule_Engine_ActionsManager();
	virtual ~Rule_Engine_ActionsManager();

/*! \brief Get a list of available actions. *Synchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_ACTIONS_USER
 * \param filterCategory Filter for actions that are within a specific category
 * \param filterName Filter for actions that have names containing the given string
 * \param filterTags Filter for actions that have all of the given tags (comma separated list)
 * \param filterSearch Filter for actions containing the given words somewhere within name, description and tags
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREActionsSync(char * accessToken,
	std::string filterCategory, std::string filterName, std::string filterTags, std::string filterSearch, 
	void(* handler)(std::list<ActionResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of available actions. *Asynchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_ACTIONS_USER
 * \param filterCategory Filter for actions that are within a specific category
 * \param filterName Filter for actions that have names containing the given string
 * \param filterTags Filter for actions that have all of the given tags (comma separated list)
 * \param filterSearch Filter for actions containing the given words somewhere within name, description and tags
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREActionsAsync(char * accessToken,
	std::string filterCategory, std::string filterName, std::string filterTags, std::string filterSearch, 
	void(* handler)(std::list<ActionResource>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Rule_Engine_ActionsManager_H_ */
