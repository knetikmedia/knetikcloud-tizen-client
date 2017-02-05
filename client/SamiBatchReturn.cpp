
#include "SamiBatchReturn.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBatchReturn::SamiBatchReturn() {
    init();
}

SamiBatchReturn::~SamiBatchReturn() {
    this->cleanup();
}

void
SamiBatchReturn::init() {
    pBody = null;
pCode = null;
pUri = null;
}

void
SamiBatchReturn::cleanup() {
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
if(pUri != null) {
        
        delete pUri;
        pUri = null;
    }
}


SamiBatchReturn*
SamiBatchReturn::fromJson(String* json) {
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
SamiBatchReturn::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = new SamiResult();
            jsonToValue(pBody, pBodyVal, L"SamiResult", L"SamiResult");
        }
        delete pBodyKey;
JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = new Integer();
            jsonToValue(pCode, pCodeVal, L"Integer", L"Integer");
        }
        delete pCodeKey;
JsonString* pUriKey = new JsonString(L"uri");
        IJsonValue* pUriVal = null;
        pJsonObject->GetValue(pUriKey, pUriVal);
        if(pUriVal != null) {
            
            pUri = new String();
            jsonToValue(pUri, pUriVal, L"String", L"String");
        }
        delete pUriKey;
    }
}

SamiBatchReturn::SamiBatchReturn(String* json) {
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
SamiBatchReturn::asJson ()
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
SamiBatchReturn::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "SamiResult", ""));

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "Integer", ""));

    JsonString *pUriKey = new JsonString(L"uri");
    pJsonObject->Add(pUriKey, toJson(getPUri(), "String", ""));

    return pJsonObject;
}

SamiResult*
SamiBatchReturn::getPBody() {
    return pBody;
}
void
SamiBatchReturn::setPBody(SamiResult* pBody) {
    this->pBody = pBody;
}

Integer*
SamiBatchReturn::getPCode() {
    return pCode;
}
void
SamiBatchReturn::setPCode(Integer* pCode) {
    this->pCode = pCode;
}

String*
SamiBatchReturn::getPUri() {
    return pUri;
}
void
SamiBatchReturn::setPUri(String* pUri) {
    this->pUri = pUri;
}



} /* namespace Swagger */

