
#include "SamiAudioPropertyDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAudioPropertyDefinitionResource::SamiAudioPropertyDefinitionResource() {
    init();
}

SamiAudioPropertyDefinitionResource::~SamiAudioPropertyDefinitionResource() {
    this->cleanup();
}

void
SamiAudioPropertyDefinitionResource::init() {
    pField_list = null;
pName = null;
pRequired = null;
pType = null;
pFile_type = null;
pMax_length = null;
pMin_length = null;
}

void
SamiAudioPropertyDefinitionResource::cleanup() {
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
if(pMax_length != null) {
        
        delete pMax_length;
        pMax_length = null;
    }
if(pMin_length != null) {
        
        delete pMin_length;
        pMin_length = null;
    }
}


SamiAudioPropertyDefinitionResource*
SamiAudioPropertyDefinitionResource::fromJson(String* json) {
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
SamiAudioPropertyDefinitionResource::fromJsonObject(IJsonValue* pJson) {
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

SamiAudioPropertyDefinitionResource::SamiAudioPropertyDefinitionResource(String* json) {
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
SamiAudioPropertyDefinitionResource::asJson ()
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
SamiAudioPropertyDefinitionResource::asJsonObject() {
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

    JsonString *pMax_lengthKey = new JsonString(L"max_length");
    pJsonObject->Add(pMax_lengthKey, toJson(getPMaxLength(), "Integer", ""));

    JsonString *pMin_lengthKey = new JsonString(L"min_length");
    pJsonObject->Add(pMin_lengthKey, toJson(getPMinLength(), "Integer", ""));

    return pJsonObject;
}

SamiPropertyFieldListResource*
SamiAudioPropertyDefinitionResource::getPFieldList() {
    return pField_list;
}
void
SamiAudioPropertyDefinitionResource::setPFieldList(SamiPropertyFieldListResource* pField_list) {
    this->pField_list = pField_list;
}

String*
SamiAudioPropertyDefinitionResource::getPName() {
    return pName;
}
void
SamiAudioPropertyDefinitionResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiAudioPropertyDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiAudioPropertyDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiAudioPropertyDefinitionResource::getPType() {
    return pType;
}
void
SamiAudioPropertyDefinitionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiAudioPropertyDefinitionResource::getPFileType() {
    return pFile_type;
}
void
SamiAudioPropertyDefinitionResource::setPFileType(String* pFile_type) {
    this->pFile_type = pFile_type;
}

Integer*
SamiAudioPropertyDefinitionResource::getPMaxLength() {
    return pMax_length;
}
void
SamiAudioPropertyDefinitionResource::setPMaxLength(Integer* pMax_length) {
    this->pMax_length = pMax_length;
}

Integer*
SamiAudioPropertyDefinitionResource::getPMinLength() {
    return pMin_length;
}
void
SamiAudioPropertyDefinitionResource::setPMinLength(Integer* pMin_length) {
    this->pMin_length = pMin_length;
}



} /* namespace Swagger */

