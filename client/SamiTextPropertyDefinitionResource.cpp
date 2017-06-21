
#include "SamiTextPropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTextPropertyDefinitionResource::SamiTextPropertyDefinitionResource() {
    init();
}

SamiTextPropertyDefinitionResource::~SamiTextPropertyDefinitionResource() {
    this->cleanup();
}

void
SamiTextPropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pMax_length = null;
}

void
SamiTextPropertyDefinitionResource::cleanup() {
    if(pField_list != null) {
        
        delete pField_list;
        pField_list = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRequired != null) {
        
        delete pRequired;
        pRequired = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pMax_length != null) {
        
        delete pMax_length;
        pMax_length = null;
    }
}


SamiTextPropertyDefinitionResource*
SamiTextPropertyDefinitionResource::fromJson(String* json) {
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
SamiTextPropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pField_listKey = new JsonString(L"field_list");
        IJsonValue* pField_listVal = null;
        pJsonObject->GetValue(pField_listKey, pField_listVal);
        if(pField_listVal != null) {
            
            pField_list = new SamiPropertyFieldListResource();
            jsonToValue(pField_list, pField_listVal, L"SamiPropertyFieldListResource", L"SamiPropertyFieldListResource");
        }
        delete pField_listKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRequiredKey = new JsonString(L"required");
        IJsonValue* pRequiredVal = null;
        pJsonObject->GetValue(pRequiredKey, pRequiredVal);
        if(pRequiredVal != null) {
            
            pRequired = new Boolean(false);
            jsonToValue(pRequired, pRequiredVal, L"Boolean", L"Boolean");
        }
        delete pRequiredKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pMax_lengthKey = new JsonString(L"max_length");
        IJsonValue* pMax_lengthVal = null;
        pJsonObject->GetValue(pMax_lengthKey, pMax_lengthVal);
        if(pMax_lengthVal != null) {
            
            pMax_length = new Integer();
            jsonToValue(pMax_length, pMax_lengthVal, L"Integer", L"Integer");
        }
        delete pMax_lengthKey;
    }
}

SamiTextPropertyDefinitionResource::SamiTextPropertyDefinitionResource(String* json) {
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
SamiTextPropertyDefinitionResource::asJson ()
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
SamiTextPropertyDefinitionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pField_listKey = new JsonString(L"field_list");
    pJsonObject->Add(pField_listKey, toJson(getPFieldList(), "SamiPropertyFieldListResource", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRequiredKey = new JsonString(L"required");
    pJsonObject->Add(pRequiredKey, toJson(getPRequired(), "Boolean", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pMax_lengthKey = new JsonString(L"max_length");
    pJsonObject->Add(pMax_lengthKey, toJson(getPMaxLength(), "Integer", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiTextPropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiTextPropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiTextPropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiTextPropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiTextPropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiTextPropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiTextPropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiTextPropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

Integer*
SamiTextPropertyDefinitionResource::getPMaxLength() {
    return pMax_length;
}
void
SamiTextPropertyDefinitionResource::setPMaxLength(Integer* pMax_length) {
    this->pMax_length = pMax_length;
}



} /* namespace Swagger */

