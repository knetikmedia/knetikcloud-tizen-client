
#include "SamiVideoGroupPropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideoGroupPropertyDefinitionResource::SamiVideoGroupPropertyDefinitionResource() {
    init();
}

SamiVideoGroupPropertyDefinitionResource::~SamiVideoGroupPropertyDefinitionResource() {
    this->cleanup();
}

void
SamiVideoGroupPropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pFile_type = null;
pMax_count = null;
pMax_file_size = null;
pMin_count = null;
pMax_height = null;
pMax_length = null;
pMax_width = null;
pMin_height = null;
pMin_length = null;
pMin_width = null;
}

void
SamiVideoGroupPropertyDefinitionResource::cleanup() {
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
if(pMax_height != null) {
        
        delete pMax_height;
        pMax_height = null;
    }
if(pMax_length != null) {
        
        delete pMax_length;
        pMax_length = null;
    }
if(pMax_width != null) {
        
        delete pMax_width;
        pMax_width = null;
    }
if(pMin_height != null) {
        
        delete pMin_height;
        pMin_height = null;
    }
if(pMin_length != null) {
        
        delete pMin_length;
        pMin_length = null;
    }
if(pMin_width != null) {
        
        delete pMin_width;
        pMin_width = null;
    }
}


SamiVideoGroupPropertyDefinitionResource*
SamiVideoGroupPropertyDefinitionResource::fromJson(String* json) {
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
SamiVideoGroupPropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pMax_heightKey = new JsonString(L"max_height");
        IJsonValue* pMax_heightVal = null;
        pJsonObject->GetValue(pMax_heightKey, pMax_heightVal);
        if(pMax_heightVal != null) {
            
            pMax_height = new Integer();
            jsonToValue(pMax_height, pMax_heightVal, L"Integer", L"Integer");
        }
        delete pMax_heightKey;
JsonString* pMax_lengthKey = new JsonString(L"max_length");
        IJsonValue* pMax_lengthVal = null;
        pJsonObject->GetValue(pMax_lengthKey, pMax_lengthVal);
        if(pMax_lengthVal != null) {
            
            pMax_length = new Integer();
            jsonToValue(pMax_length, pMax_lengthVal, L"Integer", L"Integer");
        }
        delete pMax_lengthKey;
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
JsonString* pMin_lengthKey = new JsonString(L"min_length");
        IJsonValue* pMin_lengthVal = null;
        pJsonObject->GetValue(pMin_lengthKey, pMin_lengthVal);
        if(pMin_lengthVal != null) {
            
            pMin_length = new Integer();
            jsonToValue(pMin_length, pMin_lengthVal, L"Integer", L"Integer");
        }
        delete pMin_lengthKey;
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

SamiVideoGroupPropertyDefinitionResource::SamiVideoGroupPropertyDefinitionResource(String* json) {
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
SamiVideoGroupPropertyDefinitionResource::asJson ()
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
SamiVideoGroupPropertyDefinitionResource::asJsonObject() {
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

    JsonString *pMax_heightKey = new JsonString(L"max_height");
    pJsonObject->Add(pMax_heightKey, toJson(getPMaxHeight(), "Integer", ""));

    JsonString *pMax_lengthKey = new JsonString(L"max_length");
    pJsonObject->Add(pMax_lengthKey, toJson(getPMaxLength(), "Integer", ""));

    JsonString *pMax_widthKey = new JsonString(L"max_width");
    pJsonObject->Add(pMax_widthKey, toJson(getPMaxWidth(), "Integer", ""));

    JsonString *pMin_heightKey = new JsonString(L"min_height");
    pJsonObject->Add(pMin_heightKey, toJson(getPMinHeight(), "Integer", ""));

    JsonString *pMin_lengthKey = new JsonString(L"min_length");
    pJsonObject->Add(pMin_lengthKey, toJson(getPMinLength(), "Integer", ""));

    JsonString *pMin_widthKey = new JsonString(L"min_width");
    pJsonObject->Add(pMin_widthKey, toJson(getPMinWidth(), "Integer", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiVideoGroupPropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiVideoGroupPropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiVideoGroupPropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiVideoGroupPropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiVideoGroupPropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiVideoGroupPropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiVideoGroupPropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiVideoGroupPropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiVideoGroupPropertyDefinitionResource::getPFileType() {
    return pFile_type;
}
void
SamiVideoGroupPropertyDefinitionResource::setPFileType(String* pFile_type) {
    this->pFile_type = pFile_type;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMaxCount() {
    return pMax_count;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMaxCount(Integer* pMax_count) {
    this->pMax_count = pMax_count;
}

Long*
SamiVideoGroupPropertyDefinitionResource::getPMaxFileSize() {
    return pMax_file_size;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMaxFileSize(Long* pMax_file_size) {
    this->pMax_file_size = pMax_file_size;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMinCount() {
    return pMin_count;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMinCount(Integer* pMin_count) {
    this->pMin_count = pMin_count;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMaxHeight() {
    return pMax_height;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMaxHeight(Integer* pMax_height) {
    this->pMax_height = pMax_height;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMaxLength() {
    return pMax_length;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMaxLength(Integer* pMax_length) {
    this->pMax_length = pMax_length;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMaxWidth() {
    return pMax_width;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMaxWidth(Integer* pMax_width) {
    this->pMax_width = pMax_width;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMinHeight() {
    return pMin_height;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMinHeight(Integer* pMin_height) {
    this->pMin_height = pMin_height;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMinLength() {
    return pMin_length;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMinLength(Integer* pMin_length) {
    this->pMin_length = pMin_length;
}

Integer*
SamiVideoGroupPropertyDefinitionResource::getPMinWidth() {
    return pMin_width;
}
void
SamiVideoGroupPropertyDefinitionResource::setPMinWidth(Integer* pMin_width) {
    this->pMin_width = pMin_width;
}



} /* namespace Swagger */

