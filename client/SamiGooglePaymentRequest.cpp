
#include "SamiGooglePaymentRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGooglePaymentRequest::SamiGooglePaymentRequest() {
    init();
}

SamiGooglePaymentRequest::~SamiGooglePaymentRequest() {
    this->cleanup();
}

void
SamiGooglePaymentRequest::init() {
    pJson_payload = null;
pSignature = null;
}

void
SamiGooglePaymentRequest::cleanup() {
    if(pJson_payload != null) {
        
        delete pJson_payload;
        pJson_payload = null;
    }
if(pSignature != null) {
        
        delete pSignature;
        pSignature = null;
    }
}


SamiGooglePaymentRequest*
SamiGooglePaymentRequest::fromJson(String* json) {
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
SamiGooglePaymentRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pJson_payloadKey = new JsonString(L"json_payload");
        IJsonValue* pJson_payloadVal = null;
        pJsonObject->GetValue(pJson_payloadKey, pJson_payloadVal);
        if(pJson_payloadVal != null) {
            
            pJson_payload = new String();
            jsonToValue(pJson_payload, pJson_payloadVal, L"String", L"String");
        }
        delete pJson_payloadKey;
JsonString* pSignatureKey = new JsonString(L"signature");
        IJsonValue* pSignatureVal = null;
        pJsonObject->GetValue(pSignatureKey, pSignatureVal);
        if(pSignatureVal != null) {
            
            pSignature = new String();
            jsonToValue(pSignature, pSignatureVal, L"String", L"String");
        }
        delete pSignatureKey;
    }
}

SamiGooglePaymentRequest::SamiGooglePaymentRequest(String* json) {
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
SamiGooglePaymentRequest::asJson ()
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
SamiGooglePaymentRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pJson_payloadKey = new JsonString(L"json_payload");
    pJsonObject->Add(pJson_payloadKey, toJson(getPJsonPayload(), "String", ""));

    JsonString *pSignatureKey = new JsonString(L"signature");
    pJsonObject->Add(pSignatureKey, toJson(getPSignature(), "String", ""));

    return pJsonObject;
}

String*
SamiGooglePaymentRequest::getPJsonPayload() {
    return pJson_payload;
}
void
SamiGooglePaymentRequest::setPJsonPayload(String* pJson_payload) {
    this->pJson_payload = pJson_payload;
}

String*
SamiGooglePaymentRequest::getPSignature() {
    return pSignature;
}
void
SamiGooglePaymentRequest::setPSignature(String* pSignature) {
    this->pSignature = pSignature;
}



} /* namespace Swagger */

