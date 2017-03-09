
#include "SamiRawSMSResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRawSMSResource::SamiRawSMSResource() {
    init();
}

SamiRawSMSResource::~SamiRawSMSResource() {
    this->cleanup();
}

void
SamiRawSMSResource::init() {
    pFrom = null;
pRecipients = null;
pText = null;
}

void
SamiRawSMSResource::cleanup() {
    if(pFrom != null) {
        
        delete pFrom;
        pFrom = null;
    }
if(pRecipients != null) {
        pRecipients->RemoveAll(true);
        delete pRecipients;
        pRecipients = null;
    }
if(pText != null) {
        
        delete pText;
        pText = null;
    }
}


SamiRawSMSResource*
SamiRawSMSResource::fromJson(String* json) {
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
SamiRawSMSResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pFromKey = new JsonString(L"from");
        IJsonValue* pFromVal = null;
        pJsonObject->GetValue(pFromKey, pFromVal);
        if(pFromVal != null) {
            
            pFrom = new String();
            jsonToValue(pFrom, pFromVal, L"String", L"String");
        }
        delete pFromKey;
JsonString* pRecipientsKey = new JsonString(L"recipients");
        IJsonValue* pRecipientsVal = null;
        pJsonObject->GetValue(pRecipientsKey, pRecipientsVal);
        if(pRecipientsVal != null) {
            pRecipients = new ArrayList();
            
            jsonToValue(pRecipients, pRecipientsVal, L"IList", L"Integer");
        }
        delete pRecipientsKey;
JsonString* pTextKey = new JsonString(L"text");
        IJsonValue* pTextVal = null;
        pJsonObject->GetValue(pTextKey, pTextVal);
        if(pTextVal != null) {
            
            pText = new String();
            jsonToValue(pText, pTextVal, L"String", L"String");
        }
        delete pTextKey;
    }
}

SamiRawSMSResource::SamiRawSMSResource(String* json) {
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
SamiRawSMSResource::asJson ()
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
SamiRawSMSResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pFromKey = new JsonString(L"from");
    pJsonObject->Add(pFromKey, toJson(getPFrom(), "String", ""));

    JsonString *pRecipientsKey = new JsonString(L"recipients");
    pJsonObject->Add(pRecipientsKey, toJson(getPRecipients(), "Integer", "array"));

    JsonString *pTextKey = new JsonString(L"text");
    pJsonObject->Add(pTextKey, toJson(getPText(), "String", ""));

    return pJsonObject;
}

String*
SamiRawSMSResource::getPFrom() {
    return pFrom;
}
void
SamiRawSMSResource::setPFrom(String* pFrom) {
    this->pFrom = pFrom;
}

IList*
SamiRawSMSResource::getPRecipients() {
    return pRecipients;
}
void
SamiRawSMSResource::setPRecipients(IList* pRecipients) {
    this->pRecipients = pRecipients;
}

String*
SamiRawSMSResource::getPText() {
    return pText;
}
void
SamiRawSMSResource::setPText(String* pText) {
    this->pText = pText;
}



} /* namespace Swagger */

