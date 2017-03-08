
#include "SamiAnswerResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAnswerResource::SamiAnswerResource() {
    init();
}

SamiAnswerResource::~SamiAnswerResource() {
    this->cleanup();
}

void
SamiAnswerResource::init() {
    pAnswer = null;
pCorrect = null;
pId = null;
}

void
SamiAnswerResource::cleanup() {
    if(pAnswer != null) {
        
        delete pAnswer;
        pAnswer = null;
    }
if(pCorrect != null) {
        
        delete pCorrect;
        pCorrect = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
}


SamiAnswerResource*
SamiAnswerResource::fromJson(String* json) {
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
SamiAnswerResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAnswerKey = new JsonString(L"answer");
        IJsonValue* pAnswerVal = null;
        pJsonObject->GetValue(pAnswerKey, pAnswerVal);
        if(pAnswerVal != null) {
            
            pAnswer = new SamiProperty();
            jsonToValue(pAnswer, pAnswerVal, L"SamiProperty", L"SamiProperty");
        }
        delete pAnswerKey;
JsonString* pCorrectKey = new JsonString(L"correct");
        IJsonValue* pCorrectVal = null;
        pJsonObject->GetValue(pCorrectKey, pCorrectVal);
        if(pCorrectVal != null) {
            
            pCorrect = new Boolean(false);
            jsonToValue(pCorrect, pCorrectVal, L"Boolean", L"Boolean");
        }
        delete pCorrectKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
    }
}

SamiAnswerResource::SamiAnswerResource(String* json) {
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
SamiAnswerResource::asJson ()
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
SamiAnswerResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAnswerKey = new JsonString(L"answer");
    pJsonObject->Add(pAnswerKey, toJson(getPAnswer(), "SamiProperty", ""));

    JsonString *pCorrectKey = new JsonString(L"correct");
    pJsonObject->Add(pCorrectKey, toJson(getPCorrect(), "Boolean", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    return pJsonObject;
}

SamiProperty*
SamiAnswerResource::getPAnswer() {
    return pAnswer;
}
void
SamiAnswerResource::setPAnswer(SamiProperty* pAnswer) {
    this->pAnswer = pAnswer;
}

Boolean*
SamiAnswerResource::getPCorrect() {
    return pCorrect;
}
void
SamiAnswerResource::setPCorrect(Boolean* pCorrect) {
    this->pCorrect = pCorrect;
}

String*
SamiAnswerResource::getPId() {
    return pId;
}
void
SamiAnswerResource::setPId(String* pId) {
    this->pId = pId;
}



} /* namespace Swagger */

