
#include "SamiStripeCreatePaymentMethod.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiStripeCreatePaymentMethod::SamiStripeCreatePaymentMethod() {
    init();
}

SamiStripeCreatePaymentMethod::~SamiStripeCreatePaymentMethod() {
    this->cleanup();
}

void
SamiStripeCreatePaymentMethod::init() {
    pToken = null;
pUser_id = null;
}

void
SamiStripeCreatePaymentMethod::cleanup() {
    if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiStripeCreatePaymentMethod*
SamiStripeCreatePaymentMethod::fromJson(String* json) {
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
SamiStripeCreatePaymentMethod::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
    }
}

SamiStripeCreatePaymentMethod::SamiStripeCreatePaymentMethod(String* json) {
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
SamiStripeCreatePaymentMethod::asJson ()
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
SamiStripeCreatePaymentMethod::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiStripeCreatePaymentMethod::getPToken() {
    return pToken;
}
void
SamiStripeCreatePaymentMethod::setPToken(String* pToken) {
    this->pToken = pToken;
}

Integer*
SamiStripeCreatePaymentMethod::getPUserId() {
    return pUser_id;
}
void
SamiStripeCreatePaymentMethod::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

