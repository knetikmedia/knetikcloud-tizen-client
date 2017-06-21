
#include "SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc).h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)() {
    init();
}

SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::~SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)() {
    this->cleanup();
}

void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::init() {
    pAdditional_properties = null;
pCreated_date = null;
pEntitlements = null;
pId = null;
pLaunch = null;
pLong_description = null;
pName = null;
pReward_set = null;
pSettings = null;
pShort_description = null;
pTemplate = null;
pTemplate_id = null;
pType = null;
pUnique_key = null;
pUpdated_date = null;
}

void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pEntitlements != null) {
        pEntitlements->RemoveAll(true);
        delete pEntitlements;
        pEntitlements = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLaunch != null) {
        
        delete pLaunch;
        pLaunch = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pReward_set != null) {
        
        delete pReward_set;
        pReward_set = null;
    }
if(pSettings != null) {
        pSettings->RemoveAll(true);
        delete pSettings;
        pSettings = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pTemplate_id != null) {
        
        delete pTemplate_id;
        pTemplate_id = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pUnique_key != null) {
        
        delete pUnique_key;
        pUnique_key = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::fromJson(String* json) {
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
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pEntitlementsKey = new JsonString(L"entitlements");
        IJsonValue* pEntitlementsVal = null;
        pJsonObject->GetValue(pEntitlementsKey, pEntitlementsVal);
        if(pEntitlementsVal != null) {
            pEntitlements = new ArrayList();
            
            jsonToValue(pEntitlements, pEntitlementsVal, L"IList", L"SamiActivityEntitlementResource");
        }
        delete pEntitlementsKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pLaunchKey = new JsonString(L"launch");
        IJsonValue* pLaunchVal = null;
        pJsonObject->GetValue(pLaunchKey, pLaunchVal);
        if(pLaunchVal != null) {
            
            pLaunch = new String();
            jsonToValue(pLaunch, pLaunchVal, L"String", L"String");
        }
        delete pLaunchKey;
JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pReward_setKey = new JsonString(L"reward_set");
        IJsonValue* pReward_setVal = null;
        pJsonObject->GetValue(pReward_setKey, pReward_setVal);
        if(pReward_setVal != null) {
            
            pReward_set = new SamiRewardSetResource();
            jsonToValue(pReward_set, pReward_setVal, L"SamiRewardSetResource", L"SamiRewardSetResource");
        }
        delete pReward_setKey;
JsonString* pSettingsKey = new JsonString(L"settings");
        IJsonValue* pSettingsVal = null;
        pJsonObject->GetValue(pSettingsKey, pSettingsVal);
        if(pSettingsVal != null) {
            pSettings = new ArrayList();
            
            jsonToValue(pSettings, pSettingsVal, L"IList", L"SamiThe definition of an activity parameters: ex: difficulty level");
        }
        delete pSettingsKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new Boolean(false);
            jsonToValue(pTemplate, pTemplateVal, L"Boolean", L"Boolean");
        }
        delete pTemplateKey;
JsonString* pTemplate_idKey = new JsonString(L"template_id");
        IJsonValue* pTemplate_idVal = null;
        pJsonObject->GetValue(pTemplate_idKey, pTemplate_idVal);
        if(pTemplate_idVal != null) {
            
            pTemplate_id = new String();
            jsonToValue(pTemplate_id, pTemplate_idVal, L"String", L"String");
        }
        delete pTemplate_idKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pUnique_keyKey = new JsonString(L"unique_key");
        IJsonValue* pUnique_keyVal = null;
        pJsonObject->GetValue(pUnique_keyKey, pUnique_keyVal);
        if(pUnique_keyVal != null) {
            
            pUnique_key = new String();
            jsonToValue(pUnique_key, pUnique_keyVal, L"String", L"String");
        }
        delete pUnique_keyKey;
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

SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)(String* json) {
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
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::asJson ()
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
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pEntitlementsKey = new JsonString(L"entitlements");
    pJsonObject->Add(pEntitlementsKey, toJson(getPEntitlements(), "SamiActivityEntitlementResource", "array"));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLaunchKey = new JsonString(L"launch");
    pJsonObject->Add(pLaunchKey, toJson(getPLaunch(), "String", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pReward_setKey = new JsonString(L"reward_set");
    pJsonObject->Add(pReward_setKey, toJson(getPRewardSet(), "SamiRewardSetResource", ""));

    JsonString *pSettingsKey = new JsonString(L"settings");
    pJsonObject->Add(pSettingsKey, toJson(getPSettings(), "SamiThe definition of an activity parameters: ex: difficulty level", "array"));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "Boolean", ""));

    JsonString *pTemplate_idKey = new JsonString(L"template_id");
    pJsonObject->Add(pTemplate_idKey, toJson(getPTemplateId(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

HashMap*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

Long*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPCreatedDate() {
    return pCreated_date;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

IList*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPEntitlements() {
    return pEntitlements;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPEntitlements(IList* pEntitlements) {
    this->pEntitlements = pEntitlements;
}

Long*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPId() {
    return pId;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPLaunch() {
    return pLaunch;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPLaunch(String* pLaunch) {
    this->pLaunch = pLaunch;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPLongDescription() {
    return pLong_description;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPName() {
    return pName;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPName(String* pName) {
    this->pName = pName;
}

SamiRewardSetResource*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPRewardSet() {
    return pReward_set;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPRewardSet(SamiRewardSetResource* pReward_set) {
    this->pReward_set = pReward_set;
}

IList*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPSettings() {
    return pSettings;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPSettings(IList* pSettings) {
    this->pSettings = pSettings;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPShortDescription() {
    return pShort_description;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Boolean*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPTemplate() {
    return pTemplate;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPTemplate(Boolean* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPTemplateId() {
    return pTemplate_id;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPTemplateId(String* pTemplate_id) {
    this->pTemplate_id = pTemplate_id;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPType() {
    return pType;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPUniqueKey() {
    return pUnique_key;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Long*
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiRepresents an activity that can be parameterized and tracked through metrics (scores, etc)::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

