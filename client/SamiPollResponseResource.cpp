
#include "SamiPollResponseResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPollResponseResource::SamiPollResponseResource() {
    init();
}

SamiPollResponseResource::~SamiPollResponseResource() {
    this->cleanup();
}

void
SamiPollResponseResource::init() {
    pAnswer = null;
pAnswered_date = null;
pId = null;
pPoll_id = null;
pUser = null;
}

void
SamiPollResponseResource::cleanup() {
    if(pAnswer != null) {
        
        delete pAnswer;
        pAnswer = null;
    }
if(pAnswered_date != null) {
        
        delete pAnswered_date;
        pAnswered_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pPoll_id != null) {
        
        delete pPoll_id;
        pPoll_id = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiPollResponseResource*
SamiPollResponseResource::fromJson(String* json) {
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
SamiPollResponseResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAnswerKey = new JsonString(L"answer");
        IJsonValue* pAnswerVal = null;
        pJsonObject->GetValue(pAnswerKey, pAnswerVal);
        if(pAnswerVal != null) {
            
            pAnswer = new String();
            jsonToValue(pAnswer, pAnswerVal, L"String", L"String");
        }
        delete pAnswerKey;
JsonString* pAnswered_dateKey = new JsonString(L"answered_date");
        IJsonValue* pAnswered_dateVal = null;
        pJsonObject->GetValue(pAnswered_dateKey, pAnswered_dateVal);
        if(pAnswered_dateVal != null) {
            
            pAnswered_date = new Long();
            jsonToValue(pAnswered_date, pAnswered_dateVal, L"Long", L"Long");
        }
        delete pAnswered_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pPoll_idKey = new JsonString(L"poll_id");
        IJsonValue* pPoll_idVal = null;
        pJsonObject->GetValue(pPoll_idKey, pPoll_idVal);
        if(pPoll_idVal != null) {
            
            pPoll_id = new String();
            jsonToValue(pPoll_id, pPoll_idVal, L"String", L"String");
        }
        delete pPoll_idKey;
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

SamiPollResponseResource::SamiPollResponseResource(String* json) {
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
SamiPollResponseResource::asJson ()
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
SamiPollResponseResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAnswerKey = new JsonString(L"answer");
    pJsonObject->Add(pAnswerKey, toJson(getPAnswer(), "String", ""));

    JsonString *pAnswered_dateKey = new JsonString(L"answered_date");
    pJsonObject->Add(pAnswered_dateKey, toJson(getPAnsweredDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pPoll_idKey = new JsonString(L"poll_id");
    pJsonObject->Add(pPoll_idKey, toJson(getPPollId(), "String", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

String*
SamiPollResponseResource::getPAnswer() {
    return pAnswer;
}
void
SamiPollResponseResource::setPAnswer(String* pAnswer) {
    this->pAnswer = pAnswer;
}

Long*
SamiPollResponseResource::getPAnsweredDate() {
    return pAnswered_date;
}
void
SamiPollResponseResource::setPAnsweredDate(Long* pAnswered_date) {
    this->pAnswered_date = pAnswered_date;
}

String*
SamiPollResponseResource::getPId() {
    return pId;
}
void
SamiPollResponseResource::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiPollResponseResource::getPPollId() {
    return pPoll_id;
}
void
SamiPollResponseResource::setPPollId(String* pPoll_id) {
    this->pPoll_id = pPoll_id;
}

SamiSimpleUserResource*
SamiPollResponseResource::getPUser() {
    return pUser;
}
void
SamiPollResponseResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

