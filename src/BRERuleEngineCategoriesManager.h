#ifndef _BRERuleEngineCategoriesManager_H_
#define _BRERuleEngineCategoriesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BreCategoryResource.h"
#include "PageResource«BreCategoryResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup BRERuleEngineCategories BRERuleEngineCategories
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineCategoriesManager {
public:
	BRERuleEngineCategoriesManager();
	virtual ~BRERuleEngineCategoriesManager();

/*! \brief Create a BRE category template. *Synchronous*
 *
 * Templates define a type of BRE category and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param _template The category template to create
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBRECategoryTemplateSync(char * accessToken,
	TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a BRE category template. *Asynchronous*
 *
 * Templates define a type of BRE category and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param _template The category template to create
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBRECategoryTemplateAsync(char * accessToken,
	TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a BRE category template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBRECategoryTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a BRE category template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBRECategoryTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief List categories. *Synchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_CATEGORIES_USER
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoriesSync(char * accessToken,
	int size, int page, 
	void(* handler)(PageResource«BreCategoryResource», Error, void* )
	, void* userData);

/*! \brief List categories. *Asynchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_CATEGORIES_USER
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoriesAsync(char * accessToken,
	int size, int page, 
	void(* handler)(PageResource«BreCategoryResource», Error, void* )
	, void* userData);


/*! \brief Get a single category. *Synchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_CATEGORIES_USER
 * \param name The category name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategorySync(char * accessToken,
	std::string name, 
	void(* handler)(BreCategoryResource, Error, void* )
	, void* userData);

/*! \brief Get a single category. *Asynchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_CATEGORIES_USER
 * \param name The category name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoryAsync(char * accessToken,
	std::string name, 
	void(* handler)(BreCategoryResource, Error, void* )
	, void* userData);


/*! \brief Get a single BRE category template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or BRE_RULE_ENGINE_CATEGORIES_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoryTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single BRE category template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or BRE_RULE_ENGINE_CATEGORIES_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoryTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search BRE category templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or BRE_RULE_ENGINE_CATEGORIES_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoryTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search BRE category templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or BRE_RULE_ENGINE_CATEGORIES_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRECategoryTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Update a category. *Synchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_CATEGORIES_ADMIN
 * \param name The category name *Required*
 * \param category The updated BRE category information
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRECategorySync(char * accessToken,
	std::string name, BreCategoryResource category, 
	void(* handler)(BreCategoryResource, Error, void* )
	, void* userData);

/*! \brief Update a category. *Asynchronous*
 *
 * <b>Permissions Needed:</b> BRE_RULE_ENGINE_CATEGORIES_ADMIN
 * \param name The category name *Required*
 * \param category The updated BRE category information
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRECategoryAsync(char * accessToken,
	std::string name, BreCategoryResource category, 
	void(* handler)(BreCategoryResource, Error, void* )
	, void* userData);


/*! \brief Update a BRE category template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param _template The updated category template definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRECategoryTemplateSync(char * accessToken,
	std::string id, TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a BRE category template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param _template The updated category template definition
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRECategoryTemplateAsync(char * accessToken,
	std::string id, TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineCategoriesManager_H_ */
