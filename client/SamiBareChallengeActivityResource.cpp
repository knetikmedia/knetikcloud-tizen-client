
#include "SamiBareChallengeActivityResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBareChallengeActivityResource::SamiBareChallengeActivityResource() {
    init();
}

SamiBareChallengeActivityResource::~SamiBareChallengeActivityResource() {
    this->cleanup();
}

void
SamiBareChallengeActivityResource::init() {
    pActivity_id = null;
pChallenge_id = null;
pId = null;
}

void
SamiBareChallengeActivityResource::cleanup() {
    if(pActivity_id != null) {
        
        delete pActivity_id;
        pActivity_id = null;
    }
if(pChallenge_id != null) {
        
        delete pChallenge_id;
        pChallenge_id = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
}


SamiBareChallengeActivityResource*
SamiBareChallengeActivityResource::fromJson(String* json) {
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
SamiBareChallengeActivityResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActivity_idKey = new JsonString(L"activity_id");
        IJsonValue* pActivity_idVal = null;
        pJsonObject->GetValue(pActivity_idKey, pActivity_idVal);
        if(pActivity_idVal != null) {
            
            pActivity_id = new Long();
            jsonToValue(pActivity_id, pActivity_idVal, L"Long", L"Long");
        }
        delete pActivity_idKey;
JsonString* pChallenge_idKey = new JsonString(L"challenge_id");
        IJsonValue* pChallenge_idVal = null;
        pJsonObject->GetValue(pChallenge_idKey, pChallenge_idVal);
        if(pChallenge_idVal != null) {
            
            pChallenge_id = new Long();
            jsonToValue(pChallenge_id, pChallenge_idVal, L"Long", L"Long");
        }
        delete pChallenge_idKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
    }
}

SamiBareChallengeActivityResource::SamiBareChallengeActivityResource(String* json) {
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
SamiBareChallengeActivityResource::asJson ()
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
SamiBareChallengeActivityResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActivity_idKey = new JsonString(L"activity_id");
    pJsonObject->Add(pActivity_idKey, toJson(getPActivityId(), "Long", ""));

    JsonString *pChallenge_idKey = new JsonString(L"challenge_id");
    pJsonObject->Add(pChallenge_idKey, toJson(getPChallengeId(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    return pJsonObject;
}

Long*
SamiBareChallengeActivityResource::getPActivityId() {
    return pActivity_id;
}
void
SamiBareChallengeActivityResource::setPActivityId(Long* pActivity_id) {
    this->pActivity_id = pActivity_id;
}

Long*
SamiBareChallengeActivityResource::getPChallengeId() {
    return pChallenge_id;
}
void
SamiBareChallengeActivityResource::setPChallengeId(Long* pChallenge_id) {
    this->pChallenge_id = pChallenge_id;
}

Long*
SamiBareChallengeActivityResource::getPId() {
    return pId;
}
void
SamiBareChallengeActivityResource::setPId(Long* pId) {
    this->pId = pId;
}



} /* namespace Swagger */

