/*
 * SamiSavedAddressResource.h
 * 
 * 
 */

#ifndef SamiSavedAddressResource_H_
#define SamiSavedAddressResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSavedAddressResource: public SamiObject {
public:
    SamiSavedAddressResource();
    SamiSavedAddressResource(String* json);
    virtual ~SamiSavedAddressResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSavedAddressResource* fromJson(String* obj);

    String* getPAddress1();
    void setPAddress1(String* pAddress1);
    String* getPAddress2();
    void setPAddress2(String* pAddress2);
    String* getPCity();
    void setPCity(String* pCity);
    String* getPCountryCode();
    void setPCountryCode(String* pCountry_code);
    Boolean* getPDefault();
    void setPDefault(Boolean* pDefault);
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPLastName();
    void setPLastName(String* pLast_name);
    String* getPName();
    void setPName(String* pName);
    String* getPPhone1();
    void setPPhone1(String* pPhone1);
    String* getPPhone2();
    void setPPhone2(String* pPhone2);
    String* getPPostalCode();
    void setPPostalCode(String* pPostal_code);
    String* getPStateCode();
    void setPStateCode(String* pState_code);

private:
    String* pAddress1;
String* pAddress2;
String* pCity;
String* pCountry_code;
Boolean* pDefault;
String* pFirst_name;
Integer* pId;
String* pLast_name;
String* pName;
String* pPhone1;
String* pPhone2;
String* pPostal_code;
String* pState_code;
};

} /* namespace Swagger */

#endif /* SamiSavedAddressResource_H_ */
