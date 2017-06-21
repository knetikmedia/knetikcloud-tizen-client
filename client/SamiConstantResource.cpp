
#include "SamiConstantResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConstantResource::SamiConstantResource() {
    init();
}

SamiConstantResource::~SamiConstantResource() {
    this->cleanup();
}

void
SamiConstantResource::init() {
    pType = null;
pValue = null;
pValue_type = null;
}

void
SamiConstantResource::cleanup() {
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
if(pValue_type != null) {
        
        delete pValue_type;
        pValue_type = null;
    }
}


SamiConstantResource*
SamiConstantResource::fromJson(String* json) {
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
SamiConstantResource::fromJsonObject(IJsonValue* pJson) {
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
            
            pValue = null;
            jsonToValue(pValue, pValueVal, L"SamiObject", L"SamiObject");
        }
        delete pValueKey;
JsonString* pValue_typeKey = new JsonString(L"value_type");
        IJsonValue* pValue_typeVal = null;
        pJsonObject->GetValue(pValue_typeKey, pValue_typeVal);
        if(pValue_typeVal != null) {
            
            pValue_type = new String();
            jsonToValue(pValue_type, pValue_typeVal, L"String", L"String");
        }
        delete pValue_typeKey;
    }
}

SamiConstantResource::SamiConstantResource(String* json) {
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
SamiConstantResource::asJson ()
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
SamiConstantResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "SamiObject", ""));

    JsonString *pValue_typeKey = new JsonString(L"value_type");
    pJsonObject->Add(pValue_typeKey, toJson(getPValueType(), "String", ""));

    return pJsonObject;
}

String*
SamiConstantResource::getPType() {
    return pType;
}
void
SamiConstantResource::setPType(String* pType) {
    this->pType = pType;
}

SamiObject*
SamiConstantResource::getPValue() {
    return pValue;
}
void
SamiConstantResource::setPValue(SamiObject* pValue) {
    this->pValue = pValue;
}

String*
SamiConstantResource::getPValueType() {
    return pValue_type;
}
void
SamiConstantResource::setPValueType(String* pValue_type) {
    this->pValue_type = pValue_type;
}



} /* namespace Swagger */

