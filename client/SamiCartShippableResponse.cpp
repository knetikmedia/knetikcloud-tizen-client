
#include "SamiCartShippableResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCartShippableResponse::SamiCartShippableResponse() {
    init();
}

SamiCartShippableResponse::~SamiCartShippableResponse() {
    this->cleanup();
}

void
SamiCartShippableResponse::init() {
    pCart_id = null;
pShippable = null;
}

void
SamiCartShippableResponse::cleanup() {
    if(pCart_id != null) {
        
        delete pCart_id;
        pCart_id = null;
    }
if(pShippable != null) {
        
        delete pShippable;
        pShippable = null;
    }
}


SamiCartShippableResponse*
SamiCartShippableResponse::fromJson(String* json) {
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
SamiCartShippableResponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCart_idKey = new JsonString(L"cart_id");
        IJsonValue* pCart_idVal = null;
        pJsonObject->GetValue(pCart_idKey, pCart_idVal);
        if(pCart_idVal != null) {
            
            pCart_id = new Integer();
            jsonToValue(pCart_id, pCart_idVal, L"Integer", L"Integer");
        }
        delete pCart_idKey;
JsonString* pShippableKey = new JsonString(L"shippable");
        IJsonValue* pShippableVal = null;
        pJsonObject->GetValue(pShippableKey, pShippableVal);
        if(pShippableVal != null) {
            
            pShippable = new Boolean(false);
            jsonToValue(pShippable, pShippableVal, L"Boolean", L"Boolean");
        }
        delete pShippableKey;
    }
}

SamiCartShippableResponse::SamiCartShippableResponse(String* json) {
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
SamiCartShippableResponse::asJson ()
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
SamiCartShippableResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCart_idKey = new JsonString(L"cart_id");
    pJsonObject->Add(pCart_idKey, toJson(getPCartId(), "Integer", ""));

    JsonString *pShippableKey = new JsonString(L"shippable");
    pJsonObject->Add(pShippableKey, toJson(getPShippable(), "Boolean", ""));

    return pJsonObject;
}

Integer*
SamiCartShippableResponse::getPCartId() {
    return pCart_id;
}
void
SamiCartShippableResponse::setPCartId(Integer* pCart_id) {
    this->pCart_id = pCart_id;
}

Boolean*
SamiCartShippableResponse::getPShippable() {
    return pShippable;
}
void
SamiCartShippableResponse::setPShippable(Boolean* pShippable) {
    this->pShippable = pShippable;
}



} /* namespace Swagger */

