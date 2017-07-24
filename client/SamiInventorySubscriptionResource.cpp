
#include "SamiInventorySubscriptionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInventorySubscriptionResource::SamiInventorySubscriptionResource() {
    init();
}

SamiInventorySubscriptionResource::~SamiInventorySubscriptionResource() {
    this->cleanup();
}

void
SamiInventorySubscriptionResource::init() {
    pBill_date = null;
pCredit = null;
pCredit_log = null;
pGrace_end = null;
pInventory_id = null;
pInventory_status = null;
pItem_id = null;
pPayment_method = null;
pPrice_override = null;
pPrice_override_reason = null;
pRecurring_price = null;
pSku = null;
pStart_date = null;
pSubscription_status = null;
pUser = null;
}

void
SamiInventorySubscriptionResource::cleanup() {
    if(pBill_date != null) {
        
        delete pBill_date;
        pBill_date = null;
    }
if(pCredit != null) {
        
        delete pCredit;
        pCredit = null;
    }
if(pCredit_log != null) {
        pCredit_log->RemoveAll(true);
        delete pCredit_log;
        pCredit_log = null;
    }
if(pGrace_end != null) {
        
        delete pGrace_end;
        pGrace_end = null;
    }
if(pInventory_id != null) {
        
        delete pInventory_id;
        pInventory_id = null;
    }
if(pInventory_status != null) {
        
        delete pInventory_status;
        pInventory_status = null;
    }
if(pItem_id != null) {
        
        delete pItem_id;
        pItem_id = null;
    }
if(pPayment_method != null) {
        
        delete pPayment_method;
        pPayment_method = null;
    }
if(pPrice_override != null) {
        
        delete pPrice_override;
        pPrice_override = null;
    }
if(pPrice_override_reason != null) {
        
        delete pPrice_override_reason;
        pPrice_override_reason = null;
    }
if(pRecurring_price != null) {
        
        delete pRecurring_price;
        pRecurring_price = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
if(pSubscription_status != null) {
        
        delete pSubscription_status;
        pSubscription_status = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiInventorySubscriptionResource*
SamiInventorySubscriptionResource::fromJson(String* json) {
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
SamiInventorySubscriptionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBill_dateKey = new JsonString(L"bill_date");
        IJsonValue* pBill_dateVal = null;
        pJsonObject->GetValue(pBill_dateKey, pBill_dateVal);
        if(pBill_dateVal != null) {
            
            pBill_date = new Long();
            jsonToValue(pBill_date, pBill_dateVal, L"Long", L"Long");
        }
        delete pBill_dateKey;
JsonString* pCreditKey = new JsonString(L"credit");
        IJsonValue* pCreditVal = null;
        pJsonObject->GetValue(pCreditKey, pCreditVal);
        if(pCreditVal != null) {
            
            pCredit = new Double();
            jsonToValue(pCredit, pCreditVal, L"Double", L"Double");
        }
        delete pCreditKey;
JsonString* pCredit_logKey = new JsonString(L"credit_log");
        IJsonValue* pCredit_logVal = null;
        pJsonObject->GetValue(pCredit_logKey, pCredit_logVal);
        if(pCredit_logVal != null) {
            pCredit_log = new ArrayList();
            
            jsonToValue(pCredit_log, pCredit_logVal, L"IList", L"SamiSubscriptionCreditResource");
        }
        delete pCredit_logKey;
JsonString* pGrace_endKey = new JsonString(L"grace_end");
        IJsonValue* pGrace_endVal = null;
        pJsonObject->GetValue(pGrace_endKey, pGrace_endVal);
        if(pGrace_endVal != null) {
            
            pGrace_end = new Long();
            jsonToValue(pGrace_end, pGrace_endVal, L"Long", L"Long");
        }
        delete pGrace_endKey;
JsonString* pInventory_idKey = new JsonString(L"inventory_id");
        IJsonValue* pInventory_idVal = null;
        pJsonObject->GetValue(pInventory_idKey, pInventory_idVal);
        if(pInventory_idVal != null) {
            
            pInventory_id = new Integer();
            jsonToValue(pInventory_id, pInventory_idVal, L"Integer", L"Integer");
        }
        delete pInventory_idKey;
JsonString* pInventory_statusKey = new JsonString(L"inventory_status");
        IJsonValue* pInventory_statusVal = null;
        pJsonObject->GetValue(pInventory_statusKey, pInventory_statusVal);
        if(pInventory_statusVal != null) {
            
            pInventory_status = new String();
            jsonToValue(pInventory_status, pInventory_statusVal, L"String", L"String");
        }
        delete pInventory_statusKey;
JsonString* pItem_idKey = new JsonString(L"item_id");
        IJsonValue* pItem_idVal = null;
        pJsonObject->GetValue(pItem_idKey, pItem_idVal);
        if(pItem_idVal != null) {
            
            pItem_id = new Integer();
            jsonToValue(pItem_id, pItem_idVal, L"Integer", L"Integer");
        }
        delete pItem_idKey;
JsonString* pPayment_methodKey = new JsonString(L"payment_method");
        IJsonValue* pPayment_methodVal = null;
        pJsonObject->GetValue(pPayment_methodKey, pPayment_methodVal);
        if(pPayment_methodVal != null) {
            
            pPayment_method = new SamiPaymentMethodResource();
            jsonToValue(pPayment_method, pPayment_methodVal, L"SamiPaymentMethodResource", L"SamiPaymentMethodResource");
        }
        delete pPayment_methodKey;
JsonString* pPrice_overrideKey = new JsonString(L"price_override");
        IJsonValue* pPrice_overrideVal = null;
        pJsonObject->GetValue(pPrice_overrideKey, pPrice_overrideVal);
        if(pPrice_overrideVal != null) {
            
            pPrice_override = new Double();
            jsonToValue(pPrice_override, pPrice_overrideVal, L"Double", L"Double");
        }
        delete pPrice_overrideKey;
JsonString* pPrice_override_reasonKey = new JsonString(L"price_override_reason");
        IJsonValue* pPrice_override_reasonVal = null;
        pJsonObject->GetValue(pPrice_override_reasonKey, pPrice_override_reasonVal);
        if(pPrice_override_reasonVal != null) {
            
            pPrice_override_reason = new String();
            jsonToValue(pPrice_override_reason, pPrice_override_reasonVal, L"String", L"String");
        }
        delete pPrice_override_reasonKey;
JsonString* pRecurring_priceKey = new JsonString(L"recurring_price");
        IJsonValue* pRecurring_priceVal = null;
        pJsonObject->GetValue(pRecurring_priceKey, pRecurring_priceVal);
        if(pRecurring_priceVal != null) {
            
            pRecurring_price = new Double();
            jsonToValue(pRecurring_price, pRecurring_priceVal, L"Double", L"Double");
        }
        delete pRecurring_priceKey;
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
JsonString* pSubscription_statusKey = new JsonString(L"subscription_status");
        IJsonValue* pSubscription_statusVal = null;
        pJsonObject->GetValue(pSubscription_statusKey, pSubscription_statusVal);
        if(pSubscription_statusVal != null) {
            
            pSubscription_status = new Integer();
            jsonToValue(pSubscription_status, pSubscription_statusVal, L"Integer", L"Integer");
        }
        delete pSubscription_statusKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
    }
}

SamiInventorySubscriptionResource::SamiInventorySubscriptionResource(String* json) {
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
SamiInventorySubscriptionResource::asJson ()
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
SamiInventorySubscriptionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBill_dateKey = new JsonString(L"bill_date");
    pJsonObject->Add(pBill_dateKey, toJson(getPBillDate(), "Long", ""));

    JsonString *pCreditKey = new JsonString(L"credit");
    pJsonObject->Add(pCreditKey, toJson(getPCredit(), "Double", ""));

    JsonString *pCredit_logKey = new JsonString(L"credit_log");
    pJsonObject->Add(pCredit_logKey, toJson(getPCreditLog(), "SamiSubscriptionCreditResource", "array"));

    JsonString *pGrace_endKey = new JsonString(L"grace_end");
    pJsonObject->Add(pGrace_endKey, toJson(getPGraceEnd(), "Long", ""));

    JsonString *pInventory_idKey = new JsonString(L"inventory_id");
    pJsonObject->Add(pInventory_idKey, toJson(getPInventoryId(), "Integer", ""));

    JsonString *pInventory_statusKey = new JsonString(L"inventory_status");
    pJsonObject->Add(pInventory_statusKey, toJson(getPInventoryStatus(), "String", ""));

    JsonString *pItem_idKey = new JsonString(L"item_id");
    pJsonObject->Add(pItem_idKey, toJson(getPItemId(), "Integer", ""));

    JsonString *pPayment_methodKey = new JsonString(L"payment_method");
    pJsonObject->Add(pPayment_methodKey, toJson(getPPaymentMethod(), "SamiPaymentMethodResource", ""));

    JsonString *pPrice_overrideKey = new JsonString(L"price_override");
    pJsonObject->Add(pPrice_overrideKey, toJson(getPPriceOverride(), "Double", ""));

    JsonString *pPrice_override_reasonKey = new JsonString(L"price_override_reason");
    pJsonObject->Add(pPrice_override_reasonKey, toJson(getPPriceOverrideReason(), "String", ""));

    JsonString *pRecurring_priceKey = new JsonString(L"recurring_price");
    pJsonObject->Add(pRecurring_priceKey, toJson(getPRecurringPrice(), "Double", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    JsonString *pSubscription_statusKey = new JsonString(L"subscription_status");
    pJsonObject->Add(pSubscription_statusKey, toJson(getPSubscriptionStatus(), "Integer", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

Long*
SamiInventorySubscriptionResource::getPBillDate() {
    return pBill_date;
}
void
SamiInventorySubscriptionResource::setPBillDate(Long* pBill_date) {
    this->pBill_date = pBill_date;
}

Double*
SamiInventorySubscriptionResource::getPCredit() {
    return pCredit;
}
void
SamiInventorySubscriptionResource::setPCredit(Double* pCredit) {
    this->pCredit = pCredit;
}

IList*
SamiInventorySubscriptionResource::getPCreditLog() {
    return pCredit_log;
}
void
SamiInventorySubscriptionResource::setPCreditLog(IList* pCredit_log) {
    this->pCredit_log = pCredit_log;
}

Long*
SamiInventorySubscriptionResource::getPGraceEnd() {
    return pGrace_end;
}
void
SamiInventorySubscriptionResource::setPGraceEnd(Long* pGrace_end) {
    this->pGrace_end = pGrace_end;
}

Integer*
SamiInventorySubscriptionResource::getPInventoryId() {
    return pInventory_id;
}
void
SamiInventorySubscriptionResource::setPInventoryId(Integer* pInventory_id) {
    this->pInventory_id = pInventory_id;
}

String*
SamiInventorySubscriptionResource::getPInventoryStatus() {
    return pInventory_status;
}
void
SamiInventorySubscriptionResource::setPInventoryStatus(String* pInventory_status) {
    this->pInventory_status = pInventory_status;
}

Integer*
SamiInventorySubscriptionResource::getPItemId() {
    return pItem_id;
}
void
SamiInventorySubscriptionResource::setPItemId(Integer* pItem_id) {
    this->pItem_id = pItem_id;
}

SamiPaymentMethodResource*
SamiInventorySubscriptionResource::getPPaymentMethod() {
    return pPayment_method;
}
void
SamiInventorySubscriptionResource::setPPaymentMethod(SamiPaymentMethodResource* pPayment_method) {
    this->pPayment_method = pPayment_method;
}

Double*
SamiInventorySubscriptionResource::getPPriceOverride() {
    return pPrice_override;
}
void
SamiInventorySubscriptionResource::setPPriceOverride(Double* pPrice_override) {
    this->pPrice_override = pPrice_override;
}

String*
SamiInventorySubscriptionResource::getPPriceOverrideReason() {
    return pPrice_override_reason;
}
void
SamiInventorySubscriptionResource::setPPriceOverrideReason(String* pPrice_override_reason) {
    this->pPrice_override_reason = pPrice_override_reason;
}

Double*
SamiInventorySubscriptionResource::getPRecurringPrice() {
    return pRecurring_price;
}
void
SamiInventorySubscriptionResource::setPRecurringPrice(Double* pRecurring_price) {
    this->pRecurring_price = pRecurring_price;
}

String*
SamiInventorySubscriptionResource::getPSku() {
    return pSku;
}
void
SamiInventorySubscriptionResource::setPSku(String* pSku) {
    this->pSku = pSku;
}

Long*
SamiInventorySubscriptionResource::getPStartDate() {
    return pStart_date;
}
void
SamiInventorySubscriptionResource::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}

Integer*
SamiInventorySubscriptionResource::getPSubscriptionStatus() {
    return pSubscription_status;
}
void
SamiInventorySubscriptionResource::setPSubscriptionStatus(Integer* pSubscription_status) {
    this->pSubscription_status = pSubscription_status;
}

SamiSimpleUserResource*
SamiInventorySubscriptionResource::getPUser() {
    return pUser;
}
void
SamiInventorySubscriptionResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

