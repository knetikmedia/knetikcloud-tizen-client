
#include "SamiActivityUserResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActivityUserResource::SamiActivityUserResource() {
    init();
}

SamiActivityUserResource::~SamiActivityUserResource() {
    this->cleanup();
}

void
SamiActivityUserResource::init() {
    pHost = null;
pId = null;
pJoined_date = null;
pLeft_date = null;
pMetric = null;
pStatus = null;
pUser = null;
}

void
SamiActivityUserResource::cleanup() {
    if(pHost != null) {
        
        delete pHost;
        pHost = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pJoined_date != null) {
        
        delete pJoined_date;
        pJoined_date = null;
    }
if(pLeft_date != null) {
        
        delete pLeft_date;
        pLeft_date = null;
    }
if(pMetric != null) {
        
        delete pMetric;
        pMetric = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiActivityUserResource*
SamiActivityUserResource::fromJson(String* json) {
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
SamiActivityUserResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pHostKey = new JsonString(L"host");
        IJsonValue* pHostVal = null;
        pJsonObject->GetValue(pHostKey, pHostVal);
        if(pHostVal != null) {
            
            pHost = new Boolean(false);
            jsonToValue(pHost, pHostVal, L"Boolean", L"Boolean");
        }
        delete pHostKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pJoined_dateKey = new JsonString(L"joined_date");
        IJsonValue* pJoined_dateVal = null;
        pJsonObject->GetValue(pJoined_dateKey, pJoined_dateVal);
        if(pJoined_dateVal != null) {
            
            pJoined_date = new Long();
            jsonToValue(pJoined_date, pJoined_dateVal, L"Long", L"Long");
        }
        delete pJoined_dateKey;
JsonString* pLeft_dateKey = new JsonString(L"left_date");
        IJsonValue* pLeft_dateVal = null;
        pJsonObject->GetValue(pLeft_dateKey, pLeft_dateVal);
        if(pLeft_dateVal != null) {
            
            pLeft_date = new Long();
            jsonToValue(pLeft_date, pLeft_dateVal, L"Long", L"Long");
        }
        delete pLeft_dateKey;
JsonString* pMetricKey = new JsonString(L"metric");
        IJsonValue* pMetricVal = null;
        pJsonObject->GetValue(pMetricKey, pMetricVal);
        if(pMetricVal != null) {
            
            pMetric = new SamiMetricResource();
            jsonToValue(pMetric, pMetricVal, L"SamiMetricResource", L"SamiMetricResource");
        }
        delete pMetricKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
    }
}

SamiActivityUserResource::SamiActivityUserResource(String* json) {
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
SamiActivityUserResource::asJson ()
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
SamiActivityUserResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pHostKey = new JsonString(L"host");
    pJsonObject->Add(pHostKey, toJson(getPHost(), "Boolean", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pJoined_dateKey = new JsonString(L"joined_date");
    pJsonObject->Add(pJoined_dateKey, toJson(getPJoinedDate(), "Long", ""));

    JsonString *pLeft_dateKey = new JsonString(L"left_date");
    pJsonObject->Add(pLeft_dateKey, toJson(getPLeftDate(), "Long", ""));

    JsonString *pMetricKey = new JsonString(L"metric");
    pJsonObject->Add(pMetricKey, toJson(getPMetric(), "SamiMetricResource", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

Boolean*
SamiActivityUserResource::getPHost() {
    return pHost;
}
void
SamiActivityUserResource::setPHost(Boolean* pHost) {
    this->pHost = pHost;
}

Long*
SamiActivityUserResource::getPId() {
    return pId;
}
void
SamiActivityUserResource::setPId(Long* pId) {
    this->pId = pId;
}

Long*
SamiActivityUserResource::getPJoinedDate() {
    return pJoined_date;
}
void
SamiActivityUserResource::setPJoinedDate(Long* pJoined_date) {
    this->pJoined_date = pJoined_date;
}

Long*
SamiActivityUserResource::getPLeftDate() {
    return pLeft_date;
}
void
SamiActivityUserResource::setPLeftDate(Long* pLeft_date) {
    this->pLeft_date = pLeft_date;
}

SamiMetricResource*
SamiActivityUserResource::getPMetric() {
    return pMetric;
}
void
SamiActivityUserResource::setPMetric(SamiMetricResource* pMetric) {
    this->pMetric = pMetric;
}

String*
SamiActivityUserResource::getPStatus() {
    return pStatus;
}
void
SamiActivityUserResource::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

SamiSimpleUserResource*
SamiActivityUserResource::getPUser() {
    return pUser;
}
void
SamiActivityUserResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

