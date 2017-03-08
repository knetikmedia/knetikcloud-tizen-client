
#include "SamiTransactionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTransactionResource::SamiTransactionResource() {
    init();
}

SamiTransactionResource::~SamiTransactionResource() {
    this->cleanup();
}

void
SamiTransactionResource::init() {
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
pValue = null;
}

void
SamiTransactionResource::cleanup() {
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
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiTransactionResource*
SamiTransactionResource::fromJson(String* json) {
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
SamiTransactionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
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
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
    }
}

SamiTransactionResource::SamiTransactionResource(String* json) {
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
SamiTransactionResource::asJson ()
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
SamiTransactionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

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

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    return pJsonObject;
}

Long*
SamiTransactionResource::getPCreateDate() {
    return pCreate_date;
}
void
SamiTransactionResource::setPCreateDate(Long* pCreate_date) {
    this->pCreate_date = pCreate_date;
}

String*
SamiTransactionResource::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiTransactionResource::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

String*
SamiTransactionResource::getPDetails() {
    return pDetails;
}
void
SamiTransactionResource::setPDetails(String* pDetails) {
    this->pDetails = pDetails;
}

Integer*
SamiTransactionResource::getPId() {
    return pId;
}
void
SamiTransactionResource::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiTransactionResource::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiTransactionResource::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

Boolean*
SamiTransactionResource::getPIsRefunded() {
    return pIs_refunded;
}
void
SamiTransactionResource::setPIsRefunded(Boolean* pIs_refunded) {
    this->pIs_refunded = pIs_refunded;
}

String*
SamiTransactionResource::getPResponse() {
    return pResponse;
}
void
SamiTransactionResource::setPResponse(String* pResponse) {
    this->pResponse = pResponse;
}

String*
SamiTransactionResource::getPSource() {
    return pSource;
}
void
SamiTransactionResource::setPSource(String* pSource) {
    this->pSource = pSource;
}

Boolean*
SamiTransactionResource::getPSuccessful() {
    return pSuccessful;
}
void
SamiTransactionResource::setPSuccessful(Boolean* pSuccessful) {
    this->pSuccessful = pSuccessful;
}

String*
SamiTransactionResource::getPTransactionId() {
    return pTransaction_id;
}
void
SamiTransactionResource::setPTransactionId(String* pTransaction_id) {
    this->pTransaction_id = pTransaction_id;
}

String*
SamiTransactionResource::getPType() {
    return pType;
}
void
SamiTransactionResource::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiTransactionResource::getPTypeHint() {
    return pType_hint;
}
void
SamiTransactionResource::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

Double*
SamiTransactionResource::getPValue() {
    return pValue;
}
void
SamiTransactionResource::setPValue(Double* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

