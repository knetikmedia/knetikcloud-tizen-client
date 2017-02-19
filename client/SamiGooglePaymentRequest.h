/*
 * SamiGooglePaymentRequest.h
 * 
 * 
 */

#ifndef SamiGooglePaymentRequest_H_
#define SamiGooglePaymentRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiGooglePaymentRequest: public SamiObject {
public:
    SamiGooglePaymentRequest();
    SamiGooglePaymentRequest(String* json);
    virtual ~SamiGooglePaymentRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGooglePaymentRequest* fromJson(String* obj);

    String* getPJsonPayload();
    void setPJsonPayload(String* pJson_payload);
    String* getPSignature();
    void setPSignature(String* pSignature);

private:
    String* pJson_payload;
String* pSignature;
};

} /* namespace Swagger */

#endif /* SamiGooglePaymentRequest_H_ */
