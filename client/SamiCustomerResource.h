/*
 * SamiCustomerResource.h
 * 
 * 
 */

#ifndef SamiCustomerResource_H_
#define SamiCustomerResource_H_

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

class SamiCustomerResource: public SamiObject {
public:
    SamiCustomerResource();
    SamiCustomerResource(String* json);
    virtual ~SamiCustomerResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCustomerResource* fromJson(String* obj);

    String* getPAliases();
    void setPAliases(String* pAliases);
    SamiDatabaseConfig* getPDatabase();
    void setPDatabase(SamiDatabaseConfig* pDatabase);
    String* getPName();
    void setPName(String* pName);

private:
    String* pAliases;
SamiDatabaseConfig* pDatabase;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiCustomerResource_H_ */
