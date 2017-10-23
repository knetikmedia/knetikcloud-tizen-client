#ifndef _SearchManager_H_
#define _SearchManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«Map«string,object»».h"
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

/*! \brief Search an index. *Synchronous*
 *
 * The body is an ElasticSearch query in JSON format. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/query-dsl.html'>documentation</a> for details on the format and search options. The searchable object's format depends on on the type but mostly matches the resource from it's main endpoint. Exceptions include referenced objects (like user) being replaced with the full user resource to allow deeper searching.
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param size The number of documents returned per page
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
 * The body is an ElasticSearch query in JSON format. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/query-dsl.html'>documentation</a> for details on the format and search options. The searchable object's format depends on on the type but mostly matches the resource from it's main endpoint. Exceptions include referenced objects (like user) being replaced with the full user resource to allow deeper searching.
 * \param type The index type *Required*
 * \param query The query to be used for the search
 * \param size The number of documents returned per page
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
