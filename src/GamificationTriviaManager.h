#ifndef _GamificationTriviaManager_H_
#define _GamificationTriviaManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "AnswerResource.h"
#include "DeltaResource.h"
#include "ImportJobResource.h"
#include "PageResource«ImportJobResource».h"
#include "PageResource«QuestionResource».h"
#include "PageResource«QuestionTemplateResource».h"
#include "QuestionResource.h"
#include "QuestionTemplateResource.h"
#include "Result.h"
#include "StringWrapper.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup GamificationTrivia GamificationTrivia
 * \ingroup Operations
 *  @{
 */
class GamificationTriviaManager {
public:
	GamificationTriviaManager();
	virtual ~GamificationTriviaManager();

/*! \brief Add an answer to a question. *Synchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param answer The new answer
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addQuestionAnswersSync(char * accessToken,
	std::string questionId, AnswerResource answer, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData);

/*! \brief Add an answer to a question. *Asynchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param answer The new answer
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addQuestionAnswersAsync(char * accessToken,
	std::string questionId, AnswerResource answer, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData);


/*! \brief Add a tag to a question. *Synchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param tag The new tag
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addQuestionTagSync(char * accessToken,
	std::string id, StringWrapper tag, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a tag to a question. *Asynchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param tag The new tag
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addQuestionTagAsync(char * accessToken,
	std::string id, StringWrapper tag, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add a tag to a batch of questions. *Synchronous*
 *
 * All questions that dont't have the tag and match filters will have it added. The returned number is the number of questions updated.
 * \param tag The tag to add
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTag Filter for questions with specified tag
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addTagToQuestionsBatchSync(char * accessToken,
	StringWrapper tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData);

/*! \brief Add a tag to a batch of questions. *Asynchronous*
 *
 * All questions that dont't have the tag and match filters will have it added. The returned number is the number of questions updated.
 * \param tag The tag to add
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTag Filter for questions with specified tag
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addTagToQuestionsBatchAsync(char * accessToken,
	StringWrapper tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData);


/*! \brief Create an import job. *Synchronous*
 *
 * Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint.
 * \param request The new import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createImportJobSync(char * accessToken,
	ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);

/*! \brief Create an import job. *Asynchronous*
 *
 * Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint.
 * \param request The new import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createImportJobAsync(char * accessToken,
	ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);


/*! \brief Create a question. *Synchronous*
 *
 * 
 * \param question The new question
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createQuestionSync(char * accessToken,
	QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData);

/*! \brief Create a question. *Asynchronous*
 *
 * 
 * \param question The new question
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createQuestionAsync(char * accessToken,
	QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData);


/*! \brief Create a question template. *Synchronous*
 *
 * Question templates define a type of question and the properties they have
 * \param questionTemplateResource The question template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createQuestionTemplateSync(char * accessToken,
	QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a question template. *Asynchronous*
 *
 * Question templates define a type of question and the properties they have
 * \param questionTemplateResource The question template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createQuestionTemplateAsync(char * accessToken,
	QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an import job. *Synchronous*
 *
 * Also deletes all questions that were imported by it
 * \param id The id of the job *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteImportJobSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an import job. *Asynchronous*
 *
 * Also deletes all questions that were imported by it
 * \param id The id of the job *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteImportJobAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a question. *Synchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQuestionSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a question. *Asynchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQuestionAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Remove an answer from a question. *Synchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param id The id of the answer *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQuestionAnswersSync(char * accessToken,
	std::string questionId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove an answer from a question. *Asynchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param id The id of the answer *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQuestionAnswersAsync(char * accessToken,
	std::string questionId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a question template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQuestionTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a question template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQuestionTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get an import job. *Synchronous*
 *
 * 
 * \param id The id of the job *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getImportJobSync(char * accessToken,
	long long id, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);

/*! \brief Get an import job. *Asynchronous*
 *
 * 
 * \param id The id of the job *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getImportJobAsync(char * accessToken,
	long long id, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);


/*! \brief Get a list of import job. *Synchronous*
 *
 * 
 * \param filterVendor Filter for jobs by vendor id
 * \param filterCategory Filter for jobs by category id
 * \param filterName Filter for jobs which name *STARTS* with the given string
 * \param filterStatus Filter for jobs that are in a specific set of statuses (comma separated)
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getImportJobsSync(char * accessToken,
	std::string filterVendor, std::string filterCategory, std::string filterName, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«ImportJobResource», Error, void* )
	, void* userData);

/*! \brief Get a list of import job. *Asynchronous*
 *
 * 
 * \param filterVendor Filter for jobs by vendor id
 * \param filterCategory Filter for jobs by category id
 * \param filterName Filter for jobs which name *STARTS* with the given string
 * \param filterStatus Filter for jobs that are in a specific set of statuses (comma separated)
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getImportJobsAsync(char * accessToken,
	std::string filterVendor, std::string filterCategory, std::string filterName, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«ImportJobResource», Error, void* )
	, void* userData);


/*! \brief Get a single question. *Synchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionSync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData);

/*! \brief Get a single question. *Asynchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionAsync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData);


/*! \brief Get an answer for a question. *Synchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param id The id of the answer *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionAnswerSync(char * accessToken,
	std::string questionId, std::string id, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData);

/*! \brief Get an answer for a question. *Asynchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param id The id of the answer *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionAnswerAsync(char * accessToken,
	std::string questionId, std::string id, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData);


/*! \brief List the answers available for a question. *Synchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionAnswersSync(char * accessToken,
	std::string questionId, 
	void(* handler)(std::list<AnswerResource>, Error, void* )
	, void* userData);

/*! \brief List the answers available for a question. *Asynchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionAnswersAsync(char * accessToken,
	std::string questionId, 
	void(* handler)(std::list<AnswerResource>, Error, void* )
	, void* userData);


/*! \brief List question deltas in ascending order of updated date. *Synchronous*
 *
 * The 'since' parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps
 * \param since Timestamp in seconds
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionDeltasSync(char * accessToken,
	long long since, 
	void(* handler)(std::list<DeltaResource>, Error, void* )
	, void* userData);

/*! \brief List question deltas in ascending order of updated date. *Asynchronous*
 *
 * The 'since' parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps
 * \param since Timestamp in seconds
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionDeltasAsync(char * accessToken,
	long long since, 
	void(* handler)(std::list<DeltaResource>, Error, void* )
	, void* userData);


/*! \brief List the tags for a question. *Synchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionTagsSync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief List the tags for a question. *Asynchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionTagsAsync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Get a single question template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single question template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search question templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«QuestionTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search question templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«QuestionTemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search questions. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterTag Filter for questions with specified tag
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionsSync(char * accessToken,
	int size, int page, std::string order, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterTag, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(PageResource«QuestionResource», Error, void* )
	, void* userData);

/*! \brief List and search questions. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterTag Filter for questions with specified tag
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionsAsync(char * accessToken,
	int size, int page, std::string order, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterTag, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(PageResource«QuestionResource», Error, void* )
	, void* userData);


/*! \brief Count questions based on filters. *Synchronous*
 *
 * This is also provided by the list endpoint so you don't need to call this for pagination purposes
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTag Filter for questions with specified tag
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionsCountSync(char * accessToken,
	std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, 
	void(* handler)(long long, Error, void* )
	, void* userData);

/*! \brief Count questions based on filters. *Asynchronous*
 *
 * This is also provided by the list endpoint so you don't need to call this for pagination purposes
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTag Filter for questions with specified tag
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQuestionsCountAsync(char * accessToken,
	std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, 
	void(* handler)(long long, Error, void* )
	, void* userData);


/*! \brief Start processing an import job. *Synchronous*
 *
 * Will process the CSV file and add new questions asynchronously. The status of the job must be 'VALID'.
 * \param id The id of the job *Required*
 * \param publishNow Whether the new questions should be published live immediately *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool processImportJobSync(char * accessToken,
	long long id, bool publishNow, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);

/*! \brief Start processing an import job. *Asynchronous*
 *
 * Will process the CSV file and add new questions asynchronously. The status of the job must be 'VALID'.
 * \param id The id of the job *Required*
 * \param publishNow Whether the new questions should be published live immediately *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool processImportJobAsync(char * accessToken,
	long long id, bool publishNow, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);


/*! \brief Remove a tag from a question. *Synchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param tag The tag to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeQuestionTagSync(char * accessToken,
	std::string id, std::string tag, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove a tag from a question. *Asynchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param tag The tag to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeQuestionTagAsync(char * accessToken,
	std::string id, std::string tag, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Remove a tag from a batch of questions. *Synchronous*
 *
 * ll questions that have the tag and match filters will have it removed. The returned number is the number of questions updated.
 * \param tag The tag to remove *Required*
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTag Filter for questions with specified tag
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeTagToQuestionsBatchSync(char * accessToken,
	std::string tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData);

/*! \brief Remove a tag from a batch of questions. *Asynchronous*
 *
 * ll questions that have the tag and match filters will have it removed. The returned number is the number of questions updated.
 * \param tag The tag to remove *Required*
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTag Filter for questions with specified tag
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeTagToQuestionsBatchAsync(char * accessToken,
	std::string tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData);


/*! \brief List and search tags by the beginning of the string. *Synchronous*
 *
 * For performance reasons, search & category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead.
 * \param filterSearch Filter for tags starting with the given text
 * \param filterCategory Filter for tags on questions from a specific category
 * \param filterImportId Filter for tags on questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchQuestionTagsSync(char * accessToken,
	std::string filterSearch, std::string filterCategory, long long filterImportId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief List and search tags by the beginning of the string. *Asynchronous*
 *
 * For performance reasons, search & category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead.
 * \param filterSearch Filter for tags starting with the given text
 * \param filterCategory Filter for tags on questions from a specific category
 * \param filterImportId Filter for tags on questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool searchQuestionTagsAsync(char * accessToken,
	std::string filterSearch, std::string filterCategory, long long filterImportId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Update an import job. *Synchronous*
 *
 * Changes should be made before process is started for there to be any effect.
 * \param id The id of the job *Required*
 * \param request The updated job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateImportJobSync(char * accessToken,
	long long id, ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);

/*! \brief Update an import job. *Asynchronous*
 *
 * Changes should be made before process is started for there to be any effect.
 * \param id The id of the job *Required*
 * \param request The updated job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateImportJobAsync(char * accessToken,
	long long id, ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData);


/*! \brief Update a question. *Synchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param question The updated question
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionSync(char * accessToken,
	std::string id, QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData);

/*! \brief Update a question. *Asynchronous*
 *
 * 
 * \param id The id of the question *Required*
 * \param question The updated question
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionAsync(char * accessToken,
	std::string id, QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData);


/*! \brief Update an answer for a question. *Synchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param id The id of the answer *Required*
 * \param answer The updated answer
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionAnswerSync(char * accessToken,
	std::string questionId, std::string id, AnswerResource answer, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update an answer for a question. *Asynchronous*
 *
 * 
 * \param questionId The id of the question *Required*
 * \param id The id of the answer *Required*
 * \param answer The updated answer
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionAnswerAsync(char * accessToken,
	std::string questionId, std::string id, AnswerResource answer, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a question template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param questionTemplateResource The question template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionTemplateSync(char * accessToken,
	std::string id, QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a question template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param questionTemplateResource The question template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionTemplateAsync(char * accessToken,
	std::string id, QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData);


/*! \brief Bulk update questions. *Synchronous*
 *
 * Will update all questions that match filters used (or all questions in system if no filters used). Body should match a question resource with only those properties you wish to set. Null values will be ignored. Returned number is how many were updated.
 * \param question New values for a set of question fields
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionsInBulkSync(char * accessToken,
	QuestionResource question, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData);

/*! \brief Bulk update questions. *Asynchronous*
 *
 * Will update all questions that match filters used (or all questions in system if no filters used). Body should match a question resource with only those properties you wish to set. Null values will be ignored. Returned number is how many were updated.
 * \param question New values for a set of question fields
 * \param filterSearch Filter for documents whose question, answers or tags contains provided string
 * \param filterIdset Filter for documents whose id is in the comma separated list provided
 * \param filterCategory Filter for questions with specified category, by id
 * \param filterTagset Filter for questions with specified tags (separated by comma)
 * \param filterType Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO')
 * \param filterPublished Filter for questions currenctly published or not
 * \param filterImportId Filter for questions from a specific import job
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQuestionsInBulkAsync(char * accessToken,
	QuestionResource question, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* GamificationTriviaManager_H_ */
