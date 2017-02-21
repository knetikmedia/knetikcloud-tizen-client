
#include "SamiTemplateEmailResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTemplateEmailResource::SamiTemplateEmailResource() {
    init();
}

SamiTemplateEmailResource::~SamiTemplateEmailResource() {
    this->cleanup();
}

void
SamiTemplateEmailResource::init() {
    pFrom = null;
pRecipients = null;
pTemplate_key = null;
pTemplate_vars = null;
}

void
SamiTemplateEmailResource::cleanup() {
    if(pFrom != null) {
        
        delete pFrom;
        pFrom = null;
    }
if(pRecipients != null) {
        pRecipients->RemoveAll(true);
        delete pRecipients;
        pRecipients = null;
    }
if(pTemplate_key != null) {
        
        delete pTemplate_key;
        pTemplate_key = null;
    }
if(pTemplate_vars != null) {
        pTemplate_vars->RemoveAll(true);
        delete pTemplate_vars;
        pTemplate_vars = null;
    }
}


SamiTemplateEmailResource*
SamiTemplateEmailResource::fromJson(String* json) {
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
SamiTemplateEmailResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pTemplate_keyKey = new JsonString(L"template_key");
        IJsonValue* pTemplate_keyVal = null;
        pJsonObject->GetValue(pTemplate_keyKey, pTemplate_keyVal);
        if(pTemplate_keyVal != null) {
            
            pTemplate_key = new String();
            jsonToValue(pTemplate_key, pTemplate_keyVal, L"String", L"String");
        }
        delete pTemplate_keyKey;
JsonString* pTemplate_varsKey = new JsonString(L"template_vars");
        IJsonValue* pTemplate_varsVal = null;
        pJsonObject->GetValue(pTemplate_varsKey, pTemplate_varsVal);
        if(pTemplate_varsVal != null) {
            pTemplate_vars = new ArrayList();
            
            jsonToValue(pTemplate_vars, pTemplate_varsVal, L"IList", L"SamiKeyValuePair«string,string»");
        }
        delete pTemplate_varsKey;
    }
}

SamiTemplateEmailResource::SamiTemplateEmailResource(String* json) {
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
SamiTemplateEmailResource::asJson ()
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
SamiTemplateEmailResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pFromKey = new JsonString(L"from");
    pJsonObject->Add(pFromKey, toJson(getPFrom(), "String", ""));

    JsonString *pRecipientsKey = new JsonString(L"recipients");
    pJsonObject->Add(pRecipientsKey, toJson(getPRecipients(), "Integer", "array"));

    JsonString *pTemplate_keyKey = new JsonString(L"template_key");
    pJsonObject->Add(pTemplate_keyKey, toJson(getPTemplateKey(), "String", ""));

    JsonString *pTemplate_varsKey = new JsonString(L"template_vars");
    pJsonObject->Add(pTemplate_varsKey, toJson(getPTemplateVars(), "SamiKeyValuePair«string,string»", "array"));

    return pJsonObject;
}

String*
SamiTemplateEmailResource::getPFrom() {
    return pFrom;
}
void
SamiTemplateEmailResource::setPFrom(String* pFrom) {
    this->pFrom = pFrom;
}

IList*
SamiTemplateEmailResource::getPRecipients() {
    return pRecipients;
}
void
SamiTemplateEmailResource::setPRecipients(IList* pRecipients) {
    this->pRecipients = pRecipients;
}

String*
SamiTemplateEmailResource::getPTemplateKey() {
    return pTemplate_key;
}
void
SamiTemplateEmailResource::setPTemplateKey(String* pTemplate_key) {
    this->pTemplate_key = pTemplate_key;
}

IList*
SamiTemplateEmailResource::getPTemplateVars() {
    return pTemplate_vars;
}
void
SamiTemplateEmailResource::setPTemplateVars(IList* pTemplate_vars) {
    this->pTemplate_vars = pTemplate_vars;
}



} /* namespace Swagger */

