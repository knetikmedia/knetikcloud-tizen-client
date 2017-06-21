
#include "SamiFileProperty.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFileProperty::SamiFileProperty() {
    init();
}

SamiFileProperty::~SamiFileProperty() {
    this->cleanup();
}

void
SamiFileProperty::init() {
    pType = null;
pCrc = null;
pDescription = null;
pFile_type = null;
pUrl = null;
}

void
SamiFileProperty::cleanup() {
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pCrc != null) {
        
        delete pCrc;
        pCrc = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pFile_type != null) {
        
        delete pFile_type;
        pFile_type = null;
    }
if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
}


SamiFileProperty*
SamiFileProperty::fromJson(String* json) {
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
SamiFileProperty::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pCrcKey = new JsonString(L"crc");
        IJsonValue* pCrcVal = null;
        pJsonObject->GetValue(pCrcKey, pCrcVal);
        if(pCrcVal != null) {
            
            pCrc = new String();
            jsonToValue(pCrc, pCrcVal, L"String", L"String");
        }
        delete pCrcKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pFile_typeKey = new JsonString(L"file_type");
        IJsonValue* pFile_typeVal = null;
        pJsonObject->GetValue(pFile_typeKey, pFile_typeVal);
        if(pFile_typeVal != null) {
            
            pFile_type = new String();
            jsonToValue(pFile_type, pFile_typeVal, L"String", L"String");
        }
        delete pFile_typeKey;
JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
    }
}

SamiFileProperty::SamiFileProperty(String* json) {
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
SamiFileProperty::asJson ()
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
SamiFileProperty::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pCrcKey = new JsonString(L"crc");
    pJsonObject->Add(pCrcKey, toJson(getPCrc(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pFile_typeKey = new JsonString(L"file_type");
    pJsonObject->Add(pFile_typeKey, toJson(getPFileType(), "String", ""));

    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    return pJsonObject;
}

String*
SamiFileProperty::getPType() {
    return pType;
}
void
SamiFileProperty::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiFileProperty::getPCrc() {
    return pCrc;
}
void
SamiFileProperty::setPCrc(String* pCrc) {
    this->pCrc = pCrc;
}

String*
SamiFileProperty::getPDescription() {
    return pDescription;
}
void
SamiFileProperty::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiFileProperty::getPFileType() {
    return pFile_type;
}
void
SamiFileProperty::setPFileType(String* pFile_type) {
    this->pFile_type = pFile_type;
}

String*
SamiFileProperty::getPUrl() {
    return pUrl;
}
void
SamiFileProperty::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}



} /* namespace Swagger */

