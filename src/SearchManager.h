#ifndef _SearchManager_H_
#define _SearchManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«Map«string,object»».h"
#include "Result.h"
#include "SearchReferenceMapping.h"
#include <list>
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

/*! \brief Add a new object to an index. *Synchronous*
 *
 * Mainly intended for internal use.
 * \param type The index type *Required*
 * \param id The ID of the object *Required*
 * \param object The object to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addSearchIndexSync(char * accessToken,
	std::string type, std::string id, std::string object, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a new object to an index. *Asynchronous*
 *
 * Mainly intended for internal use.
 * \param type The index type *Required*
 * \param id The ID of the object *Required*
 * \param object The object to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addSearchIndexAsync(char * accessToken,
	std::string type, std::string id, std::string object, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Register reference mappings. *Synchronous*
 *
 * Add a new type mapping to connect data from one index to another, or discover an exsting one. Mainly intended for internal use.
 * \param mappings The mappings to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addSearchMappingsSync(char * accessToken,
	std::list<SearchReferenceMapping> mappings, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Register reference mappings. *Asynchronous*
 *
 * Add a new type mapping to connect data from one index to another, or discover an exsting one. Mainly intended for internal use.
 * \param mappings The mappings to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addSearchMappingsAsync(char * accessToken,
	std::list<SearchReferenceMapping> mappings, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an object. *Synchronous*
 *
 * Mainly intended for internal use. Requires SEARCH_ADMIN.
 * \param type The index type *Required*
 * \param id The ID of the object to delete *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSearchIndexSync(char * accessToken,
	std::string type, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an object. *Asynchronous*
 *
 * Mainly intended for internal use. Requires SEARCH_ADMIN.
 * \param type The index type *Required*
 * \param id The ID of the object to delete *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSearchIndexAsync(char * accessToken,
	std::string type, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete all objects in an index. *Synchronous*
 *
 * Mainly intended for internal use
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSearchIndexesSync(char * accessToken,
	std::string type, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete all objects in an index. *Asynchronous*
 *
 * Mainly intended for internal use
 * \param type The index type *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSearchIndexesAsync(char * accessToken,
	std::string type, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Search an index. *Synchronous*
 *
 * The body is an ElasticSearch query in JSON format. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/query-dsl.html'>documentation</a> for details on the format and search options. The searchable object's format depends on on the type. See individual search endpoints on other resources for details on their format.
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexSync(char * accessToken,
	std::string type, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	, void* userData);

/*! \brief Search an index. *Asynchronous*
 *
 * The body is an ElasticSearch query in JSON format. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/query-dsl.html'>documentation</a> for details on the format and search options. The searchable object's format depends on on the type. See individual search endpoints on other resources for details on their format.
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchIndexAsync(char * accessToken,
	std::string type, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
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
