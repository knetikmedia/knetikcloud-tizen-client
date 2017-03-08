
#include "SamiPaymentMethodResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPaymentMethodResource::SamiPaymentMethodResource() {
    init();
}

SamiPaymentMethodResource::~SamiPaymentMethodResource() {
    this->cleanup();
}

void
SamiPaymentMethodResource::init() {
    pCreated_date = null;
pDefault = null;
pDisabled = null;
pExpiration_date = null;
pExpiration_month = null;
pExpiration_year = null;
pId = null;
pLast4 = null;
pLong_description = null;
pName = null;
pPayment_method_type = null;
pPayment_type = null;
pShort_description = null;
pSort = null;
pToken = null;
pUnique_key = null;
pUpdated_date = null;
pUser_id = null;
pVerified = null;
}

void
SamiPaymentMethodResource::cleanup() {
    if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDefault != null) {
        
        delete pDefault;
        pDefault = null;
    }
if(pDisabled != null) {
        
        delete pDisabled;
        pDisabled = null;
    }
if(pExpiration_date != null) {
        
        delete pExpiration_date;
        pExpiration_date = null;
    }
if(pExpiration_month != null) {
        
        delete pExpiration_month;
        pExpiration_month = null;
    }
if(pExpiration_year != null) {
        
        delete pExpiration_year;
        pExpiration_year = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLast4 != null) {
        
        delete pLast4;
        pLast4 = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPayment_method_type != null) {
        
        delete pPayment_method_type;
        pPayment_method_type = null;
    }
if(pPayment_type != null) {
        
        delete pPayment_type;
        pPayment_type = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pSort != null) {
        
        delete pSort;
        pSort = null;
    }
if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
if(pUnique_key != null) {
        
        delete pUnique_key;
        pUnique_key = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
if(pVerified != null) {
        
        delete pVerified;
        pVerified = null;
    }
}


SamiPaymentMethodResource*
SamiPaymentMethodResource::fromJson(String* json) {
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
SamiPaymentMethodResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDefaultKey = new JsonString(L"default");
        IJsonValue* pDefaultVal = null;
        pJsonObject->GetValue(pDefaultKey, pDefaultVal);
        if(pDefaultVal != null) {
            
            pDefault = new Boolean(false);
            jsonToValue(pDefault, pDefaultVal, L"Boolean", L"Boolean");
        }
        delete pDefaultKey;
JsonString* pDisabledKey = new JsonString(L"disabled");
        IJsonValue* pDisabledVal = null;
        pJsonObject->GetValue(pDisabledKey, pDisabledVal);
        if(pDisabledVal != null) {
            
            pDisabled = new Boolean(false);
            jsonToValue(pDisabled, pDisabledVal, L"Boolean", L"Boolean");
        }
        delete pDisabledKey;
JsonString* pExpiration_dateKey = new JsonString(L"expiration_date");
        IJsonValue* pExpiration_dateVal = null;
        pJsonObject->GetValue(pExpiration_dateKey, pExpiration_dateVal);
        if(pExpiration_dateVal != null) {
            
            pExpiration_date = new Long();
            jsonToValue(pExpiration_date, pExpiration_dateVal, L"Long", L"Long");
        }
        delete pExpiration_dateKey;
JsonString* pExpiration_monthKey = new JsonString(L"expiration_month");
        IJsonValue* pExpiration_monthVal = null;
        pJsonObject->GetValue(pExpiration_monthKey, pExpiration_monthVal);
        if(pExpiration_monthVal != null) {
            
            pExpiration_month = new Integer();
            jsonToValue(pExpiration_month, pExpiration_monthVal, L"Integer", L"Integer");
        }
        delete pExpiration_monthKey;
JsonString* pExpiration_yearKey = new JsonString(L"expiration_year");
        IJsonValue* pExpiration_yearVal = null;
        pJsonObject->GetValue(pExpiration_yearKey, pExpiration_yearVal);
        if(pExpiration_yearVal != null) {
            
            pExpiration_year = new Integer();
            jsonToValue(pExpiration_year, pExpiration_yearVal, L"Integer", L"Integer");
        }
        delete pExpiration_yearKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pLast4Key = new JsonString(L"last4");
        IJsonValue* pLast4Val = null;
        pJsonObject->GetValue(pLast4Key, pLast4Val);
        if(pLast4Val != null) {
            
            pLast4 = new String();
            jsonToValue(pLast4, pLast4Val, L"String", L"String");
        }
        delete pLast4Key;
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
JsonString* pPayment_method_typeKey = new JsonString(L"payment_method_type");
        IJsonValue* pPayment_method_typeVal = null;
        pJsonObject->GetValue(pPayment_method_typeKey, pPayment_method_typeVal);
        if(pPayment_method_typeVal != null) {
            
            pPayment_method_type = new SamiPaymentMethodTypeResource();
            jsonToValue(pPayment_method_type, pPayment_method_typeVal, L"SamiPaymentMethodTypeResource", L"SamiPaymentMethodTypeResource");
        }
        delete pPayment_method_typeKey;
JsonString* pPayment_typeKey = new JsonString(L"payment_type");
        IJsonValue* pPayment_typeVal = null;
        pJsonObject->GetValue(pPayment_typeKey, pPayment_typeVal);
        if(pPayment_typeVal != null) {
            
            pPayment_type = new String();
            jsonToValue(pPayment_type, pPayment_typeVal, L"String", L"String");
        }
        delete pPayment_typeKey;
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
JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
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
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
JsonString* pVerifiedKey = new JsonString(L"verified");
        IJsonValue* pVerifiedVal = null;
        pJsonObject->GetValue(pVerifiedKey, pVerifiedVal);
        if(pVerifiedVal != null) {
            
            pVerified = new Boolean(false);
            jsonToValue(pVerified, pVerifiedVal, L"Boolean", L"Boolean");
        }
        delete pVerifiedKey;
    }
}

SamiPaymentMethodResource::SamiPaymentMethodResource(String* json) {
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
SamiPaymentMethodResource::asJson ()
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
SamiPaymentMethodResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDefaultKey = new JsonString(L"default");
    pJsonObject->Add(pDefaultKey, toJson(getPDefault(), "Boolean", ""));

    JsonString *pDisabledKey = new JsonString(L"disabled");
    pJsonObject->Add(pDisabledKey, toJson(getPDisabled(), "Boolean", ""));

    JsonString *pExpiration_dateKey = new JsonString(L"expiration_date");
    pJsonObject->Add(pExpiration_dateKey, toJson(getPExpirationDate(), "Long", ""));

    JsonString *pExpiration_monthKey = new JsonString(L"expiration_month");
    pJsonObject->Add(pExpiration_monthKey, toJson(getPExpirationMonth(), "Integer", ""));

    JsonString *pExpiration_yearKey = new JsonString(L"expiration_year");
    pJsonObject->Add(pExpiration_yearKey, toJson(getPExpirationYear(), "Integer", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLast4Key = new JsonString(L"last4");
    pJsonObject->Add(pLast4Key, toJson(getPLast4(), "String", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPayment_method_typeKey = new JsonString(L"payment_method_type");
    pJsonObject->Add(pPayment_method_typeKey, toJson(getPPaymentMethodType(), "SamiPaymentMethodTypeResource", ""));

    JsonString *pPayment_typeKey = new JsonString(L"payment_type");
    pJsonObject->Add(pPayment_typeKey, toJson(getPPaymentType(), "String", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "Integer", ""));

    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    JsonString *pUnique_keyKey = new JsonString(L"unique_key");
    pJsonObject->Add(pUnique_keyKey, toJson(getPUniqueKey(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pVerifiedKey = new JsonString(L"verified");
    pJsonObject->Add(pVerifiedKey, toJson(getPVerified(), "Boolean", ""));

    return pJsonObject;
}

Long*
SamiPaymentMethodResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiPaymentMethodResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Boolean*
SamiPaymentMethodResource::getPDefault() {
    return pDefault;
}
void
SamiPaymentMethodResource::setPDefault(Boolean* pDefault) {
    this->pDefault = pDefault;
}

Boolean*
SamiPaymentMethodResource::getPDisabled() {
    return pDisabled;
}
void
SamiPaymentMethodResource::setPDisabled(Boolean* pDisabled) {
    this->pDisabled = pDisabled;
}

Long*
SamiPaymentMethodResource::getPExpirationDate() {
    return pExpiration_date;
}
void
SamiPaymentMethodResource::setPExpirationDate(Long* pExpiration_date) {
    this->pExpiration_date = pExpiration_date;
}

Integer*
SamiPaymentMethodResource::getPExpirationMonth() {
    return pExpiration_month;
}
void
SamiPaymentMethodResource::setPExpirationMonth(Integer* pExpiration_month) {
    this->pExpiration_month = pExpiration_month;
}

Integer*
SamiPaymentMethodResource::getPExpirationYear() {
    return pExpiration_year;
}
void
SamiPaymentMethodResource::setPExpirationYear(Integer* pExpiration_year) {
    this->pExpiration_year = pExpiration_year;
}

Long*
SamiPaymentMethodResource::getPId() {
    return pId;
}
void
SamiPaymentMethodResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiPaymentMethodResource::getPLast4() {
    return pLast4;
}
void
SamiPaymentMethodResource::setPLast4(String* pLast4) {
    this->pLast4 = pLast4;
}

String*
SamiPaymentMethodResource::getPLongDescription() {
    return pLong_description;
}
void
SamiPaymentMethodResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiPaymentMethodResource::getPName() {
    return pName;
}
void
SamiPaymentMethodResource::setPName(String* pName) {
    this->pName = pName;
}

SamiPaymentMethodTypeResource*
SamiPaymentMethodResource::getPPaymentMethodType() {
    return pPayment_method_type;
}
void
SamiPaymentMethodResource::setPPaymentMethodType(SamiPaymentMethodTypeResource* pPayment_method_type) {
    this->pPayment_method_type = pPayment_method_type;
}

String*
SamiPaymentMethodResource::getPPaymentType() {
    return pPayment_type;
}
void
SamiPaymentMethodResource::setPPaymentType(String* pPayment_type) {
    this->pPayment_type = pPayment_type;
}

String*
SamiPaymentMethodResource::getPShortDescription() {
    return pShort_description;
}
void
SamiPaymentMethodResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Integer*
SamiPaymentMethodResource::getPSort() {
    return pSort;
}
void
SamiPaymentMethodResource::setPSort(Integer* pSort) {
    this->pSort = pSort;
}

String*
SamiPaymentMethodResource::getPToken() {
    return pToken;
}
void
SamiPaymentMethodResource::setPToken(String* pToken) {
    this->pToken = pToken;
}

String*
SamiPaymentMethodResource::getPUniqueKey() {
    return pUnique_key;
}
void
SamiPaymentMethodResource::setPUniqueKey(String* pUnique_key) {
    this->pUnique_key = pUnique_key;
}

Long*
SamiPaymentMethodResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiPaymentMethodResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

Integer*
SamiPaymentMethodResource::getPUserId() {
    return pUser_id;
}
void
SamiPaymentMethodResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Boolean*
SamiPaymentMethodResource::getPVerified() {
    return pVerified;
}
void
SamiPaymentMethodResource::setPVerified(Boolean* pVerified) {
    this->pVerified = pVerified;
}



} /* namespace Swagger */

