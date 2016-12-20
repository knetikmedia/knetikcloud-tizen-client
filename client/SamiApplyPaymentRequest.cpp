
#include "SamiApplyPaymentRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiApplyPaymentRequest::SamiApplyPaymentRequest() {
    init();
}

SamiApplyPaymentRequest::~SamiApplyPaymentRequest() {
    this->cleanup();
}

void
SamiApplyPaymentRequest::init() {
    pInvoice_id = null;
pReceipt = null;
pTransaction_id = null;
}

void
SamiApplyPaymentRequest::cleanup() {
    if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pReceipt != null) {
        
        delete pReceipt;
        pReceipt = null;
    }
if(pTransaction_id != null) {
        
        delete pTransaction_id;
        pTransaction_id = null;
    }
}


SamiApplyPaymentRequest*
SamiApplyPaymentRequest::fromJson(String* json) {
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
SamiApplyPaymentRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pReceiptKey = new JsonString(L"receipt");
        IJsonValue* pReceiptVal = null;
        pJsonObject->GetValue(pReceiptKey, pReceiptVal);
        if(pReceiptVal != null) {
            
            pReceipt = new String();
            jsonToValue(pReceipt, pReceiptVal, L"String", L"String");
        }
        delete pReceiptKey;
JsonString* pTransaction_idKey = new JsonString(L"transaction_id");
        IJsonValue* pTransaction_idVal = null;
        pJsonObject->GetValue(pTransaction_idKey, pTransaction_idVal);
        if(pTransaction_idVal != null) {
            
            pTransaction_id = new String();
            jsonToValue(pTransaction_id, pTransaction_idVal, L"String", L"String");
        }
        delete pTransaction_idKey;
    }
}

SamiApplyPaymentRequest::SamiApplyPaymentRequest(String* json) {
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
SamiApplyPaymentRequest::asJson ()
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
SamiApplyPaymentRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pReceiptKey = new JsonString(L"receipt");
    pJsonObject->Add(pReceiptKey, toJson(getPReceipt(), "String", ""));

    JsonString *pTransaction_idKey = new JsonString(L"transaction_id");
    pJsonObject->Add(pTransaction_idKey, toJson(getPTransactionId(), "String", ""));

    return pJsonObject;
}

Integer*
SamiApplyPaymentRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiApplyPaymentRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiApplyPaymentRequest::getPReceipt() {
    return pReceipt;
}
void
SamiApplyPaymentRequest::setPReceipt(String* pReceipt) {
    this->pReceipt = pReceipt;
}

String*
SamiApplyPaymentRequest::getPTransactionId() {
    return pTransaction_id;
}
void
SamiApplyPaymentRequest::setPTransactionId(String* pTransaction_id) {
    this->pTransaction_id = pTransaction_id;
}



} /* namespace Swagger */

