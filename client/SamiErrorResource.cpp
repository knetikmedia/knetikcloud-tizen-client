
#include "SamiErrorResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiErrorResource::SamiErrorResource() {
    init();
}

SamiErrorResource::~SamiErrorResource() {
    this->cleanup();
}

void
SamiErrorResource::init() {
    pDetails = null;
pField = null;
pMessage = null;
}

void
SamiErrorResource::cleanup() {
    if(pDetails != null) {
        
        delete pDetails;
        pDetails = null;
    }
if(pField != null) {
        
        delete pField;
        pField = null;
    }
if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
}


SamiErrorResource*
SamiErrorResource::fromJson(String* json) {
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
SamiErrorResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDetailsKey = new JsonString(L"details");
        IJsonValue* pDetailsVal = null;
        pJsonObject->GetValue(pDetailsKey, pDetailsVal);
        if(pDetailsVal != null) {
            
            pDetails = null;
            jsonToValue(pDetails, pDetailsVal, L"SamiObject", L"SamiObject");
        }
        delete pDetailsKey;
JsonString* pFieldKey = new JsonString(L"field");
        IJsonValue* pFieldVal = null;
        pJsonObject->GetValue(pFieldKey, pFieldVal);
        if(pFieldVal != null) {
            
            pField = null;
            jsonToValue(pField, pFieldVal, L"SamiObject", L"SamiObject");
        }
        delete pFieldKey;
JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
    }
}

SamiErrorResource::SamiErrorResource(String* json) {
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
SamiErrorResource::asJson ()
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
SamiErrorResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDetailsKey = new JsonString(L"details");
    pJsonObject->Add(pDetailsKey, toJson(getPDetails(), "SamiObject", ""));

    JsonString *pFieldKey = new JsonString(L"field");
    pJsonObject->Add(pFieldKey, toJson(getPField(), "SamiObject", ""));

    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    return pJsonObject;
}

SamiObject*
SamiErrorResource::getPDetails() {
    return pDetails;
}
void
SamiErrorResource::setPDetails(SamiObject* pDetails) {
    this->pDetails = pDetails;
}

SamiObject*
SamiErrorResource::getPField() {
    return pField;
}
void
SamiErrorResource::setPField(SamiObject* pField) {
    this->pField = pField;
}

String*
SamiErrorResource::getPMessage() {
    return pMessage;
}
void
SamiErrorResource::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}



} /* namespace Swagger */

