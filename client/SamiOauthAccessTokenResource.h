/*
 * SamiOauthAccessTokenResource.h
 * 
 * 
 */

#ifndef SamiOauthAccessTokenResource_H_
#define SamiOauthAccessTokenResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiOauthAccessTokenResource: public SamiObject {
public:
    SamiOauthAccessTokenResource();
    SamiOauthAccessTokenResource(String* json);
    virtual ~SamiOauthAccessTokenResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOauthAccessTokenResource* fromJson(String* obj);

    String* getPClientId();
    void setPClientId(String* pClient_id);
    String* getPToken();
    void setPToken(String* pToken);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pClient_id;
String* pToken;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiOauthAccessTokenResource_H_ */
