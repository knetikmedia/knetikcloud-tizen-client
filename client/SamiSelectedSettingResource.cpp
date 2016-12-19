
#include "SamiSelectedSettingResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSelectedSettingResource::SamiSelectedSettingResource() {
    init();
}

SamiSelectedSettingResource::~SamiSelectedSettingResource() {
    this->cleanup();
}

void
SamiSelectedSettingResource::init() {
    pKey = null;
pKey_name = null;
pValue = null;
pValue_name = null;
}

void
SamiSelectedSettingResource::cleanup() {
    if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
if(pKey_name != null) {
        
        delete pKey_name;
        pKey_name = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
if(pValue_name != null) {
        
        delete pValue_name;
        pValue_name = null;
    }
}


SamiSelectedSettingResource*
SamiSelectedSettingResource::fromJson(String* json) {
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
SamiSelectedSettingResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
JsonString* pKey_nameKey = new JsonString(L"key_name");
        IJsonValue* pKey_nameVal = null;
        pJsonObject->GetValue(pKey_nameKey, pKey_nameVal);
        if(pKey_nameVal != null) {
            
            pKey_name = new String();
            jsonToValue(pKey_name, pKey_nameVal, L"String", L"String");
        }
        delete pKey_nameKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new String();
            jsonToValue(pValue, pValueVal, L"String", L"String");
        }
        delete pValueKey;
JsonString* pValue_nameKey = new JsonString(L"value_name");
        IJsonValue* pValue_nameVal = null;
        pJsonObject->GetValue(pValue_nameKey, pValue_nameVal);
        if(pValue_nameVal != null) {
            
            pValue_name = new String();
            jsonToValue(pValue_name, pValue_nameVal, L"String", L"String");
        }
        delete pValue_nameKey;
    }
}

SamiSelectedSettingResource::SamiSelectedSettingResource(String* json) {
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
SamiSelectedSettingResource::asJson ()
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
SamiSelectedSettingResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    JsonString *pKey_nameKey = new JsonString(L"key_name");
    pJsonObject->Add(pKey_nameKey, toJson(getPKeyName(), "String", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "String", ""));

    JsonString *pValue_nameKey = new JsonString(L"value_name");
    pJsonObject->Add(pValue_nameKey, toJson(getPValueName(), "String", ""));

    return pJsonObject;
}

String*
SamiSelectedSettingResource::getPKey() {
    return pKey;
}
void
SamiSelectedSettingResource::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiSelectedSettingResource::getPKeyName() {
    return pKey_name;
}
void
SamiSelectedSettingResource::setPKeyName(String* pKey_name) {
    this->pKey_name = pKey_name;
}

String*
SamiSelectedSettingResource::getPValue() {
    return pValue;
}
void
SamiSelectedSettingResource::setPValue(String* pValue) {
    this->pValue = pValue;
}

String*
SamiSelectedSettingResource::getPValueName() {
    return pValue_name;
}
void
SamiSelectedSettingResource::setPValueName(String* pValue_name) {
    this->pValue_name = pValue_name;
}



} /* namespace Swagger */

