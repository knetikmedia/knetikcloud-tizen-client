
#include "SamiFileGroupPropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFileGroupPropertyDefinitionResource::SamiFileGroupPropertyDefinitionResource() {
    init();
}

SamiFileGroupPropertyDefinitionResource::~SamiFileGroupPropertyDefinitionResource() {
    this->cleanup();
}

void
SamiFileGroupPropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pFile_type = null;
pMax_count = null;
pMax_file_size = null;
pMin_count = null;
}

void
SamiFileGroupPropertyDefinitionResource::cleanup() {
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
if(pMax_count != null) {
        
        delete pMax_count;
        pMax_count = null;
    }
if(pMax_file_size != null) {
        
        delete pMax_file_size;
        pMax_file_size = null;
    }
if(pMin_count != null) {
        
        delete pMin_count;
        pMin_count = null;
    }
}


SamiFileGroupPropertyDefinitionResource*
SamiFileGroupPropertyDefinitionResource::fromJson(String* json) {
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
SamiFileGroupPropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pMax_countKey = new JsonString(L"max_count");
        IJsonValue* pMax_countVal = null;
        pJsonObject->GetValue(pMax_countKey, pMax_countVal);
        if(pMax_countVal != null) {
            
            pMax_count = new Integer();
            jsonToValue(pMax_count, pMax_countVal, L"Integer", L"Integer");
        }
        delete pMax_countKey;
JsonString* pMax_file_sizeKey = new JsonString(L"max_file_size");
        IJsonValue* pMax_file_sizeVal = null;
        pJsonObject->GetValue(pMax_file_sizeKey, pMax_file_sizeVal);
        if(pMax_file_sizeVal != null) {
            
            pMax_file_size = new Long();
            jsonToValue(pMax_file_size, pMax_file_sizeVal, L"Long", L"Long");
        }
        delete pMax_file_sizeKey;
JsonString* pMin_countKey = new JsonString(L"min_count");
        IJsonValue* pMin_countVal = null;
        pJsonObject->GetValue(pMin_countKey, pMin_countVal);
        if(pMin_countVal != null) {
            
            pMin_count = new Integer();
            jsonToValue(pMin_count, pMin_countVal, L"Integer", L"Integer");
        }
        delete pMin_countKey;
    }
}

SamiFileGroupPropertyDefinitionResource::SamiFileGroupPropertyDefinitionResource(String* json) {
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
SamiFileGroupPropertyDefinitionResource::asJson ()
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
SamiFileGroupPropertyDefinitionResource::asJsonObject() {
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

    JsonString *pMax_countKey = new JsonString(L"max_count");
    pJsonObject->Add(pMax_countKey, toJson(getPMaxCount(), "Integer", ""));

    JsonString *pMax_file_sizeKey = new JsonString(L"max_file_size");
    pJsonObject->Add(pMax_file_sizeKey, toJson(getPMaxFileSize(), "Long", ""));

    JsonString *pMin_countKey = new JsonString(L"min_count");
    pJsonObject->Add(pMin_countKey, toJson(getPMinCount(), "Integer", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiFileGroupPropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiFileGroupPropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiFileGroupPropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiFileGroupPropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiFileGroupPropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiFileGroupPropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiFileGroupPropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiFileGroupPropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiFileGroupPropertyDefinitionResource::getPFileType() {
    return pFile_type;
}
void
SamiFileGroupPropertyDefinitionResource::setPFileType(String* pFile_type) {
    this->pFile_type = pFile_type;
}

Integer*
SamiFileGroupPropertyDefinitionResource::getPMaxCount() {
    return pMax_count;
}
void
SamiFileGroupPropertyDefinitionResource::setPMaxCount(Integer* pMax_count) {
    this->pMax_count = pMax_count;
}

Long*
SamiFileGroupPropertyDefinitionResource::getPMaxFileSize() {
    return pMax_file_size;
}
void
SamiFileGroupPropertyDefinitionResource::setPMaxFileSize(Long* pMax_file_size) {
    this->pMax_file_size = pMax_file_size;
}

Integer*
SamiFileGroupPropertyDefinitionResource::getPMinCount() {
    return pMin_count;
}
void
SamiFileGroupPropertyDefinitionResource::setPMinCount(Integer* pMin_count) {
    this->pMin_count = pMin_count;
}



} /* namespace Swagger */

