
#include "SamiActivityOccurrenceJoinResult.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActivityOccurrenceJoinResult::SamiActivityOccurrenceJoinResult() {
    init();
}

SamiActivityOccurrenceJoinResult::~SamiActivityOccurrenceJoinResult() {
    this->cleanup();
}

void
SamiActivityOccurrenceJoinResult::init() {
    pEntitlement = null;
pError_code = null;
pMessage = null;
pUser_id = null;
}

void
SamiActivityOccurrenceJoinResult::cleanup() {
    if(pEntitlement != null) {
        
        delete pEntitlement;
        pEntitlement = null;
    }
if(pError_code != null) {
        
        delete pError_code;
        pError_code = null;
    }
if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiActivityOccurrenceJoinResult*
SamiActivityOccurrenceJoinResult::fromJson(String* json) {
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
SamiActivityOccurrenceJoinResult::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEntitlementKey = new JsonString(L"entitlement");
        IJsonValue* pEntitlementVal = null;
        pJsonObject->GetValue(pEntitlementKey, pEntitlementVal);
        if(pEntitlementVal != null) {
            
            pEntitlement = new SamiActivityEntitlementResource();
            jsonToValue(pEntitlement, pEntitlementVal, L"SamiActivityEntitlementResource", L"SamiActivityEntitlementResource");
        }
        delete pEntitlementKey;
JsonString* pError_codeKey = new JsonString(L"error_code");
        IJsonValue* pError_codeVal = null;
        pJsonObject->GetValue(pError_codeKey, pError_codeVal);
        if(pError_codeVal != null) {
            
            pError_code = new Integer();
            jsonToValue(pError_code, pError_codeVal, L"Integer", L"Integer");
        }
        delete pError_codeKey;
JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Long();
            jsonToValue(pUser_id, pUser_idVal, L"Long", L"Long");
        }
        delete pUser_idKey;
    }
}

SamiActivityOccurrenceJoinResult::SamiActivityOccurrenceJoinResult(String* json) {
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
SamiActivityOccurrenceJoinResult::asJson ()
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
SamiActivityOccurrenceJoinResult::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEntitlementKey = new JsonString(L"entitlement");
    pJsonObject->Add(pEntitlementKey, toJson(getPEntitlement(), "SamiActivityEntitlementResource", ""));

    JsonString *pError_codeKey = new JsonString(L"error_code");
    pJsonObject->Add(pError_codeKey, toJson(getPErrorCode(), "Integer", ""));

    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Long", ""));

    return pJsonObject;
}

SamiActivityEntitlementResource*
SamiActivityOccurrenceJoinResult::getPEntitlement() {
    return pEntitlement;
}
void
SamiActivityOccurrenceJoinResult::setPEntitlement(SamiActivityEntitlementResource* pEntitlement) {
    this->pEntitlement = pEntitlement;
}

Integer*
SamiActivityOccurrenceJoinResult::getPErrorCode() {
    return pError_code;
}
void
SamiActivityOccurrenceJoinResult::setPErrorCode(Integer* pError_code) {
    this->pError_code = pError_code;
}

String*
SamiActivityOccurrenceJoinResult::getPMessage() {
    return pMessage;
}
void
SamiActivityOccurrenceJoinResult::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

Long*
SamiActivityOccurrenceJoinResult::getPUserId() {
    return pUser_id;
}
void
SamiActivityOccurrenceJoinResult::setPUserId(Long* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

