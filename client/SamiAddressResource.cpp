
#include "SamiAddressResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAddressResource::SamiAddressResource() {
    init();
}

SamiAddressResource::~SamiAddressResource() {
    this->cleanup();
}

void
SamiAddressResource::init() {
    pAddress1 = null;
pAddress2 = null;
pCity = null;
pCountry_code = null;
pPostal_code = null;
pState_code = null;
}

void
SamiAddressResource::cleanup() {
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
if(pPostal_code != null) {
        
        delete pPostal_code;
        pPostal_code = null;
    }
if(pState_code != null) {
        
        delete pState_code;
        pState_code = null;
    }
}


SamiAddressResource*
SamiAddressResource::fromJson(String* json) {
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
SamiAddressResource::fromJsonObject(IJsonValue* pJson) {
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

SamiAddressResource::SamiAddressResource(String* json) {
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
SamiAddressResource::asJson ()
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
SamiAddressResource::asJsonObject() {
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

    JsonString *pPostal_codeKey = new JsonString(L"postal_code");
    pJsonObject->Add(pPostal_codeKey, toJson(getPPostalCode(), "String", ""));

    JsonString *pState_codeKey = new JsonString(L"state_code");
    pJsonObject->Add(pState_codeKey, toJson(getPStateCode(), "String", ""));

    return pJsonObject;
}

String*
SamiAddressResource::getPAddress1() {
    return pAddress1;
}
void
SamiAddressResource::setPAddress1(String* pAddress1) {
    this->pAddress1 = pAddress1;
}

String*
SamiAddressResource::getPAddress2() {
    return pAddress2;
}
void
SamiAddressResource::setPAddress2(String* pAddress2) {
    this->pAddress2 = pAddress2;
}

String*
SamiAddressResource::getPCity() {
    return pCity;
}
void
SamiAddressResource::setPCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiAddressResource::getPCountryCode() {
    return pCountry_code;
}
void
SamiAddressResource::setPCountryCode(String* pCountry_code) {
    this->pCountry_code = pCountry_code;
}

String*
SamiAddressResource::getPPostalCode() {
    return pPostal_code;
}
void
SamiAddressResource::setPPostalCode(String* pPostal_code) {
    this->pPostal_code = pPostal_code;
}

String*
SamiAddressResource::getPStateCode() {
    return pState_code;
}
void
SamiAddressResource::setPStateCode(String* pState_code) {
    this->pState_code = pState_code;
}



} /* namespace Swagger */

