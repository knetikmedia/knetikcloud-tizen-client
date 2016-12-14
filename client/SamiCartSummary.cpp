
#include "SamiCartSummary.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCartSummary::SamiCartSummary() {
    init();
}

SamiCartSummary::~SamiCartSummary() {
    this->cleanup();
}

void
SamiCartSummary::init() {
    pCreated_date = null;
pCurrency_code = null;
pGrand_total = null;
pId = null;
pInvoice_id = null;
pItems_in_cart = null;
pStatus = null;
pSubtotal = null;
}

void
SamiCartSummary::cleanup() {
    if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
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
if(pItems_in_cart != null) {
        
        delete pItems_in_cart;
        pItems_in_cart = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pSubtotal != null) {
        
        delete pSubtotal;
        pSubtotal = null;
    }
}


SamiCartSummary*
SamiCartSummary::fromJson(String* json) {
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
SamiCartSummary::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
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
JsonString* pItems_in_cartKey = new JsonString(L"items_in_cart");
        IJsonValue* pItems_in_cartVal = null;
        pJsonObject->GetValue(pItems_in_cartKey, pItems_in_cartVal);
        if(pItems_in_cartVal != null) {
            
            pItems_in_cart = new Integer();
            jsonToValue(pItems_in_cart, pItems_in_cartVal, L"Integer", L"Integer");
        }
        delete pItems_in_cartKey;
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
    }
}

SamiCartSummary::SamiCartSummary(String* json) {
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
SamiCartSummary::asJson ()
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
SamiCartSummary::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pGrand_totalKey = new JsonString(L"grand_total");
    pJsonObject->Add(pGrand_totalKey, toJson(getPGrandTotal(), "Double", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Double", ""));

    JsonString *pItems_in_cartKey = new JsonString(L"items_in_cart");
    pJsonObject->Add(pItems_in_cartKey, toJson(getPItemsInCart(), "Integer", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pSubtotalKey = new JsonString(L"subtotal");
    pJsonObject->Add(pSubtotalKey, toJson(getPSubtotal(), "Double", ""));

    return pJsonObject;
}

Long*
SamiCartSummary::getPCreatedDate() {
    return pCreated_date;
}
void
SamiCartSummary::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiCartSummary::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiCartSummary::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

Double*
SamiCartSummary::getPGrandTotal() {
    return pGrand_total;
}
void
SamiCartSummary::setPGrandTotal(Double* pGrand_total) {
    this->pGrand_total = pGrand_total;
}

String*
SamiCartSummary::getPId() {
    return pId;
}
void
SamiCartSummary::setPId(String* pId) {
    this->pId = pId;
}

Double*
SamiCartSummary::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiCartSummary::setPInvoiceId(Double* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

Integer*
SamiCartSummary::getPItemsInCart() {
    return pItems_in_cart;
}
void
SamiCartSummary::setPItemsInCart(Integer* pItems_in_cart) {
    this->pItems_in_cart = pItems_in_cart;
}

String*
SamiCartSummary::getPStatus() {
    return pStatus;
}
void
SamiCartSummary::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Double*
SamiCartSummary::getPSubtotal() {
    return pSubtotal;
}
void
SamiCartSummary::setPSubtotal(Double* pSubtotal) {
    this->pSubtotal = pSubtotal;
}



} /* namespace Swagger */

