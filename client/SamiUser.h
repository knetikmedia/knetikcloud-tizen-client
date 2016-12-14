/*
 * SamiUser.h
 * 
 * 
 */

#ifndef SamiUser_H_
#define SamiUser_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiAffiliate.h"
#include "SamiCountry.h"
#include "SamiCurrency.h"
#include "SamiLanguage.h"
#include "SamiProperty.h"
#include "SamiRole.h"
#include "SamiTimezone.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUser: public SamiObject {
public:
    SamiUser();
    SamiUser(String* json);
    virtual ~SamiUser();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUser* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPAddress();
    void setPAddress(String* pAddress);
    String* getPAddress2();
    void setPAddress2(String* pAddress2);
    SamiAffiliate* getPAffiliate();
    void setPAffiliate(SamiAffiliate* pAffiliate);
    String* getPAvatarUrl();
    void setPAvatarUrl(String* pAvatar_url);
    String* getPCity();
    void setPCity(String* pCity);
    SamiCountry* getPCountry();
    void setPCountry(SamiCountry* pCountry);
    SamiCurrency* getPCurrency();
    void setPCurrency(SamiCurrency* pCurrency);
    Long* getPDateCreated();
    void setPDateCreated(Long* pDate_created);
    Long* getPDateOfBirth();
    void setPDateOfBirth(Long* pDate_of_birth);
    Long* getPDateUpdated();
    void setPDateUpdated(Long* pDate_updated);
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
    Boolean* getPGuest();
    void setPGuest(Boolean* pGuest);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPInviteToken();
    void setPInviteToken(String* pInvite_token);
    SamiLanguage* getPLang();
    void setPLang(SamiLanguage* pLang);
    Long* getPLastActivity();
    void setPLastActivity(Long* pLast_activity);
    Long* getPLastLogin();
    void setPLastLogin(Long* pLast_login);
    String* getPLastName();
    void setPLastName(String* pLast_name);
    Integer* getPLockoutAttempts();
    void setPLockoutAttempts(Integer* pLockout_attempts);
    Long* getPLockoutDate();
    void setPLockoutDate(Long* pLockout_date);
    String* getPMobileNumber();
    void setPMobileNumber(String* pMobile_number);
    Integer* getPOldId();
    void setPOldId(Integer* pOld_id);
    String* getPPassword();
    void setPPassword(String* pPassword);
    String* getPPostalCode();
    void setPPostalCode(String* pPostal_code);
    String* getPPropertiesString();
    void setPPropertiesString(String* pProperties_string);
    IList* getPRoles();
    void setPRoles(IList* pRoles);
    String* getPState();
    void setPState(String* pState);
    String* getPStatus();
    void setPStatus(String* pStatus);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    SamiTimezone* getPTimezone();
    void setPTimezone(SamiTimezone* pTimezone);
    String* getPToken();
    void setPToken(String* pToken);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    HashMap* pAdditional_properties;
String* pAddress;
String* pAddress2;
SamiAffiliate* pAffiliate;
String* pAvatar_url;
String* pCity;
SamiCountry* pCountry;
SamiCurrency* pCurrency;
Long* pDate_created;
Long* pDate_of_birth;
Long* pDate_updated;
String* pDescription;
String* pDisplay_name;
String* pEmail;
String* pFirst_name;
String* pFullname;
String* pGender;
Boolean* pGuest;
Integer* pId;
String* pInvite_token;
SamiLanguage* pLang;
Long* pLast_activity;
Long* pLast_login;
String* pLast_name;
Integer* pLockout_attempts;
Long* pLockout_date;
String* pMobile_number;
Integer* pOld_id;
String* pPassword;
String* pPostal_code;
String* pProperties_string;
IList* pRoles;
String* pState;
String* pStatus;
String* pTemplate;
SamiTimezone* pTimezone;
String* pToken;
String* pType_hint;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiUser_H_ */
