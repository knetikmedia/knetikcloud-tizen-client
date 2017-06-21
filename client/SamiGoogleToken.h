/*
 * SamiGoogleToken.h
 * 
 * 
 */

#ifndef SamiGoogleToken_H_
#define SamiGoogleToken_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiGoogleToken: public SamiObject {
public:
    SamiGoogleToken();
    SamiGoogleToken(String* json);
    virtual ~SamiGoogleToken();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGoogleToken* fromJson(String* obj);

    String* getPAuthorizationCode();
    void setPAuthorizationCode(String* pAuthorization_code);

private:
    String* pAuthorization_code;
};

} /* namespace Swagger */

#endif /* SamiGoogleToken_H_ */
