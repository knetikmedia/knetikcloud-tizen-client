
#include "SamiInvoiceCreateRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInvoiceCreateRequest::SamiInvoiceCreateRequest() {
    init();
}

SamiInvoiceCreateRequest::~SamiInvoiceCreateRequest() {
    this->cleanup();
}

void
SamiInvoiceCreateRequest::init() {
    pCart_guid = null;
}

void
SamiInvoiceCreateRequest::cleanup() {
    if(pCart_guid != null) {
        
        delete pCart_guid;
        pCart_guid = null;
    }
}


SamiInvoiceCreateRequest*
SamiInvoiceCreateRequest::fromJson(String* json) {
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
SamiInvoiceCreateRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCart_guidKey = new JsonString(L"cart_guid");
        IJsonValue* pCart_guidVal = null;
        pJsonObject->GetValue(pCart_guidKey, pCart_guidVal);
        if(pCart_guidVal != null) {
            
            pCart_guid = new String();
            jsonToValue(pCart_guid, pCart_guidVal, L"String", L"String");
        }
        delete pCart_guidKey;
    }
}

SamiInvoiceCreateRequest::SamiInvoiceCreateRequest(String* json) {
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
SamiInvoiceCreateRequest::asJson ()
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
SamiInvoiceCreateRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCart_guidKey = new JsonString(L"cart_guid");
    pJsonObject->Add(pCart_guidKey, toJson(getPCartGuid(), "String", ""));

    return pJsonObject;
}

String*
SamiInvoiceCreateRequest::getPCartGuid() {
    return pCart_guid;
}
void
SamiInvoiceCreateRequest::setPCartGuid(String* pCart_guid) {
    this->pCart_guid = pCart_guid;
}



} /* namespace Swagger */

