#ifndef _ObjectsManager_H_
#define _ObjectsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ItemTemplateResource.h"
#include "ObjectResource.h"
#include "PageResource«ItemTemplateResource».h"
#include "PageResource«ObjectResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Objects Objects
 * \ingroup Operations
 *  @{
 */
class ObjectsManager {
public:
	ObjectsManager();
	virtual ~ObjectsManager();

/*! \brief Create an object. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVENTORY_ADMIN
 * \param templateId The id of the template this object is to be part of *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param objectItem The object item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createObjectItemSync(char * accessToken,
	std::string templateId, bool cascade, ObjectResource objectItem, 
	void(* handler)(ObjectResource, Error, void* )
	, void* userData);

/*! \brief Create an object. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVENTORY_ADMIN
 * \param templateId The id of the template this object is to be part of *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param objectItem The object item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createObjectItemAsync(char * accessToken,
	std::string templateId, bool cascade, ObjectResource objectItem, 
	void(* handler)(ObjectResource, Error, void* )
	, void* userData);


/*! \brief Create an object template. *Synchronous*
 *
 * Object templates define a type of entitlement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param _template The entitlement template to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createObjectTemplateSync(char * accessToken,
	ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an object template. *Asynchronous*
 *
 * Object templates define a type of entitlement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param _template The entitlement template to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createObjectTemplateAsync(char * accessToken,
	ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an object. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVENTORY_ADMIN
 * \param templateId The id of the template this object is part of *Required*
 * \param objectId The id of the object *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteObjectItemSync(char * accessToken,
	std::string templateId, int objectId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an object. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVENTORY_ADMIN
 * \param templateId The id of the template this object is part of *Required*
 * \param objectId The id of the object *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteObjectItemAsync(char * accessToken,
	std::string templateId, int objectId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an entitlement template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteObjectTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an entitlement template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteObjectTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single object. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param templateId The id of the template this object is part of *Required*
 * \param objectId The id of the object *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectItemSync(char * accessToken,
	std::string templateId, int objectId, 
	void(* handler)(ObjectResource, Error, void* )
	, void* userData);

/*! \brief Get a single object. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param templateId The id of the template this object is part of *Required*
 * \param objectId The id of the object *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectItemAsync(char * accessToken,
	std::string templateId, int objectId, 
	void(* handler)(ObjectResource, Error, void* )
	, void* userData);


/*! \brief List and search objects. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param templateId The id of the template to get objects for *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectItemsSync(char * accessToken,
	std::string templateId, int size, int page, std::string order, 
	void(* handler)(PageResource«ObjectResource», Error, void* )
	, void* userData);

/*! \brief List and search objects. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param templateId The id of the template to get objects for *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectItemsAsync(char * accessToken,
	std::string templateId, int size, int page, std::string order, 
	void(* handler)(PageResource«ObjectResource», Error, void* )
	, void* userData);


/*! \brief Get a single entitlement template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single entitlement template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search entitlement templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search entitlement templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getObjectTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief Update an object. *Synchronous*
 *
 * <b>Permissions Needed:</b> INVENTORY_ADMIN
 * \param templateId The id of the template this object is part of *Required*
 * \param objectId The id of the object *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param objectItem The object item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateObjectItemSync(char * accessToken,
	std::string templateId, int objectId, bool cascade, ObjectResource objectItem, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update an object. *Asynchronous*
 *
 * <b>Permissions Needed:</b> INVENTORY_ADMIN
 * \param templateId The id of the template this object is part of *Required*
 * \param objectId The id of the object *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param objectItem The object item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateObjectItemAsync(char * accessToken,
	std::string templateId, int objectId, bool cascade, ObjectResource objectItem, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an entitlement template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param _template The updated template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateObjectTemplateSync(char * accessToken,
	std::string id, ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an entitlement template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param _template The updated template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateObjectTemplateAsync(char * accessToken,
	std::string id, ItemTemplateResource _template, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* ObjectsManager_H_ */
