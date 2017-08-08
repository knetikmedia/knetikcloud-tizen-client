/*
 * SqlDatabaseConfig.h
 *
 * 
 */

#ifndef _SqlDatabaseConfig_H_
#define _SqlDatabaseConfig_H_


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

class SqlDatabaseConfig : public Object {
public:
	/*! \brief Constructor.
	 */
	SqlDatabaseConfig();
	SqlDatabaseConfig(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SqlDatabaseConfig();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getConnectionPoolSize();

	/*! \brief Set 
	 */
	void setConnectionPoolSize(int  connection_pool_size);
	/*! \brief Get 
	 */
	std::string getDbName();

	/*! \brief Set 
	 */
	void setDbName(std::string  db_name);
	/*! \brief Get 
	 */
	std::string getHostname();

	/*! \brief Set 
	 */
	void setHostname(std::string  hostname);
	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string  password);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int  port);
	/*! \brief Get 
	 */
	std::string getUsername();

	/*! \brief Set 
	 */
	void setUsername(std::string  username);

private:
	int connection_pool_size;
	std::string db_name;
	std::string hostname;
	std::string password;
	int port;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SqlDatabaseConfig_H_ */
