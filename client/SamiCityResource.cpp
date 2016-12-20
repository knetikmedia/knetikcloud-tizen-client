
#include "SamiCityResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCityResource::SamiCityResource() {
    init();
}

SamiCityResource::~SamiCityResource() {
    this->cleanup();
}

void
SamiCityResource::init() {
    pCountry_code_iso3 = null;
pId = null;
pName = null;
pState_code = null;
}

void
SamiCityResource::cleanup() {
    if(pCountry_code_iso3 != null) {
        
        delete pCountry_code_iso3;
        pCountry_code_iso3 = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pState_code != null) {
        
        delete pState_code;
        pState_code = null;
    }
}


SamiCityResource*
SamiCityResource::fromJson(String* json) {
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
SamiCityResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountry_code_iso3Key = new JsonString(L"country_code_iso3");
        IJsonValue* pCountry_code_iso3Val = null;
        pJsonObject->GetValue(pCountry_code_iso3Key, pCountry_code_iso3Val);
        if(pCountry_code_iso3Val != null) {
            
            pCountry_code_iso3 = new String();
            jsonToValue(pCountry_code_iso3, pCountry_code_iso3Val, L"String", L"String");
        }
        delete pCountry_code_iso3Key;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
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

SamiCityResource::SamiCityResource(String* json) {
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
SamiCityResource::asJson ()
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
SamiCityResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountry_code_iso3Key = new JsonString(L"country_code_iso3");
    pJsonObject->Add(pCountry_code_iso3Key, toJson(getPCountryCodeIso3(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pState_codeKey = new JsonString(L"state_code");
    pJsonObject->Add(pState_codeKey, toJson(getPStateCode(), "String", ""));

    return pJsonObject;
}

String*
SamiCityResource::getPCountryCodeIso3() {
    return pCountry_code_iso3;
}
void
SamiCityResource::setPCountryCodeIso3(String* pCountry_code_iso3) {
    this->pCountry_code_iso3 = pCountry_code_iso3;
}

Integer*
SamiCityResource::getPId() {
    return pId;
}
void
SamiCityResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiCityResource::getPName() {
    return pName;
}
void
SamiCityResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiCityResource::getPStateCode() {
    return pState_code;
}
void
SamiCityResource::setPStateCode(String* pState_code) {
    this->pState_code = pState_code;
}



} /* namespace Swagger */

