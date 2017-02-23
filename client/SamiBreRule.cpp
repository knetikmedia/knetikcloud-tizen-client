
#include "SamiBreRule.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBreRule::SamiBreRule() {
    init();
}

SamiBreRule::~SamiBreRule() {
    this->cleanup();
}

void
SamiBreRule::init() {
    pActions = null;
pCondition = null;
pCondition_text = null;
pDescription = null;
pEnabled = null;
pEnd_date = null;
pEvent_name = null;
pId = null;
pName = null;
pSort = null;
pStart_date = null;
pSystem_rule = null;
}

void
SamiBreRule::cleanup() {
    if(pActions != null) {
        
        delete pActions;
        pActions = null;
    }
if(pCondition != null) {
        
        delete pCondition;
        pCondition = null;
    }
if(pCondition_text != null) {
        
        delete pCondition_text;
        pCondition_text = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pEnabled != null) {
        
        delete pEnabled;
        pEnabled = null;
    }
if(pEnd_date != null) {
        
        delete pEnd_date;
        pEnd_date = null;
    }
if(pEvent_name != null) {
        
        delete pEvent_name;
        pEvent_name = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pSort != null) {
        
        delete pSort;
        pSort = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
if(pSystem_rule != null) {
        
        delete pSystem_rule;
        pSystem_rule = null;
    }
}


SamiBreRule*
SamiBreRule::fromJson(String* json) {
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
SamiBreRule::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActionsKey = new JsonString(L"actions");
        IJsonValue* pActionsVal = null;
        pJsonObject->GetValue(pActionsKey, pActionsVal);
        if(pActionsVal != null) {
            
            pActions = new SamiActionResource();
            jsonToValue(pActions, pActionsVal, L"SamiActionResource", L"SamiActionResource");
        }
        delete pActionsKey;
JsonString* pConditionKey = new JsonString(L"condition");
        IJsonValue* pConditionVal = null;
        pJsonObject->GetValue(pConditionKey, pConditionVal);
        if(pConditionVal != null) {
            
            pCondition = new SamiPredicateOperation();
            jsonToValue(pCondition, pConditionVal, L"SamiPredicateOperation", L"SamiPredicateOperation");
        }
        delete pConditionKey;
JsonString* pCondition_textKey = new JsonString(L"condition_text");
        IJsonValue* pCondition_textVal = null;
        pJsonObject->GetValue(pCondition_textKey, pCondition_textVal);
        if(pCondition_textVal != null) {
            
            pCondition_text = new String();
            jsonToValue(pCondition_text, pCondition_textVal, L"String", L"String");
        }
        delete pCondition_textKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pEnabledKey = new JsonString(L"enabled");
        IJsonValue* pEnabledVal = null;
        pJsonObject->GetValue(pEnabledKey, pEnabledVal);
        if(pEnabledVal != null) {
            
            pEnabled = new Boolean(false);
            jsonToValue(pEnabled, pEnabledVal, L"Boolean", L"Boolean");
        }
        delete pEnabledKey;
JsonString* pEnd_dateKey = new JsonString(L"end_date");
        IJsonValue* pEnd_dateVal = null;
        pJsonObject->GetValue(pEnd_dateKey, pEnd_dateVal);
        if(pEnd_dateVal != null) {
            
            pEnd_date = new Long();
            jsonToValue(pEnd_date, pEnd_dateVal, L"Long", L"Long");
        }
        delete pEnd_dateKey;
JsonString* pEvent_nameKey = new JsonString(L"event_name");
        IJsonValue* pEvent_nameVal = null;
        pJsonObject->GetValue(pEvent_nameKey, pEvent_nameVal);
        if(pEvent_nameVal != null) {
            
            pEvent_name = new String();
            jsonToValue(pEvent_name, pEvent_nameVal, L"String", L"String");
        }
        delete pEvent_nameKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = new Integer();
            jsonToValue(pSort, pSortVal, L"Integer", L"Integer");
        }
        delete pSortKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
JsonString* pSystem_ruleKey = new JsonString(L"system_rule");
        IJsonValue* pSystem_ruleVal = null;
        pJsonObject->GetValue(pSystem_ruleKey, pSystem_ruleVal);
        if(pSystem_ruleVal != null) {
            
            pSystem_rule = new Boolean(false);
            jsonToValue(pSystem_rule, pSystem_ruleVal, L"Boolean", L"Boolean");
        }
        delete pSystem_ruleKey;
    }
}

SamiBreRule::SamiBreRule(String* json) {
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
SamiBreRule::asJson ()
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
SamiBreRule::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActionsKey = new JsonString(L"actions");
    pJsonObject->Add(pActionsKey, toJson(getPActions(), "SamiActionResource", ""));

    JsonString *pConditionKey = new JsonString(L"condition");
    pJsonObject->Add(pConditionKey, toJson(getPCondition(), "SamiPredicateOperation", ""));

    JsonString *pCondition_textKey = new JsonString(L"condition_text");
    pJsonObject->Add(pCondition_textKey, toJson(getPConditionText(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pEnabledKey = new JsonString(L"enabled");
    pJsonObject->Add(pEnabledKey, toJson(getPEnabled(), "Boolean", ""));

    JsonString *pEnd_dateKey = new JsonString(L"end_date");
    pJsonObject->Add(pEnd_dateKey, toJson(getPEndDate(), "Long", ""));

    JsonString *pEvent_nameKey = new JsonString(L"event_name");
    pJsonObject->Add(pEvent_nameKey, toJson(getPEventName(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "Integer", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    JsonString *pSystem_ruleKey = new JsonString(L"system_rule");
    pJsonObject->Add(pSystem_ruleKey, toJson(getPSystemRule(), "Boolean", ""));

    return pJsonObject;
}

SamiActionResource*
SamiBreRule::getPActions() {
    return pActions;
}
void
SamiBreRule::setPActions(SamiActionResource* pActions) {
    this->pActions = pActions;
}

SamiPredicateOperation*
SamiBreRule::getPCondition() {
    return pCondition;
}
void
SamiBreRule::setPCondition(SamiPredicateOperation* pCondition) {
    this->pCondition = pCondition;
}

String*
SamiBreRule::getPConditionText() {
    return pCondition_text;
}
void
SamiBreRule::setPConditionText(String* pCondition_text) {
    this->pCondition_text = pCondition_text;
}

String*
SamiBreRule::getPDescription() {
    return pDescription;
}
void
SamiBreRule::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Boolean*
SamiBreRule::getPEnabled() {
    return pEnabled;
}
void
SamiBreRule::setPEnabled(Boolean* pEnabled) {
    this->pEnabled = pEnabled;
}

Long*
SamiBreRule::getPEndDate() {
    return pEnd_date;
}
void
SamiBreRule::setPEndDate(Long* pEnd_date) {
    this->pEnd_date = pEnd_date;
}

String*
SamiBreRule::getPEventName() {
    return pEvent_name;
}
void
SamiBreRule::setPEventName(String* pEvent_name) {
    this->pEvent_name = pEvent_name;
}

String*
SamiBreRule::getPId() {
    return pId;
}
void
SamiBreRule::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiBreRule::getPName() {
    return pName;
}
void
SamiBreRule::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiBreRule::getPSort() {
    return pSort;
}
void
SamiBreRule::setPSort(Integer* pSort) {
    this->pSort = pSort;
}

Long*
SamiBreRule::getPStartDate() {
    return pStart_date;
}
void
SamiBreRule::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}

Boolean*
SamiBreRule::getPSystemRule() {
    return pSystem_rule;
}
void
SamiBreRule::setPSystemRule(Boolean* pSystem_rule) {
    this->pSystem_rule = pSystem_rule;
}



} /* namespace Swagger */

