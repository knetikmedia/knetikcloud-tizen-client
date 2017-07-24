
#include "SamiBehaviorDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBehaviorDefinitionResource::SamiBehaviorDefinitionResource() {
    init();
}

SamiBehaviorDefinitionResource::~SamiBehaviorDefinitionResource() {
    this->cleanup();
}

void
SamiBehaviorDefinitionResource::init() {
    pDescription = null;
pPrerequisite_behaviors = null;
pProperties = null;
pType_hint = null;
}

void
SamiBehaviorDefinitionResource::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pPrerequisite_behaviors != null) {
        pPrerequisite_behaviors->RemoveAll(true);
        delete pPrerequisite_behaviors;
        pPrerequisite_behaviors = null;
    }
if(pProperties != null) {
        pProperties->RemoveAll(true);
        delete pProperties;
        pProperties = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
}


SamiBehaviorDefinitionResource*
SamiBehaviorDefinitionResource::fromJson(String* json) {
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
SamiBehaviorDefinitionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pPrerequisite_behaviorsKey = new JsonString(L"prerequisite_behaviors");
        IJsonValue* pPrerequisite_behaviorsVal = null;
        pJsonObject->GetValue(pPrerequisite_behaviorsKey, pPrerequisite_behaviorsVal);
        if(pPrerequisite_behaviorsVal != null) {
            pPrerequisite_behaviors = new ArrayList();
            
            jsonToValue(pPrerequisite_behaviors, pPrerequisite_behaviorsVal, L"IList", L"SamiBehavior");
        }
        delete pPrerequisite_behaviorsKey;
JsonString* pPropertiesKey = new JsonString(L"properties");
        IJsonValue* pPropertiesVal = null;
        pJsonObject->GetValue(pPropertiesKey, pPropertiesVal);
        if(pPropertiesVal != null) {
            pProperties = new ArrayList();
            
            jsonToValue(pProperties, pPropertiesVal, L"IList", L"SamiPropertyFieldResource");
        }
        delete pPropertiesKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
    }
}

SamiBehaviorDefinitionResource::SamiBehaviorDefinitionResource(String* json) {
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
SamiBehaviorDefinitionResource::asJson ()
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
SamiBehaviorDefinitionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pPrerequisite_behaviorsKey = new JsonString(L"prerequisite_behaviors");
    pJsonObject->Add(pPrerequisite_behaviorsKey, toJson(getPPrerequisiteBehaviors(), "SamiBehavior", "array"));

    JsonString *pPropertiesKey = new JsonString(L"properties");
    pJsonObject->Add(pPropertiesKey, toJson(getPProperties(), "SamiPropertyFieldResource", "array"));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    return pJsonObject;
}

String*
SamiBehaviorDefinitionResource::getPDescription() {
    return pDescription;
}
void
SamiBehaviorDefinitionResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

IList*
SamiBehaviorDefinitionResource::getPPrerequisiteBehaviors() {
    return pPrerequisite_behaviors;
}
void
SamiBehaviorDefinitionResource::setPPrerequisiteBehaviors(IList* pPrerequisite_behaviors) {
    this->pPrerequisite_behaviors = pPrerequisite_behaviors;
}

IList*
SamiBehaviorDefinitionResource::getPProperties() {
    return pProperties;
}
void
SamiBehaviorDefinitionResource::setPProperties(IList* pProperties) {
    this->pProperties = pProperties;
}

String*
SamiBehaviorDefinitionResource::getPTypeHint() {
    return pType_hint;
}
void
SamiBehaviorDefinitionResource::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}



} /* namespace Swagger */

