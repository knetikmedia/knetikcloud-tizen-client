
#include "SamiBundleItem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBundleItem::SamiBundleItem() {
    init();
}

SamiBundleItem::~SamiBundleItem() {
    this->cleanup();
}

void
SamiBundleItem::init() {
    pAdditional_properties = null;
pBehaviors = null;
pBundled_skus = null;
pCategory = null;
pCreated_date = null;
pDisplayable = null;
pGeo_country_list = null;
pGeo_policy_type = null;
pId = null;
pLong_description = null;
pName = null;
pShipping_tier = null;
pShort_description = null;
pSkus = null;
pSort = null;
pStore_end = null;
pStore_start = null;
pTags = null;
pTemplate = null;
pType_hint = null;
pUnique_key = null;
pUpdated_date = null;
pVendor_id = null;
}

void
SamiBundleItem::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pBehaviors != null) {
        pBehaviors->RemoveAll(true);
        delete pBehaviors;
        pBehaviors = null;
    }
if(pBundled_skus != null) {
        pBundled_skus->RemoveAll(true);
        delete pBundled_skus;
        pBundled_skus = null;
    }
if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDisplayable != null) {
        
        delete pDisplayable;
        pDisplayable = null;
    }
if(pGeo_country_list != null) {
        pGeo_country_list->RemoveAll(true);
        delete pGeo_country_list;
        pGeo_country_list = null;
    }
if(pGeo_policy_type != null) {
        
        delete pGeo_policy_type;
        pGeo_policy_type = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pShipping_tier != null) {
        
        delete pShipping_tier;
        pShipping_tier = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pSkus != null) {
        pSkus->RemoveAll(true);
        delete pSkus;
        pSkus = null;
    }
if(pSort != null) {
        
        delete pSort;
        pSort = null;
    }
if(pStore_end != null) {
        
        delete pStore_end;
        pStore_end = null;
    }
if(pStore_start != null) {
        
        delete pStore_start;
        pStore_start = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pUnique_key != null) {
        
        delete pUnique_key;
        pUnique_key = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pVendor_id != null) {
        
        delete pVendor_id;
        pVendor_id = null;
    }
}


SamiBundleItem*
SamiBundleItem::fromJson(String* json) {
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
SamiBundleItem::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pBehaviorsKey = new JsonString(L"behaviors");
        IJsonValue* pBehaviorsVal = null;
        pJsonObject->GetValue(pBehaviorsKey, pBehaviorsVal);
        if(pBehaviorsVal != null) {
            pBehaviors = new ArrayList();
            
            jsonToValue(pBehaviors, pBehaviorsVal, L"IList", L"SamiBehavior");
        }
        delete pBehaviorsKey;
JsonString* pBundled_skusKey = new JsonString(L"bundled_skus");
        IJsonValue* pBundled_skusVal = null;
        pJsonObject->GetValue(pBundled_skusKey, pBundled_skusVal);
        if(pBundled_skusVal != null) {
            pBundled_skus = new ArrayList();
            
            jsonToValue(pBundled_skus, pBundled_skusVal, L"IList", L"SamiBundledSku");
        }
        delete pBundled_skusKey;
JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pDisplayableKey = new JsonString(L"displayable");
        IJsonValue* pDisplayableVal = null;
        pJsonObject->GetValue(pDisplayableKey, pDisplayableVal);
        if(pDisplayableVal != null) {
            
            pDisplayable = new Boolean(false);
            jsonToValue(pDisplayable, pDisplayableVal, L"Boolean", L"Boolean");
        }
        delete pDisplayableKey;
JsonString* pGeo_country_listKey = new JsonString(L"geo_country_list");
        IJsonValue* pGeo_country_listVal = null;
        pJsonObject->GetValue(pGeo_country_listKey, pGeo_country_listVal);
        if(pGeo_country_listVal != null) {
            pGeo_country_list = new ArrayList();
            
            jsonToValue(pGeo_country_list, pGeo_country_listVal, L"IList", L"String");
        }
        delete pGeo_country_listKey;
JsonString* pGeo_policy_typeKey = new JsonString(L"geo_policy_type");
        IJsonValue* pGeo_policy_typeVal = null;
        pJsonObject->GetValue(pGeo_policy_typeKey, pGeo_policy_typeVal);
        if(pGeo_policy_typeVal != null) {
            
            pGeo_policy_type = new String();
            jsonToValue(pGeo_policy_type, pGeo_policy_typeVal, L"String", L"String");
        }
        delete pGeo_policy_typeKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
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
JsonString* pShipping_tierKey = new JsonString(L"shipping_tier");
        IJsonValue* pShipping_tierVal = null;
        pJsonObject->GetValue(pShipping_tierKey, pShipping_tierVal);
        if(pShipping_tierVal != null) {
            
            pShipping_tier = new Integer();
            jsonToValue(pShipping_tier, pShipping_tierVal, L"Integer", L"Integer");
        }
        delete pShipping_tierKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pSkusKey = new JsonString(L"skus");
        IJsonValue* pSkusVal = null;
        pJsonObject->GetValue(pSkusKey, pSkusVal);
        if(pSkusVal != null) {
            pSkus = new ArrayList();
            
            jsonToValue(pSkus, pSkusVal, L"IList", L"SamiSku");
        }
        delete pSkusKey;
JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = new Integer();
            jsonToValue(pSort, pSortVal, L"Integer", L"Integer");
        }
        delete pSortKey;
JsonString* pStore_endKey = new JsonString(L"store_end");
        IJsonValue* pStore_endVal = null;
        pJsonObject->GetValue(pStore_endKey, pStore_endVal);
        if(pStore_endVal != null) {
            
            pStore_end = new Long();
            jsonToValue(pStore_end, pStore_endVal, L"Long", L"Long");
        }
        delete pStore_endKey;
JsonString* pStore_startKey = new JsonString(L"store_start");
        IJsonValue* pStore_startVal = null;
        pJsonObject->GetValue(pStore_startKey, pStore_startVal);
        if(pStore_startVal != null) {
            
            pStore_start = new Long();
            jsonToValue(pStore_start, pStore_startVal, L"Long", L"Long");
        }
        delete pStore_startKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new String();
            jsonToValue(pTemplate, pTemplateVal, L"String", L"String");
        }
        delete pTemplateKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pUnique_keyKey = new JsonString(L"unique_key");
        IJsonValue* pUnique_keyVal = null;
        pJsonObject->GetValue(pUnique_keyKey, pUnique_keyVal);
        if(pUnique_keyVal != null) {
            
            pUnique_key = new String();
            jsonToValue(pUnique_key, pUnique_keyVal, L"String", L"String");
        }
        delete pUnique_keyKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
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

SamiBundleItem::SamiBundleItem(String* json) {
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
SamiBundleItem::asJson ()
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
SamiBundleItem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pBehaviorsKey = new JsonString(L"behaviors");
    pJsonObject->Add(pBehaviorsKey, toJson(getPBehaviors(), "SamiBehavior", "array"));

    JsonString *pBundled_skusKey = new JsonString(L"bundled_skus");
    pJsonObject->Add(pBundled_skusKey, toJson(getPBundledSkus(), "SamiBundledSku", "array"));

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDisplayableKey = new JsonString(L"displayable");
    pJsonObject->Add(pDisplayableKey, toJson(getPDisplayable(), "Boolean", ""));

    JsonString *pGeo_country_listKey = new JsonString(L"geo_country_list");
    pJsonObject->Add(pGeo_country_listKey, toJson(getPGeoCountryList(), "String", "array"));

    JsonString *pGeo_policy_typeKey = new JsonString(L"geo_policy_type");
    pJsonObject->Add(pGeo_policy_typeKey, toJson(getPGeoPolicyType(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pShipping_tierKey = new JsonString(L"shipping_tier");
    pJsonObject->Add(pShipping_tierKey, toJson(getPShippingTier(), "Integer", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pSkusKey = new JsonString(L"skus");
    pJsonObject->Add(pSkusKey, toJson(getPSkus(), "SamiSku", "array"));

    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "Integer", ""));

    JsonString *pStore_endKey = new JsonString(L"store_end");
    pJsonObject->Add(pStore_endKey, toJson(getPStoreEnd(), "Long", ""));

    JsonString *pStore_startKey = new JsonString(L"store_start");
    pJsonObject->Add(pStore_startKey, toJson(getPStoreStart(), "Long", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    return pJsonObject;
}

HashMap*
SamiBundleItem::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiBundleItem::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

IList*
SamiBundleItem::getPBehaviors() {
    return pBehaviors;
}
void
SamiBundleItem::setPBehaviors(IList* pBehaviors) {
    this->pBehaviors = pBehaviors;
}

IList*
SamiBundleItem::getPBundledSkus() {
    return pBundled_skus;
}
void
SamiBundleItem::setPBundledSkus(IList* pBundled_skus) {
    this->pBundled_skus = pBundled_skus;
}

String*
SamiBundleItem::getPCategory() {
    return pCategory;
}
void
SamiBundleItem::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

Long*
SamiBundleItem::getPCreatedDate() {
    return pCreated_date;
}
void
SamiBundleItem::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Boolean*
SamiBundleItem::getPDisplayable() {
    return pDisplayable;
}
void
SamiBundleItem::setPDisplayable(Boolean* pDisplayable) {
    this->pDisplayable = pDisplayable;
}

IList*
SamiBundleItem::getPGeoCountryList() {
    return pGeo_country_list;
}
void
SamiBundleItem::setPGeoCountryList(IList* pGeo_country_list) {
    this->pGeo_country_list = pGeo_country_list;
}

String*
SamiBundleItem::getPGeoPolicyType() {
    return pGeo_policy_type;
}
void
SamiBundleItem::setPGeoPolicyType(String* pGeo_policy_type) {
    this->pGeo_policy_type = pGeo_policy_type;
}

Integer*
SamiBundleItem::getPId() {
    return pId;
}
void
SamiBundleItem::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiBundleItem::getPLongDescription() {
    return pLong_description;
}
void
SamiBundleItem::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiBundleItem::getPName() {
    return pName;
}
void
SamiBundleItem::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiBundleItem::getPShippingTier() {
    return pShipping_tier;
}
void
SamiBundleItem::setPShippingTier(Integer* pShipping_tier) {
    this->pShipping_tier = pShipping_tier;
}

String*
SamiBundleItem::getPShortDescription() {
    return pShort_description;
}
void
SamiBundleItem::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

IList*
SamiBundleItem::getPSkus() {
    return pSkus;
}
void
SamiBundleItem::setPSkus(IList* pSkus) {
    this->pSkus = pSkus;
}

Integer*
SamiBundleItem::getPSort() {
    return pSort;
}
void
SamiBundleItem::setPSort(Integer* pSort) {
    this->pSort = pSort;
}

Long*
SamiBundleItem::getPStoreEnd() {
    return pStore_end;
}
void
SamiBundleItem::setPStoreEnd(Long* pStore_end) {
    this->pStore_end = pStore_end;
}

Long*
SamiBundleItem::getPStoreStart() {
    return pStore_start;
}
void
SamiBundleItem::setPStoreStart(Long* pStore_start) {
    this->pStore_start = pStore_start;
}

IList*
SamiBundleItem::getPTags() {
    return pTags;
}
void
SamiBundleItem::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiBundleItem::getPTemplate() {
    return pTemplate;
}
void
SamiBundleItem::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiBundleItem::getPTypeHint() {
    return pType_hint;
}
void
SamiBundleItem::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

String*
SamiBundleItem::getPUniqueKey() {
    return pUnique_key;
}
void
SamiBundleItem::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Long*
SamiBundleItem::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiBundleItem::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

Integer*
SamiBundleItem::getPVendorId() {
    return pVendor_id;
}
void
SamiBundleItem::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}



} /* namespace Swagger */

