
#include "SamiStateResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiStateResource::SamiStateResource() {
    init();
}

SamiStateResource::~SamiStateResource() {
    this->cleanup();
}

void
SamiStateResource::init() {
    pCode = null;
pCountry_code_iso3 = null;
pId = null;
pName = null;
}

void
SamiStateResource::cleanup() {
    if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
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
}


SamiStateResource*
SamiStateResource::fromJson(String* json) {
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
SamiStateResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = new String();
            jsonToValue(pCode, pCodeVal, L"String", L"String");
        }
        delete pCodeKey;
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
    }
}

SamiStateResource::SamiStateResource(String* json) {
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
SamiStateResource::asJson ()
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
SamiStateResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "String", ""));

    JsonString *pCountry_code_iso3Key = new JsonString(L"country_code_iso3");
    pJsonObject->Add(pCountry_code_iso3Key, toJson(getPCountryCodeIso3(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    return pJsonObject;
}

String*
SamiStateResource::getPCode() {
    return pCode;
}
void
SamiStateResource::setPCode(String* pCode) {
    this->pCode = pCode;
}

String*
SamiStateResource::getPCountryCodeIso3() {
    return pCountry_code_iso3;
}
void
SamiStateResource::setPCountryCodeIso3(String* pCountry_code_iso3) {
    this->pCountry_code_iso3 = pCountry_code_iso3;
}

Integer*
SamiStateResource::getPId() {
    return pId;
}
void
SamiStateResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiStateResource::getPName() {
    return pName;
}
void
SamiStateResource::setPName(String* pName) {
    this->pName = pName;
}



} /* namespace Swagger */

