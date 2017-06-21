/*
 * SamiCustomerConfig.h
 * 
 * 
 */

#ifndef SamiCustomerConfig_H_
#define SamiCustomerConfig_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiDatabaseConfig.h"
#include "SamiS3Config.h"
using Tizen::Base::String;


namespace Swagger {

class SamiCustomerConfig: public SamiObject {
public:
    SamiCustomerConfig();
    SamiCustomerConfig(String* json);
    virtual ~SamiCustomerConfig();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCustomerConfig* fromJson(String* obj);

    String* getPAliases();
    void setPAliases(String* pAliases);
    SamiDatabaseConfig* getPDatabase();
    void setPDatabase(SamiDatabaseConfig* pDatabase);
    String* getPName();
    void setPName(String* pName);
    SamiS3Config* getPS3Config();
    void setPS3Config(SamiS3Config* pS3_config);

private:
    String* pAliases;
SamiDatabaseConfig* pDatabase;
String* pName;
SamiS3Config* pS3_config;
};

} /* namespace Swagger */

#endif /* SamiCustomerConfig_H_ */
