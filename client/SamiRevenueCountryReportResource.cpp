
#include "SamiRevenueCountryReportResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRevenueCountryReportResource::SamiRevenueCountryReportResource() {
    init();
}

SamiRevenueCountryReportResource::~SamiRevenueCountryReportResource() {
    this->cleanup();
}

void
SamiRevenueCountryReportResource::init() {
    pCountry = null;
pRevenue = null;
pVolume = null;
}

void
SamiRevenueCountryReportResource::cleanup() {
    if(pCountry != null) {
        
        delete pCountry;
        pCountry = null;
    }
if(pRevenue != null) {
        
        delete pRevenue;
        pRevenue = null;
    }
if(pVolume != null) {
        
        delete pVolume;
        pVolume = null;
    }
}


SamiRevenueCountryReportResource*
SamiRevenueCountryReportResource::fromJson(String* json) {
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
SamiRevenueCountryReportResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pRevenueKey = new JsonString(L"revenue");
        IJsonValue* pRevenueVal = null;
        pJsonObject->GetValue(pRevenueKey, pRevenueVal);
        if(pRevenueVal != null) {
            
            pRevenue = new Double();
            jsonToValue(pRevenue, pRevenueVal, L"Double", L"Double");
        }
        delete pRevenueKey;
JsonString* pVolumeKey = new JsonString(L"volume");
        IJsonValue* pVolumeVal = null;
        pJsonObject->GetValue(pVolumeKey, pVolumeVal);
        if(pVolumeVal != null) {
            
            pVolume = new Long();
            jsonToValue(pVolume, pVolumeVal, L"Long", L"Long");
        }
        delete pVolumeKey;
    }
}

SamiRevenueCountryReportResource::SamiRevenueCountryReportResource(String* json) {
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
SamiRevenueCountryReportResource::asJson ()
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
SamiRevenueCountryReportResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountryKey = new JsonString(L"country");
    pJsonObject->Add(pCountryKey, toJson(getPCountry(), "String", ""));

    JsonString *pRevenueKey = new JsonString(L"revenue");
    pJsonObject->Add(pRevenueKey, toJson(getPRevenue(), "Double", ""));

    JsonString *pVolumeKey = new JsonString(L"volume");
    pJsonObject->Add(pVolumeKey, toJson(getPVolume(), "Long", ""));

    return pJsonObject;
}

String*
SamiRevenueCountryReportResource::getPCountry() {
    return pCountry;
}
void
SamiRevenueCountryReportResource::setPCountry(String* pCountry) {
    this->pCountry = pCountry;
}

Double*
SamiRevenueCountryReportResource::getPRevenue() {
    return pRevenue;
}
void
SamiRevenueCountryReportResource::setPRevenue(Double* pRevenue) {
    this->pRevenue = pRevenue;
}

Long*
SamiRevenueCountryReportResource::getPVolume() {
    return pVolume;
}
void
SamiRevenueCountryReportResource::setPVolume(Long* pVolume) {
    this->pVolume = pVolume;
}



} /* namespace Swagger */

