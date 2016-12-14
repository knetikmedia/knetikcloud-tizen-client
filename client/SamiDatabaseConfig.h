/*
 * SamiDatabaseConfig.h
 * 
 * 
 */

#ifndef SamiDatabaseConfig_H_
#define SamiDatabaseConfig_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMongoDatabaseConfig.h"
#include "SamiSqlDatabaseConfig.h"


namespace Swagger {

class SamiDatabaseConfig: public SamiObject {
public:
    SamiDatabaseConfig();
    SamiDatabaseConfig(String* json);
    virtual ~SamiDatabaseConfig();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDatabaseConfig* fromJson(String* obj);

    SamiMongoDatabaseConfig* getPMongo();
    void setPMongo(SamiMongoDatabaseConfig* pMongo);
    SamiSqlDatabaseConfig* getPSql();
    void setPSql(SamiSqlDatabaseConfig* pSql);

private:
    SamiMongoDatabaseConfig* pMongo;
SamiSqlDatabaseConfig* pSql;
};

} /* namespace Swagger */

#endif /* SamiDatabaseConfig_H_ */
