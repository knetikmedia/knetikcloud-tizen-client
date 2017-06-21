
#include "SamiThe definition of an activity parameters: ex: difficulty level.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiThe definition of an activity parameters: ex: difficulty level::SamiThe definition of an activity parameters: ex: difficulty level() {
    init();
}

SamiThe definition of an activity parameters: ex: difficulty level::~SamiThe definition of an activity parameters: ex: difficulty level() {
    this->cleanup();
}

void
SamiThe definition of an activity parameters: ex: difficulty level::init() {
    pAdvanced_option = null;
pDefault_value = null;
pDescription = null;
pKey = null;
pName = null;
pOptions = null;
}

void
SamiThe definition of an activity parameters: ex: difficulty level::cleanup() {
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


SamiThe definition of an activity parameters: ex: difficulty level*
SamiThe definition of an activity parameters: ex: difficulty level::fromJson(String* json) {
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
SamiThe definition of an activity parameters: ex: difficulty level::fromJsonObject(IJsonValue* pJson) {
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

SamiThe definition of an activity parameters: ex: difficulty level::SamiThe definition of an activity parameters: ex: difficulty level(String* json) {
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
SamiThe definition of an activity parameters: ex: difficulty level::asJson ()
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
SamiThe definition of an activity parameters: ex: difficulty level::asJsonObject() {
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
SamiThe definition of an activity parameters: ex: difficulty level::getPAdvancedOption() {
    return pAdvanced_option;
}
void
SamiThe definition of an activity parameters: ex: difficulty level::setPAdvancedOption(Boolean* pAdvanced_option) {
    this->pAdvanced_option = pAdvanced_option;
}

String*
SamiThe definition of an activity parameters: ex: difficulty level::getPDefaultValue() {
    return pDefault_value;
}
void
SamiThe definition of an activity parameters: ex: difficulty level::setPDefaultValue(String* pDefault_value) {
    this->pDefault_value = pDefault_value;
}

String*
SamiThe definition of an activity parameters: ex: difficulty level::getPDescription() {
    return pDescription;
}
void
SamiThe definition of an activity parameters: ex: difficulty level::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiThe definition of an activity parameters: ex: difficulty level::getPKey() {
    return pKey;
}
void
SamiThe definition of an activity parameters: ex: difficulty level::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiThe definition of an activity parameters: ex: difficulty level::getPName() {
    return pName;
}
void
SamiThe definition of an activity parameters: ex: difficulty level::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiThe definition of an activity parameters: ex: difficulty level::getPOptions() {
    return pOptions;
}
void
SamiThe definition of an activity parameters: ex: difficulty level::setPOptions(IList* pOptions) {
    this->pOptions = pOptions;
}



} /* namespace Swagger */

