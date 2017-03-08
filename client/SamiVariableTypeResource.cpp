
#include "SamiVariableTypeResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVariableTypeResource::SamiVariableTypeResource() {
    init();
}

SamiVariableTypeResource::~SamiVariableTypeResource() {
    this->cleanup();
}

void
SamiVariableTypeResource::init() {
    pBase = null;
pName = null;
}

void
SamiVariableTypeResource::cleanup() {
    if(pBase != null) {
        
        delete pBase;
        pBase = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
}


SamiVariableTypeResource*
SamiVariableTypeResource::fromJson(String* json) {
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
SamiVariableTypeResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBaseKey = new JsonString(L"base");
        IJsonValue* pBaseVal = null;
        pJsonObject->GetValue(pBaseKey, pBaseVal);
        if(pBaseVal != null) {
            
            pBase = new String();
            jsonToValue(pBase, pBaseVal, L"String", L"String");
        }
        delete pBaseKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
    }
}

SamiVariableTypeResource::SamiVariableTypeResource(String* json) {
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
SamiVariableTypeResource::asJson ()
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
SamiVariableTypeResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBaseKey = new JsonString(L"base");
    pJsonObject->Add(pBaseKey, toJson(getPBase(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    return pJsonObject;
}

String*
SamiVariableTypeResource::getPBase() {
    return pBase;
}
void
SamiVariableTypeResource::setPBase(String* pBase) {
    this->pBase = pBase;
}

String*
SamiVariableTypeResource::getPName() {
    return pName;
}
void
SamiVariableTypeResource::setPName(String* pName) {
    this->pName = pName;
}



} /* namespace Swagger */

