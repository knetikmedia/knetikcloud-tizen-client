/*
 * SamiA request to reset a user&#39;s password by using a known user property.h
 * 
 * 
 */

#ifndef SamiA request to reset a user&#39;s password by using a known user property_H_
#define SamiA request to reset a user&#39;s password by using a known user property_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiA request to reset a user&#39;s password by using a known user property: public SamiObject {
public:
    SamiA request to reset a user&#39;s password by using a known user property();
    SamiA request to reset a user&#39;s password by using a known user property(String* json);
    virtual ~SamiA request to reset a user&#39;s password by using a known user property();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiA request to reset a user&#39;s password by using a known user property* fromJson(String* obj);

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

#endif /* SamiA request to reset a user&#39;s password by using a known user property_H_ */
