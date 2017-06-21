
#include "SamiVideoGroupProperty.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideoGroupProperty::SamiVideoGroupProperty() {
    init();
}

SamiVideoGroupProperty::~SamiVideoGroupProperty() {
    this->cleanup();
}

void
SamiVideoGroupProperty::init() {
    pType = null;
pFiles = null;
}

void
SamiVideoGroupProperty::cleanup() {
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pFiles != null) {
        pFiles->RemoveAll(true);
        delete pFiles;
        pFiles = null;
    }
}


SamiVideoGroupProperty*
SamiVideoGroupProperty::fromJson(String* json) {
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
SamiVideoGroupProperty::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pFilesKey = new JsonString(L"files");
        IJsonValue* pFilesVal = null;
        pJsonObject->GetValue(pFilesKey, pFilesVal);
        if(pFilesVal != null) {
            pFiles = new ArrayList();
            
            jsonToValue(pFiles, pFilesVal, L"IList", L"SamiFileProperty");
        }
        delete pFilesKey;
    }
}

SamiVideoGroupProperty::SamiVideoGroupProperty(String* json) {
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
SamiVideoGroupProperty::asJson ()
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
SamiVideoGroupProperty::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pFilesKey = new JsonString(L"files");
    pJsonObject->Add(pFilesKey, toJson(getPFiles(), "SamiFileProperty", "array"));

    return pJsonObject;
}

String*
SamiVideoGroupProperty::getPType() {
    return pType;
}
void
SamiVideoGroupProperty::setPType(String* pType) {
    this->pType = pType;
}

IList*
SamiVideoGroupProperty::getPFiles() {
    return pFiles;
}
void
SamiVideoGroupProperty::setPFiles(IList* pFiles) {
    this->pFiles = pFiles;
}



} /* namespace Swagger */

