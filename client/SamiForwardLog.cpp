
#include "SamiForwardLog.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiForwardLog::SamiForwardLog() {
    init();
}

SamiForwardLog::~SamiForwardLog() {
    this->cleanup();
}

void
SamiForwardLog::init() {
    pEnd_date = null;
pError_msg = null;
pHttp_status_code = null;
pId = null;
pPayload = null;
pResponse = null;
pRetry_count = null;
pStart_date = null;
pUrl = null;
}

void
SamiForwardLog::cleanup() {
    if(pEnd_date != null) {
        
        delete pEnd_date;
        pEnd_date = null;
    }
if(pError_msg != null) {
        
        delete pError_msg;
        pError_msg = null;
    }
if(pHttp_status_code != null) {
        
        delete pHttp_status_code;
        pHttp_status_code = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pPayload != null) {
        
        delete pPayload;
        pPayload = null;
    }
if(pResponse != null) {
        
        delete pResponse;
        pResponse = null;
    }
if(pRetry_count != null) {
        
        delete pRetry_count;
        pRetry_count = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
}


SamiForwardLog*
SamiForwardLog::fromJson(String* json) {
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
SamiForwardLog::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEnd_dateKey = new JsonString(L"end_date");
        IJsonValue* pEnd_dateVal = null;
        pJsonObject->GetValue(pEnd_dateKey, pEnd_dateVal);
        if(pEnd_dateVal != null) {
            
            pEnd_date = new Long();
            jsonToValue(pEnd_date, pEnd_dateVal, L"Long", L"Long");
        }
        delete pEnd_dateKey;
JsonString* pError_msgKey = new JsonString(L"error_msg");
        IJsonValue* pError_msgVal = null;
        pJsonObject->GetValue(pError_msgKey, pError_msgVal);
        if(pError_msgVal != null) {
            
            pError_msg = new String();
            jsonToValue(pError_msg, pError_msgVal, L"String", L"String");
        }
        delete pError_msgKey;
JsonString* pHttp_status_codeKey = new JsonString(L"http_status_code");
        IJsonValue* pHttp_status_codeVal = null;
        pJsonObject->GetValue(pHttp_status_codeKey, pHttp_status_codeVal);
        if(pHttp_status_codeVal != null) {
            
            pHttp_status_code = new Integer();
            jsonToValue(pHttp_status_code, pHttp_status_codeVal, L"Integer", L"Integer");
        }
        delete pHttp_status_codeKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pPayloadKey = new JsonString(L"payload");
        IJsonValue* pPayloadVal = null;
        pJsonObject->GetValue(pPayloadKey, pPayloadVal);
        if(pPayloadVal != null) {
            
            pPayload = null;
            jsonToValue(pPayload, pPayloadVal, L"SamiObject", L"SamiObject");
        }
        delete pPayloadKey;
JsonString* pResponseKey = new JsonString(L"response");
        IJsonValue* pResponseVal = null;
        pJsonObject->GetValue(pResponseKey, pResponseVal);
        if(pResponseVal != null) {
            
            pResponse = new String();
            jsonToValue(pResponse, pResponseVal, L"String", L"String");
        }
        delete pResponseKey;
JsonString* pRetry_countKey = new JsonString(L"retry_count");
        IJsonValue* pRetry_countVal = null;
        pJsonObject->GetValue(pRetry_countKey, pRetry_countVal);
        if(pRetry_countVal != null) {
            
            pRetry_count = new Integer();
            jsonToValue(pRetry_count, pRetry_countVal, L"Integer", L"Integer");
        }
        delete pRetry_countKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
    }
}

SamiForwardLog::SamiForwardLog(String* json) {
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
SamiForwardLog::asJson ()
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
SamiForwardLog::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEnd_dateKey = new JsonString(L"end_date");
    pJsonObject->Add(pEnd_dateKey, toJson(getPEndDate(), "Long", ""));

    JsonString *pError_msgKey = new JsonString(L"error_msg");
    pJsonObject->Add(pError_msgKey, toJson(getPErrorMsg(), "String", ""));

    JsonString *pHttp_status_codeKey = new JsonString(L"http_status_code");
    pJsonObject->Add(pHttp_status_codeKey, toJson(getPHttpStatusCode(), "Integer", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pPayloadKey = new JsonString(L"payload");
    pJsonObject->Add(pPayloadKey, toJson(getPPayload(), "SamiObject", ""));

    JsonString *pResponseKey = new JsonString(L"response");
    pJsonObject->Add(pResponseKey, toJson(getPResponse(), "String", ""));

    JsonString *pRetry_countKey = new JsonString(L"retry_count");
    pJsonObject->Add(pRetry_countKey, toJson(getPRetryCount(), "Integer", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    return pJsonObject;
}

Long*
SamiForwardLog::getPEndDate() {
    return pEnd_date;
}
void
SamiForwardLog::setPEndDate(Long* pEnd_date) {
    this->pEnd_date = pEnd_date;
}

String*
SamiForwardLog::getPErrorMsg() {
    return pError_msg;
}
void
SamiForwardLog::setPErrorMsg(String* pError_msg) {
    this->pError_msg = pError_msg;
}

Integer*
SamiForwardLog::getPHttpStatusCode() {
    return pHttp_status_code;
}
void
SamiForwardLog::setPHttpStatusCode(Integer* pHttp_status_code) {
    this->pHttp_status_code = pHttp_status_code;
}

String*
SamiForwardLog::getPId() {
    return pId;
}
void
SamiForwardLog::setPId(String* pId) {
    this->pId = pId;
}

SamiObject*
SamiForwardLog::getPPayload() {
    return pPayload;
}
void
SamiForwardLog::setPPayload(SamiObject* pPayload) {
    this->pPayload = pPayload;
}

String*
SamiForwardLog::getPResponse() {
    return pResponse;
}
void
SamiForwardLog::setPResponse(String* pResponse) {
    this->pResponse = pResponse;
}

Integer*
SamiForwardLog::getPRetryCount() {
    return pRetry_count;
}
void
SamiForwardLog::setPRetryCount(Integer* pRetry_count) {
    this->pRetry_count = pRetry_count;
}

Long*
SamiForwardLog::getPStartDate() {
    return pStart_date;
}
void
SamiForwardLog::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}

String*
SamiForwardLog::getPUrl() {
    return pUrl;
}
void
SamiForwardLog::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}



} /* namespace Swagger */

