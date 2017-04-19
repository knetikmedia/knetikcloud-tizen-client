
#include "SamiCreatePayPalPaymentRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCreatePayPalPaymentRequest::SamiCreatePayPalPaymentRequest() {
    init();
}

SamiCreatePayPalPaymentRequest::~SamiCreatePayPalPaymentRequest() {
    this->cleanup();
}

void
SamiCreatePayPalPaymentRequest::init() {
    pCancel_url = null;
pInvoice_id = null;
pReturn_url = null;
}

void
SamiCreatePayPalPaymentRequest::cleanup() {
    if(pCancel_url != null) {
        
        delete pCancel_url;
        pCancel_url = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pReturn_url != null) {
        
        delete pReturn_url;
        pReturn_url = null;
    }
}


SamiCreatePayPalPaymentRequest*
SamiCreatePayPalPaymentRequest::fromJson(String* json) {
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
SamiCreatePayPalPaymentRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCancel_urlKey = new JsonString(L"cancel_url");
        IJsonValue* pCancel_urlVal = null;
        pJsonObject->GetValue(pCancel_urlKey, pCancel_urlVal);
        if(pCancel_urlVal != null) {
            
            pCancel_url = new String();
            jsonToValue(pCancel_url, pCancel_urlVal, L"String", L"String");
        }
        delete pCancel_urlKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pReturn_urlKey = new JsonString(L"return_url");
        IJsonValue* pReturn_urlVal = null;
        pJsonObject->GetValue(pReturn_urlKey, pReturn_urlVal);
        if(pReturn_urlVal != null) {
            
            pReturn_url = new String();
            jsonToValue(pReturn_url, pReturn_urlVal, L"String", L"String");
        }
        delete pReturn_urlKey;
    }
}

SamiCreatePayPalPaymentRequest::SamiCreatePayPalPaymentRequest(String* json) {
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
SamiCreatePayPalPaymentRequest::asJson ()
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
SamiCreatePayPalPaymentRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCancel_urlKey = new JsonString(L"cancel_url");
    pJsonObject->Add(pCancel_urlKey, toJson(getPCancelUrl(), "String", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pReturn_urlKey = new JsonString(L"return_url");
    pJsonObject->Add(pReturn_urlKey, toJson(getPReturnUrl(), "String", ""));

    return pJsonObject;
}

String*
SamiCreatePayPalPaymentRequest::getPCancelUrl() {
    return pCancel_url;
}
void
SamiCreatePayPalPaymentRequest::setPCancelUrl(String* pCancel_url) {
    this->pCancel_url = pCancel_url;
}

Integer*
SamiCreatePayPalPaymentRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiCreatePayPalPaymentRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiCreatePayPalPaymentRequest::getPReturnUrl() {
    return pReturn_url;
}
void
SamiCreatePayPalPaymentRequest::setPReturnUrl(String* pReturn_url) {
    this->pReturn_url = pReturn_url;
}



} /* namespace Swagger */

