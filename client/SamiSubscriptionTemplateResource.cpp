
#include "SamiSubscriptionTemplateResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSubscriptionTemplateResource::SamiSubscriptionTemplateResource() {
    init();
}

SamiSubscriptionTemplateResource::~SamiSubscriptionTemplateResource() {
    this->cleanup();
}

void
SamiSubscriptionTemplateResource::init() {
    pCreated_date = null;
pId = null;
pName = null;
pPlan_template = null;
pProperties = null;
pUpdated_date = null;
}

void
SamiSubscriptionTemplateResource::cleanup() {
    if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPlan_template != null) {
        
        delete pPlan_template;
        pPlan_template = null;
    }
if(pProperties != null) {
        pProperties->RemoveAll(true);
        delete pProperties;
        pProperties = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiSubscriptionTemplateResource*
SamiSubscriptionTemplateResource::fromJson(String* json) {
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
SamiSubscriptionTemplateResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
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
JsonString* pPlan_templateKey = new JsonString(L"plan_template");
        IJsonValue* pPlan_templateVal = null;
        pJsonObject->GetValue(pPlan_templateKey, pPlan_templateVal);
        if(pPlan_templateVal != null) {
            
            pPlan_template = new SamiTemplateResource();
            jsonToValue(pPlan_template, pPlan_templateVal, L"SamiTemplateResource", L"SamiTemplateResource");
        }
        delete pPlan_templateKey;
JsonString* pPropertiesKey = new JsonString(L"properties");
        IJsonValue* pPropertiesVal = null;
        pJsonObject->GetValue(pPropertiesKey, pPropertiesVal);
        if(pPropertiesVal != null) {
            pProperties = new ArrayList();
            
            jsonToValue(pProperties, pPropertiesVal, L"IList", L"SamiPropertyDefinitionResource");
        }
        delete pPropertiesKey;
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

SamiSubscriptionTemplateResource::SamiSubscriptionTemplateResource(String* json) {
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
SamiSubscriptionTemplateResource::asJson ()
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
SamiSubscriptionTemplateResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPlan_templateKey = new JsonString(L"plan_template");
    pJsonObject->Add(pPlan_templateKey, toJson(getPPlanTemplate(), "SamiTemplateResource", ""));

    JsonString *pPropertiesKey = new JsonString(L"properties");
    pJsonObject->Add(pPropertiesKey, toJson(getPProperties(), "SamiPropertyDefinitionResource", "array"));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Long*
SamiSubscriptionTemplateResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiSubscriptionTemplateResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiSubscriptionTemplateResource::getPId() {
    return pId;
}
void
SamiSubscriptionTemplateResource::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiSubscriptionTemplateResource::getPName() {
    return pName;
}
void
SamiSubscriptionTemplateResource::setPName(String* pName) {
    this->pName = pName;
}

SamiTemplateResource*
SamiSubscriptionTemplateResource::getPPlanTemplate() {
    return pPlan_template;
}
void
SamiSubscriptionTemplateResource::setPPlanTemplate(SamiTemplateResource* pPlan_template) {
    this->pPlan_template = pPlan_template;
}

IList*
SamiSubscriptionTemplateResource::getPProperties() {
    return pProperties;
}
void
SamiSubscriptionTemplateResource::setPProperties(IList* pProperties) {
    this->pProperties = pProperties;
}

Long*
SamiSubscriptionTemplateResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiSubscriptionTemplateResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

