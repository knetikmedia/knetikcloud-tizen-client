/*
 * SamiSqlDatabaseConfig.h
 * 
 * 
 */

#ifndef SamiSqlDatabaseConfig_H_
#define SamiSqlDatabaseConfig_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSqlDatabaseConfig: public SamiObject {
public:
    SamiSqlDatabaseConfig();
    SamiSqlDatabaseConfig(String* json);
    virtual ~SamiSqlDatabaseConfig();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSqlDatabaseConfig* fromJson(String* obj);

    Integer* getPConnectionPoolSize();
    void setPConnectionPoolSize(Integer* pConnection_pool_size);
    String* getPConnectionString();
    void setPConnectionString(String* pConnection_string);
    String* getPDbName();
    void setPDbName(String* pDb_name);
    String* getPHostname();
    void setPHostname(String* pHostname);
    String* getPPassword();
    void setPPassword(String* pPassword);
    Integer* getPPort();
    void setPPort(Integer* pPort);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    Integer* pConnection_pool_size;
String* pConnection_string;
String* pDb_name;
String* pHostname;
String* pPassword;
Integer* pPort;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiSqlDatabaseConfig_H_ */
