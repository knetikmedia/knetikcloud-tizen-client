
#include "SamiRewardCurrencyResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRewardCurrencyResource::SamiRewardCurrencyResource() {
    init();
}

SamiRewardCurrencyResource::~SamiRewardCurrencyResource() {
    this->cleanup();
}

void
SamiRewardCurrencyResource::init() {
    pCurrency_code = null;
pCurrency_name = null;
pMax_rank = null;
pMin_rank = null;
pPercent = null;
pValue = null;
}

void
SamiRewardCurrencyResource::cleanup() {
    if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pCurrency_name != null) {
        
        delete pCurrency_name;
        pCurrency_name = null;
    }
if(pMax_rank != null) {
        
        delete pMax_rank;
        pMax_rank = null;
    }
if(pMin_rank != null) {
        
        delete pMin_rank;
        pMin_rank = null;
    }
if(pPercent != null) {
        
        delete pPercent;
        pPercent = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiRewardCurrencyResource*
SamiRewardCurrencyResource::fromJson(String* json) {
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
SamiRewardCurrencyResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pCurrency_nameKey = new JsonString(L"currency_name");
        IJsonValue* pCurrency_nameVal = null;
        pJsonObject->GetValue(pCurrency_nameKey, pCurrency_nameVal);
        if(pCurrency_nameVal != null) {
            
            pCurrency_name = new String();
            jsonToValue(pCurrency_name, pCurrency_nameVal, L"String", L"String");
        }
        delete pCurrency_nameKey;
JsonString* pMax_rankKey = new JsonString(L"max_rank");
        IJsonValue* pMax_rankVal = null;
        pJsonObject->GetValue(pMax_rankKey, pMax_rankVal);
        if(pMax_rankVal != null) {
            
            pMax_rank = new Integer();
            jsonToValue(pMax_rank, pMax_rankVal, L"Integer", L"Integer");
        }
        delete pMax_rankKey;
JsonString* pMin_rankKey = new JsonString(L"min_rank");
        IJsonValue* pMin_rankVal = null;
        pJsonObject->GetValue(pMin_rankKey, pMin_rankVal);
        if(pMin_rankVal != null) {
            
            pMin_rank = new Integer();
            jsonToValue(pMin_rank, pMin_rankVal, L"Integer", L"Integer");
        }
        delete pMin_rankKey;
JsonString* pPercentKey = new JsonString(L"percent");
        IJsonValue* pPercentVal = null;
        pJsonObject->GetValue(pPercentKey, pPercentVal);
        if(pPercentVal != null) {
            
            pPercent = new Boolean(false);
            jsonToValue(pPercent, pPercentVal, L"Boolean", L"Boolean");
        }
        delete pPercentKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
    }
}

SamiRewardCurrencyResource::SamiRewardCurrencyResource(String* json) {
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
SamiRewardCurrencyResource::asJson ()
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
SamiRewardCurrencyResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pCurrency_nameKey = new JsonString(L"currency_name");
    pJsonObject->Add(pCurrency_nameKey, toJson(getPCurrencyName(), "String", ""));

    JsonString *pMax_rankKey = new JsonString(L"max_rank");
    pJsonObject->Add(pMax_rankKey, toJson(getPMaxRank(), "Integer", ""));

    JsonString *pMin_rankKey = new JsonString(L"min_rank");
    pJsonObject->Add(pMin_rankKey, toJson(getPMinRank(), "Integer", ""));

    JsonString *pPercentKey = new JsonString(L"percent");
    pJsonObject->Add(pPercentKey, toJson(getPPercent(), "Boolean", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    return pJsonObject;
}

String*
SamiRewardCurrencyResource::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiRewardCurrencyResource::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiRewardCurrencyResource::getPCurrencyName() {
    return pCurrency_name;
}
void
SamiRewardCurrencyResource::setPCurrencyName(String* pCurrency_name) {
    this->pCurrency_name = pCurrency_name;
}

Integer*
SamiRewardCurrencyResource::getPMaxRank() {
    return pMax_rank;
}
void
SamiRewardCurrencyResource::setPMaxRank(Integer* pMax_rank) {
    this->pMax_rank = pMax_rank;
}

Integer*
SamiRewardCurrencyResource::getPMinRank() {
    return pMin_rank;
}
void
SamiRewardCurrencyResource::setPMinRank(Integer* pMin_rank) {
    this->pMin_rank = pMin_rank;
}

Boolean*
SamiRewardCurrencyResource::getPPercent() {
    return pPercent;
}
void
SamiRewardCurrencyResource::setPPercent(Boolean* pPercent) {
    this->pPercent = pPercent;
}

Double*
SamiRewardCurrencyResource::getPValue() {
    return pValue;
}
void
SamiRewardCurrencyResource::setPValue(Double* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

