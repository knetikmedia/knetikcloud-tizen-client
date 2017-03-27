
#include "SamiCatalogSale.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCatalogSale::SamiCatalogSale() {
    init();
}

SamiCatalogSale::~SamiCatalogSale() {
    this->cleanup();
}

void
SamiCatalogSale::init() {
    pCurrency_code = null;
pDiscount_type = null;
pDiscount_value = null;
pId = null;
pItem = null;
pLong_description = null;
pName = null;
pSale_end_date = null;
pSale_start_date = null;
pShort_description = null;
pTag = null;
pVendor = null;
}

void
SamiCatalogSale::cleanup() {
    if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDiscount_type != null) {
        
        delete pDiscount_type;
        pDiscount_type = null;
    }
if(pDiscount_value != null) {
        
        delete pDiscount_value;
        pDiscount_value = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pItem != null) {
        
        delete pItem;
        pItem = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pSale_end_date != null) {
        
        delete pSale_end_date;
        pSale_end_date = null;
    }
if(pSale_start_date != null) {
        
        delete pSale_start_date;
        pSale_start_date = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pTag != null) {
        
        delete pTag;
        pTag = null;
    }
if(pVendor != null) {
        
        delete pVendor;
        pVendor = null;
    }
}


SamiCatalogSale*
SamiCatalogSale::fromJson(String* json) {
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
SamiCatalogSale::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDiscount_typeKey = new JsonString(L"discount_type");
        IJsonValue* pDiscount_typeVal = null;
        pJsonObject->GetValue(pDiscount_typeKey, pDiscount_typeVal);
        if(pDiscount_typeVal != null) {
            
            pDiscount_type = new String();
            jsonToValue(pDiscount_type, pDiscount_typeVal, L"String", L"String");
        }
        delete pDiscount_typeKey;
JsonString* pDiscount_valueKey = new JsonString(L"discount_value");
        IJsonValue* pDiscount_valueVal = null;
        pJsonObject->GetValue(pDiscount_valueKey, pDiscount_valueVal);
        if(pDiscount_valueVal != null) {
            
            pDiscount_value = new Double();
            jsonToValue(pDiscount_value, pDiscount_valueVal, L"Double", L"Double");
        }
        delete pDiscount_valueKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pItemKey = new JsonString(L"item");
        IJsonValue* pItemVal = null;
        pJsonObject->GetValue(pItemKey, pItemVal);
        if(pItemVal != null) {
            
            pItem = new Integer();
            jsonToValue(pItem, pItemVal, L"Integer", L"Integer");
        }
        delete pItemKey;
JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pSale_end_dateKey = new JsonString(L"sale_end_date");
        IJsonValue* pSale_end_dateVal = null;
        pJsonObject->GetValue(pSale_end_dateKey, pSale_end_dateVal);
        if(pSale_end_dateVal != null) {
            
            pSale_end_date = new Long();
            jsonToValue(pSale_end_date, pSale_end_dateVal, L"Long", L"Long");
        }
        delete pSale_end_dateKey;
JsonString* pSale_start_dateKey = new JsonString(L"sale_start_date");
        IJsonValue* pSale_start_dateVal = null;
        pJsonObject->GetValue(pSale_start_dateKey, pSale_start_dateVal);
        if(pSale_start_dateVal != null) {
            
            pSale_start_date = new Long();
            jsonToValue(pSale_start_date, pSale_start_dateVal, L"Long", L"Long");
        }
        delete pSale_start_dateKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pTagKey = new JsonString(L"tag");
        IJsonValue* pTagVal = null;
        pJsonObject->GetValue(pTagKey, pTagVal);
        if(pTagVal != null) {
            
            pTag = new String();
            jsonToValue(pTag, pTagVal, L"String", L"String");
        }
        delete pTagKey;
JsonString* pVendorKey = new JsonString(L"vendor");
        IJsonValue* pVendorVal = null;
        pJsonObject->GetValue(pVendorKey, pVendorVal);
        if(pVendorVal != null) {
            
            pVendor = new Integer();
            jsonToValue(pVendor, pVendorVal, L"Integer", L"Integer");
        }
        delete pVendorKey;
    }
}

SamiCatalogSale::SamiCatalogSale(String* json) {
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
SamiCatalogSale::asJson ()
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
SamiCatalogSale::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDiscount_typeKey = new JsonString(L"discount_type");
    pJsonObject->Add(pDiscount_typeKey, toJson(getPDiscountType(), "String", ""));

    JsonString *pDiscount_valueKey = new JsonString(L"discount_value");
    pJsonObject->Add(pDiscount_valueKey, toJson(getPDiscountValue(), "Double", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pItemKey = new JsonString(L"item");
    pJsonObject->Add(pItemKey, toJson(getPItem(), "Integer", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pSale_end_dateKey = new JsonString(L"sale_end_date");
    pJsonObject->Add(pSale_end_dateKey, toJson(getPSaleEndDate(), "Long", ""));

    JsonString *pSale_start_dateKey = new JsonString(L"sale_start_date");
    pJsonObject->Add(pSale_start_dateKey, toJson(getPSaleStartDate(), "Long", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pTagKey = new JsonString(L"tag");
    pJsonObject->Add(pTagKey, toJson(getPTag(), "String", ""));

    JsonString *pVendorKey = new JsonString(L"vendor");
    pJsonObject->Add(pVendorKey, toJson(getPVendor(), "Integer", ""));

    return pJsonObject;
}

String*
SamiCatalogSale::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiCatalogSale::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiCatalogSale::getPDiscountType() {
    return pDiscount_type;
}
void
SamiCatalogSale::setPDiscountType(String* pDiscount_type) {
    this->pDiscount_type = pDiscount_type;
}

Double*
SamiCatalogSale::getPDiscountValue() {
    return pDiscount_value;
}
void
SamiCatalogSale::setPDiscountValue(Double* pDiscount_value) {
    this->pDiscount_value = pDiscount_value;
}

Integer*
SamiCatalogSale::getPId() {
    return pId;
}
void
SamiCatalogSale::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiCatalogSale::getPItem() {
    return pItem;
}
void
SamiCatalogSale::setPItem(Integer* pItem) {
    this->pItem = pItem;
}

String*
SamiCatalogSale::getPLongDescription() {
    return pLong_description;
}
void
SamiCatalogSale::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiCatalogSale::getPName() {
    return pName;
}
void
SamiCatalogSale::setPName(String* pName) {
    this->pName = pName;
}

Long*
SamiCatalogSale::getPSaleEndDate() {
    return pSale_end_date;
}
void
SamiCatalogSale::setPSaleEndDate(Long* pSale_end_date) {
    this->pSale_end_date = pSale_end_date;
}

Long*
SamiCatalogSale::getPSaleStartDate() {
    return pSale_start_date;
}
void
SamiCatalogSale::setPSaleStartDate(Long* pSale_start_date) {
    this->pSale_start_date = pSale_start_date;
}

String*
SamiCatalogSale::getPShortDescription() {
    return pShort_description;
}
void
SamiCatalogSale::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

String*
SamiCatalogSale::getPTag() {
    return pTag;
}
void
SamiCatalogSale::setPTag(String* pTag) {
    this->pTag = pTag;
}

Integer*
SamiCatalogSale::getPVendor() {
    return pVendor;
}
void
SamiCatalogSale::setPVendor(Integer* pVendor) {
    this->pVendor = pVendor;
}



} /* namespace Swagger */

