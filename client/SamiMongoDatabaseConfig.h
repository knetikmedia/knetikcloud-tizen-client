/*
 * SamiMongoDatabaseConfig.h
 * 
 * 
 */

#ifndef SamiMongoDatabaseConfig_H_
#define SamiMongoDatabaseConfig_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiMongoDatabaseConfig: public SamiObject {
public:
    SamiMongoDatabaseConfig();
    SamiMongoDatabaseConfig(String* json);
    virtual ~SamiMongoDatabaseConfig();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMongoDatabaseConfig* fromJson(String* obj);

    String* getPDbName();
    void setPDbName(String* pDb_name);
    String* getPOptions();
    void setPOptions(String* pOptions);
    String* getPPassword();
    void setPPassword(String* pPassword);
    String* getPServers();
    void setPServers(String* pServers);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pDb_name;
String* pOptions;
String* pPassword;
String* pServers;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiMongoDatabaseConfig_H_ */
