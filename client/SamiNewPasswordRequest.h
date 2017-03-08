/*
 * SamiNewPasswordRequest.h
 * 
 * 
 */

#ifndef SamiNewPasswordRequest_H_
#define SamiNewPasswordRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiNewPasswordRequest: public SamiObject {
public:
    SamiNewPasswordRequest();
    SamiNewPasswordRequest(String* json);
    virtual ~SamiNewPasswordRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewPasswordRequest* fromJson(String* obj);

    String* getPPassword();
    void setPPassword(String* pPassword);
    String* getPSecret();
    void setPSecret(String* pSecret);

private:
    String* pPassword;
String* pSecret;
};

} /* namespace Swagger */

#endif /* SamiNewPasswordRequest_H_ */
