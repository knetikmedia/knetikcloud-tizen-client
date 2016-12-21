
#include "SamiCountryResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCountryResource::SamiCountryResource() {
    init();
}

SamiCountryResource::~SamiCountryResource() {
    this->cleanup();
}

void
SamiCountryResource::init() {
    pIso2 = null;
pIso3 = null;
pName = null;
}

void
SamiCountryResource::cleanup() {
    if(pIso2 != null) {
        
        delete pIso2;
        pIso2 = null;
    }
if(pIso3 != null) {
        
        delete pIso3;
        pIso3 = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
}


SamiCountryResource*
SamiCountryResource::fromJson(String* json) {
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
SamiCountryResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIso2Key = new JsonString(L"iso2");
        IJsonValue* pIso2Val = null;
        pJsonObject->GetValue(pIso2Key, pIso2Val);
        if(pIso2Val != null) {
            
            pIso2 = new String();
            jsonToValue(pIso2, pIso2Val, L"String", L"String");
        }
        delete pIso2Key;
JsonString* pIso3Key = new JsonString(L"iso3");
        IJsonValue* pIso3Val = null;
        pJsonObject->GetValue(pIso3Key, pIso3Val);
        if(pIso3Val != null) {
            
            pIso3 = new String();
            jsonToValue(pIso3, pIso3Val, L"String", L"String");
        }
        delete pIso3Key;
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

SamiCountryResource::SamiCountryResource(String* json) {
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
SamiCountryResource::asJson ()
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
SamiCountryResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIso2Key = new JsonString(L"iso2");
    pJsonObject->Add(pIso2Key, toJson(getPIso2(), "String", ""));

    JsonString *pIso3Key = new JsonString(L"iso3");
    pJsonObject->Add(pIso3Key, toJson(getPIso3(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    return pJsonObject;
}

String*
SamiCountryResource::getPIso2() {
    return pIso2;
}
void
SamiCountryResource::setPIso2(String* pIso2) {
    this->pIso2 = pIso2;
}

String*
SamiCountryResource::getPIso3() {
    return pIso3;
}
void
SamiCountryResource::setPIso3(String* pIso3) {
    this->pIso3 = pIso3;
}

String*
SamiCountryResource::getPName() {
    return pName;
}
void
SamiCountryResource::setPName(String* pName) {
    this->pName = pName;
}



} /* namespace Swagger */

