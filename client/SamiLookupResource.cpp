
#include "SamiLookupResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLookupResource::SamiLookupResource() {
    init();
}

SamiLookupResource::~SamiLookupResource() {
    this->cleanup();
}

void
SamiLookupResource::init() {
    pLookup_key = null;
pType = null;
pValue_type = null;
}

void
SamiLookupResource::cleanup() {
    if(pLookup_key != null) {
        
        delete pLookup_key;
        pLookup_key = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pValue_type != null) {
        
        delete pValue_type;
        pValue_type = null;
    }
}


SamiLookupResource*
SamiLookupResource::fromJson(String* json) {
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
SamiLookupResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pLookup_keyKey = new JsonString(L"lookup_key");
        IJsonValue* pLookup_keyVal = null;
        pJsonObject->GetValue(pLookup_keyKey, pLookup_keyVal);
        if(pLookup_keyVal != null) {
            
            pLookup_key = new SamiExpressionResource();
            jsonToValue(pLookup_key, pLookup_keyVal, L"SamiExpressionResource", L"SamiExpressionResource");
        }
        delete pLookup_keyKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
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

SamiLookupResource::SamiLookupResource(String* json) {
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
SamiLookupResource::asJson ()
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
SamiLookupResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pLookup_keyKey = new JsonString(L"lookup_key");
    pJsonObject->Add(pLookup_keyKey, toJson(getPLookupKey(), "SamiExpressionResource", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pValue_typeKey = new JsonString(L"value_type");
    pJsonObject->Add(pValue_typeKey, toJson(getPValueType(), "String", ""));

    return pJsonObject;
}

SamiExpressionResource*
SamiLookupResource::getPLookupKey() {
    return pLookup_key;
}
void
SamiLookupResource::setPLookupKey(SamiExpressionResource* pLookup_key) {
    this->pLookup_key = pLookup_key;
}

String*
SamiLookupResource::getPType() {
    return pType;
}
void
SamiLookupResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiLookupResource::getPValueType() {
    return pValue_type;
}
void
SamiLookupResource::setPValueType(String* pValue_type) {
    this->pValue_type = pValue_type;
}



} /* namespace Swagger */

