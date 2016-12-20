
#include "SamiChallengeEventParticipantResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiChallengeEventParticipantResource::SamiChallengeEventParticipantResource() {
    init();
}

SamiChallengeEventParticipantResource::~SamiChallengeEventParticipantResource() {
    this->cleanup();
}

void
SamiChallengeEventParticipantResource::init() {
    pEmail = null;
pFullname = null;
pScore = null;
pUser_id = null;
pUsername = null;
}

void
SamiChallengeEventParticipantResource::cleanup() {
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pFullname != null) {
        
        delete pFullname;
        pFullname = null;
    }
if(pScore != null) {
        
        delete pScore;
        pScore = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiChallengeEventParticipantResource*
SamiChallengeEventParticipantResource::fromJson(String* json) {
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
SamiChallengeEventParticipantResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pFullnameKey = new JsonString(L"fullname");
        IJsonValue* pFullnameVal = null;
        pJsonObject->GetValue(pFullnameKey, pFullnameVal);
        if(pFullnameVal != null) {
            
            pFullname = new String();
            jsonToValue(pFullname, pFullnameVal, L"String", L"String");
        }
        delete pFullnameKey;
JsonString* pScoreKey = new JsonString(L"score");
        IJsonValue* pScoreVal = null;
        pJsonObject->GetValue(pScoreKey, pScoreVal);
        if(pScoreVal != null) {
            
            pScore = new Long();
            jsonToValue(pScore, pScoreVal, L"Long", L"Long");
        }
        delete pScoreKey;
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
JsonString* pUsernameKey = new JsonString(L"username");
        IJsonValue* pUsernameVal = null;
        pJsonObject->GetValue(pUsernameKey, pUsernameVal);
        if(pUsernameVal != null) {
            
            pUsername = new String();
            jsonToValue(pUsername, pUsernameVal, L"String", L"String");
        }
        delete pUsernameKey;
    }
}

SamiChallengeEventParticipantResource::SamiChallengeEventParticipantResource(String* json) {
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
SamiChallengeEventParticipantResource::asJson ()
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
SamiChallengeEventParticipantResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pFullnameKey = new JsonString(L"fullname");
    pJsonObject->Add(pFullnameKey, toJson(getPFullname(), "String", ""));

    JsonString *pScoreKey = new JsonString(L"score");
    pJsonObject->Add(pScoreKey, toJson(getPScore(), "Long", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

String*
SamiChallengeEventParticipantResource::getPEmail() {
    return pEmail;
}
void
SamiChallengeEventParticipantResource::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiChallengeEventParticipantResource::getPFullname() {
    return pFullname;
}
void
SamiChallengeEventParticipantResource::setPFullname(String* pFullname) {
    this->pFullname = pFullname;
}

Long*
SamiChallengeEventParticipantResource::getPScore() {
    return pScore;
}
void
SamiChallengeEventParticipantResource::setPScore(Long* pScore) {
    this->pScore = pScore;
}

Integer*
SamiChallengeEventParticipantResource::getPUserId() {
    return pUser_id;
}
void
SamiChallengeEventParticipantResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

String*
SamiChallengeEventParticipantResource::getPUsername() {
    return pUsername;
}
void
SamiChallengeEventParticipantResource::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

