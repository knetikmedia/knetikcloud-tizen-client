
#include "SamiAchievementDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAchievementDefinitionResource::SamiAchievementDefinitionResource() {
    init();
}

SamiAchievementDefinitionResource::~SamiAchievementDefinitionResource() {
    this->cleanup();
}

void
SamiAchievementDefinitionResource::init() {
    pAdditional_properties = null;
pCreated_date = null;
pDescription = null;
pHidden = null;
pMax_value = null;
pMin_value = null;
pName = null;
pRule_id = null;
pTags = null;
pTemplate = null;
pTrigger_event_name = null;
pUpdated_date = null;
}

void
SamiAchievementDefinitionResource::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pHidden != null) {
        
        delete pHidden;
        pHidden = null;
    }
if(pMax_value != null) {
        
        delete pMax_value;
        pMax_value = null;
    }
if(pMin_value != null) {
        
        delete pMin_value;
        pMin_value = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRule_id != null) {
        
        delete pRule_id;
        pRule_id = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pTrigger_event_name != null) {
        
        delete pTrigger_event_name;
        pTrigger_event_name = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiAchievementDefinitionResource*
SamiAchievementDefinitionResource::fromJson(String* json) {
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
SamiAchievementDefinitionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pHiddenKey = new JsonString(L"hidden");
        IJsonValue* pHiddenVal = null;
        pJsonObject->GetValue(pHiddenKey, pHiddenVal);
        if(pHiddenVal != null) {
            
            pHidden = new Boolean(false);
            jsonToValue(pHidden, pHiddenVal, L"Boolean", L"Boolean");
        }
        delete pHiddenKey;
JsonString* pMax_valueKey = new JsonString(L"max_value");
        IJsonValue* pMax_valueVal = null;
        pJsonObject->GetValue(pMax_valueKey, pMax_valueVal);
        if(pMax_valueVal != null) {
            
            pMax_value = new Integer();
            jsonToValue(pMax_value, pMax_valueVal, L"Integer", L"Integer");
        }
        delete pMax_valueKey;
JsonString* pMin_valueKey = new JsonString(L"min_value");
        IJsonValue* pMin_valueVal = null;
        pJsonObject->GetValue(pMin_valueKey, pMin_valueVal);
        if(pMin_valueVal != null) {
            
            pMin_value = new Integer();
            jsonToValue(pMin_value, pMin_valueVal, L"Integer", L"Integer");
        }
        delete pMin_valueKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRule_idKey = new JsonString(L"rule_id");
        IJsonValue* pRule_idVal = null;
        pJsonObject->GetValue(pRule_idKey, pRule_idVal);
        if(pRule_idVal != null) {
            
            pRule_id = new String();
            jsonToValue(pRule_id, pRule_idVal, L"String", L"String");
        }
        delete pRule_idKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new String();
            jsonToValue(pTemplate, pTemplateVal, L"String", L"String");
        }
        delete pTemplateKey;
JsonString* pTrigger_event_nameKey = new JsonString(L"trigger_event_name");
        IJsonValue* pTrigger_event_nameVal = null;
        pJsonObject->GetValue(pTrigger_event_nameKey, pTrigger_event_nameVal);
        if(pTrigger_event_nameVal != null) {
            
            pTrigger_event_name = new String();
            jsonToValue(pTrigger_event_name, pTrigger_event_nameVal, L"String", L"String");
        }
        delete pTrigger_event_nameKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
    }
}

SamiAchievementDefinitionResource::SamiAchievementDefinitionResource(String* json) {
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
SamiAchievementDefinitionResource::asJson ()
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
SamiAchievementDefinitionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pHiddenKey = new JsonString(L"hidden");
    pJsonObject->Add(pHiddenKey, toJson(getPHidden(), "Boolean", ""));

    JsonString *pMax_valueKey = new JsonString(L"max_value");
    pJsonObject->Add(pMax_valueKey, toJson(getPMaxValue(), "Integer", ""));

    JsonString *pMin_valueKey = new JsonString(L"min_value");
    pJsonObject->Add(pMin_valueKey, toJson(getPMinValue(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRule_idKey = new JsonString(L"rule_id");
    pJsonObject->Add(pRule_idKey, toJson(getPRuleId(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pTrigger_event_nameKey = new JsonString(L"trigger_event_name");
    pJsonObject->Add(pTrigger_event_nameKey, toJson(getPTriggerEventName(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

HashMap*
SamiAchievementDefinitionResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiAchievementDefinitionResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

Long*
SamiAchievementDefinitionResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiAchievementDefinitionResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiAchievementDefinitionResource::getPDescription() {
    return pDescription;
}
void
SamiAchievementDefinitionResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Boolean*
SamiAchievementDefinitionResource::getPHidden() {
    return pHidden;
}
void
SamiAchievementDefinitionResource::setPHidden(Boolean* pHidden) {
    this->pHidden = pHidden;
}

Integer*
SamiAchievementDefinitionResource::getPMaxValue() {
    return pMax_value;
}
void
SamiAchievementDefinitionResource::setPMaxValue(Integer* pMax_value) {
    this->pMax_value = pMax_value;
}

Integer*
SamiAchievementDefinitionResource::getPMinValue() {
    return pMin_value;
}
void
SamiAchievementDefinitionResource::setPMinValue(Integer* pMin_value) {
    this->pMin_value = pMin_value;
}

String*
SamiAchievementDefinitionResource::getPName() {
    return pName;
}
void
SamiAchievementDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiAchievementDefinitionResource::getPRuleId() {
    return pRule_id;
}
void
SamiAchievementDefinitionResource::setPRuleId(String* pRule_id) {
    this->pRule_id = pRule_id;
}

IList*
SamiAchievementDefinitionResource::getPTags() {
    return pTags;
}
void
SamiAchievementDefinitionResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiAchievementDefinitionResource::getPTemplate() {
    return pTemplate;
}
void
SamiAchievementDefinitionResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiAchievementDefinitionResource::getPTriggerEventName() {
    return pTrigger_event_name;
}
void
SamiAchievementDefinitionResource::setPTriggerEventName(String* pTrigger_event_name) {
    this->pTrigger_event_name = pTrigger_event_name;
}

Long*
SamiAchievementDefinitionResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiAchievementDefinitionResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

