
#include "SamiCartShippingOption.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCartShippingOption::SamiCartShippingOption() {
    init();
}

SamiCartShippingOption::~SamiCartShippingOption() {
    this->cleanup();
}

void
SamiCartShippingOption::init() {
    pCurrency_code = null;
pDescription = null;
pName = null;
pOriginal_price = null;
pPrice = null;
pShipping_item_id = null;
pSku = null;
pTaxable = null;
pVendor_id = null;
pVendor_name = null;
}

void
SamiCartShippingOption::cleanup() {
    if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOriginal_price != null) {
        
        delete pOriginal_price;
        pOriginal_price = null;
    }
if(pPrice != null) {
        
        delete pPrice;
        pPrice = null;
    }
if(pShipping_item_id != null) {
        
        delete pShipping_item_id;
        pShipping_item_id = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
if(pTaxable != null) {
        
        delete pTaxable;
        pTaxable = null;
    }
if(pVendor_id != null) {
        
        delete pVendor_id;
        pVendor_id = null;
    }
if(pVendor_name != null) {
        
        delete pVendor_name;
        pVendor_name = null;
    }
}


SamiCartShippingOption*
SamiCartShippingOption::fromJson(String* json) {
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
SamiCartShippingOption::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pOriginal_priceKey = new JsonString(L"original_price");
        IJsonValue* pOriginal_priceVal = null;
        pJsonObject->GetValue(pOriginal_priceKey, pOriginal_priceVal);
        if(pOriginal_priceVal != null) {
            
            pOriginal_price = new Double();
            jsonToValue(pOriginal_price, pOriginal_priceVal, L"Double", L"Double");
        }
        delete pOriginal_priceKey;
JsonString* pPriceKey = new JsonString(L"price");
        IJsonValue* pPriceVal = null;
        pJsonObject->GetValue(pPriceKey, pPriceVal);
        if(pPriceVal != null) {
            
            pPrice = new Double();
            jsonToValue(pPrice, pPriceVal, L"Double", L"Double");
        }
        delete pPriceKey;
JsonString* pShipping_item_idKey = new JsonString(L"shipping_item_id");
        IJsonValue* pShipping_item_idVal = null;
        pJsonObject->GetValue(pShipping_item_idKey, pShipping_item_idVal);
        if(pShipping_item_idVal != null) {
            
            pShipping_item_id = new Integer();
            jsonToValue(pShipping_item_id, pShipping_item_idVal, L"Integer", L"Integer");
        }
        delete pShipping_item_idKey;
JsonString* pSkuKey = new JsonString(L"sku");
        IJsonValue* pSkuVal = null;
        pJsonObject->GetValue(pSkuKey, pSkuVal);
        if(pSkuVal != null) {
            
            pSku = new String();
            jsonToValue(pSku, pSkuVal, L"String", L"String");
        }
        delete pSkuKey;
JsonString* pTaxableKey = new JsonString(L"taxable");
        IJsonValue* pTaxableVal = null;
        pJsonObject->GetValue(pTaxableKey, pTaxableVal);
        if(pTaxableVal != null) {
            
            pTaxable = new Boolean(false);
            jsonToValue(pTaxable, pTaxableVal, L"Boolean", L"Boolean");
        }
        delete pTaxableKey;
JsonString* pVendor_idKey = new JsonString(L"vendor_id");
        IJsonValue* pVendor_idVal = null;
        pJsonObject->GetValue(pVendor_idKey, pVendor_idVal);
        if(pVendor_idVal != null) {
            
            pVendor_id = new Integer();
            jsonToValue(pVendor_id, pVendor_idVal, L"Integer", L"Integer");
        }
        delete pVendor_idKey;
JsonString* pVendor_nameKey = new JsonString(L"vendor_name");
        IJsonValue* pVendor_nameVal = null;
        pJsonObject->GetValue(pVendor_nameKey, pVendor_nameVal);
        if(pVendor_nameVal != null) {
            
            pVendor_name = new String();
            jsonToValue(pVendor_name, pVendor_nameVal, L"String", L"String");
        }
        delete pVendor_nameKey;
    }
}

SamiCartShippingOption::SamiCartShippingOption(String* json) {
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
SamiCartShippingOption::asJson ()
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
SamiCartShippingOption::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOriginal_priceKey = new JsonString(L"original_price");
    pJsonObject->Add(pOriginal_priceKey, toJson(getPOriginalPrice(), "Double", ""));

    JsonString *pPriceKey = new JsonString(L"price");
    pJsonObject->Add(pPriceKey, toJson(getPPrice(), "Double", ""));

    JsonString *pShipping_item_idKey = new JsonString(L"shipping_item_id");
    pJsonObject->Add(pShipping_item_idKey, toJson(getPShippingItemId(), "Integer", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    JsonString *pTaxableKey = new JsonString(L"taxable");
    pJsonObject->Add(pTaxableKey, toJson(getPTaxable(), "Boolean", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    JsonString *pVendor_nameKey = new JsonString(L"vendor_name");
    pJsonObject->Add(pVendor_nameKey, toJson(getPVendorName(), "String", ""));

    return pJsonObject;
}

String*
SamiCartShippingOption::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiCartShippingOption::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiCartShippingOption::getPDescription() {
    return pDescription;
}
void
SamiCartShippingOption::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiCartShippingOption::getPName() {
    return pName;
}
void
SamiCartShippingOption::setPName(String* pName) {
    this->pName = pName;
}

Double*
SamiCartShippingOption::getPOriginalPrice() {
    return pOriginal_price;
}
void
SamiCartShippingOption::setPOriginalPrice(Double* pOriginal_price) {
    this->pOriginal_price = pOriginal_price;
}

Double*
SamiCartShippingOption::getPPrice() {
    return pPrice;
}
void
SamiCartShippingOption::setPPrice(Double* pPrice) {
    this->pPrice = pPrice;
}

Integer*
SamiCartShippingOption::getPShippingItemId() {
    return pShipping_item_id;
}
void
SamiCartShippingOption::setPShippingItemId(Integer* pShipping_item_id) {
    this->pShipping_item_id = pShipping_item_id;
}

String*
SamiCartShippingOption::getPSku() {
    return pSku;
}
void
SamiCartShippingOption::setPSku(String* pSku) {
    this->pSku = pSku;
}

Boolean*
SamiCartShippingOption::getPTaxable() {
    return pTaxable;
}
void
SamiCartShippingOption::setPTaxable(Boolean* pTaxable) {
    this->pTaxable = pTaxable;
}

Integer*
SamiCartShippingOption::getPVendorId() {
    return pVendor_id;
}
void
SamiCartShippingOption::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}

String*
SamiCartShippingOption::getPVendorName() {
    return pVendor_name;
}
void
SamiCartShippingOption::setPVendorName(String* pVendor_name) {
    this->pVendor_name = pVendor_name;
}



} /* namespace Swagger */

