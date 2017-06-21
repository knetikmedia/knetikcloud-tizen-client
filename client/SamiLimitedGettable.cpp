
#include "SamiLimitedGettable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLimitedGettable::SamiLimitedGettable() {
    init();
}

SamiLimitedGettable::~SamiLimitedGettable() {
    this->cleanup();
}

void
SamiLimitedGettable::init() {
    pDescription = null;
pType_hint = null;
pGroup = null;
}

void
SamiLimitedGettable::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pGroup != null) {
        
        delete pGroup;
        pGroup = null;
    }
}


SamiLimitedGettable*
SamiLimitedGettable::fromJson(String* json) {
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
SamiLimitedGettable::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pGroupKey = new JsonString(L"group");
        IJsonValue* pGroupVal = null;
        pJsonObject->GetValue(pGroupKey, pGroupVal);
        if(pGroupVal != null) {
            
            pGroup = new SamiLimitedGettableGroup();
            jsonToValue(pGroup, pGroupVal, L"SamiLimitedGettableGroup", L"SamiLimitedGettableGroup");
        }
        delete pGroupKey;
    }
}

SamiLimitedGettable::SamiLimitedGettable(String* json) {
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
SamiLimitedGettable::asJson ()
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
SamiLimitedGettable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pGroupKey = new JsonString(L"group");
    pJsonObject->Add(pGroupKey, toJson(getPGroup(), "SamiLimitedGettableGroup", ""));

    return pJsonObject;
}

String*
SamiLimitedGettable::getPDescription() {
    return pDescription;
}
void
SamiLimitedGettable::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiLimitedGettable::getPTypeHint() {
    return pType_hint;
}
void
SamiLimitedGettable::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

SamiLimitedGettableGroup*
SamiLimitedGettable::getPGroup() {
    return pGroup;
}
void
SamiLimitedGettable::setPGroup(SamiLimitedGettableGroup* pGroup) {
    this->pGroup = pGroup;
}



} /* namespace Swagger */

