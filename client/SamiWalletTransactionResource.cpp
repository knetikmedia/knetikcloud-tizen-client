
#include "SamiWalletTransactionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiWalletTransactionResource::SamiWalletTransactionResource() {
    init();
}

SamiWalletTransactionResource::~SamiWalletTransactionResource() {
    this->cleanup();
}

void
SamiWalletTransactionResource::init() {
    pBalance = null;
pCreate_date = null;
pCurrency_code = null;
pDetails = null;
pId = null;
pInvoice_id = null;
pIs_refunded = null;
pResponse = null;
pSource = null;
pSuccessful = null;
pTransaction_id = null;
pType = null;
pType_hint = null;
pUser = null;
pValue = null;
pWallet_id = null;
}

void
SamiWalletTransactionResource::cleanup() {
    if(pBalance != null) {
        
        delete pBalance;
        pBalance = null;
    }
if(pCreate_date != null) {
        
        delete pCreate_date;
        pCreate_date = null;
    }
if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pDetails != null) {
        
        delete pDetails;
        pDetails = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pIs_refunded != null) {
        
        delete pIs_refunded;
        pIs_refunded = null;
    }
if(pResponse != null) {
        
        delete pResponse;
        pResponse = null;
    }
if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
if(pSuccessful != null) {
        
        delete pSuccessful;
        pSuccessful = null;
    }
if(pTransaction_id != null) {
        
        delete pTransaction_id;
        pTransaction_id = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
if(pWallet_id != null) {
        
        delete pWallet_id;
        pWallet_id = null;
    }
}


SamiWalletTransactionResource*
SamiWalletTransactionResource::fromJson(String* json) {
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
SamiWalletTransactionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBalanceKey = new JsonString(L"balance");
        IJsonValue* pBalanceVal = null;
        pJsonObject->GetValue(pBalanceKey, pBalanceVal);
        if(pBalanceVal != null) {
            
            pBalance = new Double();
            jsonToValue(pBalance, pBalanceVal, L"Double", L"Double");
        }
        delete pBalanceKey;
JsonString* pCreate_dateKey = new JsonString(L"create_date");
        IJsonValue* pCreate_dateVal = null;
        pJsonObject->GetValue(pCreate_dateKey, pCreate_dateVal);
        if(pCreate_dateVal != null) {
            
            pCreate_date = new Long();
            jsonToValue(pCreate_date, pCreate_dateVal, L"Long", L"Long");
        }
        delete pCreate_dateKey;
JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pDetailsKey = new JsonString(L"details");
        IJsonValue* pDetailsVal = null;
        pJsonObject->GetValue(pDetailsKey, pDetailsVal);
        if(pDetailsVal != null) {
            
            pDetails = new String();
            jsonToValue(pDetails, pDetailsVal, L"String", L"String");
        }
        delete pDetailsKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pIs_refundedKey = new JsonString(L"is_refunded");
        IJsonValue* pIs_refundedVal = null;
        pJsonObject->GetValue(pIs_refundedKey, pIs_refundedVal);
        if(pIs_refundedVal != null) {
            
            pIs_refunded = new Boolean(false);
            jsonToValue(pIs_refunded, pIs_refundedVal, L"Boolean", L"Boolean");
        }
        delete pIs_refundedKey;
JsonString* pResponseKey = new JsonString(L"response");
        IJsonValue* pResponseVal = null;
        pJsonObject->GetValue(pResponseKey, pResponseVal);
        if(pResponseVal != null) {
            
            pResponse = new String();
            jsonToValue(pResponse, pResponseVal, L"String", L"String");
        }
        delete pResponseKey;
JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = new String();
            jsonToValue(pSource, pSourceVal, L"String", L"String");
        }
        delete pSourceKey;
JsonString* pSuccessfulKey = new JsonString(L"successful");
        IJsonValue* pSuccessfulVal = null;
        pJsonObject->GetValue(pSuccessfulKey, pSuccessfulVal);
        if(pSuccessfulVal != null) {
            
            pSuccessful = new Boolean(false);
            jsonToValue(pSuccessful, pSuccessfulVal, L"Boolean", L"Boolean");
        }
        delete pSuccessfulKey;
JsonString* pTransaction_idKey = new JsonString(L"transaction_id");
        IJsonValue* pTransaction_idVal = null;
        pJsonObject->GetValue(pTransaction_idKey, pTransaction_idVal);
        if(pTransaction_idVal != null) {
            
            pTransaction_id = new String();
            jsonToValue(pTransaction_id, pTransaction_idVal, L"String", L"String");
        }
        delete pTransaction_idKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
JsonString* pWallet_idKey = new JsonString(L"wallet_id");
        IJsonValue* pWallet_idVal = null;
        pJsonObject->GetValue(pWallet_idKey, pWallet_idVal);
        if(pWallet_idVal != null) {
            
            pWallet_id = new Integer();
            jsonToValue(pWallet_id, pWallet_idVal, L"Integer", L"Integer");
        }
        delete pWallet_idKey;
    }
}

SamiWalletTransactionResource::SamiWalletTransactionResource(String* json) {
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
SamiWalletTransactionResource::asJson ()
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
SamiWalletTransactionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBalanceKey = new JsonString(L"balance");
    pJsonObject->Add(pBalanceKey, toJson(getPBalance(), "Double", ""));

    JsonString *pCreate_dateKey = new JsonString(L"create_date");
    pJsonObject->Add(pCreate_dateKey, toJson(getPCreateDate(), "Long", ""));

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pDetailsKey = new JsonString(L"details");
    pJsonObject->Add(pDetailsKey, toJson(getPDetails(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pIs_refundedKey = new JsonString(L"is_refunded");
    pJsonObject->Add(pIs_refundedKey, toJson(getPIsRefunded(), "Boolean", ""));

    JsonString *pResponseKey = new JsonString(L"response");
    pJsonObject->Add(pResponseKey, toJson(getPResponse(), "String", ""));

    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "String", ""));

    JsonString *pSuccessfulKey = new JsonString(L"successful");
    pJsonObject->Add(pSuccessfulKey, toJson(getPSuccessful(), "Boolean", ""));

    JsonString *pTransaction_idKey = new JsonString(L"transaction_id");
    pJsonObject->Add(pTransaction_idKey, toJson(getPTransactionId(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    JsonString *pWallet_idKey = new JsonString(L"wallet_id");
    pJsonObject->Add(pWallet_idKey, toJson(getPWalletId(), "Integer", ""));

    return pJsonObject;
}

Double*
SamiWalletTransactionResource::getPBalance() {
    return pBalance;
}
void
SamiWalletTransactionResource::setPBalance(Double* pBalance) {
    this->pBalance = pBalance;
}

Long*
SamiWalletTransactionResource::getPCreateDate() {
    return pCreate_date;
}
void
SamiWalletTransactionResource::setPCreateDate(Long* pCreate_date) {
    this->pCreate_date = pCreate_date;
}

String*
SamiWalletTransactionResource::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiWalletTransactionResource::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiWalletTransactionResource::getPDetails() {
    return pDetails;
}
void
SamiWalletTransactionResource::setPDetails(String* pDetails) {
    this->pDetails = pDetails;
}

Integer*
SamiWalletTransactionResource::getPId() {
    return pId;
}
void
SamiWalletTransactionResource::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiWalletTransactionResource::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiWalletTransactionResource::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

Boolean*
SamiWalletTransactionResource::getPIsRefunded() {
    return pIs_refunded;
}
void
SamiWalletTransactionResource::setPIsRefunded(Boolean* pIs_refunded) {
    this->pIs_refunded = pIs_refunded;
}

String*
SamiWalletTransactionResource::getPResponse() {
    return pResponse;
}
void
SamiWalletTransactionResource::setPResponse(String* pResponse) {
    this->pResponse = pResponse;
}

String*
SamiWalletTransactionResource::getPSource() {
    return pSource;
}
void
SamiWalletTransactionResource::setPSource(String* pSource) {
    this->pSource = pSource;
}

Boolean*
SamiWalletTransactionResource::getPSuccessful() {
    return pSuccessful;
}
void
SamiWalletTransactionResource::setPSuccessful(Boolean* pSuccessful) {
    this->pSuccessful = pSuccessful;
}

String*
SamiWalletTransactionResource::getPTransactionId() {
    return pTransaction_id;
}
void
SamiWalletTransactionResource::setPTransactionId(String* pTransaction_id) {
    this->pTransaction_id = pTransaction_id;
}

String*
SamiWalletTransactionResource::getPType() {
    return pType;
}
void
SamiWalletTransactionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiWalletTransactionResource::getPTypeHint() {
    return pType_hint;
}
void
SamiWalletTransactionResource::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

SamiSimpleUserResource*
SamiWalletTransactionResource::getPUser() {
    return pUser;
}
void
SamiWalletTransactionResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}

Double*
SamiWalletTransactionResource::getPValue() {
    return pValue;
}
void
SamiWalletTransactionResource::setPValue(Double* pValue) {
    this->pValue = pValue;
}

Integer*
SamiWalletTransactionResource::getPWalletId() {
    return pWallet_id;
}
void
SamiWalletTransactionResource::setPWalletId(Integer* pWallet_id) {
    this->pWallet_id = pWallet_id;
}



} /* namespace Swagger */

