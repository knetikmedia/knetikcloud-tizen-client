
#include "SamiMaintenance.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMaintenance::SamiMaintenance() {
    init();
}

SamiMaintenance::~SamiMaintenance() {
    this->cleanup();
}

void
SamiMaintenance::init() {
    pAccess_locked = null;
pDetails = null;
pMessage = null;
}

void
SamiMaintenance::cleanup() {
    if(pAccess_locked != null) {
        
        delete pAccess_locked;
        pAccess_locked = null;
    }
if(pDetails != null) {
        
        delete pDetails;
        pDetails = null;
    }
if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
}


SamiMaintenance*
SamiMaintenance::fromJson(String* json) {
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
SamiMaintenance::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAccess_lockedKey = new JsonString(L"access_locked");
        IJsonValue* pAccess_lockedVal = null;
        pJsonObject->GetValue(pAccess_lockedKey, pAccess_lockedVal);
        if(pAccess_lockedVal != null) {
            
            pAccess_locked = new Boolean(false);
            jsonToValue(pAccess_locked, pAccess_lockedVal, L"Boolean", L"Boolean");
        }
        delete pAccess_lockedKey;
JsonString* pDetailsKey = new JsonString(L"details");
        IJsonValue* pDetailsVal = null;
        pJsonObject->GetValue(pDetailsKey, pDetailsVal);
        if(pDetailsVal != null) {
            
            pDetails = null;
            jsonToValue(pDetails, pDetailsVal, L"SamiObject", L"SamiObject");
        }
        delete pDetailsKey;
JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
    }
}

SamiMaintenance::SamiMaintenance(String* json) {
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
SamiMaintenance::asJson ()
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
SamiMaintenance::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAccess_lockedKey = new JsonString(L"access_locked");
    pJsonObject->Add(pAccess_lockedKey, toJson(getPAccessLocked(), "Boolean", ""));

    JsonString *pDetailsKey = new JsonString(L"details");
    pJsonObject->Add(pDetailsKey, toJson(getPDetails(), "SamiObject", ""));

    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    return pJsonObject;
}

Boolean*
SamiMaintenance::getPAccessLocked() {
    return pAccess_locked;
}
void
SamiMaintenance::setPAccessLocked(Boolean* pAccess_locked) {
    this->pAccess_locked = pAccess_locked;
}

SamiObject*
SamiMaintenance::getPDetails() {
    return pDetails;
}
void
SamiMaintenance::setPDetails(SamiObject* pDetails) {
    this->pDetails = pDetails;
}

String*
SamiMaintenance::getPMessage() {
    return pMessage;
}
void
SamiMaintenance::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}



} /* namespace Swagger */

