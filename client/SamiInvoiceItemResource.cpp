
#include "SamiInvoiceItemResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInvoiceItemResource::SamiInvoiceItemResource() {
    init();
}

SamiInvoiceItemResource::~SamiInvoiceItemResource() {
    this->cleanup();
}

void
SamiInvoiceItemResource::init() {
    pBundle_sku = null;
pCurrent_fulfillment_status = null;
pId = null;
pInvoice_id = null;
pItem_id = null;
pItem_name = null;
pOriginal_total_price = null;
pOriginal_unit_price = null;
pQty = null;
pSale_name = null;
pSku = null;
pSku_description = null;
pSystem_price = null;
pTotal_price = null;
pType_hint = null;
pUnit_price = null;
}

void
SamiInvoiceItemResource::cleanup() {
    if(pBundle_sku != null) {
        
        delete pBundle_sku;
        pBundle_sku = null;
    }
if(pCurrent_fulfillment_status != null) {
        
        delete pCurrent_fulfillment_status;
        pCurrent_fulfillment_status = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pItem_id != null) {
        
        delete pItem_id;
        pItem_id = null;
    }
if(pItem_name != null) {
        
        delete pItem_name;
        pItem_name = null;
    }
if(pOriginal_total_price != null) {
        
        delete pOriginal_total_price;
        pOriginal_total_price = null;
    }
if(pOriginal_unit_price != null) {
        
        delete pOriginal_unit_price;
        pOriginal_unit_price = null;
    }
if(pQty != null) {
        
        delete pQty;
        pQty = null;
    }
if(pSale_name != null) {
        
        delete pSale_name;
        pSale_name = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
if(pSku_description != null) {
        
        delete pSku_description;
        pSku_description = null;
    }
if(pSystem_price != null) {
        
        delete pSystem_price;
        pSystem_price = null;
    }
if(pTotal_price != null) {
        
        delete pTotal_price;
        pTotal_price = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pUnit_price != null) {
        
        delete pUnit_price;
        pUnit_price = null;
    }
}


SamiInvoiceItemResource*
SamiInvoiceItemResource::fromJson(String* json) {
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
SamiInvoiceItemResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBundle_skuKey = new JsonString(L"bundle_sku");
        IJsonValue* pBundle_skuVal = null;
        pJsonObject->GetValue(pBundle_skuKey, pBundle_skuVal);
        if(pBundle_skuVal != null) {
            
            pBundle_sku = new String();
            jsonToValue(pBundle_sku, pBundle_skuVal, L"String", L"String");
        }
        delete pBundle_skuKey;
JsonString* pCurrent_fulfillment_statusKey = new JsonString(L"current_fulfillment_status");
        IJsonValue* pCurrent_fulfillment_statusVal = null;
        pJsonObject->GetValue(pCurrent_fulfillment_statusKey, pCurrent_fulfillment_statusVal);
        if(pCurrent_fulfillment_statusVal != null) {
            
            pCurrent_fulfillment_status = new String();
            jsonToValue(pCurrent_fulfillment_status, pCurrent_fulfillment_statusVal, L"String", L"String");
        }
        delete pCurrent_fulfillment_statusKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pItem_idKey = new JsonString(L"item_id");
        IJsonValue* pItem_idVal = null;
        pJsonObject->GetValue(pItem_idKey, pItem_idVal);
        if(pItem_idVal != null) {
            
            pItem_id = new Integer();
            jsonToValue(pItem_id, pItem_idVal, L"Integer", L"Integer");
        }
        delete pItem_idKey;
JsonString* pItem_nameKey = new JsonString(L"item_name");
        IJsonValue* pItem_nameVal = null;
        pJsonObject->GetValue(pItem_nameKey, pItem_nameVal);
        if(pItem_nameVal != null) {
            
            pItem_name = new String();
            jsonToValue(pItem_name, pItem_nameVal, L"String", L"String");
        }
        delete pItem_nameKey;
JsonString* pOriginal_total_priceKey = new JsonString(L"original_total_price");
        IJsonValue* pOriginal_total_priceVal = null;
        pJsonObject->GetValue(pOriginal_total_priceKey, pOriginal_total_priceVal);
        if(pOriginal_total_priceVal != null) {
            
            pOriginal_total_price = new Double();
            jsonToValue(pOriginal_total_price, pOriginal_total_priceVal, L"Double", L"Double");
        }
        delete pOriginal_total_priceKey;
JsonString* pOriginal_unit_priceKey = new JsonString(L"original_unit_price");
        IJsonValue* pOriginal_unit_priceVal = null;
        pJsonObject->GetValue(pOriginal_unit_priceKey, pOriginal_unit_priceVal);
        if(pOriginal_unit_priceVal != null) {
            
            pOriginal_unit_price = new Double();
            jsonToValue(pOriginal_unit_price, pOriginal_unit_priceVal, L"Double", L"Double");
        }
        delete pOriginal_unit_priceKey;
JsonString* pQtyKey = new JsonString(L"qty");
        IJsonValue* pQtyVal = null;
        pJsonObject->GetValue(pQtyKey, pQtyVal);
        if(pQtyVal != null) {
            
            pQty = new Integer();
            jsonToValue(pQty, pQtyVal, L"Integer", L"Integer");
        }
        delete pQtyKey;
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
JsonString* pSku_descriptionKey = new JsonString(L"sku_description");
        IJsonValue* pSku_descriptionVal = null;
        pJsonObject->GetValue(pSku_descriptionKey, pSku_descriptionVal);
        if(pSku_descriptionVal != null) {
            
            pSku_description = new String();
            jsonToValue(pSku_description, pSku_descriptionVal, L"String", L"String");
        }
        delete pSku_descriptionKey;
JsonString* pSystem_priceKey = new JsonString(L"system_price");
        IJsonValue* pSystem_priceVal = null;
        pJsonObject->GetValue(pSystem_priceKey, pSystem_priceVal);
        if(pSystem_priceVal != null) {
            
            pSystem_price = new Double();
            jsonToValue(pSystem_price, pSystem_priceVal, L"Double", L"Double");
        }
        delete pSystem_priceKey;
JsonString* pTotal_priceKey = new JsonString(L"total_price");
        IJsonValue* pTotal_priceVal = null;
        pJsonObject->GetValue(pTotal_priceKey, pTotal_priceVal);
        if(pTotal_priceVal != null) {
            
            pTotal_price = new Double();
            jsonToValue(pTotal_price, pTotal_priceVal, L"Double", L"Double");
        }
        delete pTotal_priceKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pUnit_priceKey = new JsonString(L"unit_price");
        IJsonValue* pUnit_priceVal = null;
        pJsonObject->GetValue(pUnit_priceKey, pUnit_priceVal);
        if(pUnit_priceVal != null) {
            
            pUnit_price = new Double();
            jsonToValue(pUnit_price, pUnit_priceVal, L"Double", L"Double");
        }
        delete pUnit_priceKey;
    }
}

SamiInvoiceItemResource::SamiInvoiceItemResource(String* json) {
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
SamiInvoiceItemResource::asJson ()
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
SamiInvoiceItemResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBundle_skuKey = new JsonString(L"bundle_sku");
    pJsonObject->Add(pBundle_skuKey, toJson(getPBundleSku(), "String", ""));

    JsonString *pCurrent_fulfillment_statusKey = new JsonString(L"current_fulfillment_status");
    pJsonObject->Add(pCurrent_fulfillment_statusKey, toJson(getPCurrentFulfillmentStatus(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pItem_idKey = new JsonString(L"item_id");
    pJsonObject->Add(pItem_idKey, toJson(getPItemId(), "Integer", ""));

    JsonString *pItem_nameKey = new JsonString(L"item_name");
    pJsonObject->Add(pItem_nameKey, toJson(getPItemName(), "String", ""));

    JsonString *pOriginal_total_priceKey = new JsonString(L"original_total_price");
    pJsonObject->Add(pOriginal_total_priceKey, toJson(getPOriginalTotalPrice(), "Double", ""));

    JsonString *pOriginal_unit_priceKey = new JsonString(L"original_unit_price");
    pJsonObject->Add(pOriginal_unit_priceKey, toJson(getPOriginalUnitPrice(), "Double", ""));

    JsonString *pQtyKey = new JsonString(L"qty");
    pJsonObject->Add(pQtyKey, toJson(getPQty(), "Integer", ""));

    JsonString *pSale_nameKey = new JsonString(L"sale_name");
    pJsonObject->Add(pSale_nameKey, toJson(getPSaleName(), "String", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    JsonString *pSku_descriptionKey = new JsonString(L"sku_description");
    pJsonObject->Add(pSku_descriptionKey, toJson(getPSkuDescription(), "String", ""));

    JsonString *pSystem_priceKey = new JsonString(L"system_price");
    pJsonObject->Add(pSystem_priceKey, toJson(getPSystemPrice(), "Double", ""));

    JsonString *pTotal_priceKey = new JsonString(L"total_price");
    pJsonObject->Add(pTotal_priceKey, toJson(getPTotalPrice(), "Double", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pUnit_priceKey = new JsonString(L"unit_price");
    pJsonObject->Add(pUnit_priceKey, toJson(getPUnitPrice(), "Double", ""));

    return pJsonObject;
}

String*
SamiInvoiceItemResource::getPBundleSku() {
    return pBundle_sku;
}
void
SamiInvoiceItemResource::setPBundleSku(String* pBundle_sku) {
    this->pBundle_sku = pBundle_sku;
}

String*
SamiInvoiceItemResource::getPCurrentFulfillmentStatus() {
    return pCurrent_fulfillment_status;
}
void
SamiInvoiceItemResource::setPCurrentFulfillmentStatus(String* pCurrent_fulfillment_status) {
    this->pCurrent_fulfillment_status = pCurrent_fulfillment_status;
}

Integer*
SamiInvoiceItemResource::getPId() {
    return pId;
}
void
SamiInvoiceItemResource::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiInvoiceItemResource::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiInvoiceItemResource::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

Integer*
SamiInvoiceItemResource::getPItemId() {
    return pItem_id;
}
void
SamiInvoiceItemResource::setPItemId(Integer* pItem_id) {
    this->pItem_id = pItem_id;
}

String*
SamiInvoiceItemResource::getPItemName() {
    return pItem_name;
}
void
SamiInvoiceItemResource::setPItemName(String* pItem_name) {
    this->pItem_name = pItem_name;
}

Double*
SamiInvoiceItemResource::getPOriginalTotalPrice() {
    return pOriginal_total_price;
}
void
SamiInvoiceItemResource::setPOriginalTotalPrice(Double* pOriginal_total_price) {
    this->pOriginal_total_price = pOriginal_total_price;
}

Double*
SamiInvoiceItemResource::getPOriginalUnitPrice() {
    return pOriginal_unit_price;
}
void
SamiInvoiceItemResource::setPOriginalUnitPrice(Double* pOriginal_unit_price) {
    this->pOriginal_unit_price = pOriginal_unit_price;
}

Integer*
SamiInvoiceItemResource::getPQty() {
    return pQty;
}
void
SamiInvoiceItemResource::setPQty(Integer* pQty) {
    this->pQty = pQty;
}

String*
SamiInvoiceItemResource::getPSaleName() {
    return pSale_name;
}
void
SamiInvoiceItemResource::setPSaleName(String* pSale_name) {
    this->pSale_name = pSale_name;
}

String*
SamiInvoiceItemResource::getPSku() {
    return pSku;
}
void
SamiInvoiceItemResource::setPSku(String* pSku) {
    this->pSku = pSku;
}

String*
SamiInvoiceItemResource::getPSkuDescription() {
    return pSku_description;
}
void
SamiInvoiceItemResource::setPSkuDescription(String* pSku_description) {
    this->pSku_description = pSku_description;
}

Double*
SamiInvoiceItemResource::getPSystemPrice() {
    return pSystem_price;
}
void
SamiInvoiceItemResource::setPSystemPrice(Double* pSystem_price) {
    this->pSystem_price = pSystem_price;
}

Double*
SamiInvoiceItemResource::getPTotalPrice() {
    return pTotal_price;
}
void
SamiInvoiceItemResource::setPTotalPrice(Double* pTotal_price) {
    this->pTotal_price = pTotal_price;
}

String*
SamiInvoiceItemResource::getPTypeHint() {
    return pType_hint;
}
void
SamiInvoiceItemResource::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

Double*
SamiInvoiceItemResource::getPUnitPrice() {
    return pUnit_price;
}
void
SamiInvoiceItemResource::setPUnitPrice(Double* pUnit_price) {
    this->pUnit_price = pUnit_price;
}



} /* namespace Swagger */

