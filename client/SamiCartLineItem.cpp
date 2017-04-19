
#include "SamiCartLineItem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCartLineItem::SamiCartLineItem() {
    init();
}

SamiCartLineItem::~SamiCartLineItem() {
    this->cleanup();
}

void
SamiCartLineItem::init() {
    pCurrency_code = null;
pDescription = null;
pDiscount = null;
pLine_total = null;
pName = null;
pOriginal_line_total = null;
pOriginal_unit_price = null;
pQty = null;
pSale_name = null;
pSku = null;
pSku_description = null;
pStore_item_id = null;
pTags = null;
pThumb_url = null;
pUnique_key = null;
pUnit_price = null;
pVendor_id = null;
pVendor_name = null;
}

void
SamiCartLineItem::cleanup() {
    if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pDiscount != null) {
        
        delete pDiscount;
        pDiscount = null;
    }
if(pLine_total != null) {
        
        delete pLine_total;
        pLine_total = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOriginal_line_total != null) {
        
        delete pOriginal_line_total;
        pOriginal_line_total = null;
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
if(pStore_item_id != null) {
        
        delete pStore_item_id;
        pStore_item_id = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pThumb_url != null) {
        
        delete pThumb_url;
        pThumb_url = null;
    }
if(pUnique_key != null) {
        
        delete pUnique_key;
        pUnique_key = null;
    }
if(pUnit_price != null) {
        
        delete pUnit_price;
        pUnit_price = null;
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


SamiCartLineItem*
SamiCartLineItem::fromJson(String* json) {
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
SamiCartLineItem::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDiscountKey = new JsonString(L"discount");
        IJsonValue* pDiscountVal = null;
        pJsonObject->GetValue(pDiscountKey, pDiscountVal);
        if(pDiscountVal != null) {
            
            pDiscount = new SamiDiscount();
            jsonToValue(pDiscount, pDiscountVal, L"SamiDiscount", L"SamiDiscount");
        }
        delete pDiscountKey;
JsonString* pLine_totalKey = new JsonString(L"line_total");
        IJsonValue* pLine_totalVal = null;
        pJsonObject->GetValue(pLine_totalKey, pLine_totalVal);
        if(pLine_totalVal != null) {
            
            pLine_total = new Double();
            jsonToValue(pLine_total, pLine_totalVal, L"Double", L"Double");
        }
        delete pLine_totalKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pOriginal_line_totalKey = new JsonString(L"original_line_total");
        IJsonValue* pOriginal_line_totalVal = null;
        pJsonObject->GetValue(pOriginal_line_totalKey, pOriginal_line_totalVal);
        if(pOriginal_line_totalVal != null) {
            
            pOriginal_line_total = new Double();
            jsonToValue(pOriginal_line_total, pOriginal_line_totalVal, L"Double", L"Double");
        }
        delete pOriginal_line_totalKey;
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
JsonString* pStore_item_idKey = new JsonString(L"store_item_id");
        IJsonValue* pStore_item_idVal = null;
        pJsonObject->GetValue(pStore_item_idKey, pStore_item_idVal);
        if(pStore_item_idVal != null) {
            
            pStore_item_id = new Integer();
            jsonToValue(pStore_item_id, pStore_item_idVal, L"Integer", L"Integer");
        }
        delete pStore_item_idKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pThumb_urlKey = new JsonString(L"thumb_url");
        IJsonValue* pThumb_urlVal = null;
        pJsonObject->GetValue(pThumb_urlKey, pThumb_urlVal);
        if(pThumb_urlVal != null) {
            
            pThumb_url = new String();
            jsonToValue(pThumb_url, pThumb_urlVal, L"String", L"String");
        }
        delete pThumb_urlKey;
JsonString* pUnique_keyKey = new JsonString(L"unique_key");
        IJsonValue* pUnique_keyVal = null;
        pJsonObject->GetValue(pUnique_keyKey, pUnique_keyVal);
        if(pUnique_keyVal != null) {
            
            pUnique_key = new String();
            jsonToValue(pUnique_key, pUnique_keyVal, L"String", L"String");
        }
        delete pUnique_keyKey;
JsonString* pUnit_priceKey = new JsonString(L"unit_price");
        IJsonValue* pUnit_priceVal = null;
        pJsonObject->GetValue(pUnit_priceKey, pUnit_priceVal);
        if(pUnit_priceVal != null) {
            
            pUnit_price = new Double();
            jsonToValue(pUnit_price, pUnit_priceVal, L"Double", L"Double");
        }
        delete pUnit_priceKey;
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

SamiCartLineItem::SamiCartLineItem(String* json) {
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
SamiCartLineItem::asJson ()
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
SamiCartLineItem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pDiscountKey = new JsonString(L"discount");
    pJsonObject->Add(pDiscountKey, toJson(getPDiscount(), "SamiDiscount", ""));

    JsonString *pLine_totalKey = new JsonString(L"line_total");
    pJsonObject->Add(pLine_totalKey, toJson(getPLineTotal(), "Double", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOriginal_line_totalKey = new JsonString(L"original_line_total");
    pJsonObject->Add(pOriginal_line_totalKey, toJson(getPOriginalLineTotal(), "Double", ""));

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

    JsonString *pStore_item_idKey = new JsonString(L"store_item_id");
    pJsonObject->Add(pStore_item_idKey, toJson(getPStoreItemId(), "Integer", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pThumb_urlKey = new JsonString(L"thumb_url");
    pJsonObject->Add(pThumb_urlKey, toJson(getPThumbUrl(), "String", ""));

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pUnit_priceKey = new JsonString(L"unit_price");
    pJsonObject->Add(pUnit_priceKey, toJson(getPUnitPrice(), "Double", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    JsonString *pVendor_nameKey = new JsonString(L"vendor_name");
    pJsonObject->Add(pVendor_nameKey, toJson(getPVendorName(), "String", ""));

    return pJsonObject;
}

String*
SamiCartLineItem::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiCartLineItem::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiCartLineItem::getPDescription() {
    return pDescription;
}
void
SamiCartLineItem::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

SamiDiscount*
SamiCartLineItem::getPDiscount() {
    return pDiscount;
}
void
SamiCartLineItem::setPDiscount(SamiDiscount* pDiscount) {
    this->pDiscount = pDiscount;
}

Double*
SamiCartLineItem::getPLineTotal() {
    return pLine_total;
}
void
SamiCartLineItem::setPLineTotal(Double* pLine_total) {
    this->pLine_total = pLine_total;
}

String*
SamiCartLineItem::getPName() {
    return pName;
}
void
SamiCartLineItem::setPName(String* pName) {
    this->pName = pName;
}

Double*
SamiCartLineItem::getPOriginalLineTotal() {
    return pOriginal_line_total;
}
void
SamiCartLineItem::setPOriginalLineTotal(Double* pOriginal_line_total) {
    this->pOriginal_line_total = pOriginal_line_total;
}

Double*
SamiCartLineItem::getPOriginalUnitPrice() {
    return pOriginal_unit_price;
}
void
SamiCartLineItem::setPOriginalUnitPrice(Double* pOriginal_unit_price) {
    this->pOriginal_unit_price = pOriginal_unit_price;
}

Integer*
SamiCartLineItem::getPQty() {
    return pQty;
}
void
SamiCartLineItem::setPQty(Integer* pQty) {
    this->pQty = pQty;
}

String*
SamiCartLineItem::getPSaleName() {
    return pSale_name;
}
void
SamiCartLineItem::setPSaleName(String* pSale_name) {
    this->pSale_name = pSale_name;
}

String*
SamiCartLineItem::getPSku() {
    return pSku;
}
void
SamiCartLineItem::setPSku(String* pSku) {
    this->pSku = pSku;
}

String*
SamiCartLineItem::getPSkuDescription() {
    return pSku_description;
}
void
SamiCartLineItem::setPSkuDescription(String* pSku_description) {
    this->pSku_description = pSku_description;
}

Integer*
SamiCartLineItem::getPStoreItemId() {
    return pStore_item_id;
}
void
SamiCartLineItem::setPStoreItemId(Integer* pStore_item_id) {
    this->pStore_item_id = pStore_item_id;
}

IList*
SamiCartLineItem::getPTags() {
    return pTags;
}
void
SamiCartLineItem::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiCartLineItem::getPThumbUrl() {
    return pThumb_url;
}
void
SamiCartLineItem::setPThumbUrl(String* pThumb_url) {
    this->pThumb_url = pThumb_url;
}

String*
SamiCartLineItem::getPUniqueKey() {
    return pUnique_key;
}
void
SamiCartLineItem::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Double*
SamiCartLineItem::getPUnitPrice() {
    return pUnit_price;
}
void
SamiCartLineItem::setPUnitPrice(Double* pUnit_price) {
    this->pUnit_price = pUnit_price;
}

Integer*
SamiCartLineItem::getPVendorId() {
    return pVendor_id;
}
void
SamiCartLineItem::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}

String*
SamiCartLineItem::getPVendorName() {
    return pVendor_name;
}
void
SamiCartLineItem::setPVendorName(String* pVendor_name) {
    this->pVendor_name = pVendor_name;
}



} /* namespace Swagger */

