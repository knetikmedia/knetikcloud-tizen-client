
#include "SamiCacheClearEvent.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCacheClearEvent::SamiCacheClearEvent() {
    init();
}

SamiCacheClearEvent::~SamiCacheClearEvent() {
    this->cleanup();
}

void
SamiCacheClearEvent::init() {
    pClient = null;
pCustomer = null;
pDo_not_broadcast = null;
pSection = null;
pSource = null;
pSpecifics = null;
pSynchronous = null;
pTimestamp = null;
pType = null;
}

void
SamiCacheClearEvent::cleanup() {
    if(pClient != null) {
        
        delete pClient;
        pClient = null;
    }
if(pCustomer != null) {
        
        delete pCustomer;
        pCustomer = null;
    }
if(pDo_not_broadcast != null) {
        
        delete pDo_not_broadcast;
        pDo_not_broadcast = null;
    }
if(pSection != null) {
        
        delete pSection;
        pSection = null;
    }
if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
if(pSpecifics != null) {
        
        delete pSpecifics;
        pSpecifics = null;
    }
if(pSynchronous != null) {
        
        delete pSynchronous;
        pSynchronous = null;
    }
if(pTimestamp != null) {
        
        delete pTimestamp;
        pTimestamp = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiCacheClearEvent*
SamiCacheClearEvent::fromJson(String* json) {
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
SamiCacheClearEvent::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pClientKey = new JsonString(L"client");
        IJsonValue* pClientVal = null;
        pJsonObject->GetValue(pClientKey, pClientVal);
        if(pClientVal != null) {
            
            pClient = new String();
            jsonToValue(pClient, pClientVal, L"String", L"String");
        }
        delete pClientKey;
JsonString* pCustomerKey = new JsonString(L"customer");
        IJsonValue* pCustomerVal = null;
        pJsonObject->GetValue(pCustomerKey, pCustomerVal);
        if(pCustomerVal != null) {
            
            pCustomer = new String();
            jsonToValue(pCustomer, pCustomerVal, L"String", L"String");
        }
        delete pCustomerKey;
JsonString* pDo_not_broadcastKey = new JsonString(L"do_not_broadcast");
        IJsonValue* pDo_not_broadcastVal = null;
        pJsonObject->GetValue(pDo_not_broadcastKey, pDo_not_broadcastVal);
        if(pDo_not_broadcastVal != null) {
            
            pDo_not_broadcast = new Boolean(false);
            jsonToValue(pDo_not_broadcast, pDo_not_broadcastVal, L"Boolean", L"Boolean");
        }
        delete pDo_not_broadcastKey;
JsonString* pSectionKey = new JsonString(L"section");
        IJsonValue* pSectionVal = null;
        pJsonObject->GetValue(pSectionKey, pSectionVal);
        if(pSectionVal != null) {
            
            pSection = new String();
            jsonToValue(pSection, pSectionVal, L"String", L"String");
        }
        delete pSectionKey;
JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = null;
            jsonToValue(pSource, pSourceVal, L"SamiObject", L"SamiObject");
        }
        delete pSourceKey;
JsonString* pSpecificsKey = new JsonString(L"specifics");
        IJsonValue* pSpecificsVal = null;
        pJsonObject->GetValue(pSpecificsKey, pSpecificsVal);
        if(pSpecificsVal != null) {
            
            pSpecifics = new String();
            jsonToValue(pSpecifics, pSpecificsVal, L"String", L"String");
        }
        delete pSpecificsKey;
JsonString* pSynchronousKey = new JsonString(L"synchronous");
        IJsonValue* pSynchronousVal = null;
        pJsonObject->GetValue(pSynchronousKey, pSynchronousVal);
        if(pSynchronousVal != null) {
            
            pSynchronous = new Boolean(false);
            jsonToValue(pSynchronous, pSynchronousVal, L"Boolean", L"Boolean");
        }
        delete pSynchronousKey;
JsonString* pTimestampKey = new JsonString(L"timestamp");
        IJsonValue* pTimestampVal = null;
        pJsonObject->GetValue(pTimestampKey, pTimestampVal);
        if(pTimestampVal != null) {
            
            pTimestamp = new Long();
            jsonToValue(pTimestamp, pTimestampVal, L"Long", L"Long");
        }
        delete pTimestampKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
    }
}

SamiCacheClearEvent::SamiCacheClearEvent(String* json) {
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
SamiCacheClearEvent::asJson ()
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
SamiCacheClearEvent::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pClientKey = new JsonString(L"client");
    pJsonObject->Add(pClientKey, toJson(getPClient(), "String", ""));

    JsonString *pCustomerKey = new JsonString(L"customer");
    pJsonObject->Add(pCustomerKey, toJson(getPCustomer(), "String", ""));

    JsonString *pDo_not_broadcastKey = new JsonString(L"do_not_broadcast");
    pJsonObject->Add(pDo_not_broadcastKey, toJson(getPDoNotBroadcast(), "Boolean", ""));

    JsonString *pSectionKey = new JsonString(L"section");
    pJsonObject->Add(pSectionKey, toJson(getPSection(), "String", ""));

    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "SamiObject", ""));

    JsonString *pSpecificsKey = new JsonString(L"specifics");
    pJsonObject->Add(pSpecificsKey, toJson(getPSpecifics(), "String", ""));

    JsonString *pSynchronousKey = new JsonString(L"synchronous");
    pJsonObject->Add(pSynchronousKey, toJson(getPSynchronous(), "Boolean", ""));

    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "Long", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

String*
SamiCacheClearEvent::getPClient() {
    return pClient;
}
void
SamiCacheClearEvent::setPClient(String* pClient) {
    this->pClient = pClient;
}

String*
SamiCacheClearEvent::getPCustomer() {
    return pCustomer;
}
void
SamiCacheClearEvent::setPCustomer(String* pCustomer) {
    this->pCustomer = pCustomer;
}

Boolean*
SamiCacheClearEvent::getPDoNotBroadcast() {
    return pDo_not_broadcast;
}
void
SamiCacheClearEvent::setPDoNotBroadcast(Boolean* pDo_not_broadcast) {
    this->pDo_not_broadcast = pDo_not_broadcast;
}

String*
SamiCacheClearEvent::getPSection() {
    return pSection;
}
void
SamiCacheClearEvent::setPSection(String* pSection) {
    this->pSection = pSection;
}

SamiObject*
SamiCacheClearEvent::getPSource() {
    return pSource;
}
void
SamiCacheClearEvent::setPSource(SamiObject* pSource) {
    this->pSource = pSource;
}

String*
SamiCacheClearEvent::getPSpecifics() {
    return pSpecifics;
}
void
SamiCacheClearEvent::setPSpecifics(String* pSpecifics) {
    this->pSpecifics = pSpecifics;
}

Boolean*
SamiCacheClearEvent::getPSynchronous() {
    return pSynchronous;
}
void
SamiCacheClearEvent::setPSynchronous(Boolean* pSynchronous) {
    this->pSynchronous = pSynchronous;
}

Long*
SamiCacheClearEvent::getPTimestamp() {
    return pTimestamp;
}
void
SamiCacheClearEvent::setPTimestamp(Long* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

String*
SamiCacheClearEvent::getPType() {
    return pType;
}
void
SamiCacheClearEvent::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

