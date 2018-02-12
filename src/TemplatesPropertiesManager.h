#ifndef _TemplatesPropertiesManager_H_
#define _TemplatesPropertiesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PropertyFieldListResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup TemplatesProperties TemplatesProperties
 * \ingroup Operations
 *  @{
 */
class TemplatesPropertiesManager {
public:
	TemplatesPropertiesManager();
	virtual ~TemplatesPropertiesManager();

/*! \brief Get details for a template property type. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param type type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTemplatePropertyTypeSync(char * accessToken,
	std::string type, 
	void(* handler)(PropertyFieldListResource, Error, void* )
	, void* userData);

/*! \brief Get details for a template property type. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param type type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTemplatePropertyTypeAsync(char * accessToken,
	std::string type, 
	void(* handler)(PropertyFieldListResource, Error, void* )
	, void* userData);


/*! \brief List template property types. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTemplatePropertyTypesSync(char * accessToken,
	
	void(* handler)(std::list<PropertyFieldListResource>, Error, void* )
	, void* userData);

/*! \brief List template property types. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTemplatePropertyTypesAsync(char * accessToken,
	
	void(* handler)(std::list<PropertyFieldListResource>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* TemplatesPropertiesManager_H_ */
