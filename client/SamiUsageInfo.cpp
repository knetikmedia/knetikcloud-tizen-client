
#include "SamiUsageInfo.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUsageInfo::SamiUsageInfo() {
    init();
}

SamiUsageInfo::~SamiUsageInfo() {
    this->cleanup();
}

void
SamiUsageInfo::init() {
    pCount = null;
pDate = null;
pMethod = null;
pUrl = null;
}

void
SamiUsageInfo::cleanup() {
    if(pCount != null) {
        
        delete pCount;
        pCount = null;
    }
if(pDate != null) {
        
        delete pDate;
        pDate = null;
    }
if(pMethod != null) {
        
        delete pMethod;
        pMethod = null;
    }
if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
}


SamiUsageInfo*
SamiUsageInfo::fromJson(String* json) {
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
SamiUsageInfo::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountKey = new JsonString(L"count");
        IJsonValue* pCountVal = null;
        pJsonObject->GetValue(pCountKey, pCountVal);
        if(pCountVal != null) {
            
            pCount = new Long();
            jsonToValue(pCount, pCountVal, L"Long", L"Long");
        }
        delete pCountKey;
JsonString* pDateKey = new JsonString(L"date");
        IJsonValue* pDateVal = null;
        pJsonObject->GetValue(pDateKey, pDateVal);
        if(pDateVal != null) {
            
            pDate = new Long();
            jsonToValue(pDate, pDateVal, L"Long", L"Long");
        }
        delete pDateKey;
JsonString* pMethodKey = new JsonString(L"method");
        IJsonValue* pMethodVal = null;
        pJsonObject->GetValue(pMethodKey, pMethodVal);
        if(pMethodVal != null) {
            
            pMethod = new String();
            jsonToValue(pMethod, pMethodVal, L"String", L"String");
        }
        delete pMethodKey;
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

SamiUsageInfo::SamiUsageInfo(String* json) {
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
SamiUsageInfo::asJson ()
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
SamiUsageInfo::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountKey = new JsonString(L"count");
    pJsonObject->Add(pCountKey, toJson(getPCount(), "Long", ""));

    JsonString *pDateKey = new JsonString(L"date");
    pJsonObject->Add(pDateKey, toJson(getPDate(), "Long", ""));

    JsonString *pMethodKey = new JsonString(L"method");
    pJsonObject->Add(pMethodKey, toJson(getPMethod(), "String", ""));

    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    return pJsonObject;
}

Long*
SamiUsageInfo::getPCount() {
    return pCount;
}
void
SamiUsageInfo::setPCount(Long* pCount) {
    this->pCount = pCount;
}

Long*
SamiUsageInfo::getPDate() {
    return pDate;
}
void
SamiUsageInfo::setPDate(Long* pDate) {
    this->pDate = pDate;
}

String*
SamiUsageInfo::getPMethod() {
    return pMethod;
}
void
SamiUsageInfo::setPMethod(String* pMethod) {
    this->pMethod = pMethod;
}

String*
SamiUsageInfo::getPUrl() {
    return pUrl;
}
void
SamiUsageInfo::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}



} /* namespace Swagger */

