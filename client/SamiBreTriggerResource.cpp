
#include "SamiBreTriggerResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBreTriggerResource::SamiBreTriggerResource() {
    init();
}

SamiBreTriggerResource::~SamiBreTriggerResource() {
    this->cleanup();
}

void
SamiBreTriggerResource::init() {
    pCategory = null;
pEvent_name = null;
pParameters = null;
pSystem_trigger = null;
pTags = null;
pTrigger_description = null;
pTrigger_name = null;
}

void
SamiBreTriggerResource::cleanup() {
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pEvent_name != null) {
        
        delete pEvent_name;
        pEvent_name = null;
    }
if(pParameters != null) {
        pParameters->RemoveAll(true);
        delete pParameters;
        pParameters = null;
    }
if(pSystem_trigger != null) {
        
        delete pSystem_trigger;
        pSystem_trigger = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pTrigger_description != null) {
        
        delete pTrigger_description;
        pTrigger_description = null;
    }
if(pTrigger_name != null) {
        
        delete pTrigger_name;
        pTrigger_name = null;
    }
}


SamiBreTriggerResource*
SamiBreTriggerResource::fromJson(String* json) {
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
SamiBreTriggerResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
JsonString* pEvent_nameKey = new JsonString(L"event_name");
        IJsonValue* pEvent_nameVal = null;
        pJsonObject->GetValue(pEvent_nameKey, pEvent_nameVal);
        if(pEvent_nameVal != null) {
            
            pEvent_name = new String();
            jsonToValue(pEvent_name, pEvent_nameVal, L"String", L"String");
        }
        delete pEvent_nameKey;
JsonString* pParametersKey = new JsonString(L"parameters");
        IJsonValue* pParametersVal = null;
        pJsonObject->GetValue(pParametersKey, pParametersVal);
        if(pParametersVal != null) {
            pParameters = new ArrayList();
            
            jsonToValue(pParameters, pParametersVal, L"IList", L"SamiBreTriggerParameterDefinition");
        }
        delete pParametersKey;
JsonString* pSystem_triggerKey = new JsonString(L"system_trigger");
        IJsonValue* pSystem_triggerVal = null;
        pJsonObject->GetValue(pSystem_triggerKey, pSystem_triggerVal);
        if(pSystem_triggerVal != null) {
            
            pSystem_trigger = new Boolean(false);
            jsonToValue(pSystem_trigger, pSystem_triggerVal, L"Boolean", L"Boolean");
        }
        delete pSystem_triggerKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pTrigger_descriptionKey = new JsonString(L"trigger_description");
        IJsonValue* pTrigger_descriptionVal = null;
        pJsonObject->GetValue(pTrigger_descriptionKey, pTrigger_descriptionVal);
        if(pTrigger_descriptionVal != null) {
            
            pTrigger_description = new String();
            jsonToValue(pTrigger_description, pTrigger_descriptionVal, L"String", L"String");
        }
        delete pTrigger_descriptionKey;
JsonString* pTrigger_nameKey = new JsonString(L"trigger_name");
        IJsonValue* pTrigger_nameVal = null;
        pJsonObject->GetValue(pTrigger_nameKey, pTrigger_nameVal);
        if(pTrigger_nameVal != null) {
            
            pTrigger_name = new String();
            jsonToValue(pTrigger_name, pTrigger_nameVal, L"String", L"String");
        }
        delete pTrigger_nameKey;
    }
}

SamiBreTriggerResource::SamiBreTriggerResource(String* json) {
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
SamiBreTriggerResource::asJson ()
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
SamiBreTriggerResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    JsonString *pEvent_nameKey = new JsonString(L"event_name");
    pJsonObject->Add(pEvent_nameKey, toJson(getPEventName(), "String", ""));

    JsonString *pParametersKey = new JsonString(L"parameters");
    pJsonObject->Add(pParametersKey, toJson(getPParameters(), "SamiBreTriggerParameterDefinition", "array"));

    JsonString *pSystem_triggerKey = new JsonString(L"system_trigger");
    pJsonObject->Add(pSystem_triggerKey, toJson(getPSystemTrigger(), "Boolean", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTrigger_descriptionKey = new JsonString(L"trigger_description");
    pJsonObject->Add(pTrigger_descriptionKey, toJson(getPTriggerDescription(), "String", ""));

    JsonString *pTrigger_nameKey = new JsonString(L"trigger_name");
    pJsonObject->Add(pTrigger_nameKey, toJson(getPTriggerName(), "String", ""));

    return pJsonObject;
}

String*
SamiBreTriggerResource::getPCategory() {
    return pCategory;
}
void
SamiBreTriggerResource::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

String*
SamiBreTriggerResource::getPEventName() {
    return pEvent_name;
}
void
SamiBreTriggerResource::setPEventName(String* pEvent_name) {
    this->pEvent_name = pEvent_name;
}

IList*
SamiBreTriggerResource::getPParameters() {
    return pParameters;
}
void
SamiBreTriggerResource::setPParameters(IList* pParameters) {
    this->pParameters = pParameters;
}

Boolean*
SamiBreTriggerResource::getPSystemTrigger() {
    return pSystem_trigger;
}
void
SamiBreTriggerResource::setPSystemTrigger(Boolean* pSystem_trigger) {
    this->pSystem_trigger = pSystem_trigger;
}

IList*
SamiBreTriggerResource::getPTags() {
    return pTags;
}
void
SamiBreTriggerResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiBreTriggerResource::getPTriggerDescription() {
    return pTrigger_description;
}
void
SamiBreTriggerResource::setPTriggerDescription(String* pTrigger_description) {
    this->pTrigger_description = pTrigger_description;
}

String*
SamiBreTriggerResource::getPTriggerName() {
    return pTrigger_name;
}
void
SamiBreTriggerResource::setPTriggerName(String* pTrigger_name) {
    this->pTrigger_name = pTrigger_name;
}



} /* namespace Swagger */

