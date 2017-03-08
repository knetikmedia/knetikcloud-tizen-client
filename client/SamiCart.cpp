
#include "SamiCart.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCart::SamiCart() {
    init();
}

SamiCart::~SamiCart() {
    this->cleanup();
}

void
SamiCart::init() {
    pCountry_tax = null;
pCoupons = null;
pCreated = null;
pCurrency_code = null;
pDiscount_total = null;
pError_code = null;
pError_message = null;
pGrand_total = null;
pId = null;
pInvoice_id = null;
pItems = null;
pOwner = null;
pSelected_shipping_options = null;
pShippable = null;
pShipping_address = null;
pShipping_cost = null;
pShipping_options = null;
pState_tax = null;
pStatus = null;
pSubtotal = null;
pUpdated = null;
}

void
SamiCart::cleanup() {
    if(pCountry_tax != null) {
        
        delete pCountry_tax;
        pCountry_tax = null;
    }
if(pCoupons != null) {
        pCoupons->RemoveAll(true);
        delete pCoupons;
        pCoupons = null;
    }
if(pCreated != null) {
        
        delete pCreated;
        pCreated = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDiscount_total != null) {
        
        delete pDiscount_total;
        pDiscount_total = null;
    }
if(pError_code != null) {
        
        delete pError_code;
        pError_code = null;
    }
if(pError_message != null) {
        
        delete pError_message;
        pError_message = null;
    }
if(pGrand_total != null) {
        
        delete pGrand_total;
        pGrand_total = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pItems != null) {
        pItems->RemoveAll(true);
        delete pItems;
        pItems = null;
    }
if(pOwner != null) {
        
        delete pOwner;
        pOwner = null;
    }
if(pSelected_shipping_options != null) {
        pSelected_shipping_options->RemoveAll(true);
        delete pSelected_shipping_options;
        pSelected_shipping_options = null;
    }
if(pShippable != null) {
        
        delete pShippable;
        pShippable = null;
    }
if(pShipping_address != null) {
        
        delete pShipping_address;
        pShipping_address = null;
    }
if(pShipping_cost != null) {
        
        delete pShipping_cost;
        pShipping_cost = null;
    }
if(pShipping_options != null) {
        pShipping_options->RemoveAll(true);
        delete pShipping_options;
        pShipping_options = null;
    }
if(pState_tax != null) {
        
        delete pState_tax;
        pState_tax = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pSubtotal != null) {
        
        delete pSubtotal;
        pSubtotal = null;
    }
if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
}


SamiCart*
SamiCart::fromJson(String* json) {
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
SamiCart::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountry_taxKey = new JsonString(L"country_tax");
        IJsonValue* pCountry_taxVal = null;
        pJsonObject->GetValue(pCountry_taxKey, pCountry_taxVal);
        if(pCountry_taxVal != null) {
            
            pCountry_tax = new Double();
            jsonToValue(pCountry_tax, pCountry_taxVal, L"Double", L"Double");
        }
        delete pCountry_taxKey;
JsonString* pCouponsKey = new JsonString(L"coupons");
        IJsonValue* pCouponsVal = null;
        pJsonObject->GetValue(pCouponsKey, pCouponsVal);
        if(pCouponsVal != null) {
            pCoupons = new ArrayList();
            
            jsonToValue(pCoupons, pCouponsVal, L"IList", L"SamiCouponDefinition");
        }
        delete pCouponsKey;
JsonString* pCreatedKey = new JsonString(L"created");
        IJsonValue* pCreatedVal = null;
        pJsonObject->GetValue(pCreatedKey, pCreatedVal);
        if(pCreatedVal != null) {
            
            pCreated = new Long();
            jsonToValue(pCreated, pCreatedVal, L"Long", L"Long");
        }
        delete pCreatedKey;
JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pDiscount_totalKey = new JsonString(L"discount_total");
        IJsonValue* pDiscount_totalVal = null;
        pJsonObject->GetValue(pDiscount_totalKey, pDiscount_totalVal);
        if(pDiscount_totalVal != null) {
            
            pDiscount_total = new Double();
            jsonToValue(pDiscount_total, pDiscount_totalVal, L"Double", L"Double");
        }
        delete pDiscount_totalKey;
JsonString* pError_codeKey = new JsonString(L"error_code");
        IJsonValue* pError_codeVal = null;
        pJsonObject->GetValue(pError_codeKey, pError_codeVal);
        if(pError_codeVal != null) {
            
            pError_code = new Integer();
            jsonToValue(pError_code, pError_codeVal, L"Integer", L"Integer");
        }
        delete pError_codeKey;
JsonString* pError_messageKey = new JsonString(L"error_message");
        IJsonValue* pError_messageVal = null;
        pJsonObject->GetValue(pError_messageKey, pError_messageVal);
        if(pError_messageVal != null) {
            
            pError_message = new String();
            jsonToValue(pError_message, pError_messageVal, L"String", L"String");
        }
        delete pError_messageKey;
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
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Double();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Double", L"Double");
        }
        delete pInvoice_idKey;
JsonString* pItemsKey = new JsonString(L"items");
        IJsonValue* pItemsVal = null;
        pJsonObject->GetValue(pItemsKey, pItemsVal);
        if(pItemsVal != null) {
            pItems = new ArrayList();
            
            jsonToValue(pItems, pItemsVal, L"IList", L"SamiCartLineItem");
        }
        delete pItemsKey;
JsonString* pOwnerKey = new JsonString(L"owner");
        IJsonValue* pOwnerVal = null;
        pJsonObject->GetValue(pOwnerKey, pOwnerVal);
        if(pOwnerVal != null) {
            
            pOwner = new Integer();
            jsonToValue(pOwner, pOwnerVal, L"Integer", L"Integer");
        }
        delete pOwnerKey;
JsonString* pSelected_shipping_optionsKey = new JsonString(L"selected_shipping_options");
        IJsonValue* pSelected_shipping_optionsVal = null;
        pJsonObject->GetValue(pSelected_shipping_optionsKey, pSelected_shipping_optionsVal);
        if(pSelected_shipping_optionsVal != null) {
            pSelected_shipping_options = new ArrayList();
            
            jsonToValue(pSelected_shipping_options, pSelected_shipping_optionsVal, L"IList", L"SamiCartShippingOption");
        }
        delete pSelected_shipping_optionsKey;
JsonString* pShippableKey = new JsonString(L"shippable");
        IJsonValue* pShippableVal = null;
        pJsonObject->GetValue(pShippableKey, pShippableVal);
        if(pShippableVal != null) {
            
            pShippable = new Boolean(false);
            jsonToValue(pShippable, pShippableVal, L"Boolean", L"Boolean");
        }
        delete pShippableKey;
JsonString* pShipping_addressKey = new JsonString(L"shipping_address");
        IJsonValue* pShipping_addressVal = null;
        pJsonObject->GetValue(pShipping_addressKey, pShipping_addressVal);
        if(pShipping_addressVal != null) {
            
            pShipping_address = new SamiCartShippingAddressRequest();
            jsonToValue(pShipping_address, pShipping_addressVal, L"SamiCartShippingAddressRequest", L"SamiCartShippingAddressRequest");
        }
        delete pShipping_addressKey;
JsonString* pShipping_costKey = new JsonString(L"shipping_cost");
        IJsonValue* pShipping_costVal = null;
        pJsonObject->GetValue(pShipping_costKey, pShipping_costVal);
        if(pShipping_costVal != null) {
            
            pShipping_cost = new Double();
            jsonToValue(pShipping_cost, pShipping_costVal, L"Double", L"Double");
        }
        delete pShipping_costKey;
JsonString* pShipping_optionsKey = new JsonString(L"shipping_options");
        IJsonValue* pShipping_optionsVal = null;
        pJsonObject->GetValue(pShipping_optionsKey, pShipping_optionsVal);
        if(pShipping_optionsVal != null) {
            pShipping_options = new HashMap();
            
            jsonToValue(pShipping_options, pShipping_optionsVal, L"HashMap", L"SamiSet");
        }
        delete pShipping_optionsKey;
JsonString* pState_taxKey = new JsonString(L"state_tax");
        IJsonValue* pState_taxVal = null;
        pJsonObject->GetValue(pState_taxKey, pState_taxVal);
        if(pState_taxVal != null) {
            
            pState_tax = new Double();
            jsonToValue(pState_tax, pState_taxVal, L"Double", L"Double");
        }
        delete pState_taxKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pSubtotalKey = new JsonString(L"subtotal");
        IJsonValue* pSubtotalVal = null;
        pJsonObject->GetValue(pSubtotalKey, pSubtotalVal);
        if(pSubtotalVal != null) {
            
            pSubtotal = new Double();
            jsonToValue(pSubtotal, pSubtotalVal, L"Double", L"Double");
        }
        delete pSubtotalKey;
JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = new Long();
            jsonToValue(pUpdated, pUpdatedVal, L"Long", L"Long");
        }
        delete pUpdatedKey;
    }
}

SamiCart::SamiCart(String* json) {
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
SamiCart::asJson ()
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
SamiCart::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountry_taxKey = new JsonString(L"country_tax");
    pJsonObject->Add(pCountry_taxKey, toJson(getPCountryTax(), "Double", ""));

    JsonString *pCouponsKey = new JsonString(L"coupons");
    pJsonObject->Add(pCouponsKey, toJson(getPCoupons(), "SamiCouponDefinition", "array"));

    JsonString *pCreatedKey = new JsonString(L"created");
    pJsonObject->Add(pCreatedKey, toJson(getPCreated(), "Long", ""));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDiscount_totalKey = new JsonString(L"discount_total");
    pJsonObject->Add(pDiscount_totalKey, toJson(getPDiscountTotal(), "Double", ""));

    JsonString *pError_codeKey = new JsonString(L"error_code");
    pJsonObject->Add(pError_codeKey, toJson(getPErrorCode(), "Integer", ""));

    JsonString *pError_messageKey = new JsonString(L"error_message");
    pJsonObject->Add(pError_messageKey, toJson(getPErrorMessage(), "String", ""));

    JsonString *pGrand_totalKey = new JsonString(L"grand_total");
    pJsonObject->Add(pGrand_totalKey, toJson(getPGrandTotal(), "Double", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Double", ""));

    JsonString *pItemsKey = new JsonString(L"items");
    pJsonObject->Add(pItemsKey, toJson(getPItems(), "SamiCartLineItem", "array"));

    JsonString *pOwnerKey = new JsonString(L"owner");
    pJsonObject->Add(pOwnerKey, toJson(getPOwner(), "Integer", ""));

    JsonString *pSelected_shipping_optionsKey = new JsonString(L"selected_shipping_options");
    pJsonObject->Add(pSelected_shipping_optionsKey, toJson(getPSelectedShippingOptions(), "SamiCartShippingOption", "array"));

    JsonString *pShippableKey = new JsonString(L"shippable");
    pJsonObject->Add(pShippableKey, toJson(getPShippable(), "Boolean", ""));

    JsonString *pShipping_addressKey = new JsonString(L"shipping_address");
    pJsonObject->Add(pShipping_addressKey, toJson(getPShippingAddress(), "SamiCartShippingAddressRequest", ""));

    JsonString *pShipping_costKey = new JsonString(L"shipping_cost");
    pJsonObject->Add(pShipping_costKey, toJson(getPShippingCost(), "Double", ""));

    JsonString *pShipping_optionsKey = new JsonString(L"shipping_options");
    pJsonObject->Add(pShipping_optionsKey, toJson(getPShippingOptions(), "SamiSet", "map"));

    JsonString *pState_taxKey = new JsonString(L"state_tax");
    pJsonObject->Add(pState_taxKey, toJson(getPStateTax(), "Double", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pSubtotalKey = new JsonString(L"subtotal");
    pJsonObject->Add(pSubtotalKey, toJson(getPSubtotal(), "Double", ""));

    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Long", ""));

    return pJsonObject;
}

Double*
SamiCart::getPCountryTax() {
    return pCountry_tax;
}
void
SamiCart::setPCountryTax(Double* pCountry_tax) {
    this->pCountry_tax = pCountry_tax;
}

IList*
SamiCart::getPCoupons() {
    return pCoupons;
}
void
SamiCart::setPCoupons(IList* pCoupons) {
    this->pCoupons = pCoupons;
}

Long*
SamiCart::getPCreated() {
    return pCreated;
}
void
SamiCart::setPCreated(Long* pCreated) {
    this->pCreated = pCreated;
}

String*
SamiCart::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiCart::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

Double*
SamiCart::getPDiscountTotal() {
    return pDiscount_total;
}
void
SamiCart::setPDiscountTotal(Double* pDiscount_total) {
    this->pDiscount_total = pDiscount_total;
}

Integer*
SamiCart::getPErrorCode() {
    return pError_code;
}
void
SamiCart::setPErrorCode(Integer* pError_code) {
    this->pError_code = pError_code;
}

String*
SamiCart::getPErrorMessage() {
    return pError_message;
}
void
SamiCart::setPErrorMessage(String* pError_message) {
    this->pError_message = pError_message;
}

Double*
SamiCart::getPGrandTotal() {
    return pGrand_total;
}
void
SamiCart::setPGrandTotal(Double* pGrand_total) {
    this->pGrand_total = pGrand_total;
}

String*
SamiCart::getPId() {
    return pId;
}
void
SamiCart::setPId(String* pId) {
    this->pId = pId;
}

Double*
SamiCart::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiCart::setPInvoiceId(Double* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

IList*
SamiCart::getPItems() {
    return pItems;
}
void
SamiCart::setPItems(IList* pItems) {
    this->pItems = pItems;
}

Integer*
SamiCart::getPOwner() {
    return pOwner;
}
void
SamiCart::setPOwner(Integer* pOwner) {
    this->pOwner = pOwner;
}

IList*
SamiCart::getPSelectedShippingOptions() {
    return pSelected_shipping_options;
}
void
SamiCart::setPSelectedShippingOptions(IList* pSelected_shipping_options) {
    this->pSelected_shipping_options = pSelected_shipping_options;
}

Boolean*
SamiCart::getPShippable() {
    return pShippable;
}
void
SamiCart::setPShippable(Boolean* pShippable) {
    this->pShippable = pShippable;
}

SamiCartShippingAddressRequest*
SamiCart::getPShippingAddress() {
    return pShipping_address;
}
void
SamiCart::setPShippingAddress(SamiCartShippingAddressRequest* pShipping_address) {
    this->pShipping_address = pShipping_address;
}

Double*
SamiCart::getPShippingCost() {
    return pShipping_cost;
}
void
SamiCart::setPShippingCost(Double* pShipping_cost) {
    this->pShipping_cost = pShipping_cost;
}

HashMap*
SamiCart::getPShippingOptions() {
    return pShipping_options;
}
void
SamiCart::setPShippingOptions(HashMap* pShipping_options) {
    this->pShipping_options = pShipping_options;
}

Double*
SamiCart::getPStateTax() {
    return pState_tax;
}
void
SamiCart::setPStateTax(Double* pState_tax) {
    this->pState_tax = pState_tax;
}

String*
SamiCart::getPStatus() {
    return pStatus;
}
void
SamiCart::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Double*
SamiCart::getPSubtotal() {
    return pSubtotal;
}
void
SamiCart::setPSubtotal(Double* pSubtotal) {
    this->pSubtotal = pSubtotal;
}

Long*
SamiCart::getPUpdated() {
    return pUpdated;
}
void
SamiCart::setPUpdated(Long* pUpdated) {
    this->pUpdated = pUpdated;
}



} /* namespace Swagger */

