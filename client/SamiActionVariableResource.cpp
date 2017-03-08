
#include "SamiActionVariableResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActionVariableResource::SamiActionVariableResource() {
    init();
}

SamiActionVariableResource::~SamiActionVariableResource() {
    this->cleanup();
}

void
SamiActionVariableResource::init() {
    pName = null;
pOptional = null;
pType = null;
}

void
SamiActionVariableResource::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOptional != null) {
        
        delete pOptional;
        pOptional = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiActionVariableResource*
SamiActionVariableResource::fromJson(String* json) {
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
SamiActionVariableResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pOptionalKey = new JsonString(L"optional");
        IJsonValue* pOptionalVal = null;
        pJsonObject->GetValue(pOptionalKey, pOptionalVal);
        if(pOptionalVal != null) {
            
            pOptional = new Boolean(false);
            jsonToValue(pOptional, pOptionalVal, L"Boolean", L"Boolean");
        }
        delete pOptionalKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
    }
}

SamiActionVariableResource::SamiActionVariableResource(String* json) {
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
SamiActionVariableResource::asJson ()
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
SamiActionVariableResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOptionalKey = new JsonString(L"optional");
    pJsonObject->Add(pOptionalKey, toJson(getPOptional(), "Boolean", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

String*
SamiActionVariableResource::getPName() {
    return pName;
}
void
SamiActionVariableResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiActionVariableResource::getPOptional() {
    return pOptional;
}
void
SamiActionVariableResource::setPOptional(Boolean* pOptional) {
    this->pOptional = pOptional;
}

String*
SamiActionVariableResource::getPType() {
    return pType;
}
void
SamiActionVariableResource::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

