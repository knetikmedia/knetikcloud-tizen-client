
#include "SamiRawEmailResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRawEmailResource::SamiRawEmailResource() {
    init();
}

SamiRawEmailResource::~SamiRawEmailResource() {
    this->cleanup();
}

void
SamiRawEmailResource::init() {
    pBody = null;
pFrom = null;
pHtml = null;
pRecipients = null;
pSubject = null;
}

void
SamiRawEmailResource::cleanup() {
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
if(pFrom != null) {
        
        delete pFrom;
        pFrom = null;
    }
if(pHtml != null) {
        
        delete pHtml;
        pHtml = null;
    }
if(pRecipients != null) {
        pRecipients->RemoveAll(true);
        delete pRecipients;
        pRecipients = null;
    }
if(pSubject != null) {
        
        delete pSubject;
        pSubject = null;
    }
}


SamiRawEmailResource*
SamiRawEmailResource::fromJson(String* json) {
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
SamiRawEmailResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = new String();
            jsonToValue(pBody, pBodyVal, L"String", L"String");
        }
        delete pBodyKey;
JsonString* pFromKey = new JsonString(L"from");
        IJsonValue* pFromVal = null;
        pJsonObject->GetValue(pFromKey, pFromVal);
        if(pFromVal != null) {
            
            pFrom = new String();
            jsonToValue(pFrom, pFromVal, L"String", L"String");
        }
        delete pFromKey;
JsonString* pHtmlKey = new JsonString(L"html");
        IJsonValue* pHtmlVal = null;
        pJsonObject->GetValue(pHtmlKey, pHtmlVal);
        if(pHtmlVal != null) {
            
            pHtml = new Boolean(false);
            jsonToValue(pHtml, pHtmlVal, L"Boolean", L"Boolean");
        }
        delete pHtmlKey;
JsonString* pRecipientsKey = new JsonString(L"recipients");
        IJsonValue* pRecipientsVal = null;
        pJsonObject->GetValue(pRecipientsKey, pRecipientsVal);
        if(pRecipientsVal != null) {
            pRecipients = new ArrayList();
            
            jsonToValue(pRecipients, pRecipientsVal, L"IList", L"Integer");
        }
        delete pRecipientsKey;
JsonString* pSubjectKey = new JsonString(L"subject");
        IJsonValue* pSubjectVal = null;
        pJsonObject->GetValue(pSubjectKey, pSubjectVal);
        if(pSubjectVal != null) {
            
            pSubject = new String();
            jsonToValue(pSubject, pSubjectVal, L"String", L"String");
        }
        delete pSubjectKey;
    }
}

SamiRawEmailResource::SamiRawEmailResource(String* json) {
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
SamiRawEmailResource::asJson ()
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
SamiRawEmailResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "String", ""));

    JsonString *pFromKey = new JsonString(L"from");
    pJsonObject->Add(pFromKey, toJson(getPFrom(), "String", ""));

    JsonString *pHtmlKey = new JsonString(L"html");
    pJsonObject->Add(pHtmlKey, toJson(getPHtml(), "Boolean", ""));

    JsonString *pRecipientsKey = new JsonString(L"recipients");
    pJsonObject->Add(pRecipientsKey, toJson(getPRecipients(), "Integer", "array"));

    JsonString *pSubjectKey = new JsonString(L"subject");
    pJsonObject->Add(pSubjectKey, toJson(getPSubject(), "String", ""));

    return pJsonObject;
}

String*
SamiRawEmailResource::getPBody() {
    return pBody;
}
void
SamiRawEmailResource::setPBody(String* pBody) {
    this->pBody = pBody;
}

String*
SamiRawEmailResource::getPFrom() {
    return pFrom;
}
void
SamiRawEmailResource::setPFrom(String* pFrom) {
    this->pFrom = pFrom;
}

Boolean*
SamiRawEmailResource::getPHtml() {
    return pHtml;
}
void
SamiRawEmailResource::setPHtml(Boolean* pHtml) {
    this->pHtml = pHtml;
}

IList*
SamiRawEmailResource::getPRecipients() {
    return pRecipients;
}
void
SamiRawEmailResource::setPRecipients(IList* pRecipients) {
    this->pRecipients = pRecipients;
}

String*
SamiRawEmailResource::getPSubject() {
    return pSubject;
}
void
SamiRawEmailResource::setPSubject(String* pSubject) {
    this->pSubject = pSubject;
}



} /* namespace Swagger */

