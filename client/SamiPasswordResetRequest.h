/*
 * SamiPasswordResetRequest.h
 * 
 * A request to reset a user&#39;s password by using a known user property
 */

#ifndef SamiPasswordResetRequest_H_
#define SamiPasswordResetRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiPasswordResetRequest: public SamiObject {
public:
    SamiPasswordResetRequest();
    SamiPasswordResetRequest(String* json);
    virtual ~SamiPasswordResetRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPasswordResetRequest* fromJson(String* obj);

    String* getPEmail();
    void setPEmail(String* pEmail);
    String* getPMobileNumber();
    void setPMobileNumber(String* pMobile_number);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pEmail;
String* pMobile_number;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiPasswordResetRequest_H_ */
