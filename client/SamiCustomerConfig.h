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
    String* getPUploadBucket();
    void setPUploadBucket(String* pUpload_bucket);

private:
    String* pAliases;
SamiDatabaseConfig* pDatabase;
String* pName;
String* pUpload_bucket;
};

} /* namespace Swagger */

#endif /* SamiCustomerConfig_H_ */
