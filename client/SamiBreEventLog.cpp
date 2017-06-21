
#include "SamiBreEventLog.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBreEventLog::SamiBreEventLog() {
    init();
}

SamiBreEventLog::~SamiBreEventLog() {
    this->cleanup();
}

void
SamiBreEventLog::init() {
    pCustomer = null;
pEvent_id = null;
pEvent_name = null;
pEvent_start_date = null;
pId = null;
pParameters = null;
pRules = null;
}

void
SamiBreEventLog::cleanup() {
    if(pCustomer != null) {
        
        delete pCustomer;
        pCustomer = null;
    }
if(pEvent_id != null) {
        
        delete pEvent_id;
        pEvent_id = null;
    }
if(pEvent_name != null) {
        
        delete pEvent_name;
        pEvent_name = null;
    }
if(pEvent_start_date != null) {
        
        delete pEvent_start_date;
        pEvent_start_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pParameters != null) {
        
        delete pParameters;
        pParameters = null;
    }
if(pRules != null) {
        pRules->RemoveAll(true);
        delete pRules;
        pRules = null;
    }
}


SamiBreEventLog*
SamiBreEventLog::fromJson(String* json) {
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
SamiBreEventLog::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCustomerKey = new JsonString(L"customer");
        IJsonValue* pCustomerVal = null;
        pJsonObject->GetValue(pCustomerKey, pCustomerVal);
        if(pCustomerVal != null) {
            
            pCustomer = new String();
            jsonToValue(pCustomer, pCustomerVal, L"String", L"String");
        }
        delete pCustomerKey;
JsonString* pEvent_idKey = new JsonString(L"event_id");
        IJsonValue* pEvent_idVal = null;
        pJsonObject->GetValue(pEvent_idKey, pEvent_idVal);
        if(pEvent_idVal != null) {
            
            pEvent_id = new String();
            jsonToValue(pEvent_id, pEvent_idVal, L"String", L"String");
        }
        delete pEvent_idKey;
JsonString* pEvent_nameKey = new JsonString(L"event_name");
        IJsonValue* pEvent_nameVal = null;
        pJsonObject->GetValue(pEvent_nameKey, pEvent_nameVal);
        if(pEvent_nameVal != null) {
            
            pEvent_name = new String();
            jsonToValue(pEvent_name, pEvent_nameVal, L"String", L"String");
        }
        delete pEvent_nameKey;
JsonString* pEvent_start_dateKey = new JsonString(L"event_start_date");
        IJsonValue* pEvent_start_dateVal = null;
        pJsonObject->GetValue(pEvent_start_dateKey, pEvent_start_dateVal);
        if(pEvent_start_dateVal != null) {
            
            pEvent_start_date = new Long();
            jsonToValue(pEvent_start_date, pEvent_start_dateVal, L"Long", L"Long");
        }
        delete pEvent_start_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pParametersKey = new JsonString(L"parameters");
        IJsonValue* pParametersVal = null;
        pJsonObject->GetValue(pParametersKey, pParametersVal);
        if(pParametersVal != null) {
            
            pParameters = null;
            jsonToValue(pParameters, pParametersVal, L"SamiObject", L"SamiObject");
        }
        delete pParametersKey;
JsonString* pRulesKey = new JsonString(L"rules");
        IJsonValue* pRulesVal = null;
        pJsonObject->GetValue(pRulesKey, pRulesVal);
        if(pRulesVal != null) {
            pRules = new ArrayList();
            
            jsonToValue(pRules, pRulesVal, L"IList", L"SamiBreRuleLog");
        }
        delete pRulesKey;
    }
}

SamiBreEventLog::SamiBreEventLog(String* json) {
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
SamiBreEventLog::asJson ()
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
SamiBreEventLog::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCustomerKey = new JsonString(L"customer");
    pJsonObject->Add(pCustomerKey, toJson(getPCustomer(), "String", ""));

    JsonString *pEvent_idKey = new JsonString(L"event_id");
    pJsonObject->Add(pEvent_idKey, toJson(getPEventId(), "String", ""));

    JsonString *pEvent_nameKey = new JsonString(L"event_name");
    pJsonObject->Add(pEvent_nameKey, toJson(getPEventName(), "String", ""));

    JsonString *pEvent_start_dateKey = new JsonString(L"event_start_date");
    pJsonObject->Add(pEvent_start_dateKey, toJson(getPEventStartDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pParametersKey = new JsonString(L"parameters");
    pJsonObject->Add(pParametersKey, toJson(getPParameters(), "SamiObject", ""));

    JsonString *pRulesKey = new JsonString(L"rules");
    pJsonObject->Add(pRulesKey, toJson(getPRules(), "SamiBreRuleLog", "array"));

    return pJsonObject;
}

String*
SamiBreEventLog::getPCustomer() {
    return pCustomer;
}
void
SamiBreEventLog::setPCustomer(String* pCustomer) {
    this->pCustomer = pCustomer;
}

String*
SamiBreEventLog::getPEventId() {
    return pEvent_id;
}
void
SamiBreEventLog::setPEventId(String* pEvent_id) {
    this->pEvent_id = pEvent_id;
}

String*
SamiBreEventLog::getPEventName() {
    return pEvent_name;
}
void
SamiBreEventLog::setPEventName(String* pEvent_name) {
    this->pEvent_name = pEvent_name;
}

Long*
SamiBreEventLog::getPEventStartDate() {
    return pEvent_start_date;
}
void
SamiBreEventLog::setPEventStartDate(Long* pEvent_start_date) {
    this->pEvent_start_date = pEvent_start_date;
}

String*
SamiBreEventLog::getPId() {
    return pId;
}
void
SamiBreEventLog::setPId(String* pId) {
    this->pId = pId;
}

SamiObject*
SamiBreEventLog::getPParameters() {
    return pParameters;
}
void
SamiBreEventLog::setPParameters(SamiObject* pParameters) {
    this->pParameters = pParameters;
}

IList*
SamiBreEventLog::getPRules() {
    return pRules;
}
void
SamiBreEventLog::setPRules(IList* pRules) {
    this->pRules = pRules;
}



} /* namespace Swagger */

