#ifndef _SearchManager_H_
#define _SearchManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Search Search
 * \ingroup Operations
 *  @{
 */
class SearchManager {
public:
	SearchManager();
	virtual ~SearchManager();

/*! \brief Count matches with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountGETSync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Count matches with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountGETAsync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Count matches with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountPOSTSync(char * accessToken,
	std::string type, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Count matches with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountPOSTAsync(char * accessToken,
	std::string type, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Count matches with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountWithTemplateGETSync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Count matches with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountWithTemplateGETAsync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Count matches with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountWithTemplatePOSTSync(char * accessToken,
	std::string type, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Count matches with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchCountWithTemplatePOSTAsync(char * accessToken,
	std::string type, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get document with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchDocumentGETSync(char * accessToken,
	std::string type, std::string id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get document with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchDocumentGETAsync(char * accessToken,
	std::string type, std::string id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get document with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchDocumentWithTemplateGETSync(char * accessToken,
	std::string type, std::string id, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get document with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchDocumentWithTemplateGETAsync(char * accessToken,
	std::string type, std::string id, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Explain matches with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainGETSync(char * accessToken,
	std::string type, std::string id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Explain matches with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainGETAsync(char * accessToken,
	std::string type, std::string id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Explain matches with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainPOSTSync(char * accessToken,
	std::string type, std::string id, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Explain matches with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainPOSTAsync(char * accessToken,
	std::string type, std::string id, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Explain matches with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainWithTemplateGETSync(char * accessToken,
	std::string type, std::string id, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Explain matches with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainWithTemplateGETAsync(char * accessToken,
	std::string type, std::string id, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Explain matches with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainWithTemplatePOSTSync(char * accessToken,
	std::string type, std::string id, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Explain matches with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param id The index id *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchExplainWithTemplatePOSTAsync(char * accessToken,
	std::string type, std::string id, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Search an index with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexSync(char * accessToken,
	std::string type, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Search an index with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexAsync(char * accessToken,
	std::string type, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Search an index with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexGETSync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Search an index with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexGETAsync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Search an index with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexWithTemplateGETSync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Search an index with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexWithTemplateGETAsync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Search an index with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexWithTemplatePOSTSync(char * accessToken,
	std::string type, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Search an index with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexWithTemplatePOSTAsync(char * accessToken,
	std::string type, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get indices. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _cat/indices for indices.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndicesGETSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get indices. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _cat/indices for indices.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndicesGETAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get mapping with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchMappingsGETSync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get mapping with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchMappingsGETAsync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get mapping with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchMappingsWithTemplateGETSync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get mapping with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchMappingsWithTemplateGETAsync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Validate matches with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidateGETSync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Validate matches with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidateGETAsync(char * accessToken,
	std::string type, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Validate matches with no template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidatePOSTSync(char * accessToken,
	std::string type, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Validate matches with no template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidatePOSTAsync(char * accessToken,
	std::string type, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Validate matches with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidateWithTemplateGETSync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Validate matches with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidateWithTemplateGETAsync(char * accessToken,
	std::string type, std::string _template, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Validate matches with a template. *Synchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidateWithTemplatePOSTSync(char * accessToken,
	std::string type, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Validate matches with a template. *Asynchronous*
 *
 * This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
 * \param type The index type *Required*
 * \param _template The index template *Required*
 * \param query The query to be used for the search
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchValidateWithTemplatePOSTAsync(char * accessToken,
	std::string type, std::string _template, std::string query, 
	void(* handler)(std::string, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* SearchManager_H_ */
