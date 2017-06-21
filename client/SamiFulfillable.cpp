
#include "SamiFulfillable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFulfillable::SamiFulfillable() {
    init();
}

SamiFulfillable::~SamiFulfillable() {
    this->cleanup();
}

void
SamiFulfillable::init() {
    pDescription = null;
pType_hint = null;
pType_name = null;
}

void
SamiFulfillable::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pType_name != null) {
        
        delete pType_name;
        pType_name = null;
    }
}


SamiFulfillable*
SamiFulfillable::fromJson(String* json) {
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
SamiFulfillable::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pType_nameKey = new JsonString(L"type_name");
        IJsonValue* pType_nameVal = null;
        pJsonObject->GetValue(pType_nameKey, pType_nameVal);
        if(pType_nameVal != null) {
            
            pType_name = new String();
            jsonToValue(pType_name, pType_nameVal, L"String", L"String");
        }
        delete pType_nameKey;
    }
}

SamiFulfillable::SamiFulfillable(String* json) {
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
SamiFulfillable::asJson ()
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
SamiFulfillable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pType_nameKey = new JsonString(L"type_name");
    pJsonObject->Add(pType_nameKey, toJson(getPTypeName(), "String", ""));

    return pJsonObject;
}

String*
SamiFulfillable::getPDescription() {
    return pDescription;
}
void
SamiFulfillable::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiFulfillable::getPTypeHint() {
    return pType_hint;
}
void
SamiFulfillable::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

String*
SamiFulfillable::getPTypeName() {
    return pType_name;
}
void
SamiFulfillable::setPTypeName(String* pType_name) {
    this->pType_name = pType_name;
}



} /* namespace Swagger */

