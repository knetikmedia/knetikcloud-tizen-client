
#include "SamiImportJobOutputResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiImportJobOutputResource::SamiImportJobOutputResource() {
    init();
}

SamiImportJobOutputResource::~SamiImportJobOutputResource() {
    this->cleanup();
}

void
SamiImportJobOutputResource::init() {
    pDescription = null;
pLine_number = null;
}

void
SamiImportJobOutputResource::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pLine_number != null) {
        
        delete pLine_number;
        pLine_number = null;
    }
}


SamiImportJobOutputResource*
SamiImportJobOutputResource::fromJson(String* json) {
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
SamiImportJobOutputResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pLine_numberKey = new JsonString(L"line_number");
        IJsonValue* pLine_numberVal = null;
        pJsonObject->GetValue(pLine_numberKey, pLine_numberVal);
        if(pLine_numberVal != null) {
            
            pLine_number = new Long();
            jsonToValue(pLine_number, pLine_numberVal, L"Long", L"Long");
        }
        delete pLine_numberKey;
    }
}

SamiImportJobOutputResource::SamiImportJobOutputResource(String* json) {
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
SamiImportJobOutputResource::asJson ()
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
SamiImportJobOutputResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pLine_numberKey = new JsonString(L"line_number");
    pJsonObject->Add(pLine_numberKey, toJson(getPLineNumber(), "Long", ""));

    return pJsonObject;
}

String*
SamiImportJobOutputResource::getPDescription() {
    return pDescription;
}
void
SamiImportJobOutputResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Long*
SamiImportJobOutputResource::getPLineNumber() {
    return pLine_number;
}
void
SamiImportJobOutputResource::setPLineNumber(Long* pLine_number) {
    this->pLine_number = pLine_number;
}



} /* namespace Swagger */

