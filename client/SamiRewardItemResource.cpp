
#include "SamiRewardItemResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRewardItemResource::SamiRewardItemResource() {
    init();
}

SamiRewardItemResource::~SamiRewardItemResource() {
    this->cleanup();
}

void
SamiRewardItemResource::init() {
    pItem_id = null;
pItem_name = null;
pMax_rank = null;
pMin_rank = null;
pQuantity = null;
}

void
SamiRewardItemResource::cleanup() {
    if(pItem_id != null) {
        
        delete pItem_id;
        pItem_id = null;
    }
if(pItem_name != null) {
        
        delete pItem_name;
        pItem_name = null;
    }
if(pMax_rank != null) {
        
        delete pMax_rank;
        pMax_rank = null;
    }
if(pMin_rank != null) {
        
        delete pMin_rank;
        pMin_rank = null;
    }
if(pQuantity != null) {
        
        delete pQuantity;
        pQuantity = null;
    }
}


SamiRewardItemResource*
SamiRewardItemResource::fromJson(String* json) {
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
SamiRewardItemResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pMax_rankKey = new JsonString(L"max_rank");
        IJsonValue* pMax_rankVal = null;
        pJsonObject->GetValue(pMax_rankKey, pMax_rankVal);
        if(pMax_rankVal != null) {
            
            pMax_rank = new Integer();
            jsonToValue(pMax_rank, pMax_rankVal, L"Integer", L"Integer");
        }
        delete pMax_rankKey;
JsonString* pMin_rankKey = new JsonString(L"min_rank");
        IJsonValue* pMin_rankVal = null;
        pJsonObject->GetValue(pMin_rankKey, pMin_rankVal);
        if(pMin_rankVal != null) {
            
            pMin_rank = new Integer();
            jsonToValue(pMin_rank, pMin_rankVal, L"Integer", L"Integer");
        }
        delete pMin_rankKey;
JsonString* pQuantityKey = new JsonString(L"quantity");
        IJsonValue* pQuantityVal = null;
        pJsonObject->GetValue(pQuantityKey, pQuantityVal);
        if(pQuantityVal != null) {
            
            pQuantity = new Integer();
            jsonToValue(pQuantity, pQuantityVal, L"Integer", L"Integer");
        }
        delete pQuantityKey;
    }
}

SamiRewardItemResource::SamiRewardItemResource(String* json) {
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
SamiRewardItemResource::asJson ()
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
SamiRewardItemResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pItem_idKey = new JsonString(L"item_id");
    pJsonObject->Add(pItem_idKey, toJson(getPItemId(), "Integer", ""));

    JsonString *pItem_nameKey = new JsonString(L"item_name");
    pJsonObject->Add(pItem_nameKey, toJson(getPItemName(), "String", ""));

    JsonString *pMax_rankKey = new JsonString(L"max_rank");
    pJsonObject->Add(pMax_rankKey, toJson(getPMaxRank(), "Integer", ""));

    JsonString *pMin_rankKey = new JsonString(L"min_rank");
    pJsonObject->Add(pMin_rankKey, toJson(getPMinRank(), "Integer", ""));

    JsonString *pQuantityKey = new JsonString(L"quantity");
    pJsonObject->Add(pQuantityKey, toJson(getPQuantity(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiRewardItemResource::getPItemId() {
    return pItem_id;
}
void
SamiRewardItemResource::setPItemId(Integer* pItem_id) {
    this->pItem_id = pItem_id;
}

String*
SamiRewardItemResource::getPItemName() {
    return pItem_name;
}
void
SamiRewardItemResource::setPItemName(String* pItem_name) {
    this->pItem_name = pItem_name;
}

Integer*
SamiRewardItemResource::getPMaxRank() {
    return pMax_rank;
}
void
SamiRewardItemResource::setPMaxRank(Integer* pMax_rank) {
    this->pMax_rank = pMax_rank;
}

Integer*
SamiRewardItemResource::getPMinRank() {
    return pMin_rank;
}
void
SamiRewardItemResource::setPMinRank(Integer* pMin_rank) {
    this->pMin_rank = pMin_rank;
}

Integer*
SamiRewardItemResource::getPQuantity() {
    return pQuantity;
}
void
SamiRewardItemResource::setPQuantity(Integer* pQuantity) {
    this->pQuantity = pQuantity;
}



} /* namespace Swagger */

