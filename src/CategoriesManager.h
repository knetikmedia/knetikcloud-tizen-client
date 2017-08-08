#ifndef _CategoriesManager_H_
#define _CategoriesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CategoryResource.h"
#include "PageResource«CategoryResource».h"
#include "PageResource«TemplateResource».h"
#include "PageResource«string».h"
#include "Result.h"
#include "TemplateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Categories Categories
 * \ingroup Operations
 *  @{
 */
class CategoriesManager {
public:
	CategoriesManager();
	virtual ~CategoriesManager();

/*! \brief Create a new category. *Synchronous*
 *
 * 
 * \param category The category to create
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCategorySync(char * accessToken,
	CategoryResource category, 
	void(* handler)(CategoryResource, Error, void* )
	, void* userData);

/*! \brief Create a new category. *Asynchronous*
 *
 * 
 * \param category The category to create
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCategoryAsync(char * accessToken,
	CategoryResource category, 
	void(* handler)(CategoryResource, Error, void* )
	, void* userData);


/*! \brief Create a category template. *Synchronous*
 *
 * Templates define a type of category and the properties they have
 * \param _template The template to create
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCategoryTemplateSync(char * accessToken,
	TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a category template. *Asynchronous*
 *
 * Templates define a type of category and the properties they have
 * \param _template The template to create
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCategoryTemplateAsync(char * accessToken,
	TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an existing category. *Synchronous*
 *
 * 
 * \param id The id of the category to be deleted *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCategorySync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing category. *Asynchronous*
 *
 * 
 * \param id The id of the category to be deleted *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCategoryAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a category template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCategoryTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a category template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCategoryTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief List and search categories with optional filters. *Synchronous*
 *
 * 
 * \param filterSearch Filter for categories whose names begin with provided string
 * \param filterActive Filter for categories that are specifically active or inactive
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoriesSync(char * accessToken,
	std::string filterSearch, bool filterActive, int size, int page, std::string order, 
	void(* handler)(PageResource«CategoryResource», Error, void* )
	, void* userData);

/*! \brief List and search categories with optional filters. *Asynchronous*
 *
 * 
 * \param filterSearch Filter for categories whose names begin with provided string
 * \param filterActive Filter for categories that are specifically active or inactive
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoriesAsync(char * accessToken,
	std::string filterSearch, bool filterActive, int size, int page, std::string order, 
	void(* handler)(PageResource«CategoryResource», Error, void* )
	, void* userData);


/*! \brief Get a single category. *Synchronous*
 *
 * 
 * \param id The id of the category to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategorySync(char * accessToken,
	std::string id, 
	void(* handler)(CategoryResource, Error, void* )
	, void* userData);

/*! \brief Get a single category. *Asynchronous*
 *
 * 
 * \param id The id of the category to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoryAsync(char * accessToken,
	std::string id, 
	void(* handler)(CategoryResource, Error, void* )
	, void* userData);


/*! \brief Get a single category template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoryTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single category template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoryTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search category templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoryTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search category templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCategoryTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List all trivia tags in the system. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagsSync(char * accessToken,
	int size, int page, 
	void(* handler)(PageResource«string», Error, void* )
	, void* userData);

/*! \brief List all trivia tags in the system. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagsAsync(char * accessToken,
	int size, int page, 
	void(* handler)(PageResource«string», Error, void* )
	, void* userData);


/*! \brief Update an existing category. *Synchronous*
 *
 * 
 * \param id The id of the category *Required*
 * \param category The category to update
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCategorySync(char * accessToken,
	std::string id, CategoryResource category, 
	void(* handler)(CategoryResource, Error, void* )
	, void* userData);

/*! \brief Update an existing category. *Asynchronous*
 *
 * 
 * \param id The id of the category *Required*
 * \param category The category to update
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCategoryAsync(char * accessToken,
	std::string id, CategoryResource category, 
	void(* handler)(CategoryResource, Error, void* )
	, void* userData);


/*! \brief Update a category template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param _template The updated template information
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCategoryTemplateSync(char * accessToken,
	std::string id, TemplateResource _template, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a category template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param _template The updated template information
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCategoryTemplateAsync(char * accessToken,
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
#endif /* CategoriesManager_H_ */
