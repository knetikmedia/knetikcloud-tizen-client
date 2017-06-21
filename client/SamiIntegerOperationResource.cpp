
#include "SamiIntegerOperationResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiIntegerOperationResource::SamiIntegerOperationResource() {
    init();
}

SamiIntegerOperationResource::~SamiIntegerOperationResource() {
    this->cleanup();
}

void
SamiIntegerOperationResource::init() {
    pArgs = null;
pOp = null;
pType = null;
}

void
SamiIntegerOperationResource::cleanup() {
    if(pArgs != null) {
        pArgs->RemoveAll(true);
        delete pArgs;
        pArgs = null;
    }
if(pOp != null) {
        
        delete pOp;
        pOp = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiIntegerOperationResource*
SamiIntegerOperationResource::fromJson(String* json) {
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
SamiIntegerOperationResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArgsKey = new JsonString(L"args");
        IJsonValue* pArgsVal = null;
        pJsonObject->GetValue(pArgsKey, pArgsVal);
        if(pArgsVal != null) {
            pArgs = new ArrayList();
            
            jsonToValue(pArgs, pArgsVal, L"IList", L"SamiExpressionResource");
        }
        delete pArgsKey;
JsonString* pOpKey = new JsonString(L"op");
        IJsonValue* pOpVal = null;
        pJsonObject->GetValue(pOpKey, pOpVal);
        if(pOpVal != null) {
            
            pOp = new String();
            jsonToValue(pOp, pOpVal, L"String", L"String");
        }
        delete pOpKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
    }
}

SamiIntegerOperationResource::SamiIntegerOperationResource(String* json) {
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
SamiIntegerOperationResource::asJson ()
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
SamiIntegerOperationResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pArgsKey = new JsonString(L"args");
    pJsonObject->Add(pArgsKey, toJson(getPArgs(), "SamiExpressionResource", "array"));

    JsonString *pOpKey = new JsonString(L"op");
    pJsonObject->Add(pOpKey, toJson(getPOp(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

IList*
SamiIntegerOperationResource::getPArgs() {
    return pArgs;
}
void
SamiIntegerOperationResource::setPArgs(IList* pArgs) {
    this->pArgs = pArgs;
}

String*
SamiIntegerOperationResource::getPOp() {
    return pOp;
}
void
SamiIntegerOperationResource::setPOp(String* pOp) {
    this->pOp = pOp;
}

String*
SamiIntegerOperationResource::getPType() {
    return pType;
}
void
SamiIntegerOperationResource::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

