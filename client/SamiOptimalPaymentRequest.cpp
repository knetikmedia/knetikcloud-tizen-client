
#include "SamiOptimalPaymentRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiOptimalPaymentRequest::SamiOptimalPaymentRequest() {
    init();
}

SamiOptimalPaymentRequest::~SamiOptimalPaymentRequest() {
    this->cleanup();
}

void
SamiOptimalPaymentRequest::init() {
    pEmail = null;
pFirst_name = null;
pInvoice_id = null;
pLast_name = null;
pOn_decline = null;
pOn_error = null;
pOn_success = null;
}

void
SamiOptimalPaymentRequest::cleanup() {
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
if(pOn_decline != null) {
        
        delete pOn_decline;
        pOn_decline = null;
    }
if(pOn_error != null) {
        
        delete pOn_error;
        pOn_error = null;
    }
if(pOn_success != null) {
        
        delete pOn_success;
        pOn_success = null;
    }
}


SamiOptimalPaymentRequest*
SamiOptimalPaymentRequest::fromJson(String* json) {
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
SamiOptimalPaymentRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pFirst_nameKey = new JsonString(L"first_name");
        IJsonValue* pFirst_nameVal = null;
        pJsonObject->GetValue(pFirst_nameKey, pFirst_nameVal);
        if(pFirst_nameVal != null) {
            
            pFirst_name = new String();
            jsonToValue(pFirst_name, pFirst_nameVal, L"String", L"String");
        }
        delete pFirst_nameKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pLast_nameKey = new JsonString(L"last_name");
        IJsonValue* pLast_nameVal = null;
        pJsonObject->GetValue(pLast_nameKey, pLast_nameVal);
        if(pLast_nameVal != null) {
            
            pLast_name = new String();
            jsonToValue(pLast_name, pLast_nameVal, L"String", L"String");
        }
        delete pLast_nameKey;
JsonString* pOn_declineKey = new JsonString(L"on_decline");
        IJsonValue* pOn_declineVal = null;
        pJsonObject->GetValue(pOn_declineKey, pOn_declineVal);
        if(pOn_declineVal != null) {
            
            pOn_decline = new String();
            jsonToValue(pOn_decline, pOn_declineVal, L"String", L"String");
        }
        delete pOn_declineKey;
JsonString* pOn_errorKey = new JsonString(L"on_error");
        IJsonValue* pOn_errorVal = null;
        pJsonObject->GetValue(pOn_errorKey, pOn_errorVal);
        if(pOn_errorVal != null) {
            
            pOn_error = new String();
            jsonToValue(pOn_error, pOn_errorVal, L"String", L"String");
        }
        delete pOn_errorKey;
JsonString* pOn_successKey = new JsonString(L"on_success");
        IJsonValue* pOn_successVal = null;
        pJsonObject->GetValue(pOn_successKey, pOn_successVal);
        if(pOn_successVal != null) {
            
            pOn_success = new String();
            jsonToValue(pOn_success, pOn_successVal, L"String", L"String");
        }
        delete pOn_successKey;
    }
}

SamiOptimalPaymentRequest::SamiOptimalPaymentRequest(String* json) {
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
SamiOptimalPaymentRequest::asJson ()
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
SamiOptimalPaymentRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    JsonString *pOn_declineKey = new JsonString(L"on_decline");
    pJsonObject->Add(pOn_declineKey, toJson(getPOnDecline(), "String", ""));

    JsonString *pOn_errorKey = new JsonString(L"on_error");
    pJsonObject->Add(pOn_errorKey, toJson(getPOnError(), "String", ""));

    JsonString *pOn_successKey = new JsonString(L"on_success");
    pJsonObject->Add(pOn_successKey, toJson(getPOnSuccess(), "String", ""));

    return pJsonObject;
}

String*
SamiOptimalPaymentRequest::getPEmail() {
    return pEmail;
}
void
SamiOptimalPaymentRequest::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiOptimalPaymentRequest::getPFirstName() {
    return pFirst_name;
}
void
SamiOptimalPaymentRequest::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

Integer*
SamiOptimalPaymentRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiOptimalPaymentRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiOptimalPaymentRequest::getPLastName() {
    return pLast_name;
}
void
SamiOptimalPaymentRequest::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiOptimalPaymentRequest::getPOnDecline() {
    return pOn_decline;
}
void
SamiOptimalPaymentRequest::setPOnDecline(String* pOn_decline) {
    this->pOn_decline = pOn_decline;
}

String*
SamiOptimalPaymentRequest::getPOnError() {
    return pOn_error;
}
void
SamiOptimalPaymentRequest::setPOnError(String* pOn_error) {
    this->pOn_error = pOn_error;
}

String*
SamiOptimalPaymentRequest::getPOnSuccess() {
    return pOn_success;
}
void
SamiOptimalPaymentRequest::setPOnSuccess(String* pOn_success) {
    this->pOn_success = pOn_success;
}



} /* namespace Swagger */

