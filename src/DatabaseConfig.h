/*
 * DatabaseConfig.h
 *
 * 
 */

#ifndef _DatabaseConfig_H_
#define _DatabaseConfig_H_


#include <string>
#include "MongoDatabaseConfig.h"
#include "SqlDatabaseConfig.h"
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

class DatabaseConfig : public Object {
public:
	/*! \brief Constructor.
	 */
	DatabaseConfig();
	DatabaseConfig(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DatabaseConfig();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	MongoDatabaseConfig getMongo();

	/*! \brief Set 
	 */
	void setMongo(MongoDatabaseConfig  mongo);
	/*! \brief Get 
	 */
	SqlDatabaseConfig getSql();

	/*! \brief Set 
	 */
	void setSql(SqlDatabaseConfig  sql);

private:
	MongoDatabaseConfig mongo;
	SqlDatabaseConfig sql;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DatabaseConfig_H_ */
