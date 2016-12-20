
#include "SamiXsollaPaymentRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiXsollaPaymentRequest::SamiXsollaPaymentRequest() {
    init();
}

SamiXsollaPaymentRequest::~SamiXsollaPaymentRequest() {
    this->cleanup();
}

void
SamiXsollaPaymentRequest::init() {
    pInvoice_id = null;
pReturn_url = null;
}

void
SamiXsollaPaymentRequest::cleanup() {
    if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pReturn_url != null) {
        
        delete pReturn_url;
        pReturn_url = null;
    }
}


SamiXsollaPaymentRequest*
SamiXsollaPaymentRequest::fromJson(String* json) {
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
SamiXsollaPaymentRequest::fromJsonObject(IJsonValue* pJson) {
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

SamiXsollaPaymentRequest::SamiXsollaPaymentRequest(String* json) {
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
SamiXsollaPaymentRequest::asJson ()
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
SamiXsollaPaymentRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pReturn_urlKey = new JsonString(L"return_url");
    pJsonObject->Add(pReturn_urlKey, toJson(getPReturnUrl(), "String", ""));

    return pJsonObject;
}

Integer*
SamiXsollaPaymentRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiXsollaPaymentRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiXsollaPaymentRequest::getPReturnUrl() {
    return pReturn_url;
}
void
SamiXsollaPaymentRequest::setPReturnUrl(String* pReturn_url) {
    this->pReturn_url = pReturn_url;
}



} /* namespace Swagger */

