/*
 * SamiCartShippingAddressRequest.h
 * 
 * 
 */

#ifndef SamiCartShippingAddressRequest_H_
#define SamiCartShippingAddressRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiCartShippingAddressRequest: public SamiObject {
public:
    SamiCartShippingAddressRequest();
    SamiCartShippingAddressRequest(String* json);
    virtual ~SamiCartShippingAddressRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCartShippingAddressRequest* fromJson(String* obj);

    String* getPCity();
    void setPCity(String* pCity);
    String* getPCountryCodeIso3();
    void setPCountryCodeIso3(String* pCountry_code_iso3);
    String* getPEmail();
    void setPEmail(String* pEmail);
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    String* getPLastName();
    void setPLastName(String* pLast_name);
    String* getPNamePrefix();
    void setPNamePrefix(String* pName_prefix);
    String* getPOrderNotes();
    void setPOrderNotes(String* pOrder_notes);
    String* getPPhoneNumber();
    void setPPhoneNumber(String* pPhone_number);
    String* getPPostalStateCode();
    void setPPostalStateCode(String* pPostal_state_code);
    String* getPShippingAddressLine1();
    void setPShippingAddressLine1(String* pShipping_address_line1);
    String* getPShippingAddressLine2();
    void setPShippingAddressLine2(String* pShipping_address_line2);
    String* getPZip();
    void setPZip(String* pZip);

private:
    String* pCity;
String* pCountry_code_iso3;
String* pEmail;
String* pFirst_name;
String* pLast_name;
String* pName_prefix;
String* pOrder_notes;
String* pPhone_number;
String* pPostal_state_code;
String* pShipping_address_line1;
String* pShipping_address_line2;
String* pZip;
};

} /* namespace Swagger */

#endif /* SamiCartShippingAddressRequest_H_ */
