#ifndef _MessagingManager_H_
#define _MessagingManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "RawEmailResource.h"
#include "RawPushResource.h"
#include "RawSMSResource.h"
#include "Result.h"
#include "TemplateEmailResource.h"
#include "TemplatePushResource.h"
#include "TemplateSMSResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Messaging Messaging
 * \ingroup Operations
 *  @{
 */
class MessagingManager {
public:
	MessagingManager();
	virtual ~MessagingManager();

/*! \brief Send a raw email to one or more users. *Synchronous*
 *
 * 
 * \param rawEmailResource The new raw email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawEmailSync(char * accessToken,
	RawEmailResource rawEmailResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a raw email to one or more users. *Asynchronous*
 *
 * 
 * \param rawEmailResource The new raw email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawEmailAsync(char * accessToken,
	RawEmailResource rawEmailResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a raw push notification. *Synchronous*
 *
 * Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped.
 * \param rawPushResource The new raw push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawPushSync(char * accessToken,
	RawPushResource rawPushResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a raw push notification. *Asynchronous*
 *
 * Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped.
 * \param rawPushResource The new raw push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawPushAsync(char * accessToken,
	RawPushResource rawPushResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a raw SMS. *Synchronous*
 *
 * Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.
 * \param rawSMSResource The new raw SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawSMSSync(char * accessToken,
	RawSMSResource rawSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a raw SMS. *Asynchronous*
 *
 * Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.
 * \param rawSMSResource The new raw SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawSMSAsync(char * accessToken,
	RawSMSResource rawSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a templated email to one or more users. *Synchronous*
 *
 * 
 * \param messageResource The new template email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedEmailSync(char * accessToken,
	TemplateEmailResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a templated email to one or more users. *Asynchronous*
 *
 * 
 * \param messageResource The new template email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedEmailAsync(char * accessToken,
	TemplateEmailResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a templated push notification. *Synchronous*
 *
 * Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped.
 * \param templatePushResource The new templated push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedPushSync(char * accessToken,
	TemplatePushResource templatePushResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a templated push notification. *Asynchronous*
 *
 * Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped.
 * \param templatePushResource The new templated push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedPushAsync(char * accessToken,
	TemplatePushResource templatePushResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a new templated SMS. *Synchronous*
 *
 * Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.
 * \param templateSMSResource The new template SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedSMSSync(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a new templated SMS. *Asynchronous*
 *
 * Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.
 * \param templateSMSResource The new template SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedSMSAsync(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* MessagingManager_H_ */
