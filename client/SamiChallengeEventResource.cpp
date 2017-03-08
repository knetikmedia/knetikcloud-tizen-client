
#include "SamiChallengeEventResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiChallengeEventResource::SamiChallengeEventResource() {
    init();
}

SamiChallengeEventResource::~SamiChallengeEventResource() {
    this->cleanup();
}

void
SamiChallengeEventResource::init() {
    pChallenge_id = null;
pEnd_date = null;
pId = null;
pReward_status = null;
pStart_date = null;
}

void
SamiChallengeEventResource::cleanup() {
    if(pChallenge_id != null) {
        
        delete pChallenge_id;
        pChallenge_id = null;
    }
if(pEnd_date != null) {
        
        delete pEnd_date;
        pEnd_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pReward_status != null) {
        
        delete pReward_status;
        pReward_status = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
}


SamiChallengeEventResource*
SamiChallengeEventResource::fromJson(String* json) {
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
SamiChallengeEventResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pChallenge_idKey = new JsonString(L"challenge_id");
        IJsonValue* pChallenge_idVal = null;
        pJsonObject->GetValue(pChallenge_idKey, pChallenge_idVal);
        if(pChallenge_idVal != null) {
            
            pChallenge_id = new Long();
            jsonToValue(pChallenge_id, pChallenge_idVal, L"Long", L"Long");
        }
        delete pChallenge_idKey;
JsonString* pEnd_dateKey = new JsonString(L"end_date");
        IJsonValue* pEnd_dateVal = null;
        pJsonObject->GetValue(pEnd_dateKey, pEnd_dateVal);
        if(pEnd_dateVal != null) {
            
            pEnd_date = new Long();
            jsonToValue(pEnd_date, pEnd_dateVal, L"Long", L"Long");
        }
        delete pEnd_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pReward_statusKey = new JsonString(L"reward_status");
        IJsonValue* pReward_statusVal = null;
        pJsonObject->GetValue(pReward_statusKey, pReward_statusVal);
        if(pReward_statusVal != null) {
            
            pReward_status = new String();
            jsonToValue(pReward_status, pReward_statusVal, L"String", L"String");
        }
        delete pReward_statusKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
    }
}

SamiChallengeEventResource::SamiChallengeEventResource(String* json) {
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
SamiChallengeEventResource::asJson ()
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
SamiChallengeEventResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pChallenge_idKey = new JsonString(L"challenge_id");
    pJsonObject->Add(pChallenge_idKey, toJson(getPChallengeId(), "Long", ""));

    JsonString *pEnd_dateKey = new JsonString(L"end_date");
    pJsonObject->Add(pEnd_dateKey, toJson(getPEndDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pReward_statusKey = new JsonString(L"reward_status");
    pJsonObject->Add(pReward_statusKey, toJson(getPRewardStatus(), "String", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    return pJsonObject;
}

Long*
SamiChallengeEventResource::getPChallengeId() {
    return pChallenge_id;
}
void
SamiChallengeEventResource::setPChallengeId(Long* pChallenge_id) {
    this->pChallenge_id = pChallenge_id;
}

Long*
SamiChallengeEventResource::getPEndDate() {
    return pEnd_date;
}
void
SamiChallengeEventResource::setPEndDate(Long* pEnd_date) {
    this->pEnd_date = pEnd_date;
}

Long*
SamiChallengeEventResource::getPId() {
    return pId;
}
void
SamiChallengeEventResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiChallengeEventResource::getPRewardStatus() {
    return pReward_status;
}
void
SamiChallengeEventResource::setPRewardStatus(String* pReward_status) {
    this->pReward_status = pReward_status;
}

Long*
SamiChallengeEventResource::getPStartDate() {
    return pStart_date;
}
void
SamiChallengeEventResource::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}



} /* namespace Swagger */

