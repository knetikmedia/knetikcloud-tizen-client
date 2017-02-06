
#include "SamiSimpleWallet.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSimpleWallet::SamiSimpleWallet() {
    init();
}

SamiSimpleWallet::~SamiSimpleWallet() {
    this->cleanup();
}

void
SamiSimpleWallet::init() {
    pBalance = null;
pCode = null;
pCurrency_name = null;
pId = null;
pUser_id = null;
}

void
SamiSimpleWallet::cleanup() {
    if(pBalance != null) {
        
        delete pBalance;
        pBalance = null;
    }
if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
if(pCurrency_name != null) {
        
        delete pCurrency_name;
        pCurrency_name = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiSimpleWallet*
SamiSimpleWallet::fromJson(String* json) {
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
SamiSimpleWallet::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = new String();
            jsonToValue(pCode, pCodeVal, L"String", L"String");
        }
        delete pCodeKey;
JsonString* pCurrency_nameKey = new JsonString(L"currency_name");
        IJsonValue* pCurrency_nameVal = null;
        pJsonObject->GetValue(pCurrency_nameKey, pCurrency_nameVal);
        if(pCurrency_nameVal != null) {
            
            pCurrency_name = new String();
            jsonToValue(pCurrency_name, pCurrency_nameVal, L"String", L"String");
        }
        delete pCurrency_nameKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
    }
}

SamiSimpleWallet::SamiSimpleWallet(String* json) {
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
SamiSimpleWallet::asJson ()
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
SamiSimpleWallet::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBalanceKey = new JsonString(L"balance");
    pJsonObject->Add(pBalanceKey, toJson(getPBalance(), "Double", ""));

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "String", ""));

    JsonString *pCurrency_nameKey = new JsonString(L"currency_name");
    pJsonObject->Add(pCurrency_nameKey, toJson(getPCurrencyName(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

Double*
SamiSimpleWallet::getPBalance() {
    return pBalance;
}
void
SamiSimpleWallet::setPBalance(Double* pBalance) {
    this->pBalance = pBalance;
}

String*
SamiSimpleWallet::getPCode() {
    return pCode;
}
void
SamiSimpleWallet::setPCode(String* pCode) {
    this->pCode = pCode;
}

String*
SamiSimpleWallet::getPCurrencyName() {
    return pCurrency_name;
}
void
SamiSimpleWallet::setPCurrencyName(String* pCurrency_name) {
    this->pCurrency_name = pCurrency_name;
}

Integer*
SamiSimpleWallet::getPId() {
    return pId;
}
void
SamiSimpleWallet::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiSimpleWallet::getPUserId() {
    return pUser_id;
}
void
SamiSimpleWallet::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

