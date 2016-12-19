
#include "SamiRefundResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRefundResource::SamiRefundResource() {
    init();
}

SamiRefundResource::~SamiRefundResource() {
    this->cleanup();
}

void
SamiRefundResource::init() {
    pAmount = null;
pRefund_transaction_id = null;
pTransaction_id = null;
}

void
SamiRefundResource::cleanup() {
    if(pAmount != null) {
        
        delete pAmount;
        pAmount = null;
    }
if(pRefund_transaction_id != null) {
        
        delete pRefund_transaction_id;
        pRefund_transaction_id = null;
    }
if(pTransaction_id != null) {
        
        delete pTransaction_id;
        pTransaction_id = null;
    }
}


SamiRefundResource*
SamiRefundResource::fromJson(String* json) {
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
SamiRefundResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAmountKey = new JsonString(L"amount");
        IJsonValue* pAmountVal = null;
        pJsonObject->GetValue(pAmountKey, pAmountVal);
        if(pAmountVal != null) {
            
            pAmount = new Double();
            jsonToValue(pAmount, pAmountVal, L"Double", L"Double");
        }
        delete pAmountKey;
JsonString* pRefund_transaction_idKey = new JsonString(L"refund_transaction_id");
        IJsonValue* pRefund_transaction_idVal = null;
        pJsonObject->GetValue(pRefund_transaction_idKey, pRefund_transaction_idVal);
        if(pRefund_transaction_idVal != null) {
            
            pRefund_transaction_id = new Integer();
            jsonToValue(pRefund_transaction_id, pRefund_transaction_idVal, L"Integer", L"Integer");
        }
        delete pRefund_transaction_idKey;
JsonString* pTransaction_idKey = new JsonString(L"transaction_id");
        IJsonValue* pTransaction_idVal = null;
        pJsonObject->GetValue(pTransaction_idKey, pTransaction_idVal);
        if(pTransaction_idVal != null) {
            
            pTransaction_id = new Integer();
            jsonToValue(pTransaction_id, pTransaction_idVal, L"Integer", L"Integer");
        }
        delete pTransaction_idKey;
    }
}

SamiRefundResource::SamiRefundResource(String* json) {
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
SamiRefundResource::asJson ()
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
SamiRefundResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAmountKey = new JsonString(L"amount");
    pJsonObject->Add(pAmountKey, toJson(getPAmount(), "Double", ""));

    JsonString *pRefund_transaction_idKey = new JsonString(L"refund_transaction_id");
    pJsonObject->Add(pRefund_transaction_idKey, toJson(getPRefundTransactionId(), "Integer", ""));

    JsonString *pTransaction_idKey = new JsonString(L"transaction_id");
    pJsonObject->Add(pTransaction_idKey, toJson(getPTransactionId(), "Integer", ""));

    return pJsonObject;
}

Double*
SamiRefundResource::getPAmount() {
    return pAmount;
}
void
SamiRefundResource::setPAmount(Double* pAmount) {
    this->pAmount = pAmount;
}

Integer*
SamiRefundResource::getPRefundTransactionId() {
    return pRefund_transaction_id;
}
void
SamiRefundResource::setPRefundTransactionId(Integer* pRefund_transaction_id) {
    this->pRefund_transaction_id = pRefund_transaction_id;
}

Integer*
SamiRefundResource::getPTransactionId() {
    return pTransaction_id;
}
void
SamiRefundResource::setPTransactionId(Integer* pTransaction_id) {
    this->pTransaction_id = pTransaction_id;
}



} /* namespace Swagger */

