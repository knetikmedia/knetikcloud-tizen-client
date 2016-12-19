
#include "SamiSku.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSku::SamiSku() {
    init();
}

SamiSku::~SamiSku() {
    this->cleanup();
}

void
SamiSku::init() {
    pAdditional_properties = null;
pCurrency_code = null;
pDescription = null;
pInventory = null;
pMin_inventory_threshold = null;
pOriginal_price = null;
pPrice = null;
pPublished = null;
pSale_id = null;
pSale_name = null;
pSku = null;
pStart_date = null;
pStop_date = null;
}

void
SamiSku::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pInventory != null) {
        
        delete pInventory;
        pInventory = null;
    }
if(pMin_inventory_threshold != null) {
        
        delete pMin_inventory_threshold;
        pMin_inventory_threshold = null;
    }
if(pOriginal_price != null) {
        
        delete pOriginal_price;
        pOriginal_price = null;
    }
if(pPrice != null) {
        
        delete pPrice;
        pPrice = null;
    }
if(pPublished != null) {
        
        delete pPublished;
        pPublished = null;
    }
if(pSale_id != null) {
        
        delete pSale_id;
        pSale_id = null;
    }
if(pSale_name != null) {
        
        delete pSale_name;
        pSale_name = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
if(pStop_date != null) {
        
        delete pStop_date;
        pStop_date = null;
    }
}


SamiSku*
SamiSku::fromJson(String* json) {
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
SamiSku::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
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
JsonString* pInventoryKey = new JsonString(L"inventory");
        IJsonValue* pInventoryVal = null;
        pJsonObject->GetValue(pInventoryKey, pInventoryVal);
        if(pInventoryVal != null) {
            
            pInventory = new Integer();
            jsonToValue(pInventory, pInventoryVal, L"Integer", L"Integer");
        }
        delete pInventoryKey;
JsonString* pMin_inventory_thresholdKey = new JsonString(L"min_inventory_threshold");
        IJsonValue* pMin_inventory_thresholdVal = null;
        pJsonObject->GetValue(pMin_inventory_thresholdKey, pMin_inventory_thresholdVal);
        if(pMin_inventory_thresholdVal != null) {
            
            pMin_inventory_threshold = new Integer();
            jsonToValue(pMin_inventory_threshold, pMin_inventory_thresholdVal, L"Integer", L"Integer");
        }
        delete pMin_inventory_thresholdKey;
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
JsonString* pPublishedKey = new JsonString(L"published");
        IJsonValue* pPublishedVal = null;
        pJsonObject->GetValue(pPublishedKey, pPublishedVal);
        if(pPublishedVal != null) {
            
            pPublished = new Boolean(false);
            jsonToValue(pPublished, pPublishedVal, L"Boolean", L"Boolean");
        }
        delete pPublishedKey;
JsonString* pSale_idKey = new JsonString(L"sale_id");
        IJsonValue* pSale_idVal = null;
        pJsonObject->GetValue(pSale_idKey, pSale_idVal);
        if(pSale_idVal != null) {
            
            pSale_id = new Integer();
            jsonToValue(pSale_id, pSale_idVal, L"Integer", L"Integer");
        }
        delete pSale_idKey;
JsonString* pSale_nameKey = new JsonString(L"sale_name");
        IJsonValue* pSale_nameVal = null;
        pJsonObject->GetValue(pSale_nameKey, pSale_nameVal);
        if(pSale_nameVal != null) {
            
            pSale_name = new String();
            jsonToValue(pSale_name, pSale_nameVal, L"String", L"String");
        }
        delete pSale_nameKey;
JsonString* pSkuKey = new JsonString(L"sku");
        IJsonValue* pSkuVal = null;
        pJsonObject->GetValue(pSkuKey, pSkuVal);
        if(pSkuVal != null) {
            
            pSku = new String();
            jsonToValue(pSku, pSkuVal, L"String", L"String");
        }
        delete pSkuKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
JsonString* pStop_dateKey = new JsonString(L"stop_date");
        IJsonValue* pStop_dateVal = null;
        pJsonObject->GetValue(pStop_dateKey, pStop_dateVal);
        if(pStop_dateVal != null) {
            
            pStop_date = new Long();
            jsonToValue(pStop_date, pStop_dateVal, L"Long", L"Long");
        }
        delete pStop_dateKey;
    }
}

SamiSku::SamiSku(String* json) {
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
SamiSku::asJson ()
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
SamiSku::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pInventoryKey = new JsonString(L"inventory");
    pJsonObject->Add(pInventoryKey, toJson(getPInventory(), "Integer", ""));

    JsonString *pMin_inventory_thresholdKey = new JsonString(L"min_inventory_threshold");
    pJsonObject->Add(pMin_inventory_thresholdKey, toJson(getPMinInventoryThreshold(), "Integer", ""));

    JsonString *pOriginal_priceKey = new JsonString(L"original_price");
    pJsonObject->Add(pOriginal_priceKey, toJson(getPOriginalPrice(), "Double", ""));

    JsonString *pPriceKey = new JsonString(L"price");
    pJsonObject->Add(pPriceKey, toJson(getPPrice(), "Double", ""));

    JsonString *pPublishedKey = new JsonString(L"published");
    pJsonObject->Add(pPublishedKey, toJson(getPPublished(), "Boolean", ""));

    JsonString *pSale_idKey = new JsonString(L"sale_id");
    pJsonObject->Add(pSale_idKey, toJson(getPSaleId(), "Integer", ""));

    JsonString *pSale_nameKey = new JsonString(L"sale_name");
    pJsonObject->Add(pSale_nameKey, toJson(getPSaleName(), "String", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    JsonString *pStop_dateKey = new JsonString(L"stop_date");
    pJsonObject->Add(pStop_dateKey, toJson(getPStopDate(), "Long", ""));

    return pJsonObject;
}

HashMap*
SamiSku::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiSku::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiSku::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiSku::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiSku::getPDescription() {
    return pDescription;
}
void
SamiSku::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Integer*
SamiSku::getPInventory() {
    return pInventory;
}
void
SamiSku::setPInventory(Integer* pInventory) {
    this->pInventory = pInventory;
}

Integer*
SamiSku::getPMinInventoryThreshold() {
    return pMin_inventory_threshold;
}
void
SamiSku::setPMinInventoryThreshold(Integer* pMin_inventory_threshold) {
    this->pMin_inventory_threshold = pMin_inventory_threshold;
}

Double*
SamiSku::getPOriginalPrice() {
    return pOriginal_price;
}
void
SamiSku::setPOriginalPrice(Double* pOriginal_price) {
    this->pOriginal_price = pOriginal_price;
}

Double*
SamiSku::getPPrice() {
    return pPrice;
}
void
SamiSku::setPPrice(Double* pPrice) {
    this->pPrice = pPrice;
}

Boolean*
SamiSku::getPPublished() {
    return pPublished;
}
void
SamiSku::setPPublished(Boolean* pPublished) {
    this->pPublished = pPublished;
}

Integer*
SamiSku::getPSaleId() {
    return pSale_id;
}
void
SamiSku::setPSaleId(Integer* pSale_id) {
    this->pSale_id = pSale_id;
}

String*
SamiSku::getPSaleName() {
    return pSale_name;
}
void
SamiSku::setPSaleName(String* pSale_name) {
    this->pSale_name = pSale_name;
}

String*
SamiSku::getPSku() {
    return pSku;
}
void
SamiSku::setPSku(String* pSku) {
    this->pSku = pSku;
}

Long*
SamiSku::getPStartDate() {
    return pStart_date;
}
void
SamiSku::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}

Long*
SamiSku::getPStopDate() {
    return pStop_date;
}
void
SamiSku::setPStopDate(Long* pStop_date) {
    this->pStop_date = pStop_date;
}



} /* namespace Swagger */

