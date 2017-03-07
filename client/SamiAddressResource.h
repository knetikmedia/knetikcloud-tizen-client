/*
 * SamiAddressResource.h
 * 
 * 
 */

#ifndef SamiAddressResource_H_
#define SamiAddressResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiAddressResource: public SamiObject {
public:
    SamiAddressResource();
    SamiAddressResource(String* json);
    virtual ~SamiAddressResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAddressResource* fromJson(String* obj);

    String* getPAddress1();
    void setPAddress1(String* pAddress1);
    String* getPAddress2();
    void setPAddress2(String* pAddress2);
    String* getPCity();
    void setPCity(String* pCity);
    String* getPCountryCode();
    void setPCountryCode(String* pCountry_code);
    String* getPPostalCode();
    void setPPostalCode(String* pPostal_code);
    String* getPStateCode();
    void setPStateCode(String* pState_code);

private:
    String* pAddress1;
String* pAddress2;
String* pCity;
String* pCountry_code;
String* pPostal_code;
String* pState_code;
};

} /* namespace Swagger */

#endif /* SamiAddressResource_H_ */
