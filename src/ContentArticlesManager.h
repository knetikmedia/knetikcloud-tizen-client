#ifndef _ContentArticlesManager_H_
#define _ContentArticlesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ArticleResource.h"
#include "PageResource«ArticleResource».h"
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
/** \addtogroup ContentArticles ContentArticles
 * \ingroup Operations
 *  @{
 */
class ContentArticlesManager {
public:
	ContentArticlesManager();
	virtual ~ContentArticlesManager();

/*! \brief Create a new article. *Synchronous*
 *
 * Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
 * \param articleResource The new article
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createArticleSync(char * accessToken,
	ArticleResource articleResource, 
	void(* handler)(ArticleResource, Error, void* )
	, void* userData);

/*! \brief Create a new article. *Asynchronous*
 *
 * Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
 * \param articleResource The new article
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createArticleAsync(char * accessToken,
	ArticleResource articleResource, 
	void(* handler)(ArticleResource, Error, void* )
	, void* userData);


/*! \brief Create an article template. *Synchronous*
 *
 * Article Templates define a type of article and the properties they have
 * \param articleTemplateResource The article template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createArticleTemplateSync(char * accessToken,
	TemplateResource articleTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an article template. *Asynchronous*
 *
 * Article Templates define a type of article and the properties they have
 * \param articleTemplateResource The article template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createArticleTemplateAsync(char * accessToken,
	TemplateResource articleTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an existing article. *Synchronous*
 *
 * 
 * \param id The article id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArticleSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing article. *Asynchronous*
 *
 * 
 * \param id The article id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArticleAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an article template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArticleTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an article template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArticleTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single article. *Synchronous*
 *
 * 
 * \param id The article id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticleSync(char * accessToken,
	std::string id, 
	void(* handler)(ArticleResource, Error, void* )
	, void* userData);

/*! \brief Get a single article. *Asynchronous*
 *
 * 
 * \param id The article id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticleAsync(char * accessToken,
	std::string id, 
	void(* handler)(ArticleResource, Error, void* )
	, void* userData);


/*! \brief Get a single article template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticleTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single article template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticleTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search article templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticleTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search article templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticleTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search articles. *Synchronous*
 *
 * Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single article' to retrieve the full resource with assets for a given item as needed.
 * \param filterActiveOnly Filter for articles that are active (true) or inactive (false)
 * \param filterCategory Filter for articles from a specific category by id
 * \param filterTagset Filter for articles with at least one of a specified set of tags (separated by comma)
 * \param filterTagIntersection Filter for articles with all of a specified set of tags (separated by comma)
 * \param filterTagExclusion Filter for articles with none of a specified set of tags (separated by comma)
 * \param filterTitle Filter for articles whose title contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticlesSync(char * accessToken,
	bool filterActiveOnly, std::string filterCategory, std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, std::string filterTitle, int size, int page, std::string order, 
	void(* handler)(PageResource«ArticleResource», Error, void* )
	, void* userData);

/*! \brief List and search articles. *Asynchronous*
 *
 * Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single article' to retrieve the full resource with assets for a given item as needed.
 * \param filterActiveOnly Filter for articles that are active (true) or inactive (false)
 * \param filterCategory Filter for articles from a specific category by id
 * \param filterTagset Filter for articles with at least one of a specified set of tags (separated by comma)
 * \param filterTagIntersection Filter for articles with all of a specified set of tags (separated by comma)
 * \param filterTagExclusion Filter for articles with none of a specified set of tags (separated by comma)
 * \param filterTitle Filter for articles whose title contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArticlesAsync(char * accessToken,
	bool filterActiveOnly, std::string filterCategory, std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, std::string filterTitle, int size, int page, std::string order, 
	void(* handler)(PageResource«ArticleResource», Error, void* )
	, void* userData);


/*! \brief Update an existing article. *Synchronous*
 *
 * 
 * \param id The article id *Required*
 * \param articleResource The article object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArticleSync(char * accessToken,
	std::string id, ArticleResource articleResource, 
	void(* handler)(ArticleResource, Error, void* )
	, void* userData);

/*! \brief Update an existing article. *Asynchronous*
 *
 * 
 * \param id The article id *Required*
 * \param articleResource The article object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArticleAsync(char * accessToken,
	std::string id, ArticleResource articleResource, 
	void(* handler)(ArticleResource, Error, void* )
	, void* userData);


/*! \brief Update an article template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param articleTemplateResource The article template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArticleTemplateSync(char * accessToken,
	std::string id, TemplateResource articleTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an article template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param articleTemplateResource The article template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArticleTemplateAsync(char * accessToken,
	std::string id, TemplateResource articleTemplateResource, 
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
#endif /* ContentArticlesManager_H_ */
