
#include "SamiIntegerProperty.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiIntegerProperty::SamiIntegerProperty() {
    init();
}

SamiIntegerProperty::~SamiIntegerProperty() {
    this->cleanup();
}

void
SamiIntegerProperty::init() {
    pType = null;
pValue = null;
}

void
SamiIntegerProperty::cleanup() {
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiIntegerProperty*
SamiIntegerProperty::fromJson(String* json) {
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
SamiIntegerProperty::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Integer();
            jsonToValue(pValue, pValueVal, L"Integer", L"Integer");
        }
        delete pValueKey;
    }
}

SamiIntegerProperty::SamiIntegerProperty(String* json) {
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
SamiIntegerProperty::asJson ()
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
SamiIntegerProperty::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Integer", ""));

    return pJsonObject;
}

String*
SamiIntegerProperty::getPType() {
    return pType;
}
void
SamiIntegerProperty::setPType(String* pType) {
    this->pType = pType;
}

Integer*
SamiIntegerProperty::getPValue() {
    return pValue;
}
void
SamiIntegerProperty::setPValue(Integer* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

