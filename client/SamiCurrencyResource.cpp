
#include "SamiCurrencyResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCurrencyResource::SamiCurrencyResource() {
    init();
}

SamiCurrencyResource::~SamiCurrencyResource() {
    this->cleanup();
}

void
SamiCurrencyResource::init() {
    pActive = null;
pCode = null;
pCreated_date = null;
pFactor = null;
pIcon = null;
pName = null;
pType = null;
pUpdated_date = null;
}

void
SamiCurrencyResource::cleanup() {
    if(pActive != null) {
        
        delete pActive;
        pActive = null;
    }
if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pFactor != null) {
        
        delete pFactor;
        pFactor = null;
    }
if(pIcon != null) {
        
        delete pIcon;
        pIcon = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiCurrencyResource*
SamiCurrencyResource::fromJson(String* json) {
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
SamiCurrencyResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActiveKey = new JsonString(L"active");
        IJsonValue* pActiveVal = null;
        pJsonObject->GetValue(pActiveKey, pActiveVal);
        if(pActiveVal != null) {
            
            pActive = new Boolean(false);
            jsonToValue(pActive, pActiveVal, L"Boolean", L"Boolean");
        }
        delete pActiveKey;
JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = new String();
            jsonToValue(pCode, pCodeVal, L"String", L"String");
        }
        delete pCodeKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pFactorKey = new JsonString(L"factor");
        IJsonValue* pFactorVal = null;
        pJsonObject->GetValue(pFactorKey, pFactorVal);
        if(pFactorVal != null) {
            
            pFactor = new Double();
            jsonToValue(pFactor, pFactorVal, L"Double", L"Double");
        }
        delete pFactorKey;
JsonString* pIconKey = new JsonString(L"icon");
        IJsonValue* pIconVal = null;
        pJsonObject->GetValue(pIconKey, pIconVal);
        if(pIconVal != null) {
            
            pIcon = new String();
            jsonToValue(pIcon, pIconVal, L"String", L"String");
        }
        delete pIconKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
    }
}

SamiCurrencyResource::SamiCurrencyResource(String* json) {
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
SamiCurrencyResource::asJson ()
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
SamiCurrencyResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pFactorKey = new JsonString(L"factor");
    pJsonObject->Add(pFactorKey, toJson(getPFactor(), "Double", ""));

    JsonString *pIconKey = new JsonString(L"icon");
    pJsonObject->Add(pIconKey, toJson(getPIcon(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Boolean*
SamiCurrencyResource::getPActive() {
    return pActive;
}
void
SamiCurrencyResource::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

String*
SamiCurrencyResource::getPCode() {
    return pCode;
}
void
SamiCurrencyResource::setPCode(String* pCode) {
    this->pCode = pCode;
}

Long*
SamiCurrencyResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiCurrencyResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Double*
SamiCurrencyResource::getPFactor() {
    return pFactor;
}
void
SamiCurrencyResource::setPFactor(Double* pFactor) {
    this->pFactor = pFactor;
}

String*
SamiCurrencyResource::getPIcon() {
    return pIcon;
}
void
SamiCurrencyResource::setPIcon(String* pIcon) {
    this->pIcon = pIcon;
}

String*
SamiCurrencyResource::getPName() {
    return pName;
}
void
SamiCurrencyResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiCurrencyResource::getPType() {
    return pType;
}
void
SamiCurrencyResource::setPType(String* pType) {
    this->pType = pType;
}

Long*
SamiCurrencyResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiCurrencyResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

