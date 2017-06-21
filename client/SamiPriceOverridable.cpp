
#include "SamiPriceOverridable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPriceOverridable::SamiPriceOverridable() {
    init();
}

SamiPriceOverridable::~SamiPriceOverridable() {
    this->cleanup();
}

void
SamiPriceOverridable::init() {
    pDescription = null;
pType_hint = null;
pMax_price = null;
pMin_price = null;
}

void
SamiPriceOverridable::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pMax_price != null) {
        
        delete pMax_price;
        pMax_price = null;
    }
if(pMin_price != null) {
        
        delete pMin_price;
        pMin_price = null;
    }
}


SamiPriceOverridable*
SamiPriceOverridable::fromJson(String* json) {
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
SamiPriceOverridable::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pMax_priceKey = new JsonString(L"max_price");
        IJsonValue* pMax_priceVal = null;
        pJsonObject->GetValue(pMax_priceKey, pMax_priceVal);
        if(pMax_priceVal != null) {
            
            pMax_price = new Integer();
            jsonToValue(pMax_price, pMax_priceVal, L"Integer", L"Integer");
        }
        delete pMax_priceKey;
JsonString* pMin_priceKey = new JsonString(L"min_price");
        IJsonValue* pMin_priceVal = null;
        pJsonObject->GetValue(pMin_priceKey, pMin_priceVal);
        if(pMin_priceVal != null) {
            
            pMin_price = new Integer();
            jsonToValue(pMin_price, pMin_priceVal, L"Integer", L"Integer");
        }
        delete pMin_priceKey;
    }
}

SamiPriceOverridable::SamiPriceOverridable(String* json) {
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
SamiPriceOverridable::asJson ()
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
SamiPriceOverridable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pMax_priceKey = new JsonString(L"max_price");
    pJsonObject->Add(pMax_priceKey, toJson(getPMaxPrice(), "Integer", ""));

    JsonString *pMin_priceKey = new JsonString(L"min_price");
    pJsonObject->Add(pMin_priceKey, toJson(getPMinPrice(), "Integer", ""));

    return pJsonObject;
}

String*
SamiPriceOverridable::getPDescription() {
    return pDescription;
}
void
SamiPriceOverridable::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiPriceOverridable::getPTypeHint() {
    return pType_hint;
}
void
SamiPriceOverridable::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

Integer*
SamiPriceOverridable::getPMaxPrice() {
    return pMax_price;
}
void
SamiPriceOverridable::setPMaxPrice(Integer* pMax_price) {
    this->pMax_price = pMax_price;
}

Integer*
SamiPriceOverridable::getPMinPrice() {
    return pMin_price;
}
void
SamiPriceOverridable::setPMinPrice(Integer* pMin_price) {
    this->pMin_price = pMin_price;
}



} /* namespace Swagger */

