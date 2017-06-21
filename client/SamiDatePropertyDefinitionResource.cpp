
#include "SamiDatePropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiDatePropertyDefinitionResource::SamiDatePropertyDefinitionResource() {
    init();
}

SamiDatePropertyDefinitionResource::~SamiDatePropertyDefinitionResource() {
    this->cleanup();
}

void
SamiDatePropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pMax = null;
pMin = null;
}

void
SamiDatePropertyDefinitionResource::cleanup() {
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


SamiDatePropertyDefinitionResource*
SamiDatePropertyDefinitionResource::fromJson(String* json) {
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
SamiDatePropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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

SamiDatePropertyDefinitionResource::SamiDatePropertyDefinitionResource(String* json) {
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
SamiDatePropertyDefinitionResource::asJson ()
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
SamiDatePropertyDefinitionResource::asJsonObject() {
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
SamiDatePropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiDatePropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiDatePropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiDatePropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiDatePropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiDatePropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiDatePropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiDatePropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

Long*
SamiDatePropertyDefinitionResource::getPMax() {
    return pMax;
}
void
SamiDatePropertyDefinitionResource::setPMax(Long* pMax) {
    this->pMax = pMax;
}

Long*
SamiDatePropertyDefinitionResource::getPMin() {
    return pMin;
}
void
SamiDatePropertyDefinitionResource::setPMin(Long* pMin) {
    this->pMin = pMin;
}



} /* namespace Swagger */

