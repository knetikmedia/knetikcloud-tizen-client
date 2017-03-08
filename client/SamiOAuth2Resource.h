/*
 * SamiOAuth2Resource.h
 * 
 * 
 */

#ifndef SamiOAuth2Resource_H_
#define SamiOAuth2Resource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiOAuth2Resource: public SamiObject {
public:
    SamiOAuth2Resource();
    SamiOAuth2Resource(String* json);
    virtual ~SamiOAuth2Resource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOAuth2Resource* fromJson(String* obj);

    String* getPAccessToken();
    void setPAccessToken(String* pAccess_token);
    String* getPExpiresIn();
    void setPExpiresIn(String* pExpires_in);
    String* getPScope();
    void setPScope(String* pScope);
    String* getPTokenType();
    void setPTokenType(String* pToken_type);

private:
    String* pAccess_token;
String* pExpires_in;
String* pScope;
String* pToken_type;
};

} /* namespace Swagger */

#endif /* SamiOAuth2Resource_H_ */
