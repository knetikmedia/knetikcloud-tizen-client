#ifndef _AmazonWebServicesS3Manager_H_
#define _AmazonWebServicesS3Manager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "AmazonS3Activity.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup AmazonWebServicesS3 AmazonWebServicesS3
 * \ingroup Operations
 *  @{
 */
class AmazonWebServicesS3Manager {
public:
	AmazonWebServicesS3Manager();
	virtual ~AmazonWebServicesS3Manager();

/*! \brief Get a signed S3 URL. *Synchronous*
 *
 * Requires the file name and file content type (i.e., 'video/mpeg')
 * \param filename The file name
 * \param contentType The content type
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSignedS3URLSync(char * accessToken,
	std::string filename, std::string contentType, 
	void(* handler)(AmazonS3Activity, Error, void* )
	, void* userData);

/*! \brief Get a signed S3 URL. *Asynchronous*
 *
 * Requires the file name and file content type (i.e., 'video/mpeg')
 * \param filename The file name
 * \param contentType The content type
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSignedS3URLAsync(char * accessToken,
	std::string filename, std::string contentType, 
	void(* handler)(AmazonS3Activity, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* AmazonWebServicesS3Manager_H_ */
