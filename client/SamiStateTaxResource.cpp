
#include "SamiStateTaxResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiStateTaxResource::SamiStateTaxResource() {
    init();
}

SamiStateTaxResource::~SamiStateTaxResource() {
    this->cleanup();
}

void
SamiStateTaxResource::init() {
    pCountry_iso3 = null;
pFederally_exempt = null;
pName = null;
pRate = null;
pState_code = null;
pTax_shipping = null;
}

void
SamiStateTaxResource::cleanup() {
    if(pCountry_iso3 != null) {
        
        delete pCountry_iso3;
        pCountry_iso3 = null;
    }
if(pFederally_exempt != null) {
        
        delete pFederally_exempt;
        pFederally_exempt = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRate != null) {
        
        delete pRate;
        pRate = null;
    }
if(pState_code != null) {
        
        delete pState_code;
        pState_code = null;
    }
if(pTax_shipping != null) {
        
        delete pTax_shipping;
        pTax_shipping = null;
    }
}


SamiStateTaxResource*
SamiStateTaxResource::fromJson(String* json) {
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
SamiStateTaxResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pFederally_exemptKey = new JsonString(L"federally_exempt");
        IJsonValue* pFederally_exemptVal = null;
        pJsonObject->GetValue(pFederally_exemptKey, pFederally_exemptVal);
        if(pFederally_exemptVal != null) {
            
            pFederally_exempt = new Boolean(false);
            jsonToValue(pFederally_exempt, pFederally_exemptVal, L"Boolean", L"Boolean");
        }
        delete pFederally_exemptKey;
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
JsonString* pState_codeKey = new JsonString(L"state_code");
        IJsonValue* pState_codeVal = null;
        pJsonObject->GetValue(pState_codeKey, pState_codeVal);
        if(pState_codeVal != null) {
            
            pState_code = new String();
            jsonToValue(pState_code, pState_codeVal, L"String", L"String");
        }
        delete pState_codeKey;
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

SamiStateTaxResource::SamiStateTaxResource(String* json) {
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
SamiStateTaxResource::asJson ()
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
SamiStateTaxResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountry_iso3Key = new JsonString(L"country_iso3");
    pJsonObject->Add(pCountry_iso3Key, toJson(getPCountryIso3(), "String", ""));

    JsonString *pFederally_exemptKey = new JsonString(L"federally_exempt");
    pJsonObject->Add(pFederally_exemptKey, toJson(getPFederallyExempt(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRateKey = new JsonString(L"rate");
    pJsonObject->Add(pRateKey, toJson(getPRate(), "Double", ""));

    JsonString *pState_codeKey = new JsonString(L"state_code");
    pJsonObject->Add(pState_codeKey, toJson(getPStateCode(), "String", ""));

    JsonString *pTax_shippingKey = new JsonString(L"tax_shipping");
    pJsonObject->Add(pTax_shippingKey, toJson(getPTaxShipping(), "Boolean", ""));

    return pJsonObject;
}

String*
SamiStateTaxResource::getPCountryIso3() {
    return pCountry_iso3;
}
void
SamiStateTaxResource::setPCountryIso3(String* pCountry_iso3) {
    this->pCountry_iso3 = pCountry_iso3;
}

Boolean*
SamiStateTaxResource::getPFederallyExempt() {
    return pFederally_exempt;
}
void
SamiStateTaxResource::setPFederallyExempt(Boolean* pFederally_exempt) {
    this->pFederally_exempt = pFederally_exempt;
}

String*
SamiStateTaxResource::getPName() {
    return pName;
}
void
SamiStateTaxResource::setPName(String* pName) {
    this->pName = pName;
}

Double*
SamiStateTaxResource::getPRate() {
    return pRate;
}
void
SamiStateTaxResource::setPRate(Double* pRate) {
    this->pRate = pRate;
}

String*
SamiStateTaxResource::getPStateCode() {
    return pState_code;
}
void
SamiStateTaxResource::setPStateCode(String* pState_code) {
    this->pState_code = pState_code;
}

Boolean*
SamiStateTaxResource::getPTaxShipping() {
    return pTax_shipping;
}
void
SamiStateTaxResource::setPTaxShipping(Boolean* pTax_shipping) {
    this->pTax_shipping = pTax_shipping;
}



} /* namespace Swagger */

