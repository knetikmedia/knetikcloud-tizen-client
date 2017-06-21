
#include "SamiSpendable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSpendable::SamiSpendable() {
    init();
}

SamiSpendable::~SamiSpendable() {
    this->cleanup();
}

void
SamiSpendable::init() {
    pDescription = null;
pType_hint = null;
pCurrency_code = null;
pValue = null;
}

void
SamiSpendable::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiSpendable*
SamiSpendable::fromJson(String* json) {
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
SamiSpendable::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Integer();
            jsonToValue(pValue, pValueVal, L"Integer", L"Integer");
        }
        delete pValueKey;
    }
}

SamiSpendable::SamiSpendable(String* json) {
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
SamiSpendable::asJson ()
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
SamiSpendable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Integer", ""));

    return pJsonObject;
}

String*
SamiSpendable::getPDescription() {
    return pDescription;
}
void
SamiSpendable::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiSpendable::getPTypeHint() {
    return pType_hint;
}
void
SamiSpendable::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

String*
SamiSpendable::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiSpendable::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

Integer*
SamiSpendable::getPValue() {
    return pValue;
}
void
SamiSpendable::setPValue(Integer* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

