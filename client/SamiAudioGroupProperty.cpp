
#include "SamiAudioGroupProperty.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAudioGroupProperty::SamiAudioGroupProperty() {
    init();
}

SamiAudioGroupProperty::~SamiAudioGroupProperty() {
    this->cleanup();
}

void
SamiAudioGroupProperty::init() {
    pType = null;
pFiles = null;
}

void
SamiAudioGroupProperty::cleanup() {
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


SamiAudioGroupProperty*
SamiAudioGroupProperty::fromJson(String* json) {
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
SamiAudioGroupProperty::fromJsonObject(IJsonValue* pJson) {
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

SamiAudioGroupProperty::SamiAudioGroupProperty(String* json) {
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
SamiAudioGroupProperty::asJson ()
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
SamiAudioGroupProperty::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pFilesKey = new JsonString(L"files");
    pJsonObject->Add(pFilesKey, toJson(getPFiles(), "SamiFileProperty", "array"));

    return pJsonObject;
}

String*
SamiAudioGroupProperty::getPType() {
    return pType;
}
void
SamiAudioGroupProperty::setPType(String* pType) {
    this->pType = pType;
}

IList*
SamiAudioGroupProperty::getPFiles() {
    return pFiles;
}
void
SamiAudioGroupProperty::setPFiles(IList* pFiles) {
    this->pFiles = pFiles;
}



} /* namespace Swagger */

