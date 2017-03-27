
#include "SamiInvoiceLogEntry.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInvoiceLogEntry::SamiInvoiceLogEntry() {
    init();
}

SamiInvoiceLogEntry::~SamiInvoiceLogEntry() {
    this->cleanup();
}

void
SamiInvoiceLogEntry::init() {
    pDate = null;
pInvoice_id = null;
pMessage = null;
pType = null;
}

void
SamiInvoiceLogEntry::cleanup() {
    if(pDate != null) {
        
        delete pDate;
        pDate = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiInvoiceLogEntry*
SamiInvoiceLogEntry::fromJson(String* json) {
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
SamiInvoiceLogEntry::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDateKey = new JsonString(L"date");
        IJsonValue* pDateVal = null;
        pJsonObject->GetValue(pDateKey, pDateVal);
        if(pDateVal != null) {
            
            pDate = new Long();
            jsonToValue(pDate, pDateVal, L"Long", L"Long");
        }
        delete pDateKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
    }
}

SamiInvoiceLogEntry::SamiInvoiceLogEntry(String* json) {
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
SamiInvoiceLogEntry::asJson ()
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
SamiInvoiceLogEntry::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDateKey = new JsonString(L"date");
    pJsonObject->Add(pDateKey, toJson(getPDate(), "Long", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

Long*
SamiInvoiceLogEntry::getPDate() {
    return pDate;
}
void
SamiInvoiceLogEntry::setPDate(Long* pDate) {
    this->pDate = pDate;
}

Integer*
SamiInvoiceLogEntry::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiInvoiceLogEntry::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiInvoiceLogEntry::getPMessage() {
    return pMessage;
}
void
SamiInvoiceLogEntry::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

String*
SamiInvoiceLogEntry::getPType() {
    return pType;
}
void
SamiInvoiceLogEntry::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

