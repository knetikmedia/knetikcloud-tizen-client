
#include "SamiGlobalCheckAndIncrementResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGlobalCheckAndIncrementResource::SamiGlobalCheckAndIncrementResource() {
    init();
}

SamiGlobalCheckAndIncrementResource::~SamiGlobalCheckAndIncrementResource() {
    this->cleanup();
}

void
SamiGlobalCheckAndIncrementResource::init() {
    pCheck_value_resource = null;
pGlobal_resource = null;
pType = null;
}

void
SamiGlobalCheckAndIncrementResource::cleanup() {
    if(pCheck_value_resource != null) {
        
        delete pCheck_value_resource;
        pCheck_value_resource = null;
    }
if(pGlobal_resource != null) {
        
        delete pGlobal_resource;
        pGlobal_resource = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiGlobalCheckAndIncrementResource*
SamiGlobalCheckAndIncrementResource::fromJson(String* json) {
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
SamiGlobalCheckAndIncrementResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCheck_value_resourceKey = new JsonString(L"check_value_resource");
        IJsonValue* pCheck_value_resourceVal = null;
        pJsonObject->GetValue(pCheck_value_resourceKey, pCheck_value_resourceVal);
        if(pCheck_value_resourceVal != null) {
            
            pCheck_value_resource = new SamiExpressionResource();
            jsonToValue(pCheck_value_resource, pCheck_value_resourceVal, L"SamiExpressionResource", L"SamiExpressionResource");
        }
        delete pCheck_value_resourceKey;
JsonString* pGlobal_resourceKey = new JsonString(L"global_resource");
        IJsonValue* pGlobal_resourceVal = null;
        pJsonObject->GetValue(pGlobal_resourceKey, pGlobal_resourceVal);
        if(pGlobal_resourceVal != null) {
            
            pGlobal_resource = new SamiExpressionResource();
            jsonToValue(pGlobal_resource, pGlobal_resourceVal, L"SamiExpressionResource", L"SamiExpressionResource");
        }
        delete pGlobal_resourceKey;
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

SamiGlobalCheckAndIncrementResource::SamiGlobalCheckAndIncrementResource(String* json) {
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
SamiGlobalCheckAndIncrementResource::asJson ()
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
SamiGlobalCheckAndIncrementResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCheck_value_resourceKey = new JsonString(L"check_value_resource");
    pJsonObject->Add(pCheck_value_resourceKey, toJson(getPCheckValueResource(), "SamiExpressionResource", ""));

    JsonString *pGlobal_resourceKey = new JsonString(L"global_resource");
    pJsonObject->Add(pGlobal_resourceKey, toJson(getPGlobalResource(), "SamiExpressionResource", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

SamiExpressionResource*
SamiGlobalCheckAndIncrementResource::getPCheckValueResource() {
    return pCheck_value_resource;
}
void
SamiGlobalCheckAndIncrementResource::setPCheckValueResource(SamiExpressionResource* pCheck_value_resource) {
    this->pCheck_value_resource = pCheck_value_resource;
}

SamiExpressionResource*
SamiGlobalCheckAndIncrementResource::getPGlobalResource() {
    return pGlobal_resource;
}
void
SamiGlobalCheckAndIncrementResource::setPGlobalResource(SamiExpressionResource* pGlobal_resource) {
    this->pGlobal_resource = pGlobal_resource;
}

String*
SamiGlobalCheckAndIncrementResource::getPType() {
    return pType;
}
void
SamiGlobalCheckAndIncrementResource::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

