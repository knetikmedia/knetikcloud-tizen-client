#ifndef _Media_ArtistsManager_H_
#define _Media_ArtistsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ArtistResource.h"
#include "PageResource«ArtistResource».h"
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
/** \addtogroup Media_Artists Media_Artists
 * \ingroup Operations
 *  @{
 */
class Media_ArtistsManager {
public:
	Media_ArtistsManager();
	virtual ~Media_ArtistsManager();

/*! \brief Adds a new artist in the system. *Synchronous*
 *
 * Adds a new artist in the system. Use specific media contributions endpoint to add contributions. <br><br><b>Permissions Needed:</b> ANY
 * \param artistResource The new artist
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addArtistSync(char * accessToken,
	ArtistResource artistResource, 
	void(* handler)(ArtistResource, Error, void* )
	, void* userData);

/*! \brief Adds a new artist in the system. *Asynchronous*
 *
 * Adds a new artist in the system. Use specific media contributions endpoint to add contributions. <br><br><b>Permissions Needed:</b> ANY
 * \param artistResource The new artist
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addArtistAsync(char * accessToken,
	ArtistResource artistResource, 
	void(* handler)(ArtistResource, Error, void* )
	, void* userData);


/*! \brief Create an artist template. *Synchronous*
 *
 * Artist Templates define a type of artist and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param artistTemplateResource The artist template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createArtistTemplateSync(char * accessToken,
	TemplateResource artistTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create an artist template. *Asynchronous*
 *
 * Artist Templates define a type of artist and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param artistTemplateResource The artist template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createArtistTemplateAsync(char * accessToken,
	TemplateResource artistTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Removes an artist from the system IF no resources are attached to it. *Synchronous*
 *
 * <b>Permissions Needed:</b> ARTISTS_ADMIN
 * \param id The artist id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArtistSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes an artist from the system IF no resources are attached to it. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ARTISTS_ADMIN
 * \param id The artist id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArtistAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an artist template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArtistTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an artist template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteArtistTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Loads a specific artist details. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The artist id *Required*
 * \param showContributions The number of contributions to show fetch
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistSync(char * accessToken,
	long long id, int showContributions, 
	void(* handler)(ArtistResource, Error, void* )
	, void* userData);

/*! \brief Loads a specific artist details. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The artist id *Required*
 * \param showContributions The number of contributions to show fetch
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistAsync(char * accessToken,
	long long id, int showContributions, 
	void(* handler)(ArtistResource, Error, void* )
	, void* userData);


/*! \brief Get a single artist template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ARTISTS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single artist template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ARTISTS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search artist templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ARTISTS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search artist templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or ARTISTS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Search for artists. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param filterArtistsByName Filter for artists which name *STARTS* with the given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistsSync(char * accessToken,
	std::string filterArtistsByName, int size, int page, std::string order, 
	void(* handler)(PageResource«ArtistResource», Error, void* )
	, void* userData);

/*! \brief Search for artists. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param filterArtistsByName Filter for artists which name *STARTS* with the given string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getArtistsAsync(char * accessToken,
	std::string filterArtistsByName, int size, int page, std::string order, 
	void(* handler)(PageResource«ArtistResource», Error, void* )
	, void* userData);


/*! \brief Modifies an artist details. *Synchronous*
 *
 * <b>Permissions Needed:</b> ARTISTS_ADMIN
 * \param id The artist id *Required*
 * \param artistResource The new artist
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArtistSync(char * accessToken,
	long long id, ArtistResource artistResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Modifies an artist details. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ARTISTS_ADMIN
 * \param id The artist id *Required*
 * \param artistResource The new artist
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArtistAsync(char * accessToken,
	long long id, ArtistResource artistResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an artist template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param artistTemplateResource The artist template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArtistTemplateSync(char * accessToken,
	std::string id, TemplateResource artistTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an artist template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param artistTemplateResource The artist template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateArtistTemplateAsync(char * accessToken,
	std::string id, TemplateResource artistTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Media_ArtistsManager_H_ */
