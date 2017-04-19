
#include "SamiCouponDefinition.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCouponDefinition::SamiCouponDefinition() {
    init();
}

SamiCouponDefinition::~SamiCouponDefinition() {
    this->cleanup();
}

void
SamiCouponDefinition::init() {
    pCode = null;
pDescription = null;
pDiscount_type = null;
pExclusive = null;
pMax_discount = null;
pMax_quantity = null;
pMin_cart_total = null;
pName = null;
pSelf_exclusive = null;
pTarget_item_id = null;
pType = null;
pUnique_key = null;
pValid_for_tags = null;
pValue = null;
pVendor_id = null;
}

void
SamiCouponDefinition::cleanup() {
    if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pDiscount_type != null) {
        
        delete pDiscount_type;
        pDiscount_type = null;
    }
if(pExclusive != null) {
        
        delete pExclusive;
        pExclusive = null;
    }
if(pMax_discount != null) {
        
        delete pMax_discount;
        pMax_discount = null;
    }
if(pMax_quantity != null) {
        
        delete pMax_quantity;
        pMax_quantity = null;
    }
if(pMin_cart_total != null) {
        
        delete pMin_cart_total;
        pMin_cart_total = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pSelf_exclusive != null) {
        
        delete pSelf_exclusive;
        pSelf_exclusive = null;
    }
if(pTarget_item_id != null) {
        
        delete pTarget_item_id;
        pTarget_item_id = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pUnique_key != null) {
        
        delete pUnique_key;
        pUnique_key = null;
    }
if(pValid_for_tags != null) {
        pValid_for_tags->RemoveAll(true);
        delete pValid_for_tags;
        pValid_for_tags = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
if(pVendor_id != null) {
        
        delete pVendor_id;
        pVendor_id = null;
    }
}


SamiCouponDefinition*
SamiCouponDefinition::fromJson(String* json) {
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
SamiCouponDefinition::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = new String();
            jsonToValue(pCode, pCodeVal, L"String", L"String");
        }
        delete pCodeKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pDiscount_typeKey = new JsonString(L"discount_type");
        IJsonValue* pDiscount_typeVal = null;
        pJsonObject->GetValue(pDiscount_typeKey, pDiscount_typeVal);
        if(pDiscount_typeVal != null) {
            
            pDiscount_type = new String();
            jsonToValue(pDiscount_type, pDiscount_typeVal, L"String", L"String");
        }
        delete pDiscount_typeKey;
JsonString* pExclusiveKey = new JsonString(L"exclusive");
        IJsonValue* pExclusiveVal = null;
        pJsonObject->GetValue(pExclusiveKey, pExclusiveVal);
        if(pExclusiveVal != null) {
            
            pExclusive = new Boolean(false);
            jsonToValue(pExclusive, pExclusiveVal, L"Boolean", L"Boolean");
        }
        delete pExclusiveKey;
JsonString* pMax_discountKey = new JsonString(L"max_discount");
        IJsonValue* pMax_discountVal = null;
        pJsonObject->GetValue(pMax_discountKey, pMax_discountVal);
        if(pMax_discountVal != null) {
            
            pMax_discount = new Double();
            jsonToValue(pMax_discount, pMax_discountVal, L"Double", L"Double");
        }
        delete pMax_discountKey;
JsonString* pMax_quantityKey = new JsonString(L"max_quantity");
        IJsonValue* pMax_quantityVal = null;
        pJsonObject->GetValue(pMax_quantityKey, pMax_quantityVal);
        if(pMax_quantityVal != null) {
            
            pMax_quantity = new Integer();
            jsonToValue(pMax_quantity, pMax_quantityVal, L"Integer", L"Integer");
        }
        delete pMax_quantityKey;
JsonString* pMin_cart_totalKey = new JsonString(L"min_cart_total");
        IJsonValue* pMin_cart_totalVal = null;
        pJsonObject->GetValue(pMin_cart_totalKey, pMin_cart_totalVal);
        if(pMin_cart_totalVal != null) {
            
            pMin_cart_total = new Double();
            jsonToValue(pMin_cart_total, pMin_cart_totalVal, L"Double", L"Double");
        }
        delete pMin_cart_totalKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pSelf_exclusiveKey = new JsonString(L"self_exclusive");
        IJsonValue* pSelf_exclusiveVal = null;
        pJsonObject->GetValue(pSelf_exclusiveKey, pSelf_exclusiveVal);
        if(pSelf_exclusiveVal != null) {
            
            pSelf_exclusive = new Boolean(false);
            jsonToValue(pSelf_exclusive, pSelf_exclusiveVal, L"Boolean", L"Boolean");
        }
        delete pSelf_exclusiveKey;
JsonString* pTarget_item_idKey = new JsonString(L"target_item_id");
        IJsonValue* pTarget_item_idVal = null;
        pJsonObject->GetValue(pTarget_item_idKey, pTarget_item_idVal);
        if(pTarget_item_idVal != null) {
            
            pTarget_item_id = new Integer();
            jsonToValue(pTarget_item_id, pTarget_item_idVal, L"Integer", L"Integer");
        }
        delete pTarget_item_idKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pUnique_keyKey = new JsonString(L"unique_key");
        IJsonValue* pUnique_keyVal = null;
        pJsonObject->GetValue(pUnique_keyKey, pUnique_keyVal);
        if(pUnique_keyVal != null) {
            
            pUnique_key = new String();
            jsonToValue(pUnique_key, pUnique_keyVal, L"String", L"String");
        }
        delete pUnique_keyKey;
JsonString* pValid_for_tagsKey = new JsonString(L"valid_for_tags");
        IJsonValue* pValid_for_tagsVal = null;
        pJsonObject->GetValue(pValid_for_tagsKey, pValid_for_tagsVal);
        if(pValid_for_tagsVal != null) {
            pValid_for_tags = new ArrayList();
            
            jsonToValue(pValid_for_tags, pValid_for_tagsVal, L"IList", L"String");
        }
        delete pValid_for_tagsKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
JsonString* pVendor_idKey = new JsonString(L"vendor_id");
        IJsonValue* pVendor_idVal = null;
        pJsonObject->GetValue(pVendor_idKey, pVendor_idVal);
        if(pVendor_idVal != null) {
            
            pVendor_id = new Integer();
            jsonToValue(pVendor_id, pVendor_idVal, L"Integer", L"Integer");
        }
        delete pVendor_idKey;
    }
}

SamiCouponDefinition::SamiCouponDefinition(String* json) {
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
SamiCouponDefinition::asJson ()
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
SamiCouponDefinition::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pDiscount_typeKey = new JsonString(L"discount_type");
    pJsonObject->Add(pDiscount_typeKey, toJson(getPDiscountType(), "String", ""));

    JsonString *pExclusiveKey = new JsonString(L"exclusive");
    pJsonObject->Add(pExclusiveKey, toJson(getPExclusive(), "Boolean", ""));

    JsonString *pMax_discountKey = new JsonString(L"max_discount");
    pJsonObject->Add(pMax_discountKey, toJson(getPMaxDiscount(), "Double", ""));

    JsonString *pMax_quantityKey = new JsonString(L"max_quantity");
    pJsonObject->Add(pMax_quantityKey, toJson(getPMaxQuantity(), "Integer", ""));

    JsonString *pMin_cart_totalKey = new JsonString(L"min_cart_total");
    pJsonObject->Add(pMin_cart_totalKey, toJson(getPMinCartTotal(), "Double", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pSelf_exclusiveKey = new JsonString(L"self_exclusive");
    pJsonObject->Add(pSelf_exclusiveKey, toJson(getPSelfExclusive(), "Boolean", ""));

    JsonString *pTarget_item_idKey = new JsonString(L"target_item_id");
    pJsonObject->Add(pTarget_item_idKey, toJson(getPTargetItemId(), "Integer", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pValid_for_tagsKey = new JsonString(L"valid_for_tags");
    pJsonObject->Add(pValid_for_tagsKey, toJson(getPValidForTags(), "String", "array"));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiCouponDefinition::getPCode() {
    return pCode;
}
void
SamiCouponDefinition::setPCode(String* pCode) {
    this->pCode = pCode;
}

String*
SamiCouponDefinition::getPDescription() {
    return pDescription;
}
void
SamiCouponDefinition::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiCouponDefinition::getPDiscountType() {
    return pDiscount_type;
}
void
SamiCouponDefinition::setPDiscountType(String* pDiscount_type) {
    this->pDiscount_type = pDiscount_type;
}

Boolean*
SamiCouponDefinition::getPExclusive() {
    return pExclusive;
}
void
SamiCouponDefinition::setPExclusive(Boolean* pExclusive) {
    this->pExclusive = pExclusive;
}

Double*
SamiCouponDefinition::getPMaxDiscount() {
    return pMax_discount;
}
void
SamiCouponDefinition::setPMaxDiscount(Double* pMax_discount) {
    this->pMax_discount = pMax_discount;
}

Integer*
SamiCouponDefinition::getPMaxQuantity() {
    return pMax_quantity;
}
void
SamiCouponDefinition::setPMaxQuantity(Integer* pMax_quantity) {
    this->pMax_quantity = pMax_quantity;
}

Double*
SamiCouponDefinition::getPMinCartTotal() {
    return pMin_cart_total;
}
void
SamiCouponDefinition::setPMinCartTotal(Double* pMin_cart_total) {
    this->pMin_cart_total = pMin_cart_total;
}

String*
SamiCouponDefinition::getPName() {
    return pName;
}
void
SamiCouponDefinition::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiCouponDefinition::getPSelfExclusive() {
    return pSelf_exclusive;
}
void
SamiCouponDefinition::setPSelfExclusive(Boolean* pSelf_exclusive) {
    this->pSelf_exclusive = pSelf_exclusive;
}

Integer*
SamiCouponDefinition::getPTargetItemId() {
    return pTarget_item_id;
}
void
SamiCouponDefinition::setPTargetItemId(Integer* pTarget_item_id) {
    this->pTarget_item_id = pTarget_item_id;
}

String*
SamiCouponDefinition::getPType() {
    return pType;
}
void
SamiCouponDefinition::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiCouponDefinition::getPUniqueKey() {
    return pUnique_key;
}
void
SamiCouponDefinition::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

IList*
SamiCouponDefinition::getPValidForTags() {
    return pValid_for_tags;
}
void
SamiCouponDefinition::setPValidForTags(IList* pValid_for_tags) {
    this->pValid_for_tags = pValid_for_tags;
}

Double*
SamiCouponDefinition::getPValue() {
    return pValue;
}
void
SamiCouponDefinition::setPValue(Double* pValue) {
    this->pValue = pValue;
}

Integer*
SamiCouponDefinition::getPVendorId() {
    return pVendor_id;
}
void
SamiCouponDefinition::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}



} /* namespace Swagger */

