/*
 * SamiUserResource.h
 * 
 * 
 */

#ifndef SamiUserResource_H_
#define SamiUserResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
#include "SamiUserRelationshipReferenceResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserResource: public SamiObject {
public:
    SamiUserResource();
    SamiUserResource(String* json);
    virtual ~SamiUserResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPAddress();
    void setPAddress(String* pAddress);
    String* getPAddress2();
    void setPAddress2(String* pAddress2);
    String* getPAvatarUrl();
    void setPAvatarUrl(String* pAvatar_url);
    IList* getPChildren();
    void setPChildren(IList* pChildren);
    String* getPCity();
    void setPCity(String* pCity);
    String* getPCountryCode();
    void setPCountryCode(String* pCountry_code);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Long* getPDateOfBirth();
    void setPDateOfBirth(Long* pDate_of_birth);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPDisplayName();
    void setPDisplayName(String* pDisplay_name);
    String* getPEmail();
    void setPEmail(String* pEmail);
    String* getPFirstName();
    void setPFirstName(String* pFirst_name);
    String* getPFullname();
    void setPFullname(String* pFullname);
    String* getPGender();
    void setPGender(String* pGender);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPLanguageCode();
    void setPLanguageCode(String* pLanguage_code);
    String* getPLastName();
    void setPLastName(String* pLast_name);
    String* getPMobileNumber();
    void setPMobileNumber(String* pMobile_number);
    IList* getPParents();
    void setPParents(IList* pParents);
    String* getPPassword();
    void setPPassword(String* pPassword);
    String* getPPostalCode();
    void setPPostalCode(String* pPostal_code);
    String* getPState();
    void setPState(String* pState);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPTimezoneCode();
    void setPTimezoneCode(String* pTimezone_code);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    HashMap* pAdditional_properties;
String* pAddress;
String* pAddress2;
String* pAvatar_url;
IList* pChildren;
String* pCity;
String* pCountry_code;
String* pCurrency_code;
Long* pDate_of_birth;
String* pDescription;
String* pDisplay_name;
String* pEmail;
String* pFirst_name;
String* pFullname;
String* pGender;
Integer* pId;
String* pLanguage_code;
String* pLast_name;
String* pMobile_number;
IList* pParents;
String* pPassword;
String* pPostal_code;
String* pState;
IList* pTags;
String* pTemplate;
String* pTimezone_code;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiUserResource_H_ */
