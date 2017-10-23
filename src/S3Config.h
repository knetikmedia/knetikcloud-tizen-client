/*
 * S3Config.h
 *
 * 
 */

#ifndef _S3Config_H_
#define _S3Config_H_


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

class S3Config : public Object {
public:
	/*! \brief Constructor.
	 */
	S3Config();
	S3Config(char* str);

	/*! \brief Destructor.
	 */
	virtual ~S3Config();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getBucketName();

	/*! \brief Set 
	 */
	void setBucketName(std::string  bucket_name);
	/*! \brief Get 
	 */
	std::string getCdnUrl();

	/*! \brief Set 
	 */
	void setCdnUrl(std::string  cdn_url);
	/*! \brief Get 
	 */
	std::string getRegion();

	/*! \brief Set 
	 */
	void setRegion(std::string  region);
	/*! \brief Get 
	 */
	std::string getUploadPrefix();

	/*! \brief Set 
	 */
	void setUploadPrefix(std::string  upload_prefix);

private:
	std::string bucket_name;
	std::string cdn_url;
	std::string region;
	std::string upload_prefix;
	void __init();
	void __cleanup();

};
}
}

#endif /* _S3Config_H_ */
