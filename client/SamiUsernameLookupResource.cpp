
#include "SamiUsernameLookupResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUsernameLookupResource::SamiUsernameLookupResource() {
    init();
}

SamiUsernameLookupResource::~SamiUsernameLookupResource() {
    this->cleanup();
}

void
SamiUsernameLookupResource::init() {
    pLookup_key = null;
pType = null;
pValue_type = null;
}

void
SamiUsernameLookupResource::cleanup() {
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


SamiUsernameLookupResource*
SamiUsernameLookupResource::fromJson(String* json) {
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
SamiUsernameLookupResource::fromJsonObject(IJsonValue* pJson) {
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

SamiUsernameLookupResource::SamiUsernameLookupResource(String* json) {
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
SamiUsernameLookupResource::asJson ()
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
SamiUsernameLookupResource::asJsonObject() {
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
SamiUsernameLookupResource::getPLookupKey() {
    return pLookup_key;
}
void
SamiUsernameLookupResource::setPLookupKey(SamiExpressionResource* pLookup_key) {
    this->pLookup_key = pLookup_key;
}

String*
SamiUsernameLookupResource::getPType() {
    return pType;
}
void
SamiUsernameLookupResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiUsernameLookupResource::getPValueType() {
    return pValue_type;
}
void
SamiUsernameLookupResource::setPValueType(String* pValue_type) {
    this->pValue_type = pValue_type;
}



} /* namespace Swagger */

