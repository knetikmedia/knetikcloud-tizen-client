
#include "SamiParameterResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiParameterResource::SamiParameterResource() {
    init();
}

SamiParameterResource::~SamiParameterResource() {
    this->cleanup();
}

void
SamiParameterResource::init() {
    pOf = null;
pType = null;
pValue = null;
}

void
SamiParameterResource::cleanup() {
    if(pOf != null) {
        
        delete pOf;
        pOf = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiParameterResource*
SamiParameterResource::fromJson(String* json) {
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
SamiParameterResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pOfKey = new JsonString(L"of");
        IJsonValue* pOfVal = null;
        pJsonObject->GetValue(pOfKey, pOfVal);
        if(pOfVal != null) {
            
            pOf = new String();
            jsonToValue(pOf, pOfVal, L"String", L"String");
        }
        delete pOfKey;
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
    }
}

SamiParameterResource::SamiParameterResource(String* json) {
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
SamiParameterResource::asJson ()
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
SamiParameterResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pOfKey = new JsonString(L"of");
    pJsonObject->Add(pOfKey, toJson(getPOf(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "SamiObject", ""));

    return pJsonObject;
}

String*
SamiParameterResource::getPOf() {
    return pOf;
}
void
SamiParameterResource::setPOf(String* pOf) {
    this->pOf = pOf;
}

String*
SamiParameterResource::getPType() {
    return pType;
}
void
SamiParameterResource::setPType(String* pType) {
    this->pType = pType;
}

SamiObject*
SamiParameterResource::getPValue() {
    return pValue;
}
void
SamiParameterResource::setPValue(SamiObject* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

