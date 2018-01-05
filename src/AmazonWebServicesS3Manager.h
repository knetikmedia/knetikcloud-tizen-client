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

/*! \brief Get a temporary signed S3 URL for download. *Synchronous*
 *
 * To give access to files in your own S3 account, you will need to grant KnetikcCloud access to the file by adjusting your bucket policy accordingly. See S3 documentation for details.
 * \param bucket S3 bucket name
 * \param path The path to the file relative the bucket (the s3 object key)
 * \param expiration The number of seconds this URL will be valid. Default to 60
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDownloadURLSync(char * accessToken,
	std::string bucket, std::string path, int expiration, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get a temporary signed S3 URL for download. *Asynchronous*
 *
 * To give access to files in your own S3 account, you will need to grant KnetikcCloud access to the file by adjusting your bucket policy accordingly. See S3 documentation for details.
 * \param bucket S3 bucket name
 * \param path The path to the file relative the bucket (the s3 object key)
 * \param expiration The number of seconds this URL will be valid. Default to 60
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDownloadURLAsync(char * accessToken,
	std::string bucket, std::string path, int expiration, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get a signed S3 URL for upload. *Synchronous*
 *
 * Requires the file name and file content type (i.e., 'video/mpeg'). Make a PUT to the resulting url to upload the file and use the cdn_url to retrieve it after.
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

/*! \brief Get a signed S3 URL for upload. *Asynchronous*
 *
 * Requires the file name and file content type (i.e., 'video/mpeg'). Make a PUT to the resulting url to upload the file and use the cdn_url to retrieve it after.
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
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* AmazonWebServicesS3Manager_H_ */
