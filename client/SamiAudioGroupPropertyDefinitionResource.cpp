
#include "SamiAudioGroupPropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAudioGroupPropertyDefinitionResource::SamiAudioGroupPropertyDefinitionResource() {
    init();
}

SamiAudioGroupPropertyDefinitionResource::~SamiAudioGroupPropertyDefinitionResource() {
    this->cleanup();
}

void
SamiAudioGroupPropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pFile_type = null;
pMax_count = null;
pMax_file_size = null;
pMin_count = null;
pMax_length = null;
pMin_length = null;
}

void
SamiAudioGroupPropertyDefinitionResource::cleanup() {
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
if(pMax_length != null) {
        
        delete pMax_length;
        pMax_length = null;
    }
if(pMin_length != null) {
        
        delete pMin_length;
        pMin_length = null;
    }
}


SamiAudioGroupPropertyDefinitionResource*
SamiAudioGroupPropertyDefinitionResource::fromJson(String* json) {
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
SamiAudioGroupPropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pMax_lengthKey = new JsonString(L"max_length");
        IJsonValue* pMax_lengthVal = null;
        pJsonObject->GetValue(pMax_lengthKey, pMax_lengthVal);
        if(pMax_lengthVal != null) {
            
            pMax_length = new Integer();
            jsonToValue(pMax_length, pMax_lengthVal, L"Integer", L"Integer");
        }
        delete pMax_lengthKey;
JsonString* pMin_lengthKey = new JsonString(L"min_length");
        IJsonValue* pMin_lengthVal = null;
        pJsonObject->GetValue(pMin_lengthKey, pMin_lengthVal);
        if(pMin_lengthVal != null) {
            
            pMin_length = new Integer();
            jsonToValue(pMin_length, pMin_lengthVal, L"Integer", L"Integer");
        }
        delete pMin_lengthKey;
    }
}

SamiAudioGroupPropertyDefinitionResource::SamiAudioGroupPropertyDefinitionResource(String* json) {
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
SamiAudioGroupPropertyDefinitionResource::asJson ()
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
SamiAudioGroupPropertyDefinitionResource::asJsonObject() {
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

    JsonString *pMax_lengthKey = new JsonString(L"max_length");
    pJsonObject->Add(pMax_lengthKey, toJson(getPMaxLength(), "Integer", ""));

    JsonString *pMin_lengthKey = new JsonString(L"min_length");
    pJsonObject->Add(pMin_lengthKey, toJson(getPMinLength(), "Integer", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiAudioGroupPropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiAudioGroupPropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiAudioGroupPropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiAudioGroupPropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiAudioGroupPropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiAudioGroupPropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiAudioGroupPropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiAudioGroupPropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiAudioGroupPropertyDefinitionResource::getPFileType() {
    return pFile_type;
}
void
SamiAudioGroupPropertyDefinitionResource::setPFileType(String* pFile_type) {
    this->pFile_type = pFile_type;
}

Integer*
SamiAudioGroupPropertyDefinitionResource::getPMaxCount() {
    return pMax_count;
}
void
SamiAudioGroupPropertyDefinitionResource::setPMaxCount(Integer* pMax_count) {
    this->pMax_count = pMax_count;
}

Long*
SamiAudioGroupPropertyDefinitionResource::getPMaxFileSize() {
    return pMax_file_size;
}
void
SamiAudioGroupPropertyDefinitionResource::setPMaxFileSize(Long* pMax_file_size) {
    this->pMax_file_size = pMax_file_size;
}

Integer*
SamiAudioGroupPropertyDefinitionResource::getPMinCount() {
    return pMin_count;
}
void
SamiAudioGroupPropertyDefinitionResource::setPMinCount(Integer* pMin_count) {
    this->pMin_count = pMin_count;
}

Integer*
SamiAudioGroupPropertyDefinitionResource::getPMaxLength() {
    return pMax_length;
}
void
SamiAudioGroupPropertyDefinitionResource::setPMaxLength(Integer* pMax_length) {
    this->pMax_length = pMax_length;
}

Integer*
SamiAudioGroupPropertyDefinitionResource::getPMinLength() {
    return pMin_length;
}
void
SamiAudioGroupPropertyDefinitionResource::setPMinLength(Integer* pMin_length) {
    this->pMin_length = pMin_length;
}



} /* namespace Swagger */

