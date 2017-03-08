
#include "SamiRewardSetResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRewardSetResource::SamiRewardSetResource() {
    init();
}

SamiRewardSetResource::~SamiRewardSetResource() {
    this->cleanup();
}

void
SamiRewardSetResource::init() {
    pCreated_date = null;
pCurrency_rewards = null;
pId = null;
pItem_rewards = null;
pLong_description = null;
pMax_placing = null;
pName = null;
pShort_description = null;
pUnique_key = null;
pUpdated_date = null;
}

void
SamiRewardSetResource::cleanup() {
    if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pCurrency_rewards != null) {
        pCurrency_rewards->RemoveAll(true);
        delete pCurrency_rewards;
        pCurrency_rewards = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pItem_rewards != null) {
        pItem_rewards->RemoveAll(true);
        delete pItem_rewards;
        pItem_rewards = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pMax_placing != null) {
        
        delete pMax_placing;
        pMax_placing = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pUnique_key != null) {
        
        delete pUnique_key;
        pUnique_key = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiRewardSetResource*
SamiRewardSetResource::fromJson(String* json) {
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
SamiRewardSetResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pCurrency_rewardsKey = new JsonString(L"currency_rewards");
        IJsonValue* pCurrency_rewardsVal = null;
        pJsonObject->GetValue(pCurrency_rewardsKey, pCurrency_rewardsVal);
        if(pCurrency_rewardsVal != null) {
            pCurrency_rewards = new ArrayList();
            
            jsonToValue(pCurrency_rewards, pCurrency_rewardsVal, L"IList", L"SamiRewardCurrencyResource");
        }
        delete pCurrency_rewardsKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pItem_rewardsKey = new JsonString(L"item_rewards");
        IJsonValue* pItem_rewardsVal = null;
        pJsonObject->GetValue(pItem_rewardsKey, pItem_rewardsVal);
        if(pItem_rewardsVal != null) {
            pItem_rewards = new ArrayList();
            
            jsonToValue(pItem_rewards, pItem_rewardsVal, L"IList", L"SamiRewardItemResource");
        }
        delete pItem_rewardsKey;
JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
JsonString* pMax_placingKey = new JsonString(L"max_placing");
        IJsonValue* pMax_placingVal = null;
        pJsonObject->GetValue(pMax_placingKey, pMax_placingVal);
        if(pMax_placingVal != null) {
            
            pMax_placing = new Integer();
            jsonToValue(pMax_placing, pMax_placingVal, L"Integer", L"Integer");
        }
        delete pMax_placingKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pUnique_keyKey = new JsonString(L"unique_key");
        IJsonValue* pUnique_keyVal = null;
        pJsonObject->GetValue(pUnique_keyKey, pUnique_keyVal);
        if(pUnique_keyVal != null) {
            
            pUnique_key = new String();
            jsonToValue(pUnique_key, pUnique_keyVal, L"String", L"String");
        }
        delete pUnique_keyKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
    }
}

SamiRewardSetResource::SamiRewardSetResource(String* json) {
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
SamiRewardSetResource::asJson ()
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
SamiRewardSetResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pCurrency_rewardsKey = new JsonString(L"currency_rewards");
    pJsonObject->Add(pCurrency_rewardsKey, toJson(getPCurrencyRewards(), "SamiRewardCurrencyResource", "array"));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pItem_rewardsKey = new JsonString(L"item_rewards");
    pJsonObject->Add(pItem_rewardsKey, toJson(getPItemRewards(), "SamiRewardItemResource", "array"));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pMax_placingKey = new JsonString(L"max_placing");
    pJsonObject->Add(pMax_placingKey, toJson(getPMaxPlacing(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Long*
SamiRewardSetResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiRewardSetResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

IList*
SamiRewardSetResource::getPCurrencyRewards() {
    return pCurrency_rewards;
}
void
SamiRewardSetResource::setPCurrencyRewards(IList* pCurrency_rewards) {
    this->pCurrency_rewards = pCurrency_rewards;
}

Integer*
SamiRewardSetResource::getPId() {
    return pId;
}
void
SamiRewardSetResource::setPId(Integer* pId) {
    this->pId = pId;
}

IList*
SamiRewardSetResource::getPItemRewards() {
    return pItem_rewards;
}
void
SamiRewardSetResource::setPItemRewards(IList* pItem_rewards) {
    this->pItem_rewards = pItem_rewards;
}

String*
SamiRewardSetResource::getPLongDescription() {
    return pLong_description;
}
void
SamiRewardSetResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

Integer*
SamiRewardSetResource::getPMaxPlacing() {
    return pMax_placing;
}
void
SamiRewardSetResource::setPMaxPlacing(Integer* pMax_placing) {
    this->pMax_placing = pMax_placing;
}

String*
SamiRewardSetResource::getPName() {
    return pName;
}
void
SamiRewardSetResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiRewardSetResource::getPShortDescription() {
    return pShort_description;
}
void
SamiRewardSetResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

String*
SamiRewardSetResource::getPUniqueKey() {
    return pUnique_key;
}
void
SamiRewardSetResource::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Long*
SamiRewardSetResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiRewardSetResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

