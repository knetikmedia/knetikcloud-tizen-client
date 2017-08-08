/*
 * AmazonS3Activity.h
 *
 * 
 */

#ifndef _AmazonS3Activity_H_
#define _AmazonS3Activity_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AmazonS3Activity : public Object {
public:
	/*! \brief Constructor.
	 */
	AmazonS3Activity();
	AmazonS3Activity(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AmazonS3Activity();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get S3 action (i.e., 'PUT') associated with the activity
	 */
	std::string getAction();

	/*! \brief Set S3 action (i.e., 'PUT') associated with the activity
	 */
	void setAction(std::string  action);
	/*! \brief Get URL for accessing the resource via CDN if configured (will default to the main url if not)
	 */
	std::string getCdnUrl();

	/*! \brief Set URL for accessing the resource via CDN if configured (will default to the main url if not)
	 */
	void setCdnUrl(std::string  cdn_url);
	/*! \brief Get Date the resource was created in S3
	 */
	long long getCreatedDate();

	/*! \brief Set Date the resource was created in S3
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get Name of the file being processed as a resource in S3
	 */
	std::string getFilename();

	/*! \brief Set Name of the file being processed as a resource in S3
	 */
	void setFilename(std::string  filename);
	/*! \brief Get Unique id of the S3 activity
	 */
	long long getId();

	/*! \brief Set Unique id of the S3 activity
	 */
	void setId(long long  id);
	/*! \brief Get S3 object key for the resource
	 */
	std::string getObjectKey();

	/*! \brief Set S3 object key for the resource
	 */
	void setObjectKey(std::string  object_key);
	/*! \brief Get URL for posting and later accessing the S3 resource
	 */
	std::string getUrl();

	/*! \brief Set URL for posting and later accessing the S3 resource
	 */
	void setUrl(std::string  url);
	/*! \brief Get The id of the user that created this S3 activity
	 */
	int getUserId();

	/*! \brief Set The id of the user that created this S3 activity
	 */
	void setUserId(int  user_id);

private:
	std::string action;
	std::string cdn_url;
	long long created_date;
	std::string filename;
	long long id;
	std::string object_key;
	std::string url;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AmazonS3Activity_H_ */
