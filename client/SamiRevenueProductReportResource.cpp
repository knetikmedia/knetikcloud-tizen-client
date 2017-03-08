
#include "SamiRevenueProductReportResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRevenueProductReportResource::SamiRevenueProductReportResource() {
    init();
}

SamiRevenueProductReportResource::~SamiRevenueProductReportResource() {
    this->cleanup();
}

void
SamiRevenueProductReportResource::init() {
    pItem_id = null;
pItem_name = null;
pRevenue = null;
pVolume = null;
}

void
SamiRevenueProductReportResource::cleanup() {
    if(pItem_id != null) {
        
        delete pItem_id;
        pItem_id = null;
    }
if(pItem_name != null) {
        
        delete pItem_name;
        pItem_name = null;
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


SamiRevenueProductReportResource*
SamiRevenueProductReportResource::fromJson(String* json) {
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
SamiRevenueProductReportResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pItem_idKey = new JsonString(L"item_id");
        IJsonValue* pItem_idVal = null;
        pJsonObject->GetValue(pItem_idKey, pItem_idVal);
        if(pItem_idVal != null) {
            
            pItem_id = new Integer();
            jsonToValue(pItem_id, pItem_idVal, L"Integer", L"Integer");
        }
        delete pItem_idKey;
JsonString* pItem_nameKey = new JsonString(L"item_name");
        IJsonValue* pItem_nameVal = null;
        pJsonObject->GetValue(pItem_nameKey, pItem_nameVal);
        if(pItem_nameVal != null) {
            
            pItem_name = new String();
            jsonToValue(pItem_name, pItem_nameVal, L"String", L"String");
        }
        delete pItem_nameKey;
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

SamiRevenueProductReportResource::SamiRevenueProductReportResource(String* json) {
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
SamiRevenueProductReportResource::asJson ()
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
SamiRevenueProductReportResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pItem_idKey = new JsonString(L"item_id");
    pJsonObject->Add(pItem_idKey, toJson(getPItemId(), "Integer", ""));

    JsonString *pItem_nameKey = new JsonString(L"item_name");
    pJsonObject->Add(pItem_nameKey, toJson(getPItemName(), "String", ""));

    JsonString *pRevenueKey = new JsonString(L"revenue");
    pJsonObject->Add(pRevenueKey, toJson(getPRevenue(), "Double", ""));

    JsonString *pVolumeKey = new JsonString(L"volume");
    pJsonObject->Add(pVolumeKey, toJson(getPVolume(), "Long", ""));

    return pJsonObject;
}

Integer*
SamiRevenueProductReportResource::getPItemId() {
    return pItem_id;
}
void
SamiRevenueProductReportResource::setPItemId(Integer* pItem_id) {
    this->pItem_id = pItem_id;
}

String*
SamiRevenueProductReportResource::getPItemName() {
    return pItem_name;
}
void
SamiRevenueProductReportResource::setPItemName(String* pItem_name) {
    this->pItem_name = pItem_name;
}

Double*
SamiRevenueProductReportResource::getPRevenue() {
    return pRevenue;
}
void
SamiRevenueProductReportResource::setPRevenue(Double* pRevenue) {
    this->pRevenue = pRevenue;
}

Long*
SamiRevenueProductReportResource::getPVolume() {
    return pVolume;
}
void
SamiRevenueProductReportResource::setPVolume(Long* pVolume) {
    this->pVolume = pVolume;
}



} /* namespace Swagger */

