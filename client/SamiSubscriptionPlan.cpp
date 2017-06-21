
#include "SamiSubscriptionPlan.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSubscriptionPlan::SamiSubscriptionPlan() {
    init();
}

SamiSubscriptionPlan::~SamiSubscriptionPlan() {
    this->cleanup();
}

void
SamiSubscriptionPlan::init() {
    pAdditional_properties = null;
pAvailability = null;
pBill_grace_days = null;
pConsolidated = null;
pFirst_bill = null;
pFirst_bill_unit_of_time = null;
pId = null;
pLate_payment_sku = null;
pLocked = null;
pMax_auto_renew = null;
pMax_bill_attempts = null;
pMigration_plan = null;
pMinimum_term = null;
pName = null;
pPrimary_sku = null;
pReactivation_sku = null;
pRecurring_sku = null;
pRenew_period = null;
pRenew_period_unit_of_time = null;
pSubscription_id = null;
}

void
SamiSubscriptionPlan::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pAvailability != null) {
        
        delete pAvailability;
        pAvailability = null;
    }
if(pBill_grace_days != null) {
        
        delete pBill_grace_days;
        pBill_grace_days = null;
    }
if(pConsolidated != null) {
        
        delete pConsolidated;
        pConsolidated = null;
    }
if(pFirst_bill != null) {
        
        delete pFirst_bill;
        pFirst_bill = null;
    }
if(pFirst_bill_unit_of_time != null) {
        
        delete pFirst_bill_unit_of_time;
        pFirst_bill_unit_of_time = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLate_payment_sku != null) {
        
        delete pLate_payment_sku;
        pLate_payment_sku = null;
    }
if(pLocked != null) {
        
        delete pLocked;
        pLocked = null;
    }
if(pMax_auto_renew != null) {
        
        delete pMax_auto_renew;
        pMax_auto_renew = null;
    }
if(pMax_bill_attempts != null) {
        
        delete pMax_bill_attempts;
        pMax_bill_attempts = null;
    }
if(pMigration_plan != null) {
        
        delete pMigration_plan;
        pMigration_plan = null;
    }
if(pMinimum_term != null) {
        
        delete pMinimum_term;
        pMinimum_term = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPrimary_sku != null) {
        
        delete pPrimary_sku;
        pPrimary_sku = null;
    }
if(pReactivation_sku != null) {
        
        delete pReactivation_sku;
        pReactivation_sku = null;
    }
if(pRecurring_sku != null) {
        
        delete pRecurring_sku;
        pRecurring_sku = null;
    }
if(pRenew_period != null) {
        
        delete pRenew_period;
        pRenew_period = null;
    }
if(pRenew_period_unit_of_time != null) {
        
        delete pRenew_period_unit_of_time;
        pRenew_period_unit_of_time = null;
    }
if(pSubscription_id != null) {
        
        delete pSubscription_id;
        pSubscription_id = null;
    }
}


SamiSubscriptionPlan*
SamiSubscriptionPlan::fromJson(String* json) {
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
SamiSubscriptionPlan::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pBill_grace_daysKey = new JsonString(L"bill_grace_days");
        IJsonValue* pBill_grace_daysVal = null;
        pJsonObject->GetValue(pBill_grace_daysKey, pBill_grace_daysVal);
        if(pBill_grace_daysVal != null) {
            
            pBill_grace_days = new Integer();
            jsonToValue(pBill_grace_days, pBill_grace_daysVal, L"Integer", L"Integer");
        }
        delete pBill_grace_daysKey;
JsonString* pConsolidatedKey = new JsonString(L"consolidated");
        IJsonValue* pConsolidatedVal = null;
        pJsonObject->GetValue(pConsolidatedKey, pConsolidatedVal);
        if(pConsolidatedVal != null) {
            
            pConsolidated = new Boolean(false);
            jsonToValue(pConsolidated, pConsolidatedVal, L"Boolean", L"Boolean");
        }
        delete pConsolidatedKey;
JsonString* pFirst_billKey = new JsonString(L"first_bill");
        IJsonValue* pFirst_billVal = null;
        pJsonObject->GetValue(pFirst_billKey, pFirst_billVal);
        if(pFirst_billVal != null) {
            
            pFirst_bill = new Integer();
            jsonToValue(pFirst_bill, pFirst_billVal, L"Integer", L"Integer");
        }
        delete pFirst_billKey;
JsonString* pFirst_bill_unit_of_timeKey = new JsonString(L"first_bill_unit_of_time");
        IJsonValue* pFirst_bill_unit_of_timeVal = null;
        pJsonObject->GetValue(pFirst_bill_unit_of_timeKey, pFirst_bill_unit_of_timeVal);
        if(pFirst_bill_unit_of_timeVal != null) {
            
            pFirst_bill_unit_of_time = new String();
            jsonToValue(pFirst_bill_unit_of_time, pFirst_bill_unit_of_timeVal, L"String", L"String");
        }
        delete pFirst_bill_unit_of_timeKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
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
JsonString* pMax_auto_renewKey = new JsonString(L"max_auto_renew");
        IJsonValue* pMax_auto_renewVal = null;
        pJsonObject->GetValue(pMax_auto_renewKey, pMax_auto_renewVal);
        if(pMax_auto_renewVal != null) {
            
            pMax_auto_renew = new Integer();
            jsonToValue(pMax_auto_renew, pMax_auto_renewVal, L"Integer", L"Integer");
        }
        delete pMax_auto_renewKey;
JsonString* pMax_bill_attemptsKey = new JsonString(L"max_bill_attempts");
        IJsonValue* pMax_bill_attemptsVal = null;
        pJsonObject->GetValue(pMax_bill_attemptsKey, pMax_bill_attemptsVal);
        if(pMax_bill_attemptsVal != null) {
            
            pMax_bill_attempts = new Integer();
            jsonToValue(pMax_bill_attempts, pMax_bill_attemptsVal, L"Integer", L"Integer");
        }
        delete pMax_bill_attemptsKey;
JsonString* pMigration_planKey = new JsonString(L"migration_plan");
        IJsonValue* pMigration_planVal = null;
        pJsonObject->GetValue(pMigration_planKey, pMigration_planVal);
        if(pMigration_planVal != null) {
            
            pMigration_plan = new String();
            jsonToValue(pMigration_plan, pMigration_planVal, L"String", L"String");
        }
        delete pMigration_planKey;
JsonString* pMinimum_termKey = new JsonString(L"minimum_term");
        IJsonValue* pMinimum_termVal = null;
        pJsonObject->GetValue(pMinimum_termKey, pMinimum_termVal);
        if(pMinimum_termVal != null) {
            
            pMinimum_term = new Integer();
            jsonToValue(pMinimum_term, pMinimum_termVal, L"Integer", L"Integer");
        }
        delete pMinimum_termKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPrimary_skuKey = new JsonString(L"primary_sku");
        IJsonValue* pPrimary_skuVal = null;
        pJsonObject->GetValue(pPrimary_skuKey, pPrimary_skuVal);
        if(pPrimary_skuVal != null) {
            
            pPrimary_sku = new String();
            jsonToValue(pPrimary_sku, pPrimary_skuVal, L"String", L"String");
        }
        delete pPrimary_skuKey;
JsonString* pReactivation_skuKey = new JsonString(L"reactivation_sku");
        IJsonValue* pReactivation_skuVal = null;
        pJsonObject->GetValue(pReactivation_skuKey, pReactivation_skuVal);
        if(pReactivation_skuVal != null) {
            
            pReactivation_sku = new String();
            jsonToValue(pReactivation_sku, pReactivation_skuVal, L"String", L"String");
        }
        delete pReactivation_skuKey;
JsonString* pRecurring_skuKey = new JsonString(L"recurring_sku");
        IJsonValue* pRecurring_skuVal = null;
        pJsonObject->GetValue(pRecurring_skuKey, pRecurring_skuVal);
        if(pRecurring_skuVal != null) {
            
            pRecurring_sku = new String();
            jsonToValue(pRecurring_sku, pRecurring_skuVal, L"String", L"String");
        }
        delete pRecurring_skuKey;
JsonString* pRenew_periodKey = new JsonString(L"renew_period");
        IJsonValue* pRenew_periodVal = null;
        pJsonObject->GetValue(pRenew_periodKey, pRenew_periodVal);
        if(pRenew_periodVal != null) {
            
            pRenew_period = new Integer();
            jsonToValue(pRenew_period, pRenew_periodVal, L"Integer", L"Integer");
        }
        delete pRenew_periodKey;
JsonString* pRenew_period_unit_of_timeKey = new JsonString(L"renew_period_unit_of_time");
        IJsonValue* pRenew_period_unit_of_timeVal = null;
        pJsonObject->GetValue(pRenew_period_unit_of_timeKey, pRenew_period_unit_of_timeVal);
        if(pRenew_period_unit_of_timeVal != null) {
            
            pRenew_period_unit_of_time = new String();
            jsonToValue(pRenew_period_unit_of_time, pRenew_period_unit_of_timeVal, L"String", L"String");
        }
        delete pRenew_period_unit_of_timeKey;
JsonString* pSubscription_idKey = new JsonString(L"subscription_id");
        IJsonValue* pSubscription_idVal = null;
        pJsonObject->GetValue(pSubscription_idKey, pSubscription_idVal);
        if(pSubscription_idVal != null) {
            
            pSubscription_id = new Integer();
            jsonToValue(pSubscription_id, pSubscription_idVal, L"Integer", L"Integer");
        }
        delete pSubscription_idKey;
    }
}

SamiSubscriptionPlan::SamiSubscriptionPlan(String* json) {
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
SamiSubscriptionPlan::asJson ()
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
SamiSubscriptionPlan::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pAvailabilityKey = new JsonString(L"availability");
    pJsonObject->Add(pAvailabilityKey, toJson(getPAvailability(), "String", ""));

    JsonString *pBill_grace_daysKey = new JsonString(L"bill_grace_days");
    pJsonObject->Add(pBill_grace_daysKey, toJson(getPBillGraceDays(), "Integer", ""));

    JsonString *pConsolidatedKey = new JsonString(L"consolidated");
    pJsonObject->Add(pConsolidatedKey, toJson(getPConsolidated(), "Boolean", ""));

    JsonString *pFirst_billKey = new JsonString(L"first_bill");
    pJsonObject->Add(pFirst_billKey, toJson(getPFirstBill(), "Integer", ""));

    JsonString *pFirst_bill_unit_of_timeKey = new JsonString(L"first_bill_unit_of_time");
    pJsonObject->Add(pFirst_bill_unit_of_timeKey, toJson(getPFirstBillUnitOfTime(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pLate_payment_skuKey = new JsonString(L"late_payment_sku");
    pJsonObject->Add(pLate_payment_skuKey, toJson(getPLatePaymentSku(), "String", ""));

    JsonString *pLockedKey = new JsonString(L"locked");
    pJsonObject->Add(pLockedKey, toJson(getPLocked(), "Boolean", ""));

    JsonString *pMax_auto_renewKey = new JsonString(L"max_auto_renew");
    pJsonObject->Add(pMax_auto_renewKey, toJson(getPMaxAutoRenew(), "Integer", ""));

    JsonString *pMax_bill_attemptsKey = new JsonString(L"max_bill_attempts");
    pJsonObject->Add(pMax_bill_attemptsKey, toJson(getPMaxBillAttempts(), "Integer", ""));

    JsonString *pMigration_planKey = new JsonString(L"migration_plan");
    pJsonObject->Add(pMigration_planKey, toJson(getPMigrationPlan(), "String", ""));

    JsonString *pMinimum_termKey = new JsonString(L"minimum_term");
    pJsonObject->Add(pMinimum_termKey, toJson(getPMinimumTerm(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPrimary_skuKey = new JsonString(L"primary_sku");
    pJsonObject->Add(pPrimary_skuKey, toJson(getPPrimarySku(), "String", ""));

    JsonString *pReactivation_skuKey = new JsonString(L"reactivation_sku");
    pJsonObject->Add(pReactivation_skuKey, toJson(getPReactivationSku(), "String", ""));

    JsonString *pRecurring_skuKey = new JsonString(L"recurring_sku");
    pJsonObject->Add(pRecurring_skuKey, toJson(getPRecurringSku(), "String", ""));

    JsonString *pRenew_periodKey = new JsonString(L"renew_period");
    pJsonObject->Add(pRenew_periodKey, toJson(getPRenewPeriod(), "Integer", ""));

    JsonString *pRenew_period_unit_of_timeKey = new JsonString(L"renew_period_unit_of_time");
    pJsonObject->Add(pRenew_period_unit_of_timeKey, toJson(getPRenewPeriodUnitOfTime(), "String", ""));

    JsonString *pSubscription_idKey = new JsonString(L"subscription_id");
    pJsonObject->Add(pSubscription_idKey, toJson(getPSubscriptionId(), "Integer", ""));

    return pJsonObject;
}

HashMap*
SamiSubscriptionPlan::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiSubscriptionPlan::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiSubscriptionPlan::getPAvailability() {
    return pAvailability;
}
void
SamiSubscriptionPlan::setPAvailability(String* pAvailability) {
    this->pAvailability = pAvailability;
}

Integer*
SamiSubscriptionPlan::getPBillGraceDays() {
    return pBill_grace_days;
}
void
SamiSubscriptionPlan::setPBillGraceDays(Integer* pBill_grace_days) {
    this->pBill_grace_days = pBill_grace_days;
}

Boolean*
SamiSubscriptionPlan::getPConsolidated() {
    return pConsolidated;
}
void
SamiSubscriptionPlan::setPConsolidated(Boolean* pConsolidated) {
    this->pConsolidated = pConsolidated;
}

Integer*
SamiSubscriptionPlan::getPFirstBill() {
    return pFirst_bill;
}
void
SamiSubscriptionPlan::setPFirstBill(Integer* pFirst_bill) {
    this->pFirst_bill = pFirst_bill;
}

String*
SamiSubscriptionPlan::getPFirstBillUnitOfTime() {
    return pFirst_bill_unit_of_time;
}
void
SamiSubscriptionPlan::setPFirstBillUnitOfTime(String* pFirst_bill_unit_of_time) {
    this->pFirst_bill_unit_of_time = pFirst_bill_unit_of_time;
}

String*
SamiSubscriptionPlan::getPId() {
    return pId;
}
void
SamiSubscriptionPlan::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiSubscriptionPlan::getPLatePaymentSku() {
    return pLate_payment_sku;
}
void
SamiSubscriptionPlan::setPLatePaymentSku(String* pLate_payment_sku) {
    this->pLate_payment_sku = pLate_payment_sku;
}

Boolean*
SamiSubscriptionPlan::getPLocked() {
    return pLocked;
}
void
SamiSubscriptionPlan::setPLocked(Boolean* pLocked) {
    this->pLocked = pLocked;
}

Integer*
SamiSubscriptionPlan::getPMaxAutoRenew() {
    return pMax_auto_renew;
}
void
SamiSubscriptionPlan::setPMaxAutoRenew(Integer* pMax_auto_renew) {
    this->pMax_auto_renew = pMax_auto_renew;
}

Integer*
SamiSubscriptionPlan::getPMaxBillAttempts() {
    return pMax_bill_attempts;
}
void
SamiSubscriptionPlan::setPMaxBillAttempts(Integer* pMax_bill_attempts) {
    this->pMax_bill_attempts = pMax_bill_attempts;
}

String*
SamiSubscriptionPlan::getPMigrationPlan() {
    return pMigration_plan;
}
void
SamiSubscriptionPlan::setPMigrationPlan(String* pMigration_plan) {
    this->pMigration_plan = pMigration_plan;
}

Integer*
SamiSubscriptionPlan::getPMinimumTerm() {
    return pMinimum_term;
}
void
SamiSubscriptionPlan::setPMinimumTerm(Integer* pMinimum_term) {
    this->pMinimum_term = pMinimum_term;
}

String*
SamiSubscriptionPlan::getPName() {
    return pName;
}
void
SamiSubscriptionPlan::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiSubscriptionPlan::getPPrimarySku() {
    return pPrimary_sku;
}
void
SamiSubscriptionPlan::setPPrimarySku(String* pPrimary_sku) {
    this->pPrimary_sku = pPrimary_sku;
}

String*
SamiSubscriptionPlan::getPReactivationSku() {
    return pReactivation_sku;
}
void
SamiSubscriptionPlan::setPReactivationSku(String* pReactivation_sku) {
    this->pReactivation_sku = pReactivation_sku;
}

String*
SamiSubscriptionPlan::getPRecurringSku() {
    return pRecurring_sku;
}
void
SamiSubscriptionPlan::setPRecurringSku(String* pRecurring_sku) {
    this->pRecurring_sku = pRecurring_sku;
}

Integer*
SamiSubscriptionPlan::getPRenewPeriod() {
    return pRenew_period;
}
void
SamiSubscriptionPlan::setPRenewPeriod(Integer* pRenew_period) {
    this->pRenew_period = pRenew_period;
}

String*
SamiSubscriptionPlan::getPRenewPeriodUnitOfTime() {
    return pRenew_period_unit_of_time;
}
void
SamiSubscriptionPlan::setPRenewPeriodUnitOfTime(String* pRenew_period_unit_of_time) {
    this->pRenew_period_unit_of_time = pRenew_period_unit_of_time;
}

Integer*
SamiSubscriptionPlan::getPSubscriptionId() {
    return pSubscription_id;
}
void
SamiSubscriptionPlan::setPSubscriptionId(Integer* pSubscription_id) {
    this->pSubscription_id = pSubscription_id;
}



} /* namespace Swagger */

