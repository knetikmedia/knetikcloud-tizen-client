
#include "SamiLookupTypeResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLookupTypeResource::SamiLookupTypeResource() {
    init();
}

SamiLookupTypeResource::~SamiLookupTypeResource() {
    this->cleanup();
}

void
SamiLookupTypeResource::init() {
    pDescription = null;
pKey_type = null;
pName = null;
pValue_type = null;
}

void
SamiLookupTypeResource::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pKey_type != null) {
        
        delete pKey_type;
        pKey_type = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pValue_type != null) {
        
        delete pValue_type;
        pValue_type = null;
    }
}


SamiLookupTypeResource*
SamiLookupTypeResource::fromJson(String* json) {
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
SamiLookupTypeResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pKey_typeKey = new JsonString(L"key_type");
        IJsonValue* pKey_typeVal = null;
        pJsonObject->GetValue(pKey_typeKey, pKey_typeVal);
        if(pKey_typeVal != null) {
            
            pKey_type = new String();
            jsonToValue(pKey_type, pKey_typeVal, L"String", L"String");
        }
        delete pKey_typeKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
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

SamiLookupTypeResource::SamiLookupTypeResource(String* json) {
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
SamiLookupTypeResource::asJson ()
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
SamiLookupTypeResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pKey_typeKey = new JsonString(L"key_type");
    pJsonObject->Add(pKey_typeKey, toJson(getPKeyType(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pValue_typeKey = new JsonString(L"value_type");
    pJsonObject->Add(pValue_typeKey, toJson(getPValueType(), "String", ""));

    return pJsonObject;
}

String*
SamiLookupTypeResource::getPDescription() {
    return pDescription;
}
void
SamiLookupTypeResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiLookupTypeResource::getPKeyType() {
    return pKey_type;
}
void
SamiLookupTypeResource::setPKeyType(String* pKey_type) {
    this->pKey_type = pKey_type;
}

String*
SamiLookupTypeResource::getPName() {
    return pName;
}
void
SamiLookupTypeResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiLookupTypeResource::getPValueType() {
    return pValue_type;
}
void
SamiLookupTypeResource::setPValueType(String* pValue_type) {
    this->pValue_type = pValue_type;
}



} /* namespace Swagger */

