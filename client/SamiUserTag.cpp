
#include "SamiUserTag.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserTag::SamiUserTag() {
    init();
}

SamiUserTag::~SamiUserTag() {
    this->cleanup();
}

void
SamiUserTag::init() {
    pId = null;
pTag = null;
pUser = null;
}

void
SamiUserTag::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pTag != null) {
        
        delete pTag;
        pTag = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiUserTag*
SamiUserTag::fromJson(String* json) {
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
SamiUserTag::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pTagKey = new JsonString(L"tag");
        IJsonValue* pTagVal = null;
        pJsonObject->GetValue(pTagKey, pTagVal);
        if(pTagVal != null) {
            
            pTag = new String();
            jsonToValue(pTag, pTagVal, L"String", L"String");
        }
        delete pTagKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiUser();
            jsonToValue(pUser, pUserVal, L"SamiUser", L"SamiUser");
        }
        delete pUserKey;
    }
}

SamiUserTag::SamiUserTag(String* json) {
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
SamiUserTag::asJson ()
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
SamiUserTag::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pTagKey = new JsonString(L"tag");
    pJsonObject->Add(pTagKey, toJson(getPTag(), "String", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiUser", ""));

    return pJsonObject;
}

Integer*
SamiUserTag::getPId() {
    return pId;
}
void
SamiUserTag::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiUserTag::getPTag() {
    return pTag;
}
void
SamiUserTag::setPTag(String* pTag) {
    this->pTag = pTag;
}

SamiUser*
SamiUserTag::getPUser() {
    return pUser;
}
void
SamiUserTag::setPUser(SamiUser* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

