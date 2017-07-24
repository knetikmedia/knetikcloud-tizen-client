
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
    pScore = null;
pTags = null;
pUser_id = null;
}

void
SamiUserActivityResultsResource::cleanup() {
    if(pScore != null) {
        
        delete pScore;
        pScore = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
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
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
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

    JsonString *pScoreKey = new JsonString(L"score");
    pJsonObject->Add(pScoreKey, toJson(getPScore(), "Long", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
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
SamiUserActivityResultsResource::getPUserId() {
    return pUser_id;
}
void
SamiUserActivityResultsResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

