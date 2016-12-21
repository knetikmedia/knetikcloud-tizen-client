
#include "SamiResult.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiResult::SamiResult() {
    init();
}

SamiResult::~SamiResult() {
    this->cleanup();
}

void
SamiResult::init() {
    pCode = null;
pRequest_id = null;
pResult = null;
}

void
SamiResult::cleanup() {
    if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
if(pRequest_id != null) {
        
        delete pRequest_id;
        pRequest_id = null;
    }
if(pResult != null) {
        
        delete pResult;
        pResult = null;
    }
}


SamiResult*
SamiResult::fromJson(String* json) {
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
SamiResult::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = new Integer();
            jsonToValue(pCode, pCodeVal, L"Integer", L"Integer");
        }
        delete pCodeKey;
JsonString* pRequest_idKey = new JsonString(L"request_id");
        IJsonValue* pRequest_idVal = null;
        pJsonObject->GetValue(pRequest_idKey, pRequest_idVal);
        if(pRequest_idVal != null) {
            
            pRequest_id = new String();
            jsonToValue(pRequest_id, pRequest_idVal, L"String", L"String");
        }
        delete pRequest_idKey;
JsonString* pResultKey = new JsonString(L"result");
        IJsonValue* pResultVal = null;
        pJsonObject->GetValue(pResultKey, pResultVal);
        if(pResultVal != null) {
            
            pResult = null;
            jsonToValue(pResult, pResultVal, L"SamiObject", L"SamiObject");
        }
        delete pResultKey;
    }
}

SamiResult::SamiResult(String* json) {
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
SamiResult::asJson ()
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
SamiResult::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "Integer", ""));

    JsonString *pRequest_idKey = new JsonString(L"request_id");
    pJsonObject->Add(pRequest_idKey, toJson(getPRequestId(), "String", ""));

    JsonString *pResultKey = new JsonString(L"result");
    pJsonObject->Add(pResultKey, toJson(getPResult(), "SamiObject", ""));

    return pJsonObject;
}

Integer*
SamiResult::getPCode() {
    return pCode;
}
void
SamiResult::setPCode(Integer* pCode) {
    this->pCode = pCode;
}

String*
SamiResult::getPRequestId() {
    return pRequest_id;
}
void
SamiResult::setPRequestId(String* pRequest_id) {
    this->pRequest_id = pRequest_id;
}

SamiObject*
SamiResult::getPResult() {
    return pResult;
}
void
SamiResult::setPResult(SamiObject* pResult) {
    this->pResult = pResult;
}



} /* namespace Swagger */

