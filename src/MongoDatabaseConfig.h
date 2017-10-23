/*
 * MongoDatabaseConfig.h
 *
 * 
 */

#ifndef _MongoDatabaseConfig_H_
#define _MongoDatabaseConfig_H_


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

class MongoDatabaseConfig : public Object {
public:
	/*! \brief Constructor.
	 */
	MongoDatabaseConfig();
	MongoDatabaseConfig(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MongoDatabaseConfig();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDbName();

	/*! \brief Set 
	 */
	void setDbName(std::string  db_name);
	/*! \brief Get 
	 */
	std::string getOptions();

	/*! \brief Set 
	 */
	void setOptions(std::string  options);
	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string  password);
	/*! \brief Get 
	 */
	std::string getServers();

	/*! \brief Set 
	 */
	void setServers(std::string  servers);
	/*! \brief Get 
	 */
	std::string getUsername();

	/*! \brief Set 
	 */
	void setUsername(std::string  username);

private:
	std::string db_name;
	std::string options;
	std::string password;
	std::string servers;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MongoDatabaseConfig_H_ */
