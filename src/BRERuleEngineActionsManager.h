#ifndef _BRERuleEngineActionsManager_H_
#define _BRERuleEngineActionsManager_H_

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
/** \addtogroup BRERuleEngineActions BRERuleEngineActions
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineActionsManager {
public:
	BRERuleEngineActionsManager();
	virtual ~BRERuleEngineActionsManager();

/*! \brief Get a list of available actions. *Synchronous*
 *
 * 
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
 * 
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
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineActionsManager_H_ */
