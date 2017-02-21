
#include "SamiSubscriptionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSubscriptionResource::SamiSubscriptionResource() {
    init();
}

SamiSubscriptionResource::~SamiSubscriptionResource() {
    this->cleanup();
}

void
SamiSubscriptionResource::init() {
    pAdditional_properties = null;
pAvailability = null;
pCategory = null;
pConsolidation_day_of_month = null;
pCreated_date = null;
pGeo_country_list = null;
pGeo_policy_type = null;
pId = null;
pLong_description = null;
pName = null;
pPlans = null;
pShort_description = null;
pSort = null;
pStore_end = null;
pStore_start = null;
pTags = null;
pTemplate = null;
pUnique_key = null;
pUpdated_date = null;
pVendor_id = null;
}

void
SamiSubscriptionResource::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pAvailability != null) {
        
        delete pAvailability;
        pAvailability = null;
    }
if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pConsolidation_day_of_month != null) {
        
        delete pConsolidation_day_of_month;
        pConsolidation_day_of_month = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
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
if(pPlans != null) {
        pPlans->RemoveAll(true);
        delete pPlans;
        pPlans = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
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


SamiSubscriptionResource*
SamiSubscriptionResource::fromJson(String* json) {
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
SamiSubscriptionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pAvailabilityKey = new JsonString(L"availability");
        IJsonValue* pAvailabilityVal = null;
        pJsonObject->GetValue(pAvailabilityKey, pAvailabilityVal);
        if(pAvailabilityVal != null) {
            
            pAvailability = new String();
            jsonToValue(pAvailability, pAvailabilityVal, L"String", L"String");
        }
        delete pAvailabilityKey;
JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
JsonString* pConsolidation_day_of_monthKey = new JsonString(L"consolidation_day_of_month");
        IJsonValue* pConsolidation_day_of_monthVal = null;
        pJsonObject->GetValue(pConsolidation_day_of_monthKey, pConsolidation_day_of_monthVal);
        if(pConsolidation_day_of_monthVal != null) {
            
            pConsolidation_day_of_month = new Integer();
            jsonToValue(pConsolidation_day_of_month, pConsolidation_day_of_monthVal, L"Integer", L"Integer");
        }
        delete pConsolidation_day_of_monthKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
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
JsonString* pPlansKey = new JsonString(L"plans");
        IJsonValue* pPlansVal = null;
        pJsonObject->GetValue(pPlansKey, pPlansVal);
        if(pPlansVal != null) {
            pPlans = new ArrayList();
            
            jsonToValue(pPlans, pPlansVal, L"IList", L"SamiSubscriptionPlanResource");
        }
        delete pPlansKey;
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

SamiSubscriptionResource::SamiSubscriptionResource(String* json) {
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
SamiSubscriptionResource::asJson ()
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
SamiSubscriptionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pAvailabilityKey = new JsonString(L"availability");
    pJsonObject->Add(pAvailabilityKey, toJson(getPAvailability(), "String", ""));

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    JsonString *pConsolidation_day_of_monthKey = new JsonString(L"consolidation_day_of_month");
    pJsonObject->Add(pConsolidation_day_of_monthKey, toJson(getPConsolidationDayOfMonth(), "Integer", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

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

    JsonString *pPlansKey = new JsonString(L"plans");
    pJsonObject->Add(pPlansKey, toJson(getPPlans(), "SamiSubscriptionPlanResource", "array"));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

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

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    return pJsonObject;
}

HashMap*
SamiSubscriptionResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiSubscriptionResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiSubscriptionResource::getPAvailability() {
    return pAvailability;
}
void
SamiSubscriptionResource::setPAvailability(String* pAvailability) {
    this->pAvailability = pAvailability;
}

String*
SamiSubscriptionResource::getPCategory() {
    return pCategory;
}
void
SamiSubscriptionResource::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

Integer*
SamiSubscriptionResource::getPConsolidationDayOfMonth() {
    return pConsolidation_day_of_month;
}
void
SamiSubscriptionResource::setPConsolidationDayOfMonth(Integer* pConsolidation_day_of_month) {
    this->pConsolidation_day_of_month = pConsolidation_day_of_month;
}

Long*
SamiSubscriptionResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiSubscriptionResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

IList*
SamiSubscriptionResource::getPGeoCountryList() {
    return pGeo_country_list;
}
void
SamiSubscriptionResource::setPGeoCountryList(IList* pGeo_country_list) {
    this->pGeo_country_list = pGeo_country_list;
}

String*
SamiSubscriptionResource::getPGeoPolicyType() {
    return pGeo_policy_type;
}
void
SamiSubscriptionResource::setPGeoPolicyType(String* pGeo_policy_type) {
    this->pGeo_policy_type = pGeo_policy_type;
}

Integer*
SamiSubscriptionResource::getPId() {
    return pId;
}
void
SamiSubscriptionResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiSubscriptionResource::getPLongDescription() {
    return pLong_description;
}
void
SamiSubscriptionResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiSubscriptionResource::getPName() {
    return pName;
}
void
SamiSubscriptionResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiSubscriptionResource::getPPlans() {
    return pPlans;
}
void
SamiSubscriptionResource::setPPlans(IList* pPlans) {
    this->pPlans = pPlans;
}

String*
SamiSubscriptionResource::getPShortDescription() {
    return pShort_description;
}
void
SamiSubscriptionResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Integer*
SamiSubscriptionResource::getPSort() {
    return pSort;
}
void
SamiSubscriptionResource::setPSort(Integer* pSort) {
    this->pSort = pSort;
}

Long*
SamiSubscriptionResource::getPStoreEnd() {
    return pStore_end;
}
void
SamiSubscriptionResource::setPStoreEnd(Long* pStore_end) {
    this->pStore_end = pStore_end;
}

Long*
SamiSubscriptionResource::getPStoreStart() {
    return pStore_start;
}
void
SamiSubscriptionResource::setPStoreStart(Long* pStore_start) {
    this->pStore_start = pStore_start;
}

IList*
SamiSubscriptionResource::getPTags() {
    return pTags;
}
void
SamiSubscriptionResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiSubscriptionResource::getPTemplate() {
    return pTemplate;
}
void
SamiSubscriptionResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiSubscriptionResource::getPUniqueKey() {
    return pUnique_key;
}
void
SamiSubscriptionResource::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Long*
SamiSubscriptionResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiSubscriptionResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

Integer*
SamiSubscriptionResource::getPVendorId() {
    return pVendor_id;
}
void
SamiSubscriptionResource::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}



} /* namespace Swagger */

