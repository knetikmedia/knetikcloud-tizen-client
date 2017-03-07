
#include "SamiLeaderboardResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLeaderboardResource::SamiLeaderboardResource() {
    init();
}

SamiLeaderboardResource::~SamiLeaderboardResource() {
    this->cleanup();
}

void
SamiLeaderboardResource::init() {
    pEntries = null;
pId = null;
pStrategy = null;
}

void
SamiLeaderboardResource::cleanup() {
    if(pEntries != null) {
        pEntries->RemoveAll(true);
        delete pEntries;
        pEntries = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pStrategy != null) {
        
        delete pStrategy;
        pStrategy = null;
    }
}


SamiLeaderboardResource*
SamiLeaderboardResource::fromJson(String* json) {
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
SamiLeaderboardResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEntriesKey = new JsonString(L"entries");
        IJsonValue* pEntriesVal = null;
        pJsonObject->GetValue(pEntriesKey, pEntriesVal);
        if(pEntriesVal != null) {
            pEntries = new ArrayList();
            
            jsonToValue(pEntries, pEntriesVal, L"IList", L"SamiLeaderboardEntryResource");
        }
        delete pEntriesKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pStrategyKey = new JsonString(L"strategy");
        IJsonValue* pStrategyVal = null;
        pJsonObject->GetValue(pStrategyKey, pStrategyVal);
        if(pStrategyVal != null) {
            
            pStrategy = new String();
            jsonToValue(pStrategy, pStrategyVal, L"String", L"String");
        }
        delete pStrategyKey;
    }
}

SamiLeaderboardResource::SamiLeaderboardResource(String* json) {
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
SamiLeaderboardResource::asJson ()
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
SamiLeaderboardResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEntriesKey = new JsonString(L"entries");
    pJsonObject->Add(pEntriesKey, toJson(getPEntries(), "SamiLeaderboardEntryResource", "array"));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pStrategyKey = new JsonString(L"strategy");
    pJsonObject->Add(pStrategyKey, toJson(getPStrategy(), "String", ""));

    return pJsonObject;
}

IList*
SamiLeaderboardResource::getPEntries() {
    return pEntries;
}
void
SamiLeaderboardResource::setPEntries(IList* pEntries) {
    this->pEntries = pEntries;
}

Long*
SamiLeaderboardResource::getPId() {
    return pId;
}
void
SamiLeaderboardResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiLeaderboardResource::getPStrategy() {
    return pStrategy;
}
void
SamiLeaderboardResource::setPStrategy(String* pStrategy) {
    this->pStrategy = pStrategy;
}



} /* namespace Swagger */

