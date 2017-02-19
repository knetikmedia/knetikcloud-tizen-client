
#include "SamiQuestionTemplateResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQuestionTemplateResource::SamiQuestionTemplateResource() {
    init();
}

SamiQuestionTemplateResource::~SamiQuestionTemplateResource() {
    this->cleanup();
}

void
SamiQuestionTemplateResource::init() {
    pAnswer_property = null;
pCreated_date = null;
pId = null;
pName = null;
pProperties = null;
pQuestion_property = null;
pUpdated_date = null;
}

void
SamiQuestionTemplateResource::cleanup() {
    if(pAnswer_property != null) {
        
        delete pAnswer_property;
        pAnswer_property = null;
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
if(pQuestion_property != null) {
        
        delete pQuestion_property;
        pQuestion_property = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiQuestionTemplateResource*
SamiQuestionTemplateResource::fromJson(String* json) {
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
SamiQuestionTemplateResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAnswer_propertyKey = new JsonString(L"answer_property");
        IJsonValue* pAnswer_propertyVal = null;
        pJsonObject->GetValue(pAnswer_propertyKey, pAnswer_propertyVal);
        if(pAnswer_propertyVal != null) {
            
            pAnswer_property = new SamiPropertyDefinitionResource();
            jsonToValue(pAnswer_property, pAnswer_propertyVal, L"SamiPropertyDefinitionResource", L"SamiPropertyDefinitionResource");
        }
        delete pAnswer_propertyKey;
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
JsonString* pQuestion_propertyKey = new JsonString(L"question_property");
        IJsonValue* pQuestion_propertyVal = null;
        pJsonObject->GetValue(pQuestion_propertyKey, pQuestion_propertyVal);
        if(pQuestion_propertyVal != null) {
            
            pQuestion_property = new SamiPropertyDefinitionResource();
            jsonToValue(pQuestion_property, pQuestion_propertyVal, L"SamiPropertyDefinitionResource", L"SamiPropertyDefinitionResource");
        }
        delete pQuestion_propertyKey;
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

SamiQuestionTemplateResource::SamiQuestionTemplateResource(String* json) {
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
SamiQuestionTemplateResource::asJson ()
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
SamiQuestionTemplateResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAnswer_propertyKey = new JsonString(L"answer_property");
    pJsonObject->Add(pAnswer_propertyKey, toJson(getPAnswerProperty(), "SamiPropertyDefinitionResource", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPropertiesKey = new JsonString(L"properties");
    pJsonObject->Add(pPropertiesKey, toJson(getPProperties(), "SamiPropertyDefinitionResource", "array"));

    JsonString *pQuestion_propertyKey = new JsonString(L"question_property");
    pJsonObject->Add(pQuestion_propertyKey, toJson(getPQuestionProperty(), "SamiPropertyDefinitionResource", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

SamiPropertyDefinitionResource*
SamiQuestionTemplateResource::getPAnswerProperty() {
    return pAnswer_property;
}
void
SamiQuestionTemplateResource::setPAnswerProperty(SamiPropertyDefinitionResource* pAnswer_property) {
    this->pAnswer_property = pAnswer_property;
}

Long*
SamiQuestionTemplateResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiQuestionTemplateResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiQuestionTemplateResource::getPId() {
    return pId;
}
void
SamiQuestionTemplateResource::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiQuestionTemplateResource::getPName() {
    return pName;
}
void
SamiQuestionTemplateResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiQuestionTemplateResource::getPProperties() {
    return pProperties;
}
void
SamiQuestionTemplateResource::setPProperties(IList* pProperties) {
    this->pProperties = pProperties;
}

SamiPropertyDefinitionResource*
SamiQuestionTemplateResource::getPQuestionProperty() {
    return pQuestion_property;
}
void
SamiQuestionTemplateResource::setPQuestionProperty(SamiPropertyDefinitionResource* pQuestion_property) {
    this->pQuestion_property = pQuestion_property;
}

Long*
SamiQuestionTemplateResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiQuestionTemplateResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

