
#include "SamiAvailableSettingResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAvailableSettingResource::SamiAvailableSettingResource() {
    init();
}

SamiAvailableSettingResource::~SamiAvailableSettingResource() {
    this->cleanup();
}

void
SamiAvailableSettingResource::init() {
    pAdvanced_option = null;
pDefault_value = null;
pDescription = null;
pKey = null;
pName = null;
pOptions = null;
}

void
SamiAvailableSettingResource::cleanup() {
    if(pAdvanced_option != null) {
        
        delete pAdvanced_option;
        pAdvanced_option = null;
    }
if(pDefault_value != null) {
        
        delete pDefault_value;
        pDefault_value = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOptions != null) {
        pOptions->RemoveAll(true);
        delete pOptions;
        pOptions = null;
    }
}


SamiAvailableSettingResource*
SamiAvailableSettingResource::fromJson(String* json) {
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
SamiAvailableSettingResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdvanced_optionKey = new JsonString(L"advanced_option");
        IJsonValue* pAdvanced_optionVal = null;
        pJsonObject->GetValue(pAdvanced_optionKey, pAdvanced_optionVal);
        if(pAdvanced_optionVal != null) {
            
            pAdvanced_option = new Boolean(false);
            jsonToValue(pAdvanced_option, pAdvanced_optionVal, L"Boolean", L"Boolean");
        }
        delete pAdvanced_optionKey;
JsonString* pDefault_valueKey = new JsonString(L"default_value");
        IJsonValue* pDefault_valueVal = null;
        pJsonObject->GetValue(pDefault_valueKey, pDefault_valueVal);
        if(pDefault_valueVal != null) {
            
            pDefault_value = new String();
            jsonToValue(pDefault_value, pDefault_valueVal, L"String", L"String");
        }
        delete pDefault_valueKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pOptionsKey = new JsonString(L"options");
        IJsonValue* pOptionsVal = null;
        pJsonObject->GetValue(pOptionsKey, pOptionsVal);
        if(pOptionsVal != null) {
            pOptions = new ArrayList();
            
            jsonToValue(pOptions, pOptionsVal, L"IList", L"SamiSettingOption");
        }
        delete pOptionsKey;
    }
}

SamiAvailableSettingResource::SamiAvailableSettingResource(String* json) {
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
SamiAvailableSettingResource::asJson ()
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
SamiAvailableSettingResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdvanced_optionKey = new JsonString(L"advanced_option");
    pJsonObject->Add(pAdvanced_optionKey, toJson(getPAdvancedOption(), "Boolean", ""));

    JsonString *pDefault_valueKey = new JsonString(L"default_value");
    pJsonObject->Add(pDefault_valueKey, toJson(getPDefaultValue(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOptionsKey = new JsonString(L"options");
    pJsonObject->Add(pOptionsKey, toJson(getPOptions(), "SamiSettingOption", "array"));

    return pJsonObject;
}

Boolean*
SamiAvailableSettingResource::getPAdvancedOption() {
    return pAdvanced_option;
}
void
SamiAvailableSettingResource::setPAdvancedOption(Boolean* pAdvanced_option) {
    this->pAdvanced_option = pAdvanced_option;
}

String*
SamiAvailableSettingResource::getPDefaultValue() {
    return pDefault_value;
}
void
SamiAvailableSettingResource::setPDefaultValue(String* pDefault_value) {
    this->pDefault_value = pDefault_value;
}

String*
SamiAvailableSettingResource::getPDescription() {
    return pDescription;
}
void
SamiAvailableSettingResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiAvailableSettingResource::getPKey() {
    return pKey;
}
void
SamiAvailableSettingResource::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiAvailableSettingResource::getPName() {
    return pName;
}
void
SamiAvailableSettingResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiAvailableSettingResource::getPOptions() {
    return pOptions;
}
void
SamiAvailableSettingResource::setPOptions(IList* pOptions) {
    this->pOptions = pOptions;
}



} /* namespace Swagger */

