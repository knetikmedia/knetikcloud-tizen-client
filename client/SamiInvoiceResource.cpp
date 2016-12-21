
#include "SamiInvoiceResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInvoiceResource::SamiInvoiceResource() {
    init();
}

SamiInvoiceResource::~SamiInvoiceResource() {
    this->cleanup();
}

void
SamiInvoiceResource::init() {
    pBilling_address1 = null;
pBilling_address2 = null;
pBilling_city_name = null;
pBilling_country_name = null;
pBilling_full_name = null;
pBilling_postal_code = null;
pBilling_state_name = null;
pCart_id = null;
pCreated_date = null;
pCurrency = null;
pCurrent_fulfillment_status = null;
pCurrent_payment_status = null;
pDiscount = null;
pEmail = null;
pFed_tax = null;
pGrand_total = null;
pId = null;
pInvoice_number = null;
pItems = null;
pName_prefix = null;
pOrder_notes = null;
pParent_invoice_id = null;
pPayment_method_id = null;
pPhone = null;
pPhone_number = null;
pShipping = null;
pShipping_address1 = null;
pShipping_address2 = null;
pShipping_city_name = null;
pShipping_country_name = null;
pShipping_full_name = null;
pShipping_postal_code = null;
pShipping_state_name = null;
pSort = null;
pState_tax = null;
pSubtotal = null;
pUpdated_date = null;
pUser = null;
pVendor_id = null;
pVendor_name = null;
}

void
SamiInvoiceResource::cleanup() {
    if(pBilling_address1 != null) {
        
        delete pBilling_address1;
        pBilling_address1 = null;
    }
if(pBilling_address2 != null) {
        
        delete pBilling_address2;
        pBilling_address2 = null;
    }
if(pBilling_city_name != null) {
        
        delete pBilling_city_name;
        pBilling_city_name = null;
    }
if(pBilling_country_name != null) {
        
        delete pBilling_country_name;
        pBilling_country_name = null;
    }
if(pBilling_full_name != null) {
        
        delete pBilling_full_name;
        pBilling_full_name = null;
    }
if(pBilling_postal_code != null) {
        
        delete pBilling_postal_code;
        pBilling_postal_code = null;
    }
if(pBilling_state_name != null) {
        
        delete pBilling_state_name;
        pBilling_state_name = null;
    }
if(pCart_id != null) {
        
        delete pCart_id;
        pCart_id = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pCurrency != null) {
        
        delete pCurrency;
        pCurrency = null;
    }
if(pCurrent_fulfillment_status != null) {
        
        delete pCurrent_fulfillment_status;
        pCurrent_fulfillment_status = null;
    }
if(pCurrent_payment_status != null) {
        
        delete pCurrent_payment_status;
        pCurrent_payment_status = null;
    }
if(pDiscount != null) {
        
        delete pDiscount;
        pDiscount = null;
    }
if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pFed_tax != null) {
        
        delete pFed_tax;
        pFed_tax = null;
    }
if(pGrand_total != null) {
        
        delete pGrand_total;
        pGrand_total = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvoice_number != null) {
        
        delete pInvoice_number;
        pInvoice_number = null;
    }
if(pItems != null) {
        pItems->RemoveAll(true);
        delete pItems;
        pItems = null;
    }
if(pName_prefix != null) {
        
        delete pName_prefix;
        pName_prefix = null;
    }
if(pOrder_notes != null) {
        
        delete pOrder_notes;
        pOrder_notes = null;
    }
if(pParent_invoice_id != null) {
        
        delete pParent_invoice_id;
        pParent_invoice_id = null;
    }
if(pPayment_method_id != null) {
        
        delete pPayment_method_id;
        pPayment_method_id = null;
    }
if(pPhone != null) {
        
        delete pPhone;
        pPhone = null;
    }
if(pPhone_number != null) {
        
        delete pPhone_number;
        pPhone_number = null;
    }
if(pShipping != null) {
        
        delete pShipping;
        pShipping = null;
    }
if(pShipping_address1 != null) {
        
        delete pShipping_address1;
        pShipping_address1 = null;
    }
if(pShipping_address2 != null) {
        
        delete pShipping_address2;
        pShipping_address2 = null;
    }
if(pShipping_city_name != null) {
        
        delete pShipping_city_name;
        pShipping_city_name = null;
    }
if(pShipping_country_name != null) {
        
        delete pShipping_country_name;
        pShipping_country_name = null;
    }
if(pShipping_full_name != null) {
        
        delete pShipping_full_name;
        pShipping_full_name = null;
    }
if(pShipping_postal_code != null) {
        
        delete pShipping_postal_code;
        pShipping_postal_code = null;
    }
if(pShipping_state_name != null) {
        
        delete pShipping_state_name;
        pShipping_state_name = null;
    }
if(pSort != null) {
        
        delete pSort;
        pSort = null;
    }
if(pState_tax != null) {
        
        delete pState_tax;
        pState_tax = null;
    }
if(pSubtotal != null) {
        
        delete pSubtotal;
        pSubtotal = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
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


SamiInvoiceResource*
SamiInvoiceResource::fromJson(String* json) {
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
SamiInvoiceResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBilling_address1Key = new JsonString(L"billing_address1");
        IJsonValue* pBilling_address1Val = null;
        pJsonObject->GetValue(pBilling_address1Key, pBilling_address1Val);
        if(pBilling_address1Val != null) {
            
            pBilling_address1 = new String();
            jsonToValue(pBilling_address1, pBilling_address1Val, L"String", L"String");
        }
        delete pBilling_address1Key;
JsonString* pBilling_address2Key = new JsonString(L"billing_address2");
        IJsonValue* pBilling_address2Val = null;
        pJsonObject->GetValue(pBilling_address2Key, pBilling_address2Val);
        if(pBilling_address2Val != null) {
            
            pBilling_address2 = new String();
            jsonToValue(pBilling_address2, pBilling_address2Val, L"String", L"String");
        }
        delete pBilling_address2Key;
JsonString* pBilling_city_nameKey = new JsonString(L"billing_city_name");
        IJsonValue* pBilling_city_nameVal = null;
        pJsonObject->GetValue(pBilling_city_nameKey, pBilling_city_nameVal);
        if(pBilling_city_nameVal != null) {
            
            pBilling_city_name = new String();
            jsonToValue(pBilling_city_name, pBilling_city_nameVal, L"String", L"String");
        }
        delete pBilling_city_nameKey;
JsonString* pBilling_country_nameKey = new JsonString(L"billing_country_name");
        IJsonValue* pBilling_country_nameVal = null;
        pJsonObject->GetValue(pBilling_country_nameKey, pBilling_country_nameVal);
        if(pBilling_country_nameVal != null) {
            
            pBilling_country_name = new String();
            jsonToValue(pBilling_country_name, pBilling_country_nameVal, L"String", L"String");
        }
        delete pBilling_country_nameKey;
JsonString* pBilling_full_nameKey = new JsonString(L"billing_full_name");
        IJsonValue* pBilling_full_nameVal = null;
        pJsonObject->GetValue(pBilling_full_nameKey, pBilling_full_nameVal);
        if(pBilling_full_nameVal != null) {
            
            pBilling_full_name = new String();
            jsonToValue(pBilling_full_name, pBilling_full_nameVal, L"String", L"String");
        }
        delete pBilling_full_nameKey;
JsonString* pBilling_postal_codeKey = new JsonString(L"billing_postal_code");
        IJsonValue* pBilling_postal_codeVal = null;
        pJsonObject->GetValue(pBilling_postal_codeKey, pBilling_postal_codeVal);
        if(pBilling_postal_codeVal != null) {
            
            pBilling_postal_code = new String();
            jsonToValue(pBilling_postal_code, pBilling_postal_codeVal, L"String", L"String");
        }
        delete pBilling_postal_codeKey;
JsonString* pBilling_state_nameKey = new JsonString(L"billing_state_name");
        IJsonValue* pBilling_state_nameVal = null;
        pJsonObject->GetValue(pBilling_state_nameKey, pBilling_state_nameVal);
        if(pBilling_state_nameVal != null) {
            
            pBilling_state_name = new String();
            jsonToValue(pBilling_state_name, pBilling_state_nameVal, L"String", L"String");
        }
        delete pBilling_state_nameKey;
JsonString* pCart_idKey = new JsonString(L"cart_id");
        IJsonValue* pCart_idVal = null;
        pJsonObject->GetValue(pCart_idKey, pCart_idVal);
        if(pCart_idVal != null) {
            
            pCart_id = new String();
            jsonToValue(pCart_id, pCart_idVal, L"String", L"String");
        }
        delete pCart_idKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pCurrencyKey = new JsonString(L"currency");
        IJsonValue* pCurrencyVal = null;
        pJsonObject->GetValue(pCurrencyKey, pCurrencyVal);
        if(pCurrencyVal != null) {
            
            pCurrency = new String();
            jsonToValue(pCurrency, pCurrencyVal, L"String", L"String");
        }
        delete pCurrencyKey;
JsonString* pCurrent_fulfillment_statusKey = new JsonString(L"current_fulfillment_status");
        IJsonValue* pCurrent_fulfillment_statusVal = null;
        pJsonObject->GetValue(pCurrent_fulfillment_statusKey, pCurrent_fulfillment_statusVal);
        if(pCurrent_fulfillment_statusVal != null) {
            
            pCurrent_fulfillment_status = new String();
            jsonToValue(pCurrent_fulfillment_status, pCurrent_fulfillment_statusVal, L"String", L"String");
        }
        delete pCurrent_fulfillment_statusKey;
JsonString* pCurrent_payment_statusKey = new JsonString(L"current_payment_status");
        IJsonValue* pCurrent_payment_statusVal = null;
        pJsonObject->GetValue(pCurrent_payment_statusKey, pCurrent_payment_statusVal);
        if(pCurrent_payment_statusVal != null) {
            
            pCurrent_payment_status = new String();
            jsonToValue(pCurrent_payment_status, pCurrent_payment_statusVal, L"String", L"String");
        }
        delete pCurrent_payment_statusKey;
JsonString* pDiscountKey = new JsonString(L"discount");
        IJsonValue* pDiscountVal = null;
        pJsonObject->GetValue(pDiscountKey, pDiscountVal);
        if(pDiscountVal != null) {
            
            pDiscount = new Double();
            jsonToValue(pDiscount, pDiscountVal, L"Double", L"Double");
        }
        delete pDiscountKey;
JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pFed_taxKey = new JsonString(L"fed_tax");
        IJsonValue* pFed_taxVal = null;
        pJsonObject->GetValue(pFed_taxKey, pFed_taxVal);
        if(pFed_taxVal != null) {
            
            pFed_tax = new Double();
            jsonToValue(pFed_tax, pFed_taxVal, L"Double", L"Double");
        }
        delete pFed_taxKey;
JsonString* pGrand_totalKey = new JsonString(L"grand_total");
        IJsonValue* pGrand_totalVal = null;
        pJsonObject->GetValue(pGrand_totalKey, pGrand_totalVal);
        if(pGrand_totalVal != null) {
            
            pGrand_total = new Double();
            jsonToValue(pGrand_total, pGrand_totalVal, L"Double", L"Double");
        }
        delete pGrand_totalKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInvoice_numberKey = new JsonString(L"invoice_number");
        IJsonValue* pInvoice_numberVal = null;
        pJsonObject->GetValue(pInvoice_numberKey, pInvoice_numberVal);
        if(pInvoice_numberVal != null) {
            
            pInvoice_number = new String();
            jsonToValue(pInvoice_number, pInvoice_numberVal, L"String", L"String");
        }
        delete pInvoice_numberKey;
JsonString* pItemsKey = new JsonString(L"items");
        IJsonValue* pItemsVal = null;
        pJsonObject->GetValue(pItemsKey, pItemsVal);
        if(pItemsVal != null) {
            pItems = new ArrayList();
            
            jsonToValue(pItems, pItemsVal, L"IList", L"SamiInvoiceItemResource");
        }
        delete pItemsKey;
JsonString* pName_prefixKey = new JsonString(L"name_prefix");
        IJsonValue* pName_prefixVal = null;
        pJsonObject->GetValue(pName_prefixKey, pName_prefixVal);
        if(pName_prefixVal != null) {
            
            pName_prefix = new String();
            jsonToValue(pName_prefix, pName_prefixVal, L"String", L"String");
        }
        delete pName_prefixKey;
JsonString* pOrder_notesKey = new JsonString(L"order_notes");
        IJsonValue* pOrder_notesVal = null;
        pJsonObject->GetValue(pOrder_notesKey, pOrder_notesVal);
        if(pOrder_notesVal != null) {
            
            pOrder_notes = new String();
            jsonToValue(pOrder_notes, pOrder_notesVal, L"String", L"String");
        }
        delete pOrder_notesKey;
JsonString* pParent_invoice_idKey = new JsonString(L"parent_invoice_id");
        IJsonValue* pParent_invoice_idVal = null;
        pJsonObject->GetValue(pParent_invoice_idKey, pParent_invoice_idVal);
        if(pParent_invoice_idVal != null) {
            
            pParent_invoice_id = new Integer();
            jsonToValue(pParent_invoice_id, pParent_invoice_idVal, L"Integer", L"Integer");
        }
        delete pParent_invoice_idKey;
JsonString* pPayment_method_idKey = new JsonString(L"payment_method_id");
        IJsonValue* pPayment_method_idVal = null;
        pJsonObject->GetValue(pPayment_method_idKey, pPayment_method_idVal);
        if(pPayment_method_idVal != null) {
            
            pPayment_method_id = new Integer();
            jsonToValue(pPayment_method_id, pPayment_method_idVal, L"Integer", L"Integer");
        }
        delete pPayment_method_idKey;
JsonString* pPhoneKey = new JsonString(L"phone");
        IJsonValue* pPhoneVal = null;
        pJsonObject->GetValue(pPhoneKey, pPhoneVal);
        if(pPhoneVal != null) {
            
            pPhone = new String();
            jsonToValue(pPhone, pPhoneVal, L"String", L"String");
        }
        delete pPhoneKey;
JsonString* pPhone_numberKey = new JsonString(L"phone_number");
        IJsonValue* pPhone_numberVal = null;
        pJsonObject->GetValue(pPhone_numberKey, pPhone_numberVal);
        if(pPhone_numberVal != null) {
            
            pPhone_number = new String();
            jsonToValue(pPhone_number, pPhone_numberVal, L"String", L"String");
        }
        delete pPhone_numberKey;
JsonString* pShippingKey = new JsonString(L"shipping");
        IJsonValue* pShippingVal = null;
        pJsonObject->GetValue(pShippingKey, pShippingVal);
        if(pShippingVal != null) {
            
            pShipping = new Double();
            jsonToValue(pShipping, pShippingVal, L"Double", L"Double");
        }
        delete pShippingKey;
JsonString* pShipping_address1Key = new JsonString(L"shipping_address1");
        IJsonValue* pShipping_address1Val = null;
        pJsonObject->GetValue(pShipping_address1Key, pShipping_address1Val);
        if(pShipping_address1Val != null) {
            
            pShipping_address1 = new String();
            jsonToValue(pShipping_address1, pShipping_address1Val, L"String", L"String");
        }
        delete pShipping_address1Key;
JsonString* pShipping_address2Key = new JsonString(L"shipping_address2");
        IJsonValue* pShipping_address2Val = null;
        pJsonObject->GetValue(pShipping_address2Key, pShipping_address2Val);
        if(pShipping_address2Val != null) {
            
            pShipping_address2 = new String();
            jsonToValue(pShipping_address2, pShipping_address2Val, L"String", L"String");
        }
        delete pShipping_address2Key;
JsonString* pShipping_city_nameKey = new JsonString(L"shipping_city_name");
        IJsonValue* pShipping_city_nameVal = null;
        pJsonObject->GetValue(pShipping_city_nameKey, pShipping_city_nameVal);
        if(pShipping_city_nameVal != null) {
            
            pShipping_city_name = new String();
            jsonToValue(pShipping_city_name, pShipping_city_nameVal, L"String", L"String");
        }
        delete pShipping_city_nameKey;
JsonString* pShipping_country_nameKey = new JsonString(L"shipping_country_name");
        IJsonValue* pShipping_country_nameVal = null;
        pJsonObject->GetValue(pShipping_country_nameKey, pShipping_country_nameVal);
        if(pShipping_country_nameVal != null) {
            
            pShipping_country_name = new String();
            jsonToValue(pShipping_country_name, pShipping_country_nameVal, L"String", L"String");
        }
        delete pShipping_country_nameKey;
JsonString* pShipping_full_nameKey = new JsonString(L"shipping_full_name");
        IJsonValue* pShipping_full_nameVal = null;
        pJsonObject->GetValue(pShipping_full_nameKey, pShipping_full_nameVal);
        if(pShipping_full_nameVal != null) {
            
            pShipping_full_name = new String();
            jsonToValue(pShipping_full_name, pShipping_full_nameVal, L"String", L"String");
        }
        delete pShipping_full_nameKey;
JsonString* pShipping_postal_codeKey = new JsonString(L"shipping_postal_code");
        IJsonValue* pShipping_postal_codeVal = null;
        pJsonObject->GetValue(pShipping_postal_codeKey, pShipping_postal_codeVal);
        if(pShipping_postal_codeVal != null) {
            
            pShipping_postal_code = new String();
            jsonToValue(pShipping_postal_code, pShipping_postal_codeVal, L"String", L"String");
        }
        delete pShipping_postal_codeKey;
JsonString* pShipping_state_nameKey = new JsonString(L"shipping_state_name");
        IJsonValue* pShipping_state_nameVal = null;
        pJsonObject->GetValue(pShipping_state_nameKey, pShipping_state_nameVal);
        if(pShipping_state_nameVal != null) {
            
            pShipping_state_name = new String();
            jsonToValue(pShipping_state_name, pShipping_state_nameVal, L"String", L"String");
        }
        delete pShipping_state_nameKey;
JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = new Integer();
            jsonToValue(pSort, pSortVal, L"Integer", L"Integer");
        }
        delete pSortKey;
JsonString* pState_taxKey = new JsonString(L"state_tax");
        IJsonValue* pState_taxVal = null;
        pJsonObject->GetValue(pState_taxKey, pState_taxVal);
        if(pState_taxVal != null) {
            
            pState_tax = new Double();
            jsonToValue(pState_tax, pState_taxVal, L"Double", L"Double");
        }
        delete pState_taxKey;
JsonString* pSubtotalKey = new JsonString(L"subtotal");
        IJsonValue* pSubtotalVal = null;
        pJsonObject->GetValue(pSubtotalKey, pSubtotalVal);
        if(pSubtotalVal != null) {
            
            pSubtotal = new Double();
            jsonToValue(pSubtotal, pSubtotalVal, L"Double", L"Double");
        }
        delete pSubtotalKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
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

SamiInvoiceResource::SamiInvoiceResource(String* json) {
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
SamiInvoiceResource::asJson ()
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
SamiInvoiceResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBilling_address1Key = new JsonString(L"billing_address1");
    pJsonObject->Add(pBilling_address1Key, toJson(getPBillingAddress1(), "String", ""));

    JsonString *pBilling_address2Key = new JsonString(L"billing_address2");
    pJsonObject->Add(pBilling_address2Key, toJson(getPBillingAddress2(), "String", ""));

    JsonString *pBilling_city_nameKey = new JsonString(L"billing_city_name");
    pJsonObject->Add(pBilling_city_nameKey, toJson(getPBillingCityName(), "String", ""));

    JsonString *pBilling_country_nameKey = new JsonString(L"billing_country_name");
    pJsonObject->Add(pBilling_country_nameKey, toJson(getPBillingCountryName(), "String", ""));

    JsonString *pBilling_full_nameKey = new JsonString(L"billing_full_name");
    pJsonObject->Add(pBilling_full_nameKey, toJson(getPBillingFullName(), "String", ""));

    JsonString *pBilling_postal_codeKey = new JsonString(L"billing_postal_code");
    pJsonObject->Add(pBilling_postal_codeKey, toJson(getPBillingPostalCode(), "String", ""));

    JsonString *pBilling_state_nameKey = new JsonString(L"billing_state_name");
    pJsonObject->Add(pBilling_state_nameKey, toJson(getPBillingStateName(), "String", ""));

    JsonString *pCart_idKey = new JsonString(L"cart_id");
    pJsonObject->Add(pCart_idKey, toJson(getPCartId(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pCurrencyKey = new JsonString(L"currency");
    pJsonObject->Add(pCurrencyKey, toJson(getPCurrency(), "String", ""));

    JsonString *pCurrent_fulfillment_statusKey = new JsonString(L"current_fulfillment_status");
    pJsonObject->Add(pCurrent_fulfillment_statusKey, toJson(getPCurrentFulfillmentStatus(), "String", ""));

    JsonString *pCurrent_payment_statusKey = new JsonString(L"current_payment_status");
    pJsonObject->Add(pCurrent_payment_statusKey, toJson(getPCurrentPaymentStatus(), "String", ""));

    JsonString *pDiscountKey = new JsonString(L"discount");
    pJsonObject->Add(pDiscountKey, toJson(getPDiscount(), "Double", ""));

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pFed_taxKey = new JsonString(L"fed_tax");
    pJsonObject->Add(pFed_taxKey, toJson(getPFedTax(), "Double", ""));

    JsonString *pGrand_totalKey = new JsonString(L"grand_total");
    pJsonObject->Add(pGrand_totalKey, toJson(getPGrandTotal(), "Double", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInvoice_numberKey = new JsonString(L"invoice_number");
    pJsonObject->Add(pInvoice_numberKey, toJson(getPInvoiceNumber(), "String", ""));

    JsonString *pItemsKey = new JsonString(L"items");
    pJsonObject->Add(pItemsKey, toJson(getPItems(), "SamiInvoiceItemResource", "array"));

    JsonString *pName_prefixKey = new JsonString(L"name_prefix");
    pJsonObject->Add(pName_prefixKey, toJson(getPNamePrefix(), "String", ""));

    JsonString *pOrder_notesKey = new JsonString(L"order_notes");
    pJsonObject->Add(pOrder_notesKey, toJson(getPOrderNotes(), "String", ""));

    JsonString *pParent_invoice_idKey = new JsonString(L"parent_invoice_id");
    pJsonObject->Add(pParent_invoice_idKey, toJson(getPParentInvoiceId(), "Integer", ""));

    JsonString *pPayment_method_idKey = new JsonString(L"payment_method_id");
    pJsonObject->Add(pPayment_method_idKey, toJson(getPPaymentMethodId(), "Integer", ""));

    JsonString *pPhoneKey = new JsonString(L"phone");
    pJsonObject->Add(pPhoneKey, toJson(getPPhone(), "String", ""));

    JsonString *pPhone_numberKey = new JsonString(L"phone_number");
    pJsonObject->Add(pPhone_numberKey, toJson(getPPhoneNumber(), "String", ""));

    JsonString *pShippingKey = new JsonString(L"shipping");
    pJsonObject->Add(pShippingKey, toJson(getPShipping(), "Double", ""));

    JsonString *pShipping_address1Key = new JsonString(L"shipping_address1");
    pJsonObject->Add(pShipping_address1Key, toJson(getPShippingAddress1(), "String", ""));

    JsonString *pShipping_address2Key = new JsonString(L"shipping_address2");
    pJsonObject->Add(pShipping_address2Key, toJson(getPShippingAddress2(), "String", ""));

    JsonString *pShipping_city_nameKey = new JsonString(L"shipping_city_name");
    pJsonObject->Add(pShipping_city_nameKey, toJson(getPShippingCityName(), "String", ""));

    JsonString *pShipping_country_nameKey = new JsonString(L"shipping_country_name");
    pJsonObject->Add(pShipping_country_nameKey, toJson(getPShippingCountryName(), "String", ""));

    JsonString *pShipping_full_nameKey = new JsonString(L"shipping_full_name");
    pJsonObject->Add(pShipping_full_nameKey, toJson(getPShippingFullName(), "String", ""));

    JsonString *pShipping_postal_codeKey = new JsonString(L"shipping_postal_code");
    pJsonObject->Add(pShipping_postal_codeKey, toJson(getPShippingPostalCode(), "String", ""));

    JsonString *pShipping_state_nameKey = new JsonString(L"shipping_state_name");
    pJsonObject->Add(pShipping_state_nameKey, toJson(getPShippingStateName(), "String", ""));

    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "Integer", ""));

    JsonString *pState_taxKey = new JsonString(L"state_tax");
    pJsonObject->Add(pState_taxKey, toJson(getPStateTax(), "Double", ""));

    JsonString *pSubtotalKey = new JsonString(L"subtotal");
    pJsonObject->Add(pSubtotalKey, toJson(getPSubtotal(), "Double", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    JsonString *pVendor_idKey = new JsonString(L"vendor_id");
    pJsonObject->Add(pVendor_idKey, toJson(getPVendorId(), "Integer", ""));

    JsonString *pVendor_nameKey = new JsonString(L"vendor_name");
    pJsonObject->Add(pVendor_nameKey, toJson(getPVendorName(), "String", ""));

    return pJsonObject;
}

String*
SamiInvoiceResource::getPBillingAddress1() {
    return pBilling_address1;
}
void
SamiInvoiceResource::setPBillingAddress1(String* pBilling_address1) {
    this->pBilling_address1 = pBilling_address1;
}

String*
SamiInvoiceResource::getPBillingAddress2() {
    return pBilling_address2;
}
void
SamiInvoiceResource::setPBillingAddress2(String* pBilling_address2) {
    this->pBilling_address2 = pBilling_address2;
}

String*
SamiInvoiceResource::getPBillingCityName() {
    return pBilling_city_name;
}
void
SamiInvoiceResource::setPBillingCityName(String* pBilling_city_name) {
    this->pBilling_city_name = pBilling_city_name;
}

String*
SamiInvoiceResource::getPBillingCountryName() {
    return pBilling_country_name;
}
void
SamiInvoiceResource::setPBillingCountryName(String* pBilling_country_name) {
    this->pBilling_country_name = pBilling_country_name;
}

String*
SamiInvoiceResource::getPBillingFullName() {
    return pBilling_full_name;
}
void
SamiInvoiceResource::setPBillingFullName(String* pBilling_full_name) {
    this->pBilling_full_name = pBilling_full_name;
}

String*
SamiInvoiceResource::getPBillingPostalCode() {
    return pBilling_postal_code;
}
void
SamiInvoiceResource::setPBillingPostalCode(String* pBilling_postal_code) {
    this->pBilling_postal_code = pBilling_postal_code;
}

String*
SamiInvoiceResource::getPBillingStateName() {
    return pBilling_state_name;
}
void
SamiInvoiceResource::setPBillingStateName(String* pBilling_state_name) {
    this->pBilling_state_name = pBilling_state_name;
}

String*
SamiInvoiceResource::getPCartId() {
    return pCart_id;
}
void
SamiInvoiceResource::setPCartId(String* pCart_id) {
    this->pCart_id = pCart_id;
}

Long*
SamiInvoiceResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiInvoiceResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiInvoiceResource::getPCurrency() {
    return pCurrency;
}
void
SamiInvoiceResource::setPCurrency(String* pCurrency) {
    this->pCurrency = pCurrency;
}

String*
SamiInvoiceResource::getPCurrentFulfillmentStatus() {
    return pCurrent_fulfillment_status;
}
void
SamiInvoiceResource::setPCurrentFulfillmentStatus(String* pCurrent_fulfillment_status) {
    this->pCurrent_fulfillment_status = pCurrent_fulfillment_status;
}

String*
SamiInvoiceResource::getPCurrentPaymentStatus() {
    return pCurrent_payment_status;
}
void
SamiInvoiceResource::setPCurrentPaymentStatus(String* pCurrent_payment_status) {
    this->pCurrent_payment_status = pCurrent_payment_status;
}

Double*
SamiInvoiceResource::getPDiscount() {
    return pDiscount;
}
void
SamiInvoiceResource::setPDiscount(Double* pDiscount) {
    this->pDiscount = pDiscount;
}

String*
SamiInvoiceResource::getPEmail() {
    return pEmail;
}
void
SamiInvoiceResource::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

Double*
SamiInvoiceResource::getPFedTax() {
    return pFed_tax;
}
void
SamiInvoiceResource::setPFedTax(Double* pFed_tax) {
    this->pFed_tax = pFed_tax;
}

Double*
SamiInvoiceResource::getPGrandTotal() {
    return pGrand_total;
}
void
SamiInvoiceResource::setPGrandTotal(Double* pGrand_total) {
    this->pGrand_total = pGrand_total;
}

Integer*
SamiInvoiceResource::getPId() {
    return pId;
}
void
SamiInvoiceResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiInvoiceResource::getPInvoiceNumber() {
    return pInvoice_number;
}
void
SamiInvoiceResource::setPInvoiceNumber(String* pInvoice_number) {
    this->pInvoice_number = pInvoice_number;
}

IList*
SamiInvoiceResource::getPItems() {
    return pItems;
}
void
SamiInvoiceResource::setPItems(IList* pItems) {
    this->pItems = pItems;
}

String*
SamiInvoiceResource::getPNamePrefix() {
    return pName_prefix;
}
void
SamiInvoiceResource::setPNamePrefix(String* pName_prefix) {
    this->pName_prefix = pName_prefix;
}

String*
SamiInvoiceResource::getPOrderNotes() {
    return pOrder_notes;
}
void
SamiInvoiceResource::setPOrderNotes(String* pOrder_notes) {
    this->pOrder_notes = pOrder_notes;
}

Integer*
SamiInvoiceResource::getPParentInvoiceId() {
    return pParent_invoice_id;
}
void
SamiInvoiceResource::setPParentInvoiceId(Integer* pParent_invoice_id) {
    this->pParent_invoice_id = pParent_invoice_id;
}

Integer*
SamiInvoiceResource::getPPaymentMethodId() {
    return pPayment_method_id;
}
void
SamiInvoiceResource::setPPaymentMethodId(Integer* pPayment_method_id) {
    this->pPayment_method_id = pPayment_method_id;
}

String*
SamiInvoiceResource::getPPhone() {
    return pPhone;
}
void
SamiInvoiceResource::setPPhone(String* pPhone) {
    this->pPhone = pPhone;
}

String*
SamiInvoiceResource::getPPhoneNumber() {
    return pPhone_number;
}
void
SamiInvoiceResource::setPPhoneNumber(String* pPhone_number) {
    this->pPhone_number = pPhone_number;
}

Double*
SamiInvoiceResource::getPShipping() {
    return pShipping;
}
void
SamiInvoiceResource::setPShipping(Double* pShipping) {
    this->pShipping = pShipping;
}

String*
SamiInvoiceResource::getPShippingAddress1() {
    return pShipping_address1;
}
void
SamiInvoiceResource::setPShippingAddress1(String* pShipping_address1) {
    this->pShipping_address1 = pShipping_address1;
}

String*
SamiInvoiceResource::getPShippingAddress2() {
    return pShipping_address2;
}
void
SamiInvoiceResource::setPShippingAddress2(String* pShipping_address2) {
    this->pShipping_address2 = pShipping_address2;
}

String*
SamiInvoiceResource::getPShippingCityName() {
    return pShipping_city_name;
}
void
SamiInvoiceResource::setPShippingCityName(String* pShipping_city_name) {
    this->pShipping_city_name = pShipping_city_name;
}

String*
SamiInvoiceResource::getPShippingCountryName() {
    return pShipping_country_name;
}
void
SamiInvoiceResource::setPShippingCountryName(String* pShipping_country_name) {
    this->pShipping_country_name = pShipping_country_name;
}

String*
SamiInvoiceResource::getPShippingFullName() {
    return pShipping_full_name;
}
void
SamiInvoiceResource::setPShippingFullName(String* pShipping_full_name) {
    this->pShipping_full_name = pShipping_full_name;
}

String*
SamiInvoiceResource::getPShippingPostalCode() {
    return pShipping_postal_code;
}
void
SamiInvoiceResource::setPShippingPostalCode(String* pShipping_postal_code) {
    this->pShipping_postal_code = pShipping_postal_code;
}

String*
SamiInvoiceResource::getPShippingStateName() {
    return pShipping_state_name;
}
void
SamiInvoiceResource::setPShippingStateName(String* pShipping_state_name) {
    this->pShipping_state_name = pShipping_state_name;
}

Integer*
SamiInvoiceResource::getPSort() {
    return pSort;
}
void
SamiInvoiceResource::setPSort(Integer* pSort) {
    this->pSort = pSort;
}

Double*
SamiInvoiceResource::getPStateTax() {
    return pState_tax;
}
void
SamiInvoiceResource::setPStateTax(Double* pState_tax) {
    this->pState_tax = pState_tax;
}

Double*
SamiInvoiceResource::getPSubtotal() {
    return pSubtotal;
}
void
SamiInvoiceResource::setPSubtotal(Double* pSubtotal) {
    this->pSubtotal = pSubtotal;
}

Long*
SamiInvoiceResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiInvoiceResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

SamiSimpleUserResource*
SamiInvoiceResource::getPUser() {
    return pUser;
}
void
SamiInvoiceResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}

Integer*
SamiInvoiceResource::getPVendorId() {
    return pVendor_id;
}
void
SamiInvoiceResource::setPVendorId(Integer* pVendor_id) {
    this->pVendor_id = pVendor_id;
}

String*
SamiInvoiceResource::getPVendorName() {
    return pVendor_name;
}
void
SamiInvoiceResource::setPVendorName(String* pVendor_name) {
    this->pVendor_name = pVendor_name;
}



} /* namespace Swagger */

