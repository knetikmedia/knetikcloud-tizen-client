
#include "SamiBreRuleLog.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBreRuleLog::SamiBreRuleLog() {
    init();
}

SamiBreRuleLog::~SamiBreRuleLog() {
    this->cleanup();
}

void
SamiBreRuleLog::init() {
    pRan = null;
pReason = null;
pRule_end_date = null;
pRule_id = null;
pRule_name = null;
pRule_start_date = null;
}

void
SamiBreRuleLog::cleanup() {
    if(pRan != null) {
        
        delete pRan;
        pRan = null;
    }
if(pReason != null) {
        
        delete pReason;
        pReason = null;
    }
if(pRule_end_date != null) {
        
        delete pRule_end_date;
        pRule_end_date = null;
    }
if(pRule_id != null) {
        
        delete pRule_id;
        pRule_id = null;
    }
if(pRule_name != null) {
        
        delete pRule_name;
        pRule_name = null;
    }
if(pRule_start_date != null) {
        
        delete pRule_start_date;
        pRule_start_date = null;
    }
}


SamiBreRuleLog*
SamiBreRuleLog::fromJson(String* json) {
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
SamiBreRuleLog::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pRanKey = new JsonString(L"ran");
        IJsonValue* pRanVal = null;
        pJsonObject->GetValue(pRanKey, pRanVal);
        if(pRanVal != null) {
            
            pRan = new Boolean(false);
            jsonToValue(pRan, pRanVal, L"Boolean", L"Boolean");
        }
        delete pRanKey;
JsonString* pReasonKey = new JsonString(L"reason");
        IJsonValue* pReasonVal = null;
        pJsonObject->GetValue(pReasonKey, pReasonVal);
        if(pReasonVal != null) {
            
            pReason = new String();
            jsonToValue(pReason, pReasonVal, L"String", L"String");
        }
        delete pReasonKey;
JsonString* pRule_end_dateKey = new JsonString(L"rule_end_date");
        IJsonValue* pRule_end_dateVal = null;
        pJsonObject->GetValue(pRule_end_dateKey, pRule_end_dateVal);
        if(pRule_end_dateVal != null) {
            
            pRule_end_date = new Long();
            jsonToValue(pRule_end_date, pRule_end_dateVal, L"Long", L"Long");
        }
        delete pRule_end_dateKey;
JsonString* pRule_idKey = new JsonString(L"rule_id");
        IJsonValue* pRule_idVal = null;
        pJsonObject->GetValue(pRule_idKey, pRule_idVal);
        if(pRule_idVal != null) {
            
            pRule_id = new String();
            jsonToValue(pRule_id, pRule_idVal, L"String", L"String");
        }
        delete pRule_idKey;
JsonString* pRule_nameKey = new JsonString(L"rule_name");
        IJsonValue* pRule_nameVal = null;
        pJsonObject->GetValue(pRule_nameKey, pRule_nameVal);
        if(pRule_nameVal != null) {
            
            pRule_name = new String();
            jsonToValue(pRule_name, pRule_nameVal, L"String", L"String");
        }
        delete pRule_nameKey;
JsonString* pRule_start_dateKey = new JsonString(L"rule_start_date");
        IJsonValue* pRule_start_dateVal = null;
        pJsonObject->GetValue(pRule_start_dateKey, pRule_start_dateVal);
        if(pRule_start_dateVal != null) {
            
            pRule_start_date = new Long();
            jsonToValue(pRule_start_date, pRule_start_dateVal, L"Long", L"Long");
        }
        delete pRule_start_dateKey;
    }
}

SamiBreRuleLog::SamiBreRuleLog(String* json) {
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
SamiBreRuleLog::asJson ()
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
SamiBreRuleLog::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pRanKey = new JsonString(L"ran");
    pJsonObject->Add(pRanKey, toJson(getPRan(), "Boolean", ""));

    JsonString *pReasonKey = new JsonString(L"reason");
    pJsonObject->Add(pReasonKey, toJson(getPReason(), "String", ""));

    JsonString *pRule_end_dateKey = new JsonString(L"rule_end_date");
    pJsonObject->Add(pRule_end_dateKey, toJson(getPRuleEndDate(), "Long", ""));

    JsonString *pRule_idKey = new JsonString(L"rule_id");
    pJsonObject->Add(pRule_idKey, toJson(getPRuleId(), "String", ""));

    JsonString *pRule_nameKey = new JsonString(L"rule_name");
    pJsonObject->Add(pRule_nameKey, toJson(getPRuleName(), "String", ""));

    JsonString *pRule_start_dateKey = new JsonString(L"rule_start_date");
    pJsonObject->Add(pRule_start_dateKey, toJson(getPRuleStartDate(), "Long", ""));

    return pJsonObject;
}

Boolean*
SamiBreRuleLog::getPRan() {
    return pRan;
}
void
SamiBreRuleLog::setPRan(Boolean* pRan) {
    this->pRan = pRan;
}

String*
SamiBreRuleLog::getPReason() {
    return pReason;
}
void
SamiBreRuleLog::setPReason(String* pReason) {
    this->pReason = pReason;
}

Long*
SamiBreRuleLog::getPRuleEndDate() {
    return pRule_end_date;
}
void
SamiBreRuleLog::setPRuleEndDate(Long* pRule_end_date) {
    this->pRule_end_date = pRule_end_date;
}

String*
SamiBreRuleLog::getPRuleId() {
    return pRule_id;
}
void
SamiBreRuleLog::setPRuleId(String* pRule_id) {
    this->pRule_id = pRule_id;
}

String*
SamiBreRuleLog::getPRuleName() {
    return pRule_name;
}
void
SamiBreRuleLog::setPRuleName(String* pRule_name) {
    this->pRule_name = pRule_name;
}

Long*
SamiBreRuleLog::getPRuleStartDate() {
    return pRule_start_date;
}
void
SamiBreRuleLog::setPRuleStartDate(Long* pRule_start_date) {
    this->pRule_start_date = pRule_start_date;
}



} /* namespace Swagger */

