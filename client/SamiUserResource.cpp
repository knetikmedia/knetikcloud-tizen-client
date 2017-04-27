
#include "SamiUserResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserResource::SamiUserResource() {
    init();
}

SamiUserResource::~SamiUserResource() {
    this->cleanup();
}

void
SamiUserResource::init() {
    pAdditional_properties = null;
pAddress = null;
pAddress2 = null;
pAvatar_url = null;
pChildren = null;
pCity = null;
pCountry_code = null;
pCurrency_code = null;
pDate_of_birth = null;
pDescription = null;
pDisplay_name = null;
pEmail = null;
pFirst_name = null;
pFullname = null;
pGender = null;
pId = null;
pLanguage_code = null;
pLast_name = null;
pLast_updated = null;
pMember_since = null;
pMobile_number = null;
pParents = null;
pPassword = null;
pPostal_code = null;
pState = null;
pTags = null;
pTemplate = null;
pTimezone_code = null;
pUsername = null;
}

void
SamiUserResource::cleanup() {
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
if(pCountry_code != null) {
        
        delete pCountry_code;
        pCountry_code = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDate_of_birth != null) {
        
        delete pDate_of_birth;
        pDate_of_birth = null;
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
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLanguage_code != null) {
        
        delete pLanguage_code;
        pLanguage_code = null;
    }
if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
if(pLast_updated != null) {
        
        delete pLast_updated;
        pLast_updated = null;
    }
if(pMember_since != null) {
        
        delete pMember_since;
        pMember_since = null;
    }
if(pMobile_number != null) {
        
        delete pMobile_number;
        pMobile_number = null;
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
if(pState != null) {
        
        delete pState;
        pState = null;
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
if(pTimezone_code != null) {
        
        delete pTimezone_code;
        pTimezone_code = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiUserResource*
SamiUserResource::fromJson(String* json) {
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
SamiUserResource::fromJsonObject(IJsonValue* pJson) {
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
            
            jsonToValue(pChildren, pChildrenVal, L"IList", L"SamiUserRelationshipReferenceResource");
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
JsonString* pCountry_codeKey = new JsonString(L"country_code");
        IJsonValue* pCountry_codeVal = null;
        pJsonObject->GetValue(pCountry_codeKey, pCountry_codeVal);
        if(pCountry_codeVal != null) {
            
            pCountry_code = new String();
            jsonToValue(pCountry_code, pCountry_codeVal, L"String", L"String");
        }
        delete pCountry_codeKey;
JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pDate_of_birthKey = new JsonString(L"date_of_birth");
        IJsonValue* pDate_of_birthVal = null;
        pJsonObject->GetValue(pDate_of_birthKey, pDate_of_birthVal);
        if(pDate_of_birthVal != null) {
            
            pDate_of_birth = new Long();
            jsonToValue(pDate_of_birth, pDate_of_birthVal, L"Long", L"Long");
        }
        delete pDate_of_birthKey;
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
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pLanguage_codeKey = new JsonString(L"language_code");
        IJsonValue* pLanguage_codeVal = null;
        pJsonObject->GetValue(pLanguage_codeKey, pLanguage_codeVal);
        if(pLanguage_codeVal != null) {
            
            pLanguage_code = new String();
            jsonToValue(pLanguage_code, pLanguage_codeVal, L"String", L"String");
        }
        delete pLanguage_codeKey;
JsonString* pLast_nameKey = new JsonString(L"last_name");
        IJsonValue* pLast_nameVal = null;
        pJsonObject->GetValue(pLast_nameKey, pLast_nameVal);
        if(pLast_nameVal != null) {
            
            pLast_name = new String();
            jsonToValue(pLast_name, pLast_nameVal, L"String", L"String");
        }
        delete pLast_nameKey;
JsonString* pLast_updatedKey = new JsonString(L"last_updated");
        IJsonValue* pLast_updatedVal = null;
        pJsonObject->GetValue(pLast_updatedKey, pLast_updatedVal);
        if(pLast_updatedVal != null) {
            
            pLast_updated = new Long();
            jsonToValue(pLast_updated, pLast_updatedVal, L"Long", L"Long");
        }
        delete pLast_updatedKey;
JsonString* pMember_sinceKey = new JsonString(L"member_since");
        IJsonValue* pMember_sinceVal = null;
        pJsonObject->GetValue(pMember_sinceKey, pMember_sinceVal);
        if(pMember_sinceVal != null) {
            
            pMember_since = new Long();
            jsonToValue(pMember_since, pMember_sinceVal, L"Long", L"Long");
        }
        delete pMember_sinceKey;
JsonString* pMobile_numberKey = new JsonString(L"mobile_number");
        IJsonValue* pMobile_numberVal = null;
        pJsonObject->GetValue(pMobile_numberKey, pMobile_numberVal);
        if(pMobile_numberVal != null) {
            
            pMobile_number = new String();
            jsonToValue(pMobile_number, pMobile_numberVal, L"String", L"String");
        }
        delete pMobile_numberKey;
JsonString* pParentsKey = new JsonString(L"parents");
        IJsonValue* pParentsVal = null;
        pJsonObject->GetValue(pParentsKey, pParentsVal);
        if(pParentsVal != null) {
            pParents = new ArrayList();
            
            jsonToValue(pParents, pParentsVal, L"IList", L"SamiUserRelationshipReferenceResource");
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
JsonString* pStateKey = new JsonString(L"state");
        IJsonValue* pStateVal = null;
        pJsonObject->GetValue(pStateKey, pStateVal);
        if(pStateVal != null) {
            
            pState = new String();
            jsonToValue(pState, pStateVal, L"String", L"String");
        }
        delete pStateKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
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
JsonString* pTimezone_codeKey = new JsonString(L"timezone_code");
        IJsonValue* pTimezone_codeVal = null;
        pJsonObject->GetValue(pTimezone_codeKey, pTimezone_codeVal);
        if(pTimezone_codeVal != null) {
            
            pTimezone_code = new String();
            jsonToValue(pTimezone_code, pTimezone_codeVal, L"String", L"String");
        }
        delete pTimezone_codeKey;
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

SamiUserResource::SamiUserResource(String* json) {
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
SamiUserResource::asJson ()
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
SamiUserResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pAddressKey = new JsonString(L"address");
    pJsonObject->Add(pAddressKey, toJson(getPAddress(), "String", ""));

    JsonString *pAddress2Key = new JsonString(L"address2");
    pJsonObject->Add(pAddress2Key, toJson(getPAddress2(), "String", ""));

    JsonString *pAvatar_urlKey = new JsonString(L"avatar_url");
    pJsonObject->Add(pAvatar_urlKey, toJson(getPAvatarUrl(), "String", ""));

    JsonString *pChildrenKey = new JsonString(L"children");
    pJsonObject->Add(pChildrenKey, toJson(getPChildren(), "SamiUserRelationshipReferenceResource", "array"));

    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    JsonString *pCountry_codeKey = new JsonString(L"country_code");
    pJsonObject->Add(pCountry_codeKey, toJson(getPCountryCode(), "String", ""));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDate_of_birthKey = new JsonString(L"date_of_birth");
    pJsonObject->Add(pDate_of_birthKey, toJson(getPDateOfBirth(), "Long", ""));

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

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLanguage_codeKey = new JsonString(L"language_code");
    pJsonObject->Add(pLanguage_codeKey, toJson(getPLanguageCode(), "String", ""));

    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    JsonString *pLast_updatedKey = new JsonString(L"last_updated");
    pJsonObject->Add(pLast_updatedKey, toJson(getPLastUpdated(), "Long", ""));

    JsonString *pMember_sinceKey = new JsonString(L"member_since");
    pJsonObject->Add(pMember_sinceKey, toJson(getPMemberSince(), "Long", ""));

    JsonString *pMobile_numberKey = new JsonString(L"mobile_number");
    pJsonObject->Add(pMobile_numberKey, toJson(getPMobileNumber(), "String", ""));

    JsonString *pParentsKey = new JsonString(L"parents");
    pJsonObject->Add(pParentsKey, toJson(getPParents(), "SamiUserRelationshipReferenceResource", "array"));

    JsonString *pPasswordKey = new JsonString(L"password");
    pJsonObject->Add(pPasswordKey, toJson(getPPassword(), "String", ""));

    JsonString *pPostal_codeKey = new JsonString(L"postal_code");
    pJsonObject->Add(pPostal_codeKey, toJson(getPPostalCode(), "String", ""));

    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getPState(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pTimezone_codeKey = new JsonString(L"timezone_code");
    pJsonObject->Add(pTimezone_codeKey, toJson(getPTimezoneCode(), "String", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

HashMap*
SamiUserResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiUserResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiUserResource::getPAddress() {
    return pAddress;
}
void
SamiUserResource::setPAddress(String* pAddress) {
    this->pAddress = pAddress;
}

String*
SamiUserResource::getPAddress2() {
    return pAddress2;
}
void
SamiUserResource::setPAddress2(String* pAddress2) {
    this->pAddress2 = pAddress2;
}

String*
SamiUserResource::getPAvatarUrl() {
    return pAvatar_url;
}
void
SamiUserResource::setPAvatarUrl(String* pAvatar_url) {
    this->pAvatar_url = pAvatar_url;
}

IList*
SamiUserResource::getPChildren() {
    return pChildren;
}
void
SamiUserResource::setPChildren(IList* pChildren) {
    this->pChildren = pChildren;
}

String*
SamiUserResource::getPCity() {
    return pCity;
}
void
SamiUserResource::setPCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiUserResource::getPCountryCode() {
    return pCountry_code;
}
void
SamiUserResource::setPCountryCode(String* pCountry_code) {
    this->pCountry_code = pCountry_code;
}

String*
SamiUserResource::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiUserResource::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

Long*
SamiUserResource::getPDateOfBirth() {
    return pDate_of_birth;
}
void
SamiUserResource::setPDateOfBirth(Long* pDate_of_birth) {
    this->pDate_of_birth = pDate_of_birth;
}

String*
SamiUserResource::getPDescription() {
    return pDescription;
}
void
SamiUserResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiUserResource::getPDisplayName() {
    return pDisplay_name;
}
void
SamiUserResource::setPDisplayName(String* pDisplay_name) {
    this->pDisplay_name = pDisplay_name;
}

String*
SamiUserResource::getPEmail() {
    return pEmail;
}
void
SamiUserResource::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiUserResource::getPFirstName() {
    return pFirst_name;
}
void
SamiUserResource::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiUserResource::getPFullname() {
    return pFullname;
}
void
SamiUserResource::setPFullname(String* pFullname) {
    this->pFullname = pFullname;
}

String*
SamiUserResource::getPGender() {
    return pGender;
}
void
SamiUserResource::setPGender(String* pGender) {
    this->pGender = pGender;
}

Integer*
SamiUserResource::getPId() {
    return pId;
}
void
SamiUserResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiUserResource::getPLanguageCode() {
    return pLanguage_code;
}
void
SamiUserResource::setPLanguageCode(String* pLanguage_code) {
    this->pLanguage_code = pLanguage_code;
}

String*
SamiUserResource::getPLastName() {
    return pLast_name;
}
void
SamiUserResource::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

Long*
SamiUserResource::getPLastUpdated() {
    return pLast_updated;
}
void
SamiUserResource::setPLastUpdated(Long* pLast_updated) {
    this->pLast_updated = pLast_updated;
}

Long*
SamiUserResource::getPMemberSince() {
    return pMember_since;
}
void
SamiUserResource::setPMemberSince(Long* pMember_since) {
    this->pMember_since = pMember_since;
}

String*
SamiUserResource::getPMobileNumber() {
    return pMobile_number;
}
void
SamiUserResource::setPMobileNumber(String* pMobile_number) {
    this->pMobile_number = pMobile_number;
}

IList*
SamiUserResource::getPParents() {
    return pParents;
}
void
SamiUserResource::setPParents(IList* pParents) {
    this->pParents = pParents;
}

String*
SamiUserResource::getPPassword() {
    return pPassword;
}
void
SamiUserResource::setPPassword(String* pPassword) {
    this->pPassword = pPassword;
}

String*
SamiUserResource::getPPostalCode() {
    return pPostal_code;
}
void
SamiUserResource::setPPostalCode(String* pPostal_code) {
    this->pPostal_code = pPostal_code;
}

String*
SamiUserResource::getPState() {
    return pState;
}
void
SamiUserResource::setPState(String* pState) {
    this->pState = pState;
}

IList*
SamiUserResource::getPTags() {
    return pTags;
}
void
SamiUserResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiUserResource::getPTemplate() {
    return pTemplate;
}
void
SamiUserResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiUserResource::getPTimezoneCode() {
    return pTimezone_code;
}
void
SamiUserResource::setPTimezoneCode(String* pTimezone_code) {
    this->pTimezone_code = pTimezone_code;
}

String*
SamiUserResource::getPUsername() {
    return pUsername;
}
void
SamiUserResource::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

