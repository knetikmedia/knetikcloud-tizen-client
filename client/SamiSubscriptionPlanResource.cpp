
#include "SamiSubscriptionPlanResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSubscriptionPlanResource::SamiSubscriptionPlanResource() {
    init();
}

SamiSubscriptionPlanResource::~SamiSubscriptionPlanResource() {
    this->cleanup();
}

void
SamiSubscriptionPlanResource::init() {
    pAdditional_properties = null;
pBilling_cycle_length = null;
pBilling_cycle_unit = null;
pConsolidated = null;
pCurrency_code = null;
pEnd_date = null;
pFirst_billing_cycle_length = null;
pFirst_billing_cycle_unit = null;
pGrace_period = null;
pId = null;
pInitial_fee = null;
pInitial_sku = null;
pLate_payment_fee = null;
pLate_payment_sku = null;
pLocked = null;
pMax_bill_attempts = null;
pMax_cycles = null;
pMigrate_to_plan = null;
pMin_cycles = null;
pName = null;
pPublished = null;
pReactivation_fee = null;
pReactivation_sku = null;
pRecurring_fee = null;
pRecurring_sku = null;
pStart_date = null;
}

void
SamiSubscriptionPlanResource::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pBilling_cycle_length != null) {
        
        delete pBilling_cycle_length;
        pBilling_cycle_length = null;
    }
if(pBilling_cycle_unit != null) {
        
        delete pBilling_cycle_unit;
        pBilling_cycle_unit = null;
    }
if(pConsolidated != null) {
        
        delete pConsolidated;
        pConsolidated = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pEnd_date != null) {
        
        delete pEnd_date;
        pEnd_date = null;
    }
if(pFirst_billing_cycle_length != null) {
        
        delete pFirst_billing_cycle_length;
        pFirst_billing_cycle_length = null;
    }
if(pFirst_billing_cycle_unit != null) {
        
        delete pFirst_billing_cycle_unit;
        pFirst_billing_cycle_unit = null;
    }
if(pGrace_period != null) {
        
        delete pGrace_period;
        pGrace_period = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInitial_fee != null) {
        
        delete pInitial_fee;
        pInitial_fee = null;
    }
if(pInitial_sku != null) {
        
        delete pInitial_sku;
        pInitial_sku = null;
    }
if(pLate_payment_fee != null) {
        
        delete pLate_payment_fee;
        pLate_payment_fee = null;
    }
if(pLate_payment_sku != null) {
        
        delete pLate_payment_sku;
        pLate_payment_sku = null;
    }
if(pLocked != null) {
        
        delete pLocked;
        pLocked = null;
    }
if(pMax_bill_attempts != null) {
        
        delete pMax_bill_attempts;
        pMax_bill_attempts = null;
    }
if(pMax_cycles != null) {
        
        delete pMax_cycles;
        pMax_cycles = null;
    }
if(pMigrate_to_plan != null) {
        
        delete pMigrate_to_plan;
        pMigrate_to_plan = null;
    }
if(pMin_cycles != null) {
        
        delete pMin_cycles;
        pMin_cycles = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPublished != null) {
        
        delete pPublished;
        pPublished = null;
    }
if(pReactivation_fee != null) {
        
        delete pReactivation_fee;
        pReactivation_fee = null;
    }
if(pReactivation_sku != null) {
        
        delete pReactivation_sku;
        pReactivation_sku = null;
    }
if(pRecurring_fee != null) {
        
        delete pRecurring_fee;
        pRecurring_fee = null;
    }
if(pRecurring_sku != null) {
        
        delete pRecurring_sku;
        pRecurring_sku = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
}


SamiSubscriptionPlanResource*
SamiSubscriptionPlanResource::fromJson(String* json) {
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
SamiSubscriptionPlanResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pBilling_cycle_lengthKey = new JsonString(L"billing_cycle_length");
        IJsonValue* pBilling_cycle_lengthVal = null;
        pJsonObject->GetValue(pBilling_cycle_lengthKey, pBilling_cycle_lengthVal);
        if(pBilling_cycle_lengthVal != null) {
            
            pBilling_cycle_length = new Integer();
            jsonToValue(pBilling_cycle_length, pBilling_cycle_lengthVal, L"Integer", L"Integer");
        }
        delete pBilling_cycle_lengthKey;
JsonString* pBilling_cycle_unitKey = new JsonString(L"billing_cycle_unit");
        IJsonValue* pBilling_cycle_unitVal = null;
        pJsonObject->GetValue(pBilling_cycle_unitKey, pBilling_cycle_unitVal);
        if(pBilling_cycle_unitVal != null) {
            
            pBilling_cycle_unit = new String();
            jsonToValue(pBilling_cycle_unit, pBilling_cycle_unitVal, L"String", L"String");
        }
        delete pBilling_cycle_unitKey;
JsonString* pConsolidatedKey = new JsonString(L"consolidated");
        IJsonValue* pConsolidatedVal = null;
        pJsonObject->GetValue(pConsolidatedKey, pConsolidatedVal);
        if(pConsolidatedVal != null) {
            
            pConsolidated = new Boolean(false);
            jsonToValue(pConsolidated, pConsolidatedVal, L"Boolean", L"Boolean");
        }
        delete pConsolidatedKey;
JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pEnd_dateKey = new JsonString(L"end_date");
        IJsonValue* pEnd_dateVal = null;
        pJsonObject->GetValue(pEnd_dateKey, pEnd_dateVal);
        if(pEnd_dateVal != null) {
            
            pEnd_date = new Long();
            jsonToValue(pEnd_date, pEnd_dateVal, L"Long", L"Long");
        }
        delete pEnd_dateKey;
JsonString* pFirst_billing_cycle_lengthKey = new JsonString(L"first_billing_cycle_length");
        IJsonValue* pFirst_billing_cycle_lengthVal = null;
        pJsonObject->GetValue(pFirst_billing_cycle_lengthKey, pFirst_billing_cycle_lengthVal);
        if(pFirst_billing_cycle_lengthVal != null) {
            
            pFirst_billing_cycle_length = new Integer();
            jsonToValue(pFirst_billing_cycle_length, pFirst_billing_cycle_lengthVal, L"Integer", L"Integer");
        }
        delete pFirst_billing_cycle_lengthKey;
JsonString* pFirst_billing_cycle_unitKey = new JsonString(L"first_billing_cycle_unit");
        IJsonValue* pFirst_billing_cycle_unitVal = null;
        pJsonObject->GetValue(pFirst_billing_cycle_unitKey, pFirst_billing_cycle_unitVal);
        if(pFirst_billing_cycle_unitVal != null) {
            
            pFirst_billing_cycle_unit = new String();
            jsonToValue(pFirst_billing_cycle_unit, pFirst_billing_cycle_unitVal, L"String", L"String");
        }
        delete pFirst_billing_cycle_unitKey;
JsonString* pGrace_periodKey = new JsonString(L"grace_period");
        IJsonValue* pGrace_periodVal = null;
        pJsonObject->GetValue(pGrace_periodKey, pGrace_periodVal);
        if(pGrace_periodVal != null) {
            
            pGrace_period = new Integer();
            jsonToValue(pGrace_period, pGrace_periodVal, L"Integer", L"Integer");
        }
        delete pGrace_periodKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pInitial_feeKey = new JsonString(L"initial_fee");
        IJsonValue* pInitial_feeVal = null;
        pJsonObject->GetValue(pInitial_feeKey, pInitial_feeVal);
        if(pInitial_feeVal != null) {
            
            pInitial_fee = new Double();
            jsonToValue(pInitial_fee, pInitial_feeVal, L"Double", L"Double");
        }
        delete pInitial_feeKey;
JsonString* pInitial_skuKey = new JsonString(L"initial_sku");
        IJsonValue* pInitial_skuVal = null;
        pJsonObject->GetValue(pInitial_skuKey, pInitial_skuVal);
        if(pInitial_skuVal != null) {
            
            pInitial_sku = new String();
            jsonToValue(pInitial_sku, pInitial_skuVal, L"String", L"String");
        }
        delete pInitial_skuKey;
JsonString* pLate_payment_feeKey = new JsonString(L"late_payment_fee");
        IJsonValue* pLate_payment_feeVal = null;
        pJsonObject->GetValue(pLate_payment_feeKey, pLate_payment_feeVal);
        if(pLate_payment_feeVal != null) {
            
            pLate_payment_fee = new Double();
            jsonToValue(pLate_payment_fee, pLate_payment_feeVal, L"Double", L"Double");
        }
        delete pLate_payment_feeKey;
JsonString* pLate_payment_skuKey = new JsonString(L"late_payment_sku");
        IJsonValue* pLate_payment_skuVal = null;
        pJsonObject->GetValue(pLate_payment_skuKey, pLate_payment_skuVal);
        if(pLate_payment_skuVal != null) {
            
            pLate_payment_sku = new String();
            jsonToValue(pLate_payment_sku, pLate_payment_skuVal, L"String", L"String");
        }
        delete pLate_payment_skuKey;
JsonString* pLockedKey = new JsonString(L"locked");
        IJsonValue* pLockedVal = null;
        pJsonObject->GetValue(pLockedKey, pLockedVal);
        if(pLockedVal != null) {
            
            pLocked = new Boolean(false);
            jsonToValue(pLocked, pLockedVal, L"Boolean", L"Boolean");
        }
        delete pLockedKey;
JsonString* pMax_bill_attemptsKey = new JsonString(L"max_bill_attempts");
        IJsonValue* pMax_bill_attemptsVal = null;
        pJsonObject->GetValue(pMax_bill_attemptsKey, pMax_bill_attemptsVal);
        if(pMax_bill_attemptsVal != null) {
            
            pMax_bill_attempts = new Integer();
            jsonToValue(pMax_bill_attempts, pMax_bill_attemptsVal, L"Integer", L"Integer");
        }
        delete pMax_bill_attemptsKey;
JsonString* pMax_cyclesKey = new JsonString(L"max_cycles");
        IJsonValue* pMax_cyclesVal = null;
        pJsonObject->GetValue(pMax_cyclesKey, pMax_cyclesVal);
        if(pMax_cyclesVal != null) {
            
            pMax_cycles = new Integer();
            jsonToValue(pMax_cycles, pMax_cyclesVal, L"Integer", L"Integer");
        }
        delete pMax_cyclesKey;
JsonString* pMigrate_to_planKey = new JsonString(L"migrate_to_plan");
        IJsonValue* pMigrate_to_planVal = null;
        pJsonObject->GetValue(pMigrate_to_planKey, pMigrate_to_planVal);
        if(pMigrate_to_planVal != null) {
            
            pMigrate_to_plan = new String();
            jsonToValue(pMigrate_to_plan, pMigrate_to_planVal, L"String", L"String");
        }
        delete pMigrate_to_planKey;
JsonString* pMin_cyclesKey = new JsonString(L"min_cycles");
        IJsonValue* pMin_cyclesVal = null;
        pJsonObject->GetValue(pMin_cyclesKey, pMin_cyclesVal);
        if(pMin_cyclesVal != null) {
            
            pMin_cycles = new Integer();
            jsonToValue(pMin_cycles, pMin_cyclesVal, L"Integer", L"Integer");
        }
        delete pMin_cyclesKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPublishedKey = new JsonString(L"published");
        IJsonValue* pPublishedVal = null;
        pJsonObject->GetValue(pPublishedKey, pPublishedVal);
        if(pPublishedVal != null) {
            
            pPublished = new Boolean(false);
            jsonToValue(pPublished, pPublishedVal, L"Boolean", L"Boolean");
        }
        delete pPublishedKey;
JsonString* pReactivation_feeKey = new JsonString(L"reactivation_fee");
        IJsonValue* pReactivation_feeVal = null;
        pJsonObject->GetValue(pReactivation_feeKey, pReactivation_feeVal);
        if(pReactivation_feeVal != null) {
            
            pReactivation_fee = new Double();
            jsonToValue(pReactivation_fee, pReactivation_feeVal, L"Double", L"Double");
        }
        delete pReactivation_feeKey;
JsonString* pReactivation_skuKey = new JsonString(L"reactivation_sku");
        IJsonValue* pReactivation_skuVal = null;
        pJsonObject->GetValue(pReactivation_skuKey, pReactivation_skuVal);
        if(pReactivation_skuVal != null) {
            
            pReactivation_sku = new String();
            jsonToValue(pReactivation_sku, pReactivation_skuVal, L"String", L"String");
        }
        delete pReactivation_skuKey;
JsonString* pRecurring_feeKey = new JsonString(L"recurring_fee");
        IJsonValue* pRecurring_feeVal = null;
        pJsonObject->GetValue(pRecurring_feeKey, pRecurring_feeVal);
        if(pRecurring_feeVal != null) {
            
            pRecurring_fee = new Double();
            jsonToValue(pRecurring_fee, pRecurring_feeVal, L"Double", L"Double");
        }
        delete pRecurring_feeKey;
JsonString* pRecurring_skuKey = new JsonString(L"recurring_sku");
        IJsonValue* pRecurring_skuVal = null;
        pJsonObject->GetValue(pRecurring_skuKey, pRecurring_skuVal);
        if(pRecurring_skuVal != null) {
            
            pRecurring_sku = new String();
            jsonToValue(pRecurring_sku, pRecurring_skuVal, L"String", L"String");
        }
        delete pRecurring_skuKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
    }
}

SamiSubscriptionPlanResource::SamiSubscriptionPlanResource(String* json) {
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
SamiSubscriptionPlanResource::asJson ()
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
SamiSubscriptionPlanResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pBilling_cycle_lengthKey = new JsonString(L"billing_cycle_length");
    pJsonObject->Add(pBilling_cycle_lengthKey, toJson(getPBillingCycleLength(), "Integer", ""));

    JsonString *pBilling_cycle_unitKey = new JsonString(L"billing_cycle_unit");
    pJsonObject->Add(pBilling_cycle_unitKey, toJson(getPBillingCycleUnit(), "String", ""));

    JsonString *pConsolidatedKey = new JsonString(L"consolidated");
    pJsonObject->Add(pConsolidatedKey, toJson(getPConsolidated(), "Boolean", ""));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pEnd_dateKey = new JsonString(L"end_date");
    pJsonObject->Add(pEnd_dateKey, toJson(getPEndDate(), "Long", ""));

    JsonString *pFirst_billing_cycle_lengthKey = new JsonString(L"first_billing_cycle_length");
    pJsonObject->Add(pFirst_billing_cycle_lengthKey, toJson(getPFirstBillingCycleLength(), "Integer", ""));

    JsonString *pFirst_billing_cycle_unitKey = new JsonString(L"first_billing_cycle_unit");
    pJsonObject->Add(pFirst_billing_cycle_unitKey, toJson(getPFirstBillingCycleUnit(), "String", ""));

    JsonString *pGrace_periodKey = new JsonString(L"grace_period");
    pJsonObject->Add(pGrace_periodKey, toJson(getPGracePeriod(), "Integer", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pInitial_feeKey = new JsonString(L"initial_fee");
    pJsonObject->Add(pInitial_feeKey, toJson(getPInitialFee(), "Double", ""));

    JsonString *pInitial_skuKey = new JsonString(L"initial_sku");
    pJsonObject->Add(pInitial_skuKey, toJson(getPInitialSku(), "String", ""));

    JsonString *pLate_payment_feeKey = new JsonString(L"late_payment_fee");
    pJsonObject->Add(pLate_payment_feeKey, toJson(getPLatePaymentFee(), "Double", ""));

    JsonString *pLate_payment_skuKey = new JsonString(L"late_payment_sku");
    pJsonObject->Add(pLate_payment_skuKey, toJson(getPLatePaymentSku(), "String", ""));

    JsonString *pLockedKey = new JsonString(L"locked");
    pJsonObject->Add(pLockedKey, toJson(getPLocked(), "Boolean", ""));

    JsonString *pMax_bill_attemptsKey = new JsonString(L"max_bill_attempts");
    pJsonObject->Add(pMax_bill_attemptsKey, toJson(getPMaxBillAttempts(), "Integer", ""));

    JsonString *pMax_cyclesKey = new JsonString(L"max_cycles");
    pJsonObject->Add(pMax_cyclesKey, toJson(getPMaxCycles(), "Integer", ""));

    JsonString *pMigrate_to_planKey = new JsonString(L"migrate_to_plan");
    pJsonObject->Add(pMigrate_to_planKey, toJson(getPMigrateToPlan(), "String", ""));

    JsonString *pMin_cyclesKey = new JsonString(L"min_cycles");
    pJsonObject->Add(pMin_cyclesKey, toJson(getPMinCycles(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPublishedKey = new JsonString(L"published");
    pJsonObject->Add(pPublishedKey, toJson(getPPublished(), "Boolean", ""));

    JsonString *pReactivation_feeKey = new JsonString(L"reactivation_fee");
    pJsonObject->Add(pReactivation_feeKey, toJson(getPReactivationFee(), "Double", ""));

    JsonString *pReactivation_skuKey = new JsonString(L"reactivation_sku");
    pJsonObject->Add(pReactivation_skuKey, toJson(getPReactivationSku(), "String", ""));

    JsonString *pRecurring_feeKey = new JsonString(L"recurring_fee");
    pJsonObject->Add(pRecurring_feeKey, toJson(getPRecurringFee(), "Double", ""));

    JsonString *pRecurring_skuKey = new JsonString(L"recurring_sku");
    pJsonObject->Add(pRecurring_skuKey, toJson(getPRecurringSku(), "String", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    return pJsonObject;
}

HashMap*
SamiSubscriptionPlanResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiSubscriptionPlanResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

Integer*
SamiSubscriptionPlanResource::getPBillingCycleLength() {
    return pBilling_cycle_length;
}
void
SamiSubscriptionPlanResource::setPBillingCycleLength(Integer* pBilling_cycle_length) {
    this->pBilling_cycle_length = pBilling_cycle_length;
}

String*
SamiSubscriptionPlanResource::getPBillingCycleUnit() {
    return pBilling_cycle_unit;
}
void
SamiSubscriptionPlanResource::setPBillingCycleUnit(String* pBilling_cycle_unit) {
    this->pBilling_cycle_unit = pBilling_cycle_unit;
}

Boolean*
SamiSubscriptionPlanResource::getPConsolidated() {
    return pConsolidated;
}
void
SamiSubscriptionPlanResource::setPConsolidated(Boolean* pConsolidated) {
    this->pConsolidated = pConsolidated;
}

String*
SamiSubscriptionPlanResource::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiSubscriptionPlanResource::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

Long*
SamiSubscriptionPlanResource::getPEndDate() {
    return pEnd_date;
}
void
SamiSubscriptionPlanResource::setPEndDate(Long* pEnd_date) {
    this->pEnd_date = pEnd_date;
}

Integer*
SamiSubscriptionPlanResource::getPFirstBillingCycleLength() {
    return pFirst_billing_cycle_length;
}
void
SamiSubscriptionPlanResource::setPFirstBillingCycleLength(Integer* pFirst_billing_cycle_length) {
    this->pFirst_billing_cycle_length = pFirst_billing_cycle_length;
}

String*
SamiSubscriptionPlanResource::getPFirstBillingCycleUnit() {
    return pFirst_billing_cycle_unit;
}
void
SamiSubscriptionPlanResource::setPFirstBillingCycleUnit(String* pFirst_billing_cycle_unit) {
    this->pFirst_billing_cycle_unit = pFirst_billing_cycle_unit;
}

Integer*
SamiSubscriptionPlanResource::getPGracePeriod() {
    return pGrace_period;
}
void
SamiSubscriptionPlanResource::setPGracePeriod(Integer* pGrace_period) {
    this->pGrace_period = pGrace_period;
}

String*
SamiSubscriptionPlanResource::getPId() {
    return pId;
}
void
SamiSubscriptionPlanResource::setPId(String* pId) {
    this->pId = pId;
}

Double*
SamiSubscriptionPlanResource::getPInitialFee() {
    return pInitial_fee;
}
void
SamiSubscriptionPlanResource::setPInitialFee(Double* pInitial_fee) {
    this->pInitial_fee = pInitial_fee;
}

String*
SamiSubscriptionPlanResource::getPInitialSku() {
    return pInitial_sku;
}
void
SamiSubscriptionPlanResource::setPInitialSku(String* pInitial_sku) {
    this->pInitial_sku = pInitial_sku;
}

Double*
SamiSubscriptionPlanResource::getPLatePaymentFee() {
    return pLate_payment_fee;
}
void
SamiSubscriptionPlanResource::setPLatePaymentFee(Double* pLate_payment_fee) {
    this->pLate_payment_fee = pLate_payment_fee;
}

String*
SamiSubscriptionPlanResource::getPLatePaymentSku() {
    return pLate_payment_sku;
}
void
SamiSubscriptionPlanResource::setPLatePaymentSku(String* pLate_payment_sku) {
    this->pLate_payment_sku = pLate_payment_sku;
}

Boolean*
SamiSubscriptionPlanResource::getPLocked() {
    return pLocked;
}
void
SamiSubscriptionPlanResource::setPLocked(Boolean* pLocked) {
    this->pLocked = pLocked;
}

Integer*
SamiSubscriptionPlanResource::getPMaxBillAttempts() {
    return pMax_bill_attempts;
}
void
SamiSubscriptionPlanResource::setPMaxBillAttempts(Integer* pMax_bill_attempts) {
    this->pMax_bill_attempts = pMax_bill_attempts;
}

Integer*
SamiSubscriptionPlanResource::getPMaxCycles() {
    return pMax_cycles;
}
void
SamiSubscriptionPlanResource::setPMaxCycles(Integer* pMax_cycles) {
    this->pMax_cycles = pMax_cycles;
}

String*
SamiSubscriptionPlanResource::getPMigrateToPlan() {
    return pMigrate_to_plan;
}
void
SamiSubscriptionPlanResource::setPMigrateToPlan(String* pMigrate_to_plan) {
    this->pMigrate_to_plan = pMigrate_to_plan;
}

Integer*
SamiSubscriptionPlanResource::getPMinCycles() {
    return pMin_cycles;
}
void
SamiSubscriptionPlanResource::setPMinCycles(Integer* pMin_cycles) {
    this->pMin_cycles = pMin_cycles;
}

String*
SamiSubscriptionPlanResource::getPName() {
    return pName;
}
void
SamiSubscriptionPlanResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiSubscriptionPlanResource::getPPublished() {
    return pPublished;
}
void
SamiSubscriptionPlanResource::setPPublished(Boolean* pPublished) {
    this->pPublished = pPublished;
}

Double*
SamiSubscriptionPlanResource::getPReactivationFee() {
    return pReactivation_fee;
}
void
SamiSubscriptionPlanResource::setPReactivationFee(Double* pReactivation_fee) {
    this->pReactivation_fee = pReactivation_fee;
}

String*
SamiSubscriptionPlanResource::getPReactivationSku() {
    return pReactivation_sku;
}
void
SamiSubscriptionPlanResource::setPReactivationSku(String* pReactivation_sku) {
    this->pReactivation_sku = pReactivation_sku;
}

Double*
SamiSubscriptionPlanResource::getPRecurringFee() {
    return pRecurring_fee;
}
void
SamiSubscriptionPlanResource::setPRecurringFee(Double* pRecurring_fee) {
    this->pRecurring_fee = pRecurring_fee;
}

String*
SamiSubscriptionPlanResource::getPRecurringSku() {
    return pRecurring_sku;
}
void
SamiSubscriptionPlanResource::setPRecurringSku(String* pRecurring_sku) {
    this->pRecurring_sku = pRecurring_sku;
}

Long*
SamiSubscriptionPlanResource::getPStartDate() {
    return pStart_date;
}
void
SamiSubscriptionPlanResource::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}



} /* namespace Swagger */

