
#include "SamiPayBySavedMethodRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPayBySavedMethodRequest::SamiPayBySavedMethodRequest() {
    init();
}

SamiPayBySavedMethodRequest::~SamiPayBySavedMethodRequest() {
    this->cleanup();
}

void
SamiPayBySavedMethodRequest::init() {
    pPayment_method = null;
}

void
SamiPayBySavedMethodRequest::cleanup() {
    if(pPayment_method != null) {
        
        delete pPayment_method;
        pPayment_method = null;
    }
}


SamiPayBySavedMethodRequest*
SamiPayBySavedMethodRequest::fromJson(String* json) {
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
SamiPayBySavedMethodRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPayment_methodKey = new JsonString(L"payment_method");
        IJsonValue* pPayment_methodVal = null;
        pJsonObject->GetValue(pPayment_methodKey, pPayment_methodVal);
        if(pPayment_methodVal != null) {
            
            pPayment_method = new Integer();
            jsonToValue(pPayment_method, pPayment_methodVal, L"Integer", L"Integer");
        }
        delete pPayment_methodKey;
    }
}

SamiPayBySavedMethodRequest::SamiPayBySavedMethodRequest(String* json) {
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
SamiPayBySavedMethodRequest::asJson ()
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
SamiPayBySavedMethodRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pPayment_methodKey = new JsonString(L"payment_method");
    pJsonObject->Add(pPayment_methodKey, toJson(getPPaymentMethod(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiPayBySavedMethodRequest::getPPaymentMethod() {
    return pPayment_method;
}
void
SamiPayBySavedMethodRequest::setPPaymentMethod(Integer* pPayment_method) {
    this->pPayment_method = pPayment_method;
}



} /* namespace Swagger */

