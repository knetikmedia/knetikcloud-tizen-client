
#include "SamiShippingItem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiShippingItem::SamiShippingItem() {
    init();
}

SamiShippingItem::~SamiShippingItem() {
    this->cleanup();
}

void
SamiShippingItem::init() {
    pAdditional_properties = null;
pBehaviors = null;
pCategory = null;
pCreated_date = null;
pId = null;
pLong_description = null;
pName = null;
pShort_description = null;
pSort = null;
pTags = null;
pTemplate = null;
pType_hint = null;
pUnique_key = null;
pUpdated_date = null;
pDisplayable = null;
pGeo_country_list = null;
pGeo_policy_type = null;
pShipping_tier = null;
pSkus = null;
pStore_end = null;
pStore_start = null;
pVendor_id = null;
pCountries = null;
pMax_tier_total = null;
pTaxable = null;
}

void
SamiShippingItem::cleanup() {
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
if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
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
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pSort != null) {
        
        delete pSort;
        pSort = null;
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
if(pShipping_tier != null) {
        
        delete pShipping_tier;
        pShipping_tier = null;
    }
if(pSkus != null) {
        pSkus->RemoveAll(true);
        delete pSkus;
        pSkus = null;
    }
if(pStore_end != null) {
        
        delete pStore_end;
        pStore_end = null;
    }
if(pStore_start != null) {
        
        delete pStore_start;
        pStore_start = null;
    }
if(pVendor_id != null) {
        
        delete pVendor_id;
        pVendor_id = null;
    }
if(pCountries != null) {
        pCountries->RemoveAll(true);
        delete pCountries;
        pCountries = null;
    }
if(pMax_tier_total != null) {
        
        delete pMax_tier_total;
        pMax_tier_total = null;
    }
if(pTaxable != null) {
        
        delete pTaxable;
        pTaxable = null;
    }
}


SamiShippingItem*
SamiShippingItem::fromJson(String* json) {
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
SamiShippingItem::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = new Integer();
            jsonToValue(pSort, pSortVal, L"Integer", L"Integer");
        }
        delete pSortKey;
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
JsonString* pShipping_tierKey = new JsonString(L"shipping_tier");
        IJsonValue* pShipping_tierVal = null;
        pJsonObject->GetValue(pShipping_tierKey, pShipping_tierVal);
        if(pShipping_tierVal != null) {
            
            pShipping_tier = new Integer();
            jsonToValue(pShipping_tier, pShipping_tierVal, L"Integer", L"Integer");
        }
        delete pShipping_tierKey;
JsonString* pSkusKey = new JsonString(L"skus");
        IJsonValue* pSkusVal = null;
        pJsonObject->GetValue(pSkusKey, pSkusVal);
        if(pSkusVal != null) {
            pSkus = new ArrayList();
            
            jsonToValue(pSkus, pSkusVal, L"IList", L"SamiSku");
        }
        delete pSkusKey;
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
JsonString* pVendor_idKey = new JsonString(L"vendor_id");
        IJsonValue* pVendor_idVal = null;
        pJsonObject->GetValue(pVendor_idKey, pVendor_idVal);
        if(pVendor_idVal != null) {
            
            pVendor_id = new Integer();
            jsonToValue(pVendor_id, pVendor_idVal, L"Integer", L"Integer");
        }
        delete pVendor_idKey;
JsonString* pCountriesKey = new JsonString(L"countries");
        IJsonValue* pCountriesVal = null;
        pJsonObject->GetValue(pCountriesKey, pCountriesVal);
        if(pCountriesVal != null) {
            pCountries = new ArrayList();
            
            jsonToValue(pCountries, pCountriesVal, L"IList", L"String");
        }
        delete pCountriesKey;
JsonString* pMax_tier_totalKey = new JsonString(L"max_tier_total");
        IJsonValue* pMax_tier_totalVal = null;
        pJsonObject->GetValue(pMax_tier_totalKey, pMax_tier_totalVal);
        if(pMax_tier_totalVal != null) {
            
            pMax_tier_total = new Integer();
            jsonToValue(pMax_tier_total, pMax_tier_totalVal, L"Integer", L"Integer");
        }
        delete pMax_tier_totalKey;
JsonString* pTaxableKey = new JsonString(L"taxable");
        IJsonValue* pTaxableVal = null;
        pJsonObject->GetValue(pTaxableKey, pTaxableVal);
        if(pTaxableVal != null) {
            
            pTaxable = new Boolean(false);
            jsonToValue(pTaxable, pTaxableVal, L"Boolean", L"Boolean");
        }
        delete pTaxableKey;
    }
}

SamiShippingItem::SamiShippingItem(String* json) {
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
SamiShippingItem::asJson ()
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
SamiShippingItem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pBehaviorsKey = new JsonString(L"behaviors");
    pJsonObject->Add(pBehaviorsKey, toJson(getPBehaviors(), "SamiBehavior", "array"));

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "Integer", ""));

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

    JsonString *pDisplayableKey = new JsonString(L"displayable");
    pJsonObject->Add(pDisplayableKey, toJson(getPDisplayable(), "Boolean", ""));

    JsonString *pGeo_country_listKey = new JsonString(L"geo_country_list");
    pJsonObject->Add(pGeo_country_listKey, toJson(getPGeoCountryList(), "String", "array"));

    JsonString *pGeo_policy_typeKey = new JsonString(L"geo_policy_type");
    pJsonObject->Add(pGeo_policy_typeKey, toJson(getPGeoPolicyType(), "String", ""));

    JsonString *pShipping_tierKey = new JsonString(L"shipping_tier");
    pJsonObject->Add(pShipping_tierKey, toJson(getPShippingTier(), "Integer", ""));

    JsonString *pSkusKey = new JsonString(L"skus");
    pJsonObject->Add(pSkusKey, toJson(getPSkus(), "SamiSku", "array"));

    JsonString *pStore_endKey = new JsonString(L"store_end");
    pJsonObject->Add(pStore_endKey, toJson(getPStoreEnd(), "Long", ""));

    JsonString *pStore_startKey = new JsonString(L"store_start");
    pJsonObject->Add(pStore_startKey, toJson(getPStoreStart(), "Long", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    JsonString *pCountriesKey = new JsonString(L"countries");
    pJsonObject->Add(pCountriesKey, toJson(getPCountries(), "String", "array"));

    JsonString *pMax_tier_totalKey = new JsonString(L"max_tier_total");
    pJsonObject->Add(pMax_tier_totalKey, toJson(getPMaxTierTotal(), "Integer", ""));

    JsonString *pTaxableKey = new JsonString(L"taxable");
    pJsonObject->Add(pTaxableKey, toJson(getPTaxable(), "Boolean", ""));

    return pJsonObject;
}

HashMap*
SamiShippingItem::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiShippingItem::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

IList*
SamiShippingItem::getPBehaviors() {
    return pBehaviors;
}
void
SamiShippingItem::setPBehaviors(IList* pBehaviors) {
    this->pBehaviors = pBehaviors;
}

String*
SamiShippingItem::getPCategory() {
    return pCategory;
}
void
SamiShippingItem::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

Long*
SamiShippingItem::getPCreatedDate() {
    return pCreated_date;
}
void
SamiShippingItem::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Integer*
SamiShippingItem::getPId() {
    return pId;
}
void
SamiShippingItem::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiShippingItem::getPLongDescription() {
    return pLong_description;
}
void
SamiShippingItem::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiShippingItem::getPName() {
    return pName;
}
void
SamiShippingItem::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiShippingItem::getPShortDescription() {
    return pShort_description;
}
void
SamiShippingItem::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Integer*
SamiShippingItem::getPSort() {
    return pSort;
}
void
SamiShippingItem::setPSort(Integer* pSort) {
    this->pSort = pSort;
}

IList*
SamiShippingItem::getPTags() {
    return pTags;
}
void
SamiShippingItem::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiShippingItem::getPTemplate() {
    return pTemplate;
}
void
SamiShippingItem::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiShippingItem::getPTypeHint() {
    return pType_hint;
}
void
SamiShippingItem::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

String*
SamiShippingItem::getPUniqueKey() {
    return pUnique_key;
}
void
SamiShippingItem::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Long*
SamiShippingItem::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiShippingItem::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

Boolean*
SamiShippingItem::getPDisplayable() {
    return pDisplayable;
}
void
SamiShippingItem::setPDisplayable(Boolean* pDisplayable) {
    this->pDisplayable = pDisplayable;
}

IList*
SamiShippingItem::getPGeoCountryList() {
    return pGeo_country_list;
}
void
SamiShippingItem::setPGeoCountryList(IList* pGeo_country_list) {
    this->pGeo_country_list = pGeo_country_list;
}

String*
SamiShippingItem::getPGeoPolicyType() {
    return pGeo_policy_type;
}
void
SamiShippingItem::setPGeoPolicyType(String* pGeo_policy_type) {
    this->pGeo_policy_type = pGeo_policy_type;
}

Integer*
SamiShippingItem::getPShippingTier() {
    return pShipping_tier;
}
void
SamiShippingItem::setPShippingTier(Integer* pShipping_tier) {
    this->pShipping_tier = pShipping_tier;
}

IList*
SamiShippingItem::getPSkus() {
    return pSkus;
}
void
SamiShippingItem::setPSkus(IList* pSkus) {
    this->pSkus = pSkus;
}

Long*
SamiShippingItem::getPStoreEnd() {
    return pStore_end;
}
void
SamiShippingItem::setPStoreEnd(Long* pStore_end) {
    this->pStore_end = pStore_end;
}

Long*
SamiShippingItem::getPStoreStart() {
    return pStore_start;
}
void
SamiShippingItem::setPStoreStart(Long* pStore_start) {
    this->pStore_start = pStore_start;
}

Integer*
SamiShippingItem::getPVendorId() {
    return pVendor_id;
}
void
SamiShippingItem::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}

IList*
SamiShippingItem::getPCountries() {
    return pCountries;
}
void
SamiShippingItem::setPCountries(IList* pCountries) {
    this->pCountries = pCountries;
}

Integer*
SamiShippingItem::getPMaxTierTotal() {
    return pMax_tier_total;
}
void
SamiShippingItem::setPMaxTierTotal(Integer* pMax_tier_total) {
    this->pMax_tier_total = pMax_tier_total;
}

Boolean*
SamiShippingItem::getPTaxable() {
    return pTaxable;
}
void
SamiShippingItem::setPTaxable(Boolean* pTaxable) {
    this->pTaxable = pTaxable;
}



} /* namespace Swagger */

