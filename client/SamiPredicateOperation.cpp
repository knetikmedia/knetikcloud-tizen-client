
#include "SamiPredicateOperation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPredicateOperation::SamiPredicateOperation() {
    init();
}

SamiPredicateOperation::~SamiPredicateOperation() {
    this->cleanup();
}

void
SamiPredicateOperation::init() {
    pArgs = null;
pOperator = null;
}

void
SamiPredicateOperation::cleanup() {
    if(pArgs != null) {
        pArgs->RemoveAll(true);
        delete pArgs;
        pArgs = null;
    }
if(pOperator != null) {
        
        delete pOperator;
        pOperator = null;
    }
}


SamiPredicateOperation*
SamiPredicateOperation::fromJson(String* json) {
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
SamiPredicateOperation::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArgsKey = new JsonString(L"args");
        IJsonValue* pArgsVal = null;
        pJsonObject->GetValue(pArgsKey, pArgsVal);
        if(pArgsVal != null) {
            pArgs = new ArrayList();
            
            jsonToValue(pArgs, pArgsVal, L"IList", L"SamiExpression«object»");
        }
        delete pArgsKey;
JsonString* pOperatorKey = new JsonString(L"operator");
        IJsonValue* pOperatorVal = null;
        pJsonObject->GetValue(pOperatorKey, pOperatorVal);
        if(pOperatorVal != null) {
            
            pOperator = new SamiOperator();
            jsonToValue(pOperator, pOperatorVal, L"SamiOperator", L"SamiOperator");
        }
        delete pOperatorKey;
    }
}

SamiPredicateOperation::SamiPredicateOperation(String* json) {
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
SamiPredicateOperation::asJson ()
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
SamiPredicateOperation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pArgsKey = new JsonString(L"args");
    pJsonObject->Add(pArgsKey, toJson(getPArgs(), "SamiExpression«object»", "array"));

    JsonString *pOperatorKey = new JsonString(L"operator");
    pJsonObject->Add(pOperatorKey, toJson(getPOperator(), "SamiOperator", ""));

    return pJsonObject;
}

IList*
SamiPredicateOperation::getPArgs() {
    return pArgs;
}
void
SamiPredicateOperation::setPArgs(IList* pArgs) {
    this->pArgs = pArgs;
}

SamiOperator*
SamiPredicateOperation::getPOperator() {
    return pOperator;
}
void
SamiPredicateOperation::setPOperator(SamiOperator* pOperator) {
    this->pOperator = pOperator;
}



} /* namespace Swagger */

