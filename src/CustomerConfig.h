/*
 * CustomerConfig.h
 *
 * 
 */

#ifndef _CustomerConfig_H_
#define _CustomerConfig_H_


#include <string>
#include "DatabaseConfig.h"
#include "S3Config.h"
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

class CustomerConfig : public Object {
public:
	/*! \brief Constructor.
	 */
	CustomerConfig();
	CustomerConfig(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CustomerConfig();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAliases();

	/*! \brief Set 
	 */
	void setAliases(std::string  aliases);
	/*! \brief Get 
	 */
	DatabaseConfig getDatabase();

	/*! \brief Set 
	 */
	void setDatabase(DatabaseConfig  database);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	S3Config getS3Config();

	/*! \brief Set 
	 */
	void setS3Config(S3Config  s3_config);

private:
	std::string aliases;
	DatabaseConfig database;
	std::string name;
	S3Config s3_config;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CustomerConfig_H_ */
