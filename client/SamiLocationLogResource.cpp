
#include "SamiLocationLogResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLocationLogResource::SamiLocationLogResource() {
    init();
}

SamiLocationLogResource::~SamiLocationLogResource() {
    this->cleanup();
}

void
SamiLocationLogResource::init() {
    pCountry = null;
pIp = null;
pTime = null;
}

void
SamiLocationLogResource::cleanup() {
    if(pCountry != null) {
        
        delete pCountry;
        pCountry = null;
    }
if(pIp != null) {
        
        delete pIp;
        pIp = null;
    }
if(pTime != null) {
        
        delete pTime;
        pTime = null;
    }
}


SamiLocationLogResource*
SamiLocationLogResource::fromJson(String* json) {
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
SamiLocationLogResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountryKey = new JsonString(L"country");
        IJsonValue* pCountryVal = null;
        pJsonObject->GetValue(pCountryKey, pCountryVal);
        if(pCountryVal != null) {
            
            pCountry = new String();
            jsonToValue(pCountry, pCountryVal, L"String", L"String");
        }
        delete pCountryKey;
JsonString* pIpKey = new JsonString(L"ip");
        IJsonValue* pIpVal = null;
        pJsonObject->GetValue(pIpKey, pIpVal);
        if(pIpVal != null) {
            
            pIp = new String();
            jsonToValue(pIp, pIpVal, L"String", L"String");
        }
        delete pIpKey;
JsonString* pTimeKey = new JsonString(L"time");
        IJsonValue* pTimeVal = null;
        pJsonObject->GetValue(pTimeKey, pTimeVal);
        if(pTimeVal != null) {
            
            pTime = new Long();
            jsonToValue(pTime, pTimeVal, L"Long", L"Long");
        }
        delete pTimeKey;
    }
}

SamiLocationLogResource::SamiLocationLogResource(String* json) {
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
SamiLocationLogResource::asJson ()
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
SamiLocationLogResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountryKey = new JsonString(L"country");
    pJsonObject->Add(pCountryKey, toJson(getPCountry(), "String", ""));

    JsonString *pIpKey = new JsonString(L"ip");
    pJsonObject->Add(pIpKey, toJson(getPIp(), "String", ""));

    JsonString *pTimeKey = new JsonString(L"time");
    pJsonObject->Add(pTimeKey, toJson(getPTime(), "Long", ""));

    return pJsonObject;
}

String*
SamiLocationLogResource::getPCountry() {
    return pCountry;
}
void
SamiLocationLogResource::setPCountry(String* pCountry) {
    this->pCountry = pCountry;
}

String*
SamiLocationLogResource::getPIp() {
    return pIp;
}
void
SamiLocationLogResource::setPIp(String* pIp) {
    this->pIp = pIp;
}

Long*
SamiLocationLogResource::getPTime() {
    return pTime;
}
void
SamiLocationLogResource::setPTime(Long* pTime) {
    this->pTime = pTime;
}



} /* namespace Swagger */

