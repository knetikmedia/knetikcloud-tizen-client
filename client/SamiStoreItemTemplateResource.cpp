
#include "SamiStoreItemTemplateResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiStoreItemTemplateResource::SamiStoreItemTemplateResource() {
    init();
}

SamiStoreItemTemplateResource::~SamiStoreItemTemplateResource() {
    this->cleanup();
}

void
SamiStoreItemTemplateResource::init() {
    pBehaviors = null;
pCreated_date = null;
pId = null;
pName = null;
pProperties = null;
pSku_template = null;
pUpdated_date = null;
}

void
SamiStoreItemTemplateResource::cleanup() {
    if(pBehaviors != null) {
        pBehaviors->RemoveAll(true);
        delete pBehaviors;
        pBehaviors = null;
    }
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
if(pProperties != null) {
        pProperties->RemoveAll(true);
        delete pProperties;
        pProperties = null;
    }
if(pSku_template != null) {
        
        delete pSku_template;
        pSku_template = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiStoreItemTemplateResource*
SamiStoreItemTemplateResource::fromJson(String* json) {
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
SamiStoreItemTemplateResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBehaviorsKey = new JsonString(L"behaviors");
        IJsonValue* pBehaviorsVal = null;
        pJsonObject->GetValue(pBehaviorsKey, pBehaviorsVal);
        if(pBehaviorsVal != null) {
            pBehaviors = new ArrayList();
            
            jsonToValue(pBehaviors, pBehaviorsVal, L"IList", L"SamiItemBehaviorDefinitionResource");
        }
        delete pBehaviorsKey;
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
JsonString* pPropertiesKey = new JsonString(L"properties");
        IJsonValue* pPropertiesVal = null;
        pJsonObject->GetValue(pPropertiesKey, pPropertiesVal);
        if(pPropertiesVal != null) {
            pProperties = new ArrayList();
            
            jsonToValue(pProperties, pPropertiesVal, L"IList", L"SamiPropertyDefinitionResource");
        }
        delete pPropertiesKey;
JsonString* pSku_templateKey = new JsonString(L"sku_template");
        IJsonValue* pSku_templateVal = null;
        pJsonObject->GetValue(pSku_templateKey, pSku_templateVal);
        if(pSku_templateVal != null) {
            
            pSku_template = new SamiTemplateResource();
            jsonToValue(pSku_template, pSku_templateVal, L"SamiTemplateResource", L"SamiTemplateResource");
        }
        delete pSku_templateKey;
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

SamiStoreItemTemplateResource::SamiStoreItemTemplateResource(String* json) {
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
SamiStoreItemTemplateResource::asJson ()
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
SamiStoreItemTemplateResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBehaviorsKey = new JsonString(L"behaviors");
    pJsonObject->Add(pBehaviorsKey, toJson(getPBehaviors(), "SamiItemBehaviorDefinitionResource", "array"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPropertiesKey = new JsonString(L"properties");
    pJsonObject->Add(pPropertiesKey, toJson(getPProperties(), "SamiPropertyDefinitionResource", "array"));

    JsonString *pSku_templateKey = new JsonString(L"sku_template");
    pJsonObject->Add(pSku_templateKey, toJson(getPSkuTemplate(), "SamiTemplateResource", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

IList*
SamiStoreItemTemplateResource::getPBehaviors() {
    return pBehaviors;
}
void
SamiStoreItemTemplateResource::setPBehaviors(IList* pBehaviors) {
    this->pBehaviors = pBehaviors;
}

Long*
SamiStoreItemTemplateResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiStoreItemTemplateResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiStoreItemTemplateResource::getPId() {
    return pId;
}
void
SamiStoreItemTemplateResource::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiStoreItemTemplateResource::getPName() {
    return pName;
}
void
SamiStoreItemTemplateResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiStoreItemTemplateResource::getPProperties() {
    return pProperties;
}
void
SamiStoreItemTemplateResource::setPProperties(IList* pProperties) {
    this->pProperties = pProperties;
}

SamiTemplateResource*
SamiStoreItemTemplateResource::getPSkuTemplate() {
    return pSku_template;
}
void
SamiStoreItemTemplateResource::setPSkuTemplate(SamiTemplateResource* pSku_template) {
    this->pSku_template = pSku_template;
}

Long*
SamiStoreItemTemplateResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiStoreItemTemplateResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

