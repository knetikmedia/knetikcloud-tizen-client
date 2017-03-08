
#include "SamiBatchRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBatchRequest::SamiBatchRequest() {
    init();
}

SamiBatchRequest::~SamiBatchRequest() {
    this->cleanup();
}

void
SamiBatchRequest::init() {
    pBody = null;
pContent_type = null;
pMethod = null;
pTimeout = null;
pToken = null;
pUri = null;
}

void
SamiBatchRequest::cleanup() {
    if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
if(pContent_type != null) {
        
        delete pContent_type;
        pContent_type = null;
    }
if(pMethod != null) {
        
        delete pMethod;
        pMethod = null;
    }
if(pTimeout != null) {
        
        delete pTimeout;
        pTimeout = null;
    }
if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
if(pUri != null) {
        
        delete pUri;
        pUri = null;
    }
}


SamiBatchRequest*
SamiBatchRequest::fromJson(String* json) {
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
SamiBatchRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = null;
            jsonToValue(pBody, pBodyVal, L"SamiObject", L"SamiObject");
        }
        delete pBodyKey;
JsonString* pContent_typeKey = new JsonString(L"content_type");
        IJsonValue* pContent_typeVal = null;
        pJsonObject->GetValue(pContent_typeKey, pContent_typeVal);
        if(pContent_typeVal != null) {
            
            pContent_type = new String();
            jsonToValue(pContent_type, pContent_typeVal, L"String", L"String");
        }
        delete pContent_typeKey;
JsonString* pMethodKey = new JsonString(L"method");
        IJsonValue* pMethodVal = null;
        pJsonObject->GetValue(pMethodKey, pMethodVal);
        if(pMethodVal != null) {
            
            pMethod = new String();
            jsonToValue(pMethod, pMethodVal, L"String", L"String");
        }
        delete pMethodKey;
JsonString* pTimeoutKey = new JsonString(L"timeout");
        IJsonValue* pTimeoutVal = null;
        pJsonObject->GetValue(pTimeoutKey, pTimeoutVal);
        if(pTimeoutVal != null) {
            
            pTimeout = new Integer();
            jsonToValue(pTimeout, pTimeoutVal, L"Integer", L"Integer");
        }
        delete pTimeoutKey;
JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
JsonString* pUriKey = new JsonString(L"uri");
        IJsonValue* pUriVal = null;
        pJsonObject->GetValue(pUriKey, pUriVal);
        if(pUriVal != null) {
            
            pUri = new String();
            jsonToValue(pUri, pUriVal, L"String", L"String");
        }
        delete pUriKey;
    }
}

SamiBatchRequest::SamiBatchRequest(String* json) {
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
SamiBatchRequest::asJson ()
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
SamiBatchRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "SamiObject", ""));

    JsonString *pContent_typeKey = new JsonString(L"content_type");
    pJsonObject->Add(pContent_typeKey, toJson(getPContentType(), "String", ""));

    JsonString *pMethodKey = new JsonString(L"method");
    pJsonObject->Add(pMethodKey, toJson(getPMethod(), "String", ""));

    JsonString *pTimeoutKey = new JsonString(L"timeout");
    pJsonObject->Add(pTimeoutKey, toJson(getPTimeout(), "Integer", ""));

    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    JsonString *pUriKey = new JsonString(L"uri");
    pJsonObject->Add(pUriKey, toJson(getPUri(), "String", ""));

    return pJsonObject;
}

SamiObject*
SamiBatchRequest::getPBody() {
    return pBody;
}
void
SamiBatchRequest::setPBody(SamiObject* pBody) {
    this->pBody = pBody;
}

String*
SamiBatchRequest::getPContentType() {
    return pContent_type;
}
void
SamiBatchRequest::setPContentType(String* pContent_type) {
    this->pContent_type = pContent_type;
}

String*
SamiBatchRequest::getPMethod() {
    return pMethod;
}
void
SamiBatchRequest::setPMethod(String* pMethod) {
    this->pMethod = pMethod;
}

Integer*
SamiBatchRequest::getPTimeout() {
    return pTimeout;
}
void
SamiBatchRequest::setPTimeout(Integer* pTimeout) {
    this->pTimeout = pTimeout;
}

String*
SamiBatchRequest::getPToken() {
    return pToken;
}
void
SamiBatchRequest::setPToken(String* pToken) {
    this->pToken = pToken;
}

String*
SamiBatchRequest::getPUri() {
    return pUri;
}
void
SamiBatchRequest::setPUri(String* pUri) {
    this->pUri = pUri;
}



} /* namespace Swagger */

