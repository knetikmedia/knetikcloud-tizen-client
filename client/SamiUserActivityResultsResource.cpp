
#include "SamiUserActivityResultsResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserActivityResultsResource::SamiUserActivityResultsResource() {
    init();
}

SamiUserActivityResultsResource::~SamiUserActivityResultsResource() {
    this->cleanup();
}

void
SamiUserActivityResultsResource::init() {
    pCurrency_rewards = null;
pItem_rewards = null;
pRank = null;
pScore = null;
pTags = null;
pTies = null;
pUser = null;
}

void
SamiUserActivityResultsResource::cleanup() {
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
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiUserActivityResultsResource*
SamiUserActivityResultsResource::fromJson(String* json) {
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
SamiUserActivityResultsResource::fromJsonObject(IJsonValue* pJson) {
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

SamiUserActivityResultsResource::SamiUserActivityResultsResource(String* json) {
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
SamiUserActivityResultsResource::asJson ()
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
SamiUserActivityResultsResource::asJsonObject() {
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

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

IList*
SamiUserActivityResultsResource::getPCurrencyRewards() {
    return pCurrency_rewards;
}
void
SamiUserActivityResultsResource::setPCurrencyRewards(IList* pCurrency_rewards) {
    this->pCurrency_rewards = pCurrency_rewards;
}

IList*
SamiUserActivityResultsResource::getPItemRewards() {
    return pItem_rewards;
}
void
SamiUserActivityResultsResource::setPItemRewards(IList* pItem_rewards) {
    this->pItem_rewards = pItem_rewards;
}

Long*
SamiUserActivityResultsResource::getPRank() {
    return pRank;
}
void
SamiUserActivityResultsResource::setPRank(Long* pRank) {
    this->pRank = pRank;
}

Long*
SamiUserActivityResultsResource::getPScore() {
    return pScore;
}
void
SamiUserActivityResultsResource::setPScore(Long* pScore) {
    this->pScore = pScore;
}

IList*
SamiUserActivityResultsResource::getPTags() {
    return pTags;
}
void
SamiUserActivityResultsResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

Integer*
SamiUserActivityResultsResource::getPTies() {
    return pTies;
}
void
SamiUserActivityResultsResource::setPTies(Integer* pTies) {
    this->pTies = pTies;
}

SamiSimpleUserResource*
SamiUserActivityResultsResource::getPUser() {
    return pUser;
}
void
SamiUserActivityResultsResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

