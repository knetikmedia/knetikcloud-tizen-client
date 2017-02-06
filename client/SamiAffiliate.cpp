
#include "SamiAffiliate.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAffiliate::SamiAffiliate() {
    init();
}

SamiAffiliate::~SamiAffiliate() {
    this->cleanup();
}

void
SamiAffiliate::init() {
    pAffiliate_key = null;
pId = null;
}

void
SamiAffiliate::cleanup() {
    if(pAffiliate_key != null) {
        
        delete pAffiliate_key;
        pAffiliate_key = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
}


SamiAffiliate*
SamiAffiliate::fromJson(String* json) {
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
SamiAffiliate::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAffiliate_keyKey = new JsonString(L"affiliate_key");
        IJsonValue* pAffiliate_keyVal = null;
        pJsonObject->GetValue(pAffiliate_keyKey, pAffiliate_keyVal);
        if(pAffiliate_keyVal != null) {
            
            pAffiliate_key = new String();
            jsonToValue(pAffiliate_key, pAffiliate_keyVal, L"String", L"String");
        }
        delete pAffiliate_keyKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
    }
}

SamiAffiliate::SamiAffiliate(String* json) {
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
SamiAffiliate::asJson ()
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
SamiAffiliate::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAffiliate_keyKey = new JsonString(L"affiliate_key");
    pJsonObject->Add(pAffiliate_keyKey, toJson(getPAffiliateKey(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiAffiliate::getPAffiliateKey() {
    return pAffiliate_key;
}
void
SamiAffiliate::setPAffiliateKey(String* pAffiliate_key) {
    this->pAffiliate_key = pAffiliate_key;
}

Integer*
SamiAffiliate::getPId() {
    return pId;
}
void
SamiAffiliate::setPId(Integer* pId) {
    this->pId = pId;
}



} /* namespace Swagger */

