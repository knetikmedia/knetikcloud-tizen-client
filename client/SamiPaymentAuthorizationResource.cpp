
#include "SamiPaymentAuthorizationResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPaymentAuthorizationResource::SamiPaymentAuthorizationResource() {
    init();
}

SamiPaymentAuthorizationResource::~SamiPaymentAuthorizationResource() {
    this->cleanup();
}

void
SamiPaymentAuthorizationResource::init() {
    pCaptured = null;
pCreated = null;
pDetails = null;
pId = null;
pInvoice = null;
pPayment_type = null;
}

void
SamiPaymentAuthorizationResource::cleanup() {
    if(pCaptured != null) {
        
        delete pCaptured;
        pCaptured = null;
    }
if(pCreated != null) {
        
        delete pCreated;
        pCreated = null;
    }
if(pDetails != null) {
        
        delete pDetails;
        pDetails = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvoice != null) {
        
        delete pInvoice;
        pInvoice = null;
    }
if(pPayment_type != null) {
        
        delete pPayment_type;
        pPayment_type = null;
    }
}


SamiPaymentAuthorizationResource*
SamiPaymentAuthorizationResource::fromJson(String* json) {
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
SamiPaymentAuthorizationResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCapturedKey = new JsonString(L"captured");
        IJsonValue* pCapturedVal = null;
        pJsonObject->GetValue(pCapturedKey, pCapturedVal);
        if(pCapturedVal != null) {
            
            pCaptured = new Boolean(false);
            jsonToValue(pCaptured, pCapturedVal, L"Boolean", L"Boolean");
        }
        delete pCapturedKey;
JsonString* pCreatedKey = new JsonString(L"created");
        IJsonValue* pCreatedVal = null;
        pJsonObject->GetValue(pCreatedKey, pCreatedVal);
        if(pCreatedVal != null) {
            
            pCreated = new Long();
            jsonToValue(pCreated, pCreatedVal, L"Long", L"Long");
        }
        delete pCreatedKey;
JsonString* pDetailsKey = new JsonString(L"details");
        IJsonValue* pDetailsVal = null;
        pJsonObject->GetValue(pDetailsKey, pDetailsVal);
        if(pDetailsVal != null) {
            
            pDetails = null;
            jsonToValue(pDetails, pDetailsVal, L"SamiObject", L"SamiObject");
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
JsonString* pInvoiceKey = new JsonString(L"invoice");
        IJsonValue* pInvoiceVal = null;
        pJsonObject->GetValue(pInvoiceKey, pInvoiceVal);
        if(pInvoiceVal != null) {
            
            pInvoice = new Integer();
            jsonToValue(pInvoice, pInvoiceVal, L"Integer", L"Integer");
        }
        delete pInvoiceKey;
JsonString* pPayment_typeKey = new JsonString(L"payment_type");
        IJsonValue* pPayment_typeVal = null;
        pJsonObject->GetValue(pPayment_typeKey, pPayment_typeVal);
        if(pPayment_typeVal != null) {
            
            pPayment_type = new SamiSimpleReferenceResource«int»();
            jsonToValue(pPayment_type, pPayment_typeVal, L"SamiSimpleReferenceResource«int»", L"SamiSimpleReferenceResource«int»");
        }
        delete pPayment_typeKey;
    }
}

SamiPaymentAuthorizationResource::SamiPaymentAuthorizationResource(String* json) {
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
SamiPaymentAuthorizationResource::asJson ()
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
SamiPaymentAuthorizationResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCapturedKey = new JsonString(L"captured");
    pJsonObject->Add(pCapturedKey, toJson(getPCaptured(), "Boolean", ""));

    JsonString *pCreatedKey = new JsonString(L"created");
    pJsonObject->Add(pCreatedKey, toJson(getPCreated(), "Long", ""));

    JsonString *pDetailsKey = new JsonString(L"details");
    pJsonObject->Add(pDetailsKey, toJson(getPDetails(), "SamiObject", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInvoiceKey = new JsonString(L"invoice");
    pJsonObject->Add(pInvoiceKey, toJson(getPInvoice(), "Integer", ""));

    JsonString *pPayment_typeKey = new JsonString(L"payment_type");
    pJsonObject->Add(pPayment_typeKey, toJson(getPPaymentType(), "SamiSimpleReferenceResource«int»", ""));

    return pJsonObject;
}

Boolean*
SamiPaymentAuthorizationResource::getPCaptured() {
    return pCaptured;
}
void
SamiPaymentAuthorizationResource::setPCaptured(Boolean* pCaptured) {
    this->pCaptured = pCaptured;
}

Long*
SamiPaymentAuthorizationResource::getPCreated() {
    return pCreated;
}
void
SamiPaymentAuthorizationResource::setPCreated(Long* pCreated) {
    this->pCreated = pCreated;
}

SamiObject*
SamiPaymentAuthorizationResource::getPDetails() {
    return pDetails;
}
void
SamiPaymentAuthorizationResource::setPDetails(SamiObject* pDetails) {
    this->pDetails = pDetails;
}

Integer*
SamiPaymentAuthorizationResource::getPId() {
    return pId;
}
void
SamiPaymentAuthorizationResource::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiPaymentAuthorizationResource::getPInvoice() {
    return pInvoice;
}
void
SamiPaymentAuthorizationResource::setPInvoice(Integer* pInvoice) {
    this->pInvoice = pInvoice;
}

SamiSimpleReferenceResource«int»*
SamiPaymentAuthorizationResource::getPPaymentType() {
    return pPayment_type;
}
void
SamiPaymentAuthorizationResource::setPPaymentType(SamiSimpleReferenceResource«int»* pPayment_type) {
    this->pPayment_type = pPayment_type;
}



} /* namespace Swagger */

