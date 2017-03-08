
#include "SamiInvoicePaymentStatusRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInvoicePaymentStatusRequest::SamiInvoicePaymentStatusRequest() {
    init();
}

SamiInvoicePaymentStatusRequest::~SamiInvoicePaymentStatusRequest() {
    this->cleanup();
}

void
SamiInvoicePaymentStatusRequest::init() {
    pPayment_method_id = null;
pStatus = null;
}

void
SamiInvoicePaymentStatusRequest::cleanup() {
    if(pPayment_method_id != null) {
        
        delete pPayment_method_id;
        pPayment_method_id = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
}


SamiInvoicePaymentStatusRequest*
SamiInvoicePaymentStatusRequest::fromJson(String* json) {
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
SamiInvoicePaymentStatusRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPayment_method_idKey = new JsonString(L"payment_method_id");
        IJsonValue* pPayment_method_idVal = null;
        pJsonObject->GetValue(pPayment_method_idKey, pPayment_method_idVal);
        if(pPayment_method_idVal != null) {
            
            pPayment_method_id = new Integer();
            jsonToValue(pPayment_method_id, pPayment_method_idVal, L"Integer", L"Integer");
        }
        delete pPayment_method_idKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
    }
}

SamiInvoicePaymentStatusRequest::SamiInvoicePaymentStatusRequest(String* json) {
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
SamiInvoicePaymentStatusRequest::asJson ()
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
SamiInvoicePaymentStatusRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pPayment_method_idKey = new JsonString(L"payment_method_id");
    pJsonObject->Add(pPayment_method_idKey, toJson(getPPaymentMethodId(), "Integer", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    return pJsonObject;
}

Integer*
SamiInvoicePaymentStatusRequest::getPPaymentMethodId() {
    return pPayment_method_id;
}
void
SamiInvoicePaymentStatusRequest::setPPaymentMethodId(Integer* pPayment_method_id) {
    this->pPayment_method_id = pPayment_method_id;
}

String*
SamiInvoicePaymentStatusRequest::getPStatus() {
    return pStatus;
}
void
SamiInvoicePaymentStatusRequest::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}



} /* namespace Swagger */

