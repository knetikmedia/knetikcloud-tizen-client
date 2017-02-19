
#include "SamiCountryTaxResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCountryTaxResource::SamiCountryTaxResource() {
    init();
}

SamiCountryTaxResource::~SamiCountryTaxResource() {
    this->cleanup();
}

void
SamiCountryTaxResource::init() {
    pCountry_iso3 = null;
pName = null;
pRate = null;
pTax_shipping = null;
}

void
SamiCountryTaxResource::cleanup() {
    if(pCountry_iso3 != null) {
        
        delete pCountry_iso3;
        pCountry_iso3 = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRate != null) {
        
        delete pRate;
        pRate = null;
    }
if(pTax_shipping != null) {
        
        delete pTax_shipping;
        pTax_shipping = null;
    }
}


SamiCountryTaxResource*
SamiCountryTaxResource::fromJson(String* json) {
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
SamiCountryTaxResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountry_iso3Key = new JsonString(L"country_iso3");
        IJsonValue* pCountry_iso3Val = null;
        pJsonObject->GetValue(pCountry_iso3Key, pCountry_iso3Val);
        if(pCountry_iso3Val != null) {
            
            pCountry_iso3 = new String();
            jsonToValue(pCountry_iso3, pCountry_iso3Val, L"String", L"String");
        }
        delete pCountry_iso3Key;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRateKey = new JsonString(L"rate");
        IJsonValue* pRateVal = null;
        pJsonObject->GetValue(pRateKey, pRateVal);
        if(pRateVal != null) {
            
            pRate = new Double();
            jsonToValue(pRate, pRateVal, L"Double", L"Double");
        }
        delete pRateKey;
JsonString* pTax_shippingKey = new JsonString(L"tax_shipping");
        IJsonValue* pTax_shippingVal = null;
        pJsonObject->GetValue(pTax_shippingKey, pTax_shippingVal);
        if(pTax_shippingVal != null) {
            
            pTax_shipping = new Boolean(false);
            jsonToValue(pTax_shipping, pTax_shippingVal, L"Boolean", L"Boolean");
        }
        delete pTax_shippingKey;
    }
}

SamiCountryTaxResource::SamiCountryTaxResource(String* json) {
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
SamiCountryTaxResource::asJson ()
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
SamiCountryTaxResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountry_iso3Key = new JsonString(L"country_iso3");
    pJsonObject->Add(pCountry_iso3Key, toJson(getPCountryIso3(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRateKey = new JsonString(L"rate");
    pJsonObject->Add(pRateKey, toJson(getPRate(), "Double", ""));

    JsonString *pTax_shippingKey = new JsonString(L"tax_shipping");
    pJsonObject->Add(pTax_shippingKey, toJson(getPTaxShipping(), "Boolean", ""));

    return pJsonObject;
}

String*
SamiCountryTaxResource::getPCountryIso3() {
    return pCountry_iso3;
}
void
SamiCountryTaxResource::setPCountryIso3(String* pCountry_iso3) {
    this->pCountry_iso3 = pCountry_iso3;
}

String*
SamiCountryTaxResource::getPName() {
    return pName;
}
void
SamiCountryTaxResource::setPName(String* pName) {
    this->pName = pName;
}

Double*
SamiCountryTaxResource::getPRate() {
    return pRate;
}
void
SamiCountryTaxResource::setPRate(Double* pRate) {
    this->pRate = pRate;
}

Boolean*
SamiCountryTaxResource::getPTaxShipping() {
    return pTax_shipping;
}
void
SamiCountryTaxResource::setPTaxShipping(Boolean* pTax_shipping) {
    this->pTax_shipping = pTax_shipping;
}



} /* namespace Swagger */

