
#include "SamiPollAnswerResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPollAnswerResource::SamiPollAnswerResource() {
    init();
}

SamiPollAnswerResource::~SamiPollAnswerResource() {
    this->cleanup();
}

void
SamiPollAnswerResource::init() {
    pCount = null;
pKey = null;
pText = null;
}

void
SamiPollAnswerResource::cleanup() {
    if(pCount != null) {
        
        delete pCount;
        pCount = null;
    }
if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
if(pText != null) {
        
        delete pText;
        pText = null;
    }
}


SamiPollAnswerResource*
SamiPollAnswerResource::fromJson(String* json) {
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
SamiPollAnswerResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountKey = new JsonString(L"count");
        IJsonValue* pCountVal = null;
        pJsonObject->GetValue(pCountKey, pCountVal);
        if(pCountVal != null) {
            
            pCount = new Integer();
            jsonToValue(pCount, pCountVal, L"Integer", L"Integer");
        }
        delete pCountKey;
JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
JsonString* pTextKey = new JsonString(L"text");
        IJsonValue* pTextVal = null;
        pJsonObject->GetValue(pTextKey, pTextVal);
        if(pTextVal != null) {
            
            pText = new String();
            jsonToValue(pText, pTextVal, L"String", L"String");
        }
        delete pTextKey;
    }
}

SamiPollAnswerResource::SamiPollAnswerResource(String* json) {
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
SamiPollAnswerResource::asJson ()
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
SamiPollAnswerResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountKey = new JsonString(L"count");
    pJsonObject->Add(pCountKey, toJson(getPCount(), "Integer", ""));

    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    JsonString *pTextKey = new JsonString(L"text");
    pJsonObject->Add(pTextKey, toJson(getPText(), "String", ""));

    return pJsonObject;
}

Integer*
SamiPollAnswerResource::getPCount() {
    return pCount;
}
void
SamiPollAnswerResource::setPCount(Integer* pCount) {
    this->pCount = pCount;
}

String*
SamiPollAnswerResource::getPKey() {
    return pKey;
}
void
SamiPollAnswerResource::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiPollAnswerResource::getPText() {
    return pText;
}
void
SamiPollAnswerResource::setPText(String* pText) {
    this->pText = pText;
}



} /* namespace Swagger */

