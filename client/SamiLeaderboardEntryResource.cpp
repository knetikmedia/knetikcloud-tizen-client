
#include "SamiLeaderboardEntryResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLeaderboardEntryResource::SamiLeaderboardEntryResource() {
    init();
}

SamiLeaderboardEntryResource::~SamiLeaderboardEntryResource() {
    this->cleanup();
}

void
SamiLeaderboardEntryResource::init() {
    pRank = null;
pScore = null;
pUser = null;
}

void
SamiLeaderboardEntryResource::cleanup() {
    if(pRank != null) {
        
        delete pRank;
        pRank = null;
    }
if(pScore != null) {
        
        delete pScore;
        pScore = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiLeaderboardEntryResource*
SamiLeaderboardEntryResource::fromJson(String* json) {
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
SamiLeaderboardEntryResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
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

SamiLeaderboardEntryResource::SamiLeaderboardEntryResource(String* json) {
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
SamiLeaderboardEntryResource::asJson ()
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
SamiLeaderboardEntryResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pRankKey = new JsonString(L"rank");
    pJsonObject->Add(pRankKey, toJson(getPRank(), "Long", ""));

    JsonString *pScoreKey = new JsonString(L"score");
    pJsonObject->Add(pScoreKey, toJson(getPScore(), "Long", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

Long*
SamiLeaderboardEntryResource::getPRank() {
    return pRank;
}
void
SamiLeaderboardEntryResource::setPRank(Long* pRank) {
    this->pRank = pRank;
}

Long*
SamiLeaderboardEntryResource::getPScore() {
    return pScore;
}
void
SamiLeaderboardEntryResource::setPScore(Long* pScore) {
    this->pScore = pScore;
}

SamiSimpleUserResource*
SamiLeaderboardEntryResource::getPUser() {
    return pUser;
}
void
SamiLeaderboardEntryResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

