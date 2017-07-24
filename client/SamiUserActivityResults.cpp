
#include "SamiUserActivityResults.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserActivityResults::SamiUserActivityResults() {
    init();
}

SamiUserActivityResults::~SamiUserActivityResults() {
    this->cleanup();
}

void
SamiUserActivityResults::init() {
    pCurrency_rewards = null;
pItem_rewards = null;
pRank = null;
pScore = null;
pTags = null;
pTies = null;
pUpdated_date = null;
pUser = null;
}

void
SamiUserActivityResults::cleanup() {
    if(pCurrency_rewards != null) {
        pCurrency_rewards->RemoveAll(true);
        delete pCurrency_rewards;
        pCurrency_rewards = null;
    }
if(pItem_rewards != null) {
        pItem_rewards->RemoveAll(true);
        delete pItem_rewards;
        pItem_rewards = null;
    }
if(pRank != null) {
        
        delete pRank;
        pRank = null;
    }
if(pScore != null) {
        
        delete pScore;
        pScore = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pTies != null) {
        
        delete pTies;
        pTies = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiUserActivityResults*
SamiUserActivityResults::fromJson(String* json) {
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
SamiUserActivityResults::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCurrency_rewardsKey = new JsonString(L"currency_rewards");
        IJsonValue* pCurrency_rewardsVal = null;
        pJsonObject->GetValue(pCurrency_rewardsKey, pCurrency_rewardsVal);
        if(pCurrency_rewardsVal != null) {
            pCurrency_rewards = new ArrayList();
            
            jsonToValue(pCurrency_rewards, pCurrency_rewardsVal, L"IList", L"SamiRewardCurrencyResource");
        }
        delete pCurrency_rewardsKey;
JsonString* pItem_rewardsKey = new JsonString(L"item_rewards");
        IJsonValue* pItem_rewardsVal = null;
        pJsonObject->GetValue(pItem_rewardsKey, pItem_rewardsVal);
        if(pItem_rewardsVal != null) {
            pItem_rewards = new ArrayList();
            
            jsonToValue(pItem_rewards, pItem_rewardsVal, L"IList", L"SamiRewardItemResource");
        }
        delete pItem_rewardsKey;
JsonString* pRankKey = new JsonString(L"rank");
        IJsonValue* pRankVal = null;
        pJsonObject->GetValue(pRankKey, pRankVal);
        if(pRankVal != null) {
            
            pRank = new Long();
            jsonToValue(pRank, pRankVal, L"Long", L"Long");
        }
        delete pRankKey;
JsonString* pScoreKey = new JsonString(L"score");
        IJsonValue* pScoreVal = null;
        pJsonObject->GetValue(pScoreKey, pScoreVal);
        if(pScoreVal != null) {
            
            pScore = new Long();
            jsonToValue(pScore, pScoreVal, L"Long", L"Long");
        }
        delete pScoreKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pTiesKey = new JsonString(L"ties");
        IJsonValue* pTiesVal = null;
        pJsonObject->GetValue(pTiesKey, pTiesVal);
        if(pTiesVal != null) {
            
            pTies = new Integer();
            jsonToValue(pTies, pTiesVal, L"Integer", L"Integer");
        }
        delete pTiesKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
    }
}

SamiUserActivityResults::SamiUserActivityResults(String* json) {
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
SamiUserActivityResults::asJson ()
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
SamiUserActivityResults::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCurrency_rewardsKey = new JsonString(L"currency_rewards");
    pJsonObject->Add(pCurrency_rewardsKey, toJson(getPCurrencyRewards(), "SamiRewardCurrencyResource", "array"));

    JsonString *pItem_rewardsKey = new JsonString(L"item_rewards");
    pJsonObject->Add(pItem_rewardsKey, toJson(getPItemRewards(), "SamiRewardItemResource", "array"));

    JsonString *pRankKey = new JsonString(L"rank");
    pJsonObject->Add(pRankKey, toJson(getPRank(), "Long", ""));

    JsonString *pScoreKey = new JsonString(L"score");
    pJsonObject->Add(pScoreKey, toJson(getPScore(), "Long", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTiesKey = new JsonString(L"ties");
    pJsonObject->Add(pTiesKey, toJson(getPTies(), "Integer", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

IList*
SamiUserActivityResults::getPCurrencyRewards() {
    return pCurrency_rewards;
}
void
SamiUserActivityResults::setPCurrencyRewards(IList* pCurrency_rewards) {
    this->pCurrency_rewards = pCurrency_rewards;
}

IList*
SamiUserActivityResults::getPItemRewards() {
    return pItem_rewards;
}
void
SamiUserActivityResults::setPItemRewards(IList* pItem_rewards) {
    this->pItem_rewards = pItem_rewards;
}

Long*
SamiUserActivityResults::getPRank() {
    return pRank;
}
void
SamiUserActivityResults::setPRank(Long* pRank) {
    this->pRank = pRank;
}

Long*
SamiUserActivityResults::getPScore() {
    return pScore;
}
void
SamiUserActivityResults::setPScore(Long* pScore) {
    this->pScore = pScore;
}

IList*
SamiUserActivityResults::getPTags() {
    return pTags;
}
void
SamiUserActivityResults::setPTags(IList* pTags) {
    this->pTags = pTags;
}

Integer*
SamiUserActivityResults::getPTies() {
    return pTies;
}
void
SamiUserActivityResults::setPTies(Integer* pTies) {
    this->pTies = pTies;
}

Long*
SamiUserActivityResults::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiUserActivityResults::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

SamiSimpleUserResource*
SamiUserActivityResults::getPUser() {
    return pUser;
}
void
SamiUserActivityResults::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

