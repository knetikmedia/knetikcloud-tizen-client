
#include "SamiUser.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUser::SamiUser() {
    init();
}

SamiUser::~SamiUser() {
    this->cleanup();
}

void
SamiUser::init() {
    pAdditional_properties = null;
pAddress = null;
pAddress2 = null;
pAffiliate = null;
pAvatar_url = null;
pChildren = null;
pCity = null;
pCountry = null;
pCurrency = null;
pDate_created = null;
pDate_of_birth = null;
pDate_updated = null;
pDescription = null;
pDisplay_name = null;
pEmail = null;
pFirst_name = null;
pFullname = null;
pGender = null;
pGroups = null;
pGuest = null;
pId = null;
pInvite_token = null;
pLang = null;
pLast_activity = null;
pLast_login = null;
pLast_name = null;
pLockout_attempts = null;
pLockout_date = null;
pMobile_number = null;
pOld_id = null;
pParents = null;
pPassword = null;
pPostal_code = null;
pProperties_string = null;
pRoles = null;
pState = null;
pStatus = null;
pTag_strings = null;
pTags = null;
pTemplate = null;
pTimezone = null;
pToken = null;
pType_hint = null;
pUsername = null;
}

void
SamiUser::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pAddress != null) {
        
        delete pAddress;
        pAddress = null;
    }
if(pAddress2 != null) {
        
        delete pAddress2;
        pAddress2 = null;
    }
if(pAffiliate != null) {
        
        delete pAffiliate;
        pAffiliate = null;
    }
if(pAvatar_url != null) {
        
        delete pAvatar_url;
        pAvatar_url = null;
    }
if(pChildren != null) {
        pChildren->RemoveAll(true);
        delete pChildren;
        pChildren = null;
    }
if(pCity != null) {
        
        delete pCity;
        pCity = null;
    }
if(pCountry != null) {
        
        delete pCountry;
        pCountry = null;
    }
if(pCurrency != null) {
        
        delete pCurrency;
        pCurrency = null;
    }
if(pDate_created != null) {
        
        delete pDate_created;
        pDate_created = null;
    }
if(pDate_of_birth != null) {
        
        delete pDate_of_birth;
        pDate_of_birth = null;
    }
if(pDate_updated != null) {
        
        delete pDate_updated;
        pDate_updated = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pDisplay_name != null) {
        
        delete pDisplay_name;
        pDisplay_name = null;
    }
if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
if(pFullname != null) {
        
        delete pFullname;
        pFullname = null;
    }
if(pGender != null) {
        
        delete pGender;
        pGender = null;
    }
if(pGroups != null) {
        pGroups->RemoveAll(true);
        delete pGroups;
        pGroups = null;
    }
if(pGuest != null) {
        
        delete pGuest;
        pGuest = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvite_token != null) {
        
        delete pInvite_token;
        pInvite_token = null;
    }
if(pLang != null) {
        
        delete pLang;
        pLang = null;
    }
if(pLast_activity != null) {
        
        delete pLast_activity;
        pLast_activity = null;
    }
if(pLast_login != null) {
        
        delete pLast_login;
        pLast_login = null;
    }
if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
if(pLockout_attempts != null) {
        
        delete pLockout_attempts;
        pLockout_attempts = null;
    }
if(pLockout_date != null) {
        
        delete pLockout_date;
        pLockout_date = null;
    }
if(pMobile_number != null) {
        
        delete pMobile_number;
        pMobile_number = null;
    }
if(pOld_id != null) {
        
        delete pOld_id;
        pOld_id = null;
    }
if(pParents != null) {
        pParents->RemoveAll(true);
        delete pParents;
        pParents = null;
    }
if(pPassword != null) {
        
        delete pPassword;
        pPassword = null;
    }
if(pPostal_code != null) {
        
        delete pPostal_code;
        pPostal_code = null;
    }
if(pProperties_string != null) {
        
        delete pProperties_string;
        pProperties_string = null;
    }
if(pRoles != null) {
        pRoles->RemoveAll(true);
        delete pRoles;
        pRoles = null;
    }
if(pState != null) {
        
        delete pState;
        pState = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pTag_strings != null) {
        pTag_strings->RemoveAll(true);
        delete pTag_strings;
        pTag_strings = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pTimezone != null) {
        
        delete pTimezone;
        pTimezone = null;
    }
if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiUser*
SamiUser::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiUser::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
JsonString* pAddressKey = new JsonString(L"address");
        IJsonValue* pAddressVal = null;
        pJsonObject->GetValue(pAddressKey, pAddressVal);
        if(pAddressVal != null) {
            
            pAddress = new String();
            jsonToValue(pAddress, pAddressVal, L"String", L"String");
        }
        delete pAddressKey;
JsonString* pAddress2Key = new JsonString(L"address2");
        IJsonValue* pAddress2Val = null;
        pJsonObject->GetValue(pAddress2Key, pAddress2Val);
        if(pAddress2Val != null) {
            
            pAddress2 = new String();
            jsonToValue(pAddress2, pAddress2Val, L"String", L"String");
        }
        delete pAddress2Key;
JsonString* pAffiliateKey = new JsonString(L"affiliate");
        IJsonValue* pAffiliateVal = null;
        pJsonObject->GetValue(pAffiliateKey, pAffiliateVal);
        if(pAffiliateVal != null) {
            
            pAffiliate = new SamiAffiliate();
            jsonToValue(pAffiliate, pAffiliateVal, L"SamiAffiliate", L"SamiAffiliate");
        }
        delete pAffiliateKey;
JsonString* pAvatar_urlKey = new JsonString(L"avatar_url");
        IJsonValue* pAvatar_urlVal = null;
        pJsonObject->GetValue(pAvatar_urlKey, pAvatar_urlVal);
        if(pAvatar_urlVal != null) {
            
            pAvatar_url = new String();
            jsonToValue(pAvatar_url, pAvatar_urlVal, L"String", L"String");
        }
        delete pAvatar_urlKey;
JsonString* pChildrenKey = new JsonString(L"children");
        IJsonValue* pChildrenVal = null;
        pJsonObject->GetValue(pChildrenKey, pChildrenVal);
        if(pChildrenVal != null) {
            pChildren = new ArrayList();
            
            jsonToValue(pChildren, pChildrenVal, L"IList", L"SamiUserRelationship");
        }
        delete pChildrenKey;
JsonString* pCityKey = new JsonString(L"city");
        IJsonValue* pCityVal = null;
        pJsonObject->GetValue(pCityKey, pCityVal);
        if(pCityVal != null) {
            
            pCity = new String();
            jsonToValue(pCity, pCityVal, L"String", L"String");
        }
        delete pCityKey;
JsonString* pCountryKey = new JsonString(L"country");
        IJsonValue* pCountryVal = null;
        pJsonObject->GetValue(pCountryKey, pCountryVal);
        if(pCountryVal != null) {
            
            pCountry = new SamiCountry();
            jsonToValue(pCountry, pCountryVal, L"SamiCountry", L"SamiCountry");
        }
        delete pCountryKey;
JsonString* pCurrencyKey = new JsonString(L"currency");
        IJsonValue* pCurrencyVal = null;
        pJsonObject->GetValue(pCurrencyKey, pCurrencyVal);
        if(pCurrencyVal != null) {
            
            pCurrency = new SamiCurrency();
            jsonToValue(pCurrency, pCurrencyVal, L"SamiCurrency", L"SamiCurrency");
        }
        delete pCurrencyKey;
JsonString* pDate_createdKey = new JsonString(L"date_created");
        IJsonValue* pDate_createdVal = null;
        pJsonObject->GetValue(pDate_createdKey, pDate_createdVal);
        if(pDate_createdVal != null) {
            
            pDate_created = new Long();
            jsonToValue(pDate_created, pDate_createdVal, L"Long", L"Long");
        }
        delete pDate_createdKey;
JsonString* pDate_of_birthKey = new JsonString(L"date_of_birth");
        IJsonValue* pDate_of_birthVal = null;
        pJsonObject->GetValue(pDate_of_birthKey, pDate_of_birthVal);
        if(pDate_of_birthVal != null) {
            
            pDate_of_birth = new Long();
            jsonToValue(pDate_of_birth, pDate_of_birthVal, L"Long", L"Long");
        }
        delete pDate_of_birthKey;
JsonString* pDate_updatedKey = new JsonString(L"date_updated");
        IJsonValue* pDate_updatedVal = null;
        pJsonObject->GetValue(pDate_updatedKey, pDate_updatedVal);
        if(pDate_updatedVal != null) {
            
            pDate_updated = new Long();
            jsonToValue(pDate_updated, pDate_updatedVal, L"Long", L"Long");
        }
        delete pDate_updatedKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pDisplay_nameKey = new JsonString(L"display_name");
        IJsonValue* pDisplay_nameVal = null;
        pJsonObject->GetValue(pDisplay_nameKey, pDisplay_nameVal);
        if(pDisplay_nameVal != null) {
            
            pDisplay_name = new String();
            jsonToValue(pDisplay_name, pDisplay_nameVal, L"String", L"String");
        }
        delete pDisplay_nameKey;
JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pFirst_nameKey = new JsonString(L"first_name");
        IJsonValue* pFirst_nameVal = null;
        pJsonObject->GetValue(pFirst_nameKey, pFirst_nameVal);
        if(pFirst_nameVal != null) {
            
            pFirst_name = new String();
            jsonToValue(pFirst_name, pFirst_nameVal, L"String", L"String");
        }
        delete pFirst_nameKey;
JsonString* pFullnameKey = new JsonString(L"fullname");
        IJsonValue* pFullnameVal = null;
        pJsonObject->GetValue(pFullnameKey, pFullnameVal);
        if(pFullnameVal != null) {
            
            pFullname = new String();
            jsonToValue(pFullname, pFullnameVal, L"String", L"String");
        }
        delete pFullnameKey;
JsonString* pGenderKey = new JsonString(L"gender");
        IJsonValue* pGenderVal = null;
        pJsonObject->GetValue(pGenderKey, pGenderVal);
        if(pGenderVal != null) {
            
            pGender = new String();
            jsonToValue(pGender, pGenderVal, L"String", L"String");
        }
        delete pGenderKey;
JsonString* pGroupsKey = new JsonString(L"groups");
        IJsonValue* pGroupsVal = null;
        pJsonObject->GetValue(pGroupsKey, pGroupsVal);
        if(pGroupsVal != null) {
            pGroups = new ArrayList();
            
            jsonToValue(pGroups, pGroupsVal, L"IList", L"SamiGroupMember");
        }
        delete pGroupsKey;
JsonString* pGuestKey = new JsonString(L"guest");
        IJsonValue* pGuestVal = null;
        pJsonObject->GetValue(pGuestKey, pGuestVal);
        if(pGuestVal != null) {
            
            pGuest = new Boolean(false);
            jsonToValue(pGuest, pGuestVal, L"Boolean", L"Boolean");
        }
        delete pGuestKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInvite_tokenKey = new JsonString(L"invite_token");
        IJsonValue* pInvite_tokenVal = null;
        pJsonObject->GetValue(pInvite_tokenKey, pInvite_tokenVal);
        if(pInvite_tokenVal != null) {
            
            pInvite_token = new String();
            jsonToValue(pInvite_token, pInvite_tokenVal, L"String", L"String");
        }
        delete pInvite_tokenKey;
JsonString* pLangKey = new JsonString(L"lang");
        IJsonValue* pLangVal = null;
        pJsonObject->GetValue(pLangKey, pLangVal);
        if(pLangVal != null) {
            
            pLang = new SamiLanguage();
            jsonToValue(pLang, pLangVal, L"SamiLanguage", L"SamiLanguage");
        }
        delete pLangKey;
JsonString* pLast_activityKey = new JsonString(L"last_activity");
        IJsonValue* pLast_activityVal = null;
        pJsonObject->GetValue(pLast_activityKey, pLast_activityVal);
        if(pLast_activityVal != null) {
            
            pLast_activity = new Long();
            jsonToValue(pLast_activity, pLast_activityVal, L"Long", L"Long");
        }
        delete pLast_activityKey;
JsonString* pLast_loginKey = new JsonString(L"last_login");
        IJsonValue* pLast_loginVal = null;
        pJsonObject->GetValue(pLast_loginKey, pLast_loginVal);
        if(pLast_loginVal != null) {
            
            pLast_login = new Long();
            jsonToValue(pLast_login, pLast_loginVal, L"Long", L"Long");
        }
        delete pLast_loginKey;
JsonString* pLast_nameKey = new JsonString(L"last_name");
        IJsonValue* pLast_nameVal = null;
        pJsonObject->GetValue(pLast_nameKey, pLast_nameVal);
        if(pLast_nameVal != null) {
            
            pLast_name = new String();
            jsonToValue(pLast_name, pLast_nameVal, L"String", L"String");
        }
        delete pLast_nameKey;
JsonString* pLockout_attemptsKey = new JsonString(L"lockout_attempts");
        IJsonValue* pLockout_attemptsVal = null;
        pJsonObject->GetValue(pLockout_attemptsKey, pLockout_attemptsVal);
        if(pLockout_attemptsVal != null) {
            
            pLockout_attempts = new Integer();
            jsonToValue(pLockout_attempts, pLockout_attemptsVal, L"Integer", L"Integer");
        }
        delete pLockout_attemptsKey;
JsonString* pLockout_dateKey = new JsonString(L"lockout_date");
        IJsonValue* pLockout_dateVal = null;
        pJsonObject->GetValue(pLockout_dateKey, pLockout_dateVal);
        if(pLockout_dateVal != null) {
            
            pLockout_date = new Long();
            jsonToValue(pLockout_date, pLockout_dateVal, L"Long", L"Long");
        }
        delete pLockout_dateKey;
JsonString* pMobile_numberKey = new JsonString(L"mobile_number");
        IJsonValue* pMobile_numberVal = null;
        pJsonObject->GetValue(pMobile_numberKey, pMobile_numberVal);
        if(pMobile_numberVal != null) {
            
            pMobile_number = new String();
            jsonToValue(pMobile_number, pMobile_numberVal, L"String", L"String");
        }
        delete pMobile_numberKey;
JsonString* pOld_idKey = new JsonString(L"old_id");
        IJsonValue* pOld_idVal = null;
        pJsonObject->GetValue(pOld_idKey, pOld_idVal);
        if(pOld_idVal != null) {
            
            pOld_id = new Integer();
            jsonToValue(pOld_id, pOld_idVal, L"Integer", L"Integer");
        }
        delete pOld_idKey;
JsonString* pParentsKey = new JsonString(L"parents");
        IJsonValue* pParentsVal = null;
        pJsonObject->GetValue(pParentsKey, pParentsVal);
        if(pParentsVal != null) {
            pParents = new ArrayList();
            
            jsonToValue(pParents, pParentsVal, L"IList", L"SamiUserRelationship");
        }
        delete pParentsKey;
JsonString* pPasswordKey = new JsonString(L"password");
        IJsonValue* pPasswordVal = null;
        pJsonObject->GetValue(pPasswordKey, pPasswordVal);
        if(pPasswordVal != null) {
            
            pPassword = new String();
            jsonToValue(pPassword, pPasswordVal, L"String", L"String");
        }
        delete pPasswordKey;
JsonString* pPostal_codeKey = new JsonString(L"postal_code");
        IJsonValue* pPostal_codeVal = null;
        pJsonObject->GetValue(pPostal_codeKey, pPostal_codeVal);
        if(pPostal_codeVal != null) {
            
            pPostal_code = new String();
            jsonToValue(pPostal_code, pPostal_codeVal, L"String", L"String");
        }
        delete pPostal_codeKey;
JsonString* pProperties_stringKey = new JsonString(L"properties_string");
        IJsonValue* pProperties_stringVal = null;
        pJsonObject->GetValue(pProperties_stringKey, pProperties_stringVal);
        if(pProperties_stringVal != null) {
            
            pProperties_string = new String();
            jsonToValue(pProperties_string, pProperties_stringVal, L"String", L"String");
        }
        delete pProperties_stringKey;
JsonString* pRolesKey = new JsonString(L"roles");
        IJsonValue* pRolesVal = null;
        pJsonObject->GetValue(pRolesKey, pRolesVal);
        if(pRolesVal != null) {
            pRoles = new ArrayList();
            
            jsonToValue(pRoles, pRolesVal, L"IList", L"SamiRole");
        }
        delete pRolesKey;
JsonString* pStateKey = new JsonString(L"state");
        IJsonValue* pStateVal = null;
        pJsonObject->GetValue(pStateKey, pStateVal);
        if(pStateVal != null) {
            
            pState = new String();
            jsonToValue(pState, pStateVal, L"String", L"String");
        }
        delete pStateKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pTag_stringsKey = new JsonString(L"tag_strings");
        IJsonValue* pTag_stringsVal = null;
        pJsonObject->GetValue(pTag_stringsKey, pTag_stringsVal);
        if(pTag_stringsVal != null) {
            pTag_strings = new ArrayList();
            
            jsonToValue(pTag_strings, pTag_stringsVal, L"IList", L"String");
        }
        delete pTag_stringsKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"SamiUserTag");
        }
        delete pTagsKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new String();
            jsonToValue(pTemplate, pTemplateVal, L"String", L"String");
        }
        delete pTemplateKey;
JsonString* pTimezoneKey = new JsonString(L"timezone");
        IJsonValue* pTimezoneVal = null;
        pJsonObject->GetValue(pTimezoneKey, pTimezoneVal);
        if(pTimezoneVal != null) {
            
            pTimezone = new SamiTimezone();
            jsonToValue(pTimezone, pTimezoneVal, L"SamiTimezone", L"SamiTimezone");
        }
        delete pTimezoneKey;
JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pUsernameKey = new JsonString(L"username");
        IJsonValue* pUsernameVal = null;
        pJsonObject->GetValue(pUsernameKey, pUsernameVal);
        if(pUsernameVal != null) {
            
            pUsername = new String();
            jsonToValue(pUsername, pUsernameVal, L"String", L"String");
        }
        delete pUsernameKey;
    }
}

SamiUser::SamiUser(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiUser::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiUser::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pAddressKey = new JsonString(L"address");
    pJsonObject->Add(pAddressKey, toJson(getPAddress(), "String", ""));

    JsonString *pAddress2Key = new JsonString(L"address2");
    pJsonObject->Add(pAddress2Key, toJson(getPAddress2(), "String", ""));

    JsonString *pAffiliateKey = new JsonString(L"affiliate");
    pJsonObject->Add(pAffiliateKey, toJson(getPAffiliate(), "SamiAffiliate", ""));

    JsonString *pAvatar_urlKey = new JsonString(L"avatar_url");
    pJsonObject->Add(pAvatar_urlKey, toJson(getPAvatarUrl(), "String", ""));

    JsonString *pChildrenKey = new JsonString(L"children");
    pJsonObject->Add(pChildrenKey, toJson(getPChildren(), "SamiUserRelationship", "array"));

    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    JsonString *pCountryKey = new JsonString(L"country");
    pJsonObject->Add(pCountryKey, toJson(getPCountry(), "SamiCountry", ""));

    JsonString *pCurrencyKey = new JsonString(L"currency");
    pJsonObject->Add(pCurrencyKey, toJson(getPCurrency(), "SamiCurrency", ""));

    JsonString *pDate_createdKey = new JsonString(L"date_created");
    pJsonObject->Add(pDate_createdKey, toJson(getPDateCreated(), "Long", ""));

    JsonString *pDate_of_birthKey = new JsonString(L"date_of_birth");
    pJsonObject->Add(pDate_of_birthKey, toJson(getPDateOfBirth(), "Long", ""));

    JsonString *pDate_updatedKey = new JsonString(L"date_updated");
    pJsonObject->Add(pDate_updatedKey, toJson(getPDateUpdated(), "Long", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pDisplay_nameKey = new JsonString(L"display_name");
    pJsonObject->Add(pDisplay_nameKey, toJson(getPDisplayName(), "String", ""));

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    JsonString *pFullnameKey = new JsonString(L"fullname");
    pJsonObject->Add(pFullnameKey, toJson(getPFullname(), "String", ""));

    JsonString *pGenderKey = new JsonString(L"gender");
    pJsonObject->Add(pGenderKey, toJson(getPGender(), "String", ""));

    JsonString *pGroupsKey = new JsonString(L"groups");
    pJsonObject->Add(pGroupsKey, toJson(getPGroups(), "SamiGroupMember", "array"));

    JsonString *pGuestKey = new JsonString(L"guest");
    pJsonObject->Add(pGuestKey, toJson(getPGuest(), "Boolean", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInvite_tokenKey = new JsonString(L"invite_token");
    pJsonObject->Add(pInvite_tokenKey, toJson(getPInviteToken(), "String", ""));

    JsonString *pLangKey = new JsonString(L"lang");
    pJsonObject->Add(pLangKey, toJson(getPLang(), "SamiLanguage", ""));

    JsonString *pLast_activityKey = new JsonString(L"last_activity");
    pJsonObject->Add(pLast_activityKey, toJson(getPLastActivity(), "Long", ""));

    JsonString *pLast_loginKey = new JsonString(L"last_login");
    pJsonObject->Add(pLast_loginKey, toJson(getPLastLogin(), "Long", ""));

    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    JsonString *pLockout_attemptsKey = new JsonString(L"lockout_attempts");
    pJsonObject->Add(pLockout_attemptsKey, toJson(getPLockoutAttempts(), "Integer", ""));

    JsonString *pLockout_dateKey = new JsonString(L"lockout_date");
    pJsonObject->Add(pLockout_dateKey, toJson(getPLockoutDate(), "Long", ""));

    JsonString *pMobile_numberKey = new JsonString(L"mobile_number");
    pJsonObject->Add(pMobile_numberKey, toJson(getPMobileNumber(), "String", ""));

    JsonString *pOld_idKey = new JsonString(L"old_id");
    pJsonObject->Add(pOld_idKey, toJson(getPOldId(), "Integer", ""));

    JsonString *pParentsKey = new JsonString(L"parents");
    pJsonObject->Add(pParentsKey, toJson(getPParents(), "SamiUserRelationship", "array"));

    JsonString *pPasswordKey = new JsonString(L"password");
    pJsonObject->Add(pPasswordKey, toJson(getPPassword(), "String", ""));

    JsonString *pPostal_codeKey = new JsonString(L"postal_code");
    pJsonObject->Add(pPostal_codeKey, toJson(getPPostalCode(), "String", ""));

    JsonString *pProperties_stringKey = new JsonString(L"properties_string");
    pJsonObject->Add(pProperties_stringKey, toJson(getPPropertiesString(), "String", ""));

    JsonString *pRolesKey = new JsonString(L"roles");
    pJsonObject->Add(pRolesKey, toJson(getPRoles(), "SamiRole", "array"));

    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getPState(), "String", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pTag_stringsKey = new JsonString(L"tag_strings");
    pJsonObject->Add(pTag_stringsKey, toJson(getPTagStrings(), "String", "array"));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "SamiUserTag", "array"));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pTimezoneKey = new JsonString(L"timezone");
    pJsonObject->Add(pTimezoneKey, toJson(getPTimezone(), "SamiTimezone", ""));

    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

HashMap*
SamiUser::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiUser::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiUser::getPAddress() {
    return pAddress;
}
void
SamiUser::setPAddress(String* pAddress) {
    this->pAddress = pAddress;
}

String*
SamiUser::getPAddress2() {
    return pAddress2;
}
void
SamiUser::setPAddress2(String* pAddress2) {
    this->pAddress2 = pAddress2;
}

SamiAffiliate*
SamiUser::getPAffiliate() {
    return pAffiliate;
}
void
SamiUser::setPAffiliate(SamiAffiliate* pAffiliate) {
    this->pAffiliate = pAffiliate;
}

String*
SamiUser::getPAvatarUrl() {
    return pAvatar_url;
}
void
SamiUser::setPAvatarUrl(String* pAvatar_url) {
    this->pAvatar_url = pAvatar_url;
}

IList*
SamiUser::getPChildren() {
    return pChildren;
}
void
SamiUser::setPChildren(IList* pChildren) {
    this->pChildren = pChildren;
}

String*
SamiUser::getPCity() {
    return pCity;
}
void
SamiUser::setPCity(String* pCity) {
    this->pCity = pCity;
}

SamiCountry*
SamiUser::getPCountry() {
    return pCountry;
}
void
SamiUser::setPCountry(SamiCountry* pCountry) {
    this->pCountry = pCountry;
}

SamiCurrency*
SamiUser::getPCurrency() {
    return pCurrency;
}
void
SamiUser::setPCurrency(SamiCurrency* pCurrency) {
    this->pCurrency = pCurrency;
}

Long*
SamiUser::getPDateCreated() {
    return pDate_created;
}
void
SamiUser::setPDateCreated(Long* pDate_created) {
    this->pDate_created = pDate_created;
}

Long*
SamiUser::getPDateOfBirth() {
    return pDate_of_birth;
}
void
SamiUser::setPDateOfBirth(Long* pDate_of_birth) {
    this->pDate_of_birth = pDate_of_birth;
}

Long*
SamiUser::getPDateUpdated() {
    return pDate_updated;
}
void
SamiUser::setPDateUpdated(Long* pDate_updated) {
    this->pDate_updated = pDate_updated;
}

String*
SamiUser::getPDescription() {
    return pDescription;
}
void
SamiUser::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiUser::getPDisplayName() {
    return pDisplay_name;
}
void
SamiUser::setPDisplayName(String* pDisplay_name) {
    this->pDisplay_name = pDisplay_name;
}

String*
SamiUser::getPEmail() {
    return pEmail;
}
void
SamiUser::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiUser::getPFirstName() {
    return pFirst_name;
}
void
SamiUser::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiUser::getPFullname() {
    return pFullname;
}
void
SamiUser::setPFullname(String* pFullname) {
    this->pFullname = pFullname;
}

String*
SamiUser::getPGender() {
    return pGender;
}
void
SamiUser::setPGender(String* pGender) {
    this->pGender = pGender;
}

IList*
SamiUser::getPGroups() {
    return pGroups;
}
void
SamiUser::setPGroups(IList* pGroups) {
    this->pGroups = pGroups;
}

Boolean*
SamiUser::getPGuest() {
    return pGuest;
}
void
SamiUser::setPGuest(Boolean* pGuest) {
    this->pGuest = pGuest;
}

Integer*
SamiUser::getPId() {
    return pId;
}
void
SamiUser::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiUser::getPInviteToken() {
    return pInvite_token;
}
void
SamiUser::setPInviteToken(String* pInvite_token) {
    this->pInvite_token = pInvite_token;
}

SamiLanguage*
SamiUser::getPLang() {
    return pLang;
}
void
SamiUser::setPLang(SamiLanguage* pLang) {
    this->pLang = pLang;
}

Long*
SamiUser::getPLastActivity() {
    return pLast_activity;
}
void
SamiUser::setPLastActivity(Long* pLast_activity) {
    this->pLast_activity = pLast_activity;
}

Long*
SamiUser::getPLastLogin() {
    return pLast_login;
}
void
SamiUser::setPLastLogin(Long* pLast_login) {
    this->pLast_login = pLast_login;
}

String*
SamiUser::getPLastName() {
    return pLast_name;
}
void
SamiUser::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

Integer*
SamiUser::getPLockoutAttempts() {
    return pLockout_attempts;
}
void
SamiUser::setPLockoutAttempts(Integer* pLockout_attempts) {
    this->pLockout_attempts = pLockout_attempts;
}

Long*
SamiUser::getPLockoutDate() {
    return pLockout_date;
}
void
SamiUser::setPLockoutDate(Long* pLockout_date) {
    this->pLockout_date = pLockout_date;
}

String*
SamiUser::getPMobileNumber() {
    return pMobile_number;
}
void
SamiUser::setPMobileNumber(String* pMobile_number) {
    this->pMobile_number = pMobile_number;
}

Integer*
SamiUser::getPOldId() {
    return pOld_id;
}
void
SamiUser::setPOldId(Integer* pOld_id) {
    this->pOld_id = pOld_id;
}

IList*
SamiUser::getPParents() {
    return pParents;
}
void
SamiUser::setPParents(IList* pParents) {
    this->pParents = pParents;
}

String*
SamiUser::getPPassword() {
    return pPassword;
}
void
SamiUser::setPPassword(String* pPassword) {
    this->pPassword = pPassword;
}

String*
SamiUser::getPPostalCode() {
    return pPostal_code;
}
void
SamiUser::setPPostalCode(String* pPostal_code) {
    this->pPostal_code = pPostal_code;
}

String*
SamiUser::getPPropertiesString() {
    return pProperties_string;
}
void
SamiUser::setPPropertiesString(String* pProperties_string) {
    this->pProperties_string = pProperties_string;
}

IList*
SamiUser::getPRoles() {
    return pRoles;
}
void
SamiUser::setPRoles(IList* pRoles) {
    this->pRoles = pRoles;
}

String*
SamiUser::getPState() {
    return pState;
}
void
SamiUser::setPState(String* pState) {
    this->pState = pState;
}

String*
SamiUser::getPStatus() {
    return pStatus;
}
void
SamiUser::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

IList*
SamiUser::getPTagStrings() {
    return pTag_strings;
}
void
SamiUser::setPTagStrings(IList* pTag_strings) {
    this->pTag_strings = pTag_strings;
}

IList*
SamiUser::getPTags() {
    return pTags;
}
void
SamiUser::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiUser::getPTemplate() {
    return pTemplate;
}
void
SamiUser::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

SamiTimezone*
SamiUser::getPTimezone() {
    return pTimezone;
}
void
SamiUser::setPTimezone(SamiTimezone* pTimezone) {
    this->pTimezone = pTimezone;
}

String*
SamiUser::getPToken() {
    return pToken;
}
void
SamiUser::setPToken(String* pToken) {
    this->pToken = pToken;
}

String*
SamiUser::getPTypeHint() {
    return pType_hint;
}
void
SamiUser::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

String*
SamiUser::getPUsername() {
    return pUsername;
}
void
SamiUser::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

