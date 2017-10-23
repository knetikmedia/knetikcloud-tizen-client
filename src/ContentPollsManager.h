#ifndef _ContentPollsManager_H_
#define _ContentPollsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«PollResource».h"
#include "PageResource«TemplateResource».h"
#include "PollResource.h"
#include "PollResponseResource.h"
#include "Result.h"
#include "StringWrapper.h"
#include "TemplateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ContentPolls ContentPolls
 * \ingroup Operations
 *  @{
 */
class ContentPollsManager {
public:
	ContentPollsManager();
	virtual ~ContentPollsManager();

/*! \brief Add your vote to a poll. *Synchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param answerKey The answer key
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool answerPollSync(char * accessToken,
	std::string id, StringWrapper answerKey, 
	void(* handler)(PollResponseResource, Error, void* )
	, void* userData);

/*! \brief Add your vote to a poll. *Asynchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param answerKey The answer key
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool answerPollAsync(char * accessToken,
	std::string id, StringWrapper answerKey, 
	void(* handler)(PollResponseResource, Error, void* )
	, void* userData);


/*! \brief Create a new poll. *Synchronous*
 *
 * Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
 * \param pollResource The poll object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPollSync(char * accessToken,
	PollResource pollResource, 
	void(* handler)(PollResource, Error, void* )
	, void* userData);

/*! \brief Create a new poll. *Asynchronous*
 *
 * Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
 * \param pollResource The poll object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPollAsync(char * accessToken,
	PollResource pollResource, 
	void(* handler)(PollResource, Error, void* )
	, void* userData);


/*! \brief Create a poll template. *Synchronous*
 *
 * Poll templates define a type of poll and the properties they have
 * \param pollTemplateResource The poll template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPollTemplateSync(char * accessToken,
	TemplateResource pollTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a poll template. *Asynchronous*
 *
 * Poll templates define a type of poll and the properties they have
 * \param pollTemplateResource The poll template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPollTemplateAsync(char * accessToken,
	TemplateResource pollTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an existing poll. *Synchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePollSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing poll. *Asynchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePollAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a poll template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePollTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a poll template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePollTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single poll. *Synchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollSync(char * accessToken,
	std::string id, 
	void(* handler)(PollResource, Error, void* )
	, void* userData);

/*! \brief Get a single poll. *Asynchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollAsync(char * accessToken,
	std::string id, 
	void(* handler)(PollResource, Error, void* )
	, void* userData);


/*! \brief Get poll answer. *Synchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollAnswerSync(char * accessToken,
	std::string id, 
	void(* handler)(PollResponseResource, Error, void* )
	, void* userData);

/*! \brief Get poll answer. *Asynchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollAnswerAsync(char * accessToken,
	std::string id, 
	void(* handler)(PollResponseResource, Error, void* )
	, void* userData);


/*! \brief Get a single poll template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single poll template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search poll templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search poll templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search polls. *Synchronous*
 *
 * Get a list of polls with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.
 * \param filterCategory Filter for polls from a specific category by id
 * \param filterTagset Filter for polls with specified tags (separated by comma)
 * \param filterText Filter for polls whose text contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollsSync(char * accessToken,
	std::string filterCategory, std::string filterTagset, std::string filterText, int size, int page, std::string order, 
	void(* handler)(PageResource«PollResource», Error, void* )
	, void* userData);

/*! \brief List and search polls. *Asynchronous*
 *
 * Get a list of polls with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.
 * \param filterCategory Filter for polls from a specific category by id
 * \param filterTagset Filter for polls with specified tags (separated by comma)
 * \param filterText Filter for polls whose text contains a string
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPollsAsync(char * accessToken,
	std::string filterCategory, std::string filterTagset, std::string filterText, int size, int page, std::string order, 
	void(* handler)(PageResource«PollResource», Error, void* )
	, void* userData);


/*! \brief Update an existing poll. *Synchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param pollResource The poll object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePollSync(char * accessToken,
	std::string id, PollResource pollResource, 
	void(* handler)(PollResource, Error, void* )
	, void* userData);

/*! \brief Update an existing poll. *Asynchronous*
 *
 * 
 * \param id The poll id *Required*
 * \param pollResource The poll object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePollAsync(char * accessToken,
	std::string id, PollResource pollResource, 
	void(* handler)(PollResource, Error, void* )
	, void* userData);


/*! \brief Update a poll template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param pollTemplateResource The poll template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePollTemplateSync(char * accessToken,
	std::string id, TemplateResource pollTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a poll template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param pollTemplateResource The poll template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePollTemplateAsync(char * accessToken,
	std::string id, TemplateResource pollTemplateResource, 
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
#endif /* ContentPollsManager_H_ */
