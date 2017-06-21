
#include "SamiPreReqEntitlement.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPreReqEntitlement::SamiPreReqEntitlement() {
    init();
}

SamiPreReqEntitlement::~SamiPreReqEntitlement() {
    this->cleanup();
}

void
SamiPreReqEntitlement::init() {
    pDescription = null;
pType_hint = null;
pItem_ids = null;
}

void
SamiPreReqEntitlement::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pItem_ids != null) {
        pItem_ids->RemoveAll(true);
        delete pItem_ids;
        pItem_ids = null;
    }
}


SamiPreReqEntitlement*
SamiPreReqEntitlement::fromJson(String* json) {
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
SamiPreReqEntitlement::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pItem_idsKey = new JsonString(L"item_ids");
        IJsonValue* pItem_idsVal = null;
        pJsonObject->GetValue(pItem_idsKey, pItem_idsVal);
        if(pItem_idsVal != null) {
            pItem_ids = new ArrayList();
            
            jsonToValue(pItem_ids, pItem_idsVal, L"IList", L"Integer");
        }
        delete pItem_idsKey;
    }
}

SamiPreReqEntitlement::SamiPreReqEntitlement(String* json) {
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
SamiPreReqEntitlement::asJson ()
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
SamiPreReqEntitlement::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pItem_idsKey = new JsonString(L"item_ids");
    pJsonObject->Add(pItem_idsKey, toJson(getPItemIds(), "Integer", "array"));

    return pJsonObject;
}

String*
SamiPreReqEntitlement::getPDescription() {
    return pDescription;
}
void
SamiPreReqEntitlement::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiPreReqEntitlement::getPTypeHint() {
    return pType_hint;
}
void
SamiPreReqEntitlement::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

IList*
SamiPreReqEntitlement::getPItemIds() {
    return pItem_ids;
}
void
SamiPreReqEntitlement::setPItemIds(IList* pItem_ids) {
    this->pItem_ids = pItem_ids;
}



} /* namespace Swagger */

