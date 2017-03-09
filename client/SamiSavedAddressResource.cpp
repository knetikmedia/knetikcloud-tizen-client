
#include "SamiSavedAddressResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSavedAddressResource::SamiSavedAddressResource() {
    init();
}

SamiSavedAddressResource::~SamiSavedAddressResource() {
    this->cleanup();
}

void
SamiSavedAddressResource::init() {
    pAddress1 = null;
pAddress2 = null;
pCity = null;
pCountry_code = null;
pDefault = null;
pFirst_name = null;
pId = null;
pLast_name = null;
pName = null;
pPhone1 = null;
pPhone2 = null;
pPostal_code = null;
pState_code = null;
}

void
SamiSavedAddressResource::cleanup() {
    if(pAddress1 != null) {
        
        delete pAddress1;
        pAddress1 = null;
    }
if(pAddress2 != null) {
        
        delete pAddress2;
        pAddress2 = null;
    }
if(pCity != null) {
        
        delete pCity;
        pCity = null;
    }
if(pCountry_code != null) {
        
        delete pCountry_code;
        pCountry_code = null;
    }
if(pDefault != null) {
        
        delete pDefault;
        pDefault = null;
    }
if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPhone1 != null) {
        
        delete pPhone1;
        pPhone1 = null;
    }
if(pPhone2 != null) {
        
        delete pPhone2;
        pPhone2 = null;
    }
if(pPostal_code != null) {
        
        delete pPostal_code;
        pPostal_code = null;
    }
if(pState_code != null) {
        
        delete pState_code;
        pState_code = null;
    }
}


SamiSavedAddressResource*
SamiSavedAddressResource::fromJson(String* json) {
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
SamiSavedAddressResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAddress1Key = new JsonString(L"address1");
        IJsonValue* pAddress1Val = null;
        pJsonObject->GetValue(pAddress1Key, pAddress1Val);
        if(pAddress1Val != null) {
            
            pAddress1 = new String();
            jsonToValue(pAddress1, pAddress1Val, L"String", L"String");
        }
        delete pAddress1Key;
JsonString* pAddress2Key = new JsonString(L"address2");
        IJsonValue* pAddress2Val = null;
        pJsonObject->GetValue(pAddress2Key, pAddress2Val);
        if(pAddress2Val != null) {
            
            pAddress2 = new String();
            jsonToValue(pAddress2, pAddress2Val, L"String", L"String");
        }
        delete pAddress2Key;
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
JsonString* pDefaultKey = new JsonString(L"default");
        IJsonValue* pDefaultVal = null;
        pJsonObject->GetValue(pDefaultKey, pDefaultVal);
        if(pDefaultVal != null) {
            
            pDefault = new Boolean(false);
            jsonToValue(pDefault, pDefaultVal, L"Boolean", L"Boolean");
        }
        delete pDefaultKey;
JsonString* pFirst_nameKey = new JsonString(L"first_name");
        IJsonValue* pFirst_nameVal = null;
        pJsonObject->GetValue(pFirst_nameKey, pFirst_nameVal);
        if(pFirst_nameVal != null) {
            
            pFirst_name = new String();
            jsonToValue(pFirst_name, pFirst_nameVal, L"String", L"String");
        }
        delete pFirst_nameKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pLast_nameKey = new JsonString(L"last_name");
        IJsonValue* pLast_nameVal = null;
        pJsonObject->GetValue(pLast_nameKey, pLast_nameVal);
        if(pLast_nameVal != null) {
            
            pLast_name = new String();
            jsonToValue(pLast_name, pLast_nameVal, L"String", L"String");
        }
        delete pLast_nameKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPhone1Key = new JsonString(L"phone1");
        IJsonValue* pPhone1Val = null;
        pJsonObject->GetValue(pPhone1Key, pPhone1Val);
        if(pPhone1Val != null) {
            
            pPhone1 = new String();
            jsonToValue(pPhone1, pPhone1Val, L"String", L"String");
        }
        delete pPhone1Key;
JsonString* pPhone2Key = new JsonString(L"phone2");
        IJsonValue* pPhone2Val = null;
        pJsonObject->GetValue(pPhone2Key, pPhone2Val);
        if(pPhone2Val != null) {
            
            pPhone2 = new String();
            jsonToValue(pPhone2, pPhone2Val, L"String", L"String");
        }
        delete pPhone2Key;
JsonString* pPostal_codeKey = new JsonString(L"postal_code");
        IJsonValue* pPostal_codeVal = null;
        pJsonObject->GetValue(pPostal_codeKey, pPostal_codeVal);
        if(pPostal_codeVal != null) {
            
            pPostal_code = new String();
            jsonToValue(pPostal_code, pPostal_codeVal, L"String", L"String");
        }
        delete pPostal_codeKey;
JsonString* pState_codeKey = new JsonString(L"state_code");
        IJsonValue* pState_codeVal = null;
        pJsonObject->GetValue(pState_codeKey, pState_codeVal);
        if(pState_codeVal != null) {
            
            pState_code = new String();
            jsonToValue(pState_code, pState_codeVal, L"String", L"String");
        }
        delete pState_codeKey;
    }
}

SamiSavedAddressResource::SamiSavedAddressResource(String* json) {
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
SamiSavedAddressResource::asJson ()
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
SamiSavedAddressResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAddress1Key = new JsonString(L"address1");
    pJsonObject->Add(pAddress1Key, toJson(getPAddress1(), "String", ""));

    JsonString *pAddress2Key = new JsonString(L"address2");
    pJsonObject->Add(pAddress2Key, toJson(getPAddress2(), "String", ""));

    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    JsonString *pCountry_codeKey = new JsonString(L"country_code");
    pJsonObject->Add(pCountry_codeKey, toJson(getPCountryCode(), "String", ""));

    JsonString *pDefaultKey = new JsonString(L"default");
    pJsonObject->Add(pDefaultKey, toJson(getPDefault(), "Boolean", ""));

    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPhone1Key = new JsonString(L"phone1");
    pJsonObject->Add(pPhone1Key, toJson(getPPhone1(), "String", ""));

    JsonString *pPhone2Key = new JsonString(L"phone2");
    pJsonObject->Add(pPhone2Key, toJson(getPPhone2(), "String", ""));

    JsonString *pPostal_codeKey = new JsonString(L"postal_code");
    pJsonObject->Add(pPostal_codeKey, toJson(getPPostalCode(), "String", ""));

    JsonString *pState_codeKey = new JsonString(L"state_code");
    pJsonObject->Add(pState_codeKey, toJson(getPStateCode(), "String", ""));

    return pJsonObject;
}

String*
SamiSavedAddressResource::getPAddress1() {
    return pAddress1;
}
void
SamiSavedAddressResource::setPAddress1(String* pAddress1) {
    this->pAddress1 = pAddress1;
}

String*
SamiSavedAddressResource::getPAddress2() {
    return pAddress2;
}
void
SamiSavedAddressResource::setPAddress2(String* pAddress2) {
    this->pAddress2 = pAddress2;
}

String*
SamiSavedAddressResource::getPCity() {
    return pCity;
}
void
SamiSavedAddressResource::setPCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiSavedAddressResource::getPCountryCode() {
    return pCountry_code;
}
void
SamiSavedAddressResource::setPCountryCode(String* pCountry_code) {
    this->pCountry_code = pCountry_code;
}

Boolean*
SamiSavedAddressResource::getPDefault() {
    return pDefault;
}
void
SamiSavedAddressResource::setPDefault(Boolean* pDefault) {
    this->pDefault = pDefault;
}

String*
SamiSavedAddressResource::getPFirstName() {
    return pFirst_name;
}
void
SamiSavedAddressResource::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

Integer*
SamiSavedAddressResource::getPId() {
    return pId;
}
void
SamiSavedAddressResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiSavedAddressResource::getPLastName() {
    return pLast_name;
}
void
SamiSavedAddressResource::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiSavedAddressResource::getPName() {
    return pName;
}
void
SamiSavedAddressResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiSavedAddressResource::getPPhone1() {
    return pPhone1;
}
void
SamiSavedAddressResource::setPPhone1(String* pPhone1) {
    this->pPhone1 = pPhone1;
}

String*
SamiSavedAddressResource::getPPhone2() {
    return pPhone2;
}
void
SamiSavedAddressResource::setPPhone2(String* pPhone2) {
    this->pPhone2 = pPhone2;
}

String*
SamiSavedAddressResource::getPPostalCode() {
    return pPostal_code;
}
void
SamiSavedAddressResource::setPPostalCode(String* pPostal_code) {
    this->pPostal_code = pPostal_code;
}

String*
SamiSavedAddressResource::getPStateCode() {
    return pState_code;
}
void
SamiSavedAddressResource::setPStateCode(String* pState_code) {
    this->pState_code = pState_code;
}



} /* namespace Swagger */

