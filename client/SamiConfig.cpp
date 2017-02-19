
#include "SamiConfig.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConfig::SamiConfig() {
    init();
}

SamiConfig::~SamiConfig() {
    this->cleanup();
}

void
SamiConfig::init() {
    pName = null;
pPublic_read = null;
pValue = null;
}

void
SamiConfig::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPublic_read != null) {
        
        delete pPublic_read;
        pPublic_read = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiConfig*
SamiConfig::fromJson(String* json) {
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
SamiConfig::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPublic_readKey = new JsonString(L"public_read");
        IJsonValue* pPublic_readVal = null;
        pJsonObject->GetValue(pPublic_readKey, pPublic_readVal);
        if(pPublic_readVal != null) {
            
            pPublic_read = new Boolean(false);
            jsonToValue(pPublic_read, pPublic_readVal, L"Boolean", L"Boolean");
        }
        delete pPublic_readKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new String();
            jsonToValue(pValue, pValueVal, L"String", L"String");
        }
        delete pValueKey;
    }
}

SamiConfig::SamiConfig(String* json) {
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
SamiConfig::asJson ()
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
SamiConfig::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPublic_readKey = new JsonString(L"public_read");
    pJsonObject->Add(pPublic_readKey, toJson(getPPublicRead(), "Boolean", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "String", ""));

    return pJsonObject;
}

String*
SamiConfig::getPName() {
    return pName;
}
void
SamiConfig::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiConfig::getPPublicRead() {
    return pPublic_read;
}
void
SamiConfig::setPPublicRead(Boolean* pPublic_read) {
    this->pPublic_read = pPublic_read;
}

String*
SamiConfig::getPValue() {
    return pValue;
}
void
SamiConfig::setPValue(String* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

