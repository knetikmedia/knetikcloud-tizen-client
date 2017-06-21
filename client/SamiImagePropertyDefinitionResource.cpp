
#include "SamiImagePropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiImagePropertyDefinitionResource::SamiImagePropertyDefinitionResource() {
    init();
}

SamiImagePropertyDefinitionResource::~SamiImagePropertyDefinitionResource() {
    this->cleanup();
}

void
SamiImagePropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pFile_type = null;
pMax_height = null;
pMax_width = null;
pMin_height = null;
pMin_width = null;
}

void
SamiImagePropertyDefinitionResource::cleanup() {
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
if(pFile_type != null) {
        
        delete pFile_type;
        pFile_type = null;
    }
if(pMax_height != null) {
        
        delete pMax_height;
        pMax_height = null;
    }
if(pMax_width != null) {
        
        delete pMax_width;
        pMax_width = null;
    }
if(pMin_height != null) {
        
        delete pMin_height;
        pMin_height = null;
    }
if(pMin_width != null) {
        
        delete pMin_width;
        pMin_width = null;
    }
}


SamiImagePropertyDefinitionResource*
SamiImagePropertyDefinitionResource::fromJson(String* json) {
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
SamiImagePropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pFile_typeKey = new JsonString(L"file_type");
        IJsonValue* pFile_typeVal = null;
        pJsonObject->GetValue(pFile_typeKey, pFile_typeVal);
        if(pFile_typeVal != null) {
            
            pFile_type = new String();
            jsonToValue(pFile_type, pFile_typeVal, L"String", L"String");
        }
        delete pFile_typeKey;
JsonString* pMax_heightKey = new JsonString(L"max_height");
        IJsonValue* pMax_heightVal = null;
        pJsonObject->GetValue(pMax_heightKey, pMax_heightVal);
        if(pMax_heightVal != null) {
            
            pMax_height = new Integer();
            jsonToValue(pMax_height, pMax_heightVal, L"Integer", L"Integer");
        }
        delete pMax_heightKey;
JsonString* pMax_widthKey = new JsonString(L"max_width");
        IJsonValue* pMax_widthVal = null;
        pJsonObject->GetValue(pMax_widthKey, pMax_widthVal);
        if(pMax_widthVal != null) {
            
            pMax_width = new Integer();
            jsonToValue(pMax_width, pMax_widthVal, L"Integer", L"Integer");
        }
        delete pMax_widthKey;
JsonString* pMin_heightKey = new JsonString(L"min_height");
        IJsonValue* pMin_heightVal = null;
        pJsonObject->GetValue(pMin_heightKey, pMin_heightVal);
        if(pMin_heightVal != null) {
            
            pMin_height = new Integer();
            jsonToValue(pMin_height, pMin_heightVal, L"Integer", L"Integer");
        }
        delete pMin_heightKey;
JsonString* pMin_widthKey = new JsonString(L"min_width");
        IJsonValue* pMin_widthVal = null;
        pJsonObject->GetValue(pMin_widthKey, pMin_widthVal);
        if(pMin_widthVal != null) {
            
            pMin_width = new Integer();
            jsonToValue(pMin_width, pMin_widthVal, L"Integer", L"Integer");
        }
        delete pMin_widthKey;
    }
}

SamiImagePropertyDefinitionResource::SamiImagePropertyDefinitionResource(String* json) {
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
SamiImagePropertyDefinitionResource::asJson ()
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
SamiImagePropertyDefinitionResource::asJsonObject() {
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

    JsonString *pFile_typeKey = new JsonString(L"file_type");
    pJsonObject->Add(pFile_typeKey, toJson(getPFileType(), "String", ""));

    JsonString *pMax_heightKey = new JsonString(L"max_height");
    pJsonObject->Add(pMax_heightKey, toJson(getPMaxHeight(), "Integer", ""));

    JsonString *pMax_widthKey = new JsonString(L"max_width");
    pJsonObject->Add(pMax_widthKey, toJson(getPMaxWidth(), "Integer", ""));

    JsonString *pMin_heightKey = new JsonString(L"min_height");
    pJsonObject->Add(pMin_heightKey, toJson(getPMinHeight(), "Integer", ""));

    JsonString *pMin_widthKey = new JsonString(L"min_width");
    pJsonObject->Add(pMin_widthKey, toJson(getPMinWidth(), "Integer", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiImagePropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiImagePropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiImagePropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiImagePropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiImagePropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiImagePropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiImagePropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiImagePropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiImagePropertyDefinitionResource::getPFileType() {
    return pFile_type;
}
void
SamiImagePropertyDefinitionResource::setPFileType(String* pFile_type) {
    this->pFile_type = pFile_type;
}

Integer*
SamiImagePropertyDefinitionResource::getPMaxHeight() {
    return pMax_height;
}
void
SamiImagePropertyDefinitionResource::setPMaxHeight(Integer* pMax_height) {
    this->pMax_height = pMax_height;
}

Integer*
SamiImagePropertyDefinitionResource::getPMaxWidth() {
    return pMax_width;
}
void
SamiImagePropertyDefinitionResource::setPMaxWidth(Integer* pMax_width) {
    this->pMax_width = pMax_width;
}

Integer*
SamiImagePropertyDefinitionResource::getPMinHeight() {
    return pMin_height;
}
void
SamiImagePropertyDefinitionResource::setPMinHeight(Integer* pMin_height) {
    this->pMin_height = pMin_height;
}

Integer*
SamiImagePropertyDefinitionResource::getPMinWidth() {
    return pMin_width;
}
void
SamiImagePropertyDefinitionResource::setPMinWidth(Integer* pMin_width) {
    this->pMin_width = pMin_width;
}



} /* namespace Swagger */

