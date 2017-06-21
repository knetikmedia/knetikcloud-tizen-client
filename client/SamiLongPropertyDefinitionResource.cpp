
#include "SamiLongPropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLongPropertyDefinitionResource::SamiLongPropertyDefinitionResource() {
    init();
}

SamiLongPropertyDefinitionResource::~SamiLongPropertyDefinitionResource() {
    this->cleanup();
}

void
SamiLongPropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pMax = null;
pMin = null;
}

void
SamiLongPropertyDefinitionResource::cleanup() {
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
if(pMax != null) {
        
        delete pMax;
        pMax = null;
    }
if(pMin != null) {
        
        delete pMin;
        pMin = null;
    }
}


SamiLongPropertyDefinitionResource*
SamiLongPropertyDefinitionResource::fromJson(String* json) {
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
SamiLongPropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pMaxKey = new JsonString(L"max");
        IJsonValue* pMaxVal = null;
        pJsonObject->GetValue(pMaxKey, pMaxVal);
        if(pMaxVal != null) {
            
            pMax = new Long();
            jsonToValue(pMax, pMaxVal, L"Long", L"Long");
        }
        delete pMaxKey;
JsonString* pMinKey = new JsonString(L"min");
        IJsonValue* pMinVal = null;
        pJsonObject->GetValue(pMinKey, pMinVal);
        if(pMinVal != null) {
            
            pMin = new Long();
            jsonToValue(pMin, pMinVal, L"Long", L"Long");
        }
        delete pMinKey;
    }
}

SamiLongPropertyDefinitionResource::SamiLongPropertyDefinitionResource(String* json) {
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
SamiLongPropertyDefinitionResource::asJson ()
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
SamiLongPropertyDefinitionResource::asJsonObject() {
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

    JsonString *pMaxKey = new JsonString(L"max");
    pJsonObject->Add(pMaxKey, toJson(getPMax(), "Long", ""));

    JsonString *pMinKey = new JsonString(L"min");
    pJsonObject->Add(pMinKey, toJson(getPMin(), "Long", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiLongPropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiLongPropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiLongPropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiLongPropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiLongPropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiLongPropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiLongPropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiLongPropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

Long*
SamiLongPropertyDefinitionResource::getPMax() {
    return pMax;
}
void
SamiLongPropertyDefinitionResource::setPMax(Long* pMax) {
    this->pMax = pMax;
}

Long*
SamiLongPropertyDefinitionResource::getPMin() {
    return pMin;
}
void
SamiLongPropertyDefinitionResource::setPMin(Long* pMin) {
    this->pMin = pMin;
}



} /* namespace Swagger */

