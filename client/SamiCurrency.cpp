
#include "SamiCurrency.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCurrency::SamiCurrency() {
    init();
}

SamiCurrency::~SamiCurrency() {
    this->cleanup();
}

void
SamiCurrency::init() {
    pActive = null;
pCode = null;
pDate_created = null;
pDate_updated = null;
pFactor = null;
pIcon = null;
pId = null;
pName = null;
pType = null;
pVirtual = null;
}

void
SamiCurrency::cleanup() {
    if(pActive != null) {
        
        delete pActive;
        pActive = null;
    }
if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
if(pDate_created != null) {
        
        delete pDate_created;
        pDate_created = null;
    }
if(pDate_updated != null) {
        
        delete pDate_updated;
        pDate_updated = null;
    }
if(pFactor != null) {
        
        delete pFactor;
        pFactor = null;
    }
if(pIcon != null) {
        
        delete pIcon;
        pIcon = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pVirtual != null) {
        
        delete pVirtual;
        pVirtual = null;
    }
}


SamiCurrency*
SamiCurrency::fromJson(String* json) {
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
SamiCurrency::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDate_createdKey = new JsonString(L"date_created");
        IJsonValue* pDate_createdVal = null;
        pJsonObject->GetValue(pDate_createdKey, pDate_createdVal);
        if(pDate_createdVal != null) {
            
            pDate_created = new Long();
            jsonToValue(pDate_created, pDate_createdVal, L"Long", L"Long");
        }
        delete pDate_createdKey;
JsonString* pDate_updatedKey = new JsonString(L"date_updated");
        IJsonValue* pDate_updatedVal = null;
        pJsonObject->GetValue(pDate_updatedKey, pDate_updatedVal);
        if(pDate_updatedVal != null) {
            
            pDate_updated = new Long();
            jsonToValue(pDate_updated, pDate_updatedVal, L"Long", L"Long");
        }
        delete pDate_updatedKey;
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
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
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
JsonString* pVirtualKey = new JsonString(L"virtual");
        IJsonValue* pVirtualVal = null;
        pJsonObject->GetValue(pVirtualKey, pVirtualVal);
        if(pVirtualVal != null) {
            
            pVirtual = new Boolean(false);
            jsonToValue(pVirtual, pVirtualVal, L"Boolean", L"Boolean");
        }
        delete pVirtualKey;
    }
}

SamiCurrency::SamiCurrency(String* json) {
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
SamiCurrency::asJson ()
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
SamiCurrency::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "String", ""));

    JsonString *pDate_createdKey = new JsonString(L"date_created");
    pJsonObject->Add(pDate_createdKey, toJson(getPDateCreated(), "Long", ""));

    JsonString *pDate_updatedKey = new JsonString(L"date_updated");
    pJsonObject->Add(pDate_updatedKey, toJson(getPDateUpdated(), "Long", ""));

    JsonString *pFactorKey = new JsonString(L"factor");
    pJsonObject->Add(pFactorKey, toJson(getPFactor(), "Double", ""));

    JsonString *pIconKey = new JsonString(L"icon");
    pJsonObject->Add(pIconKey, toJson(getPIcon(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pVirtualKey = new JsonString(L"virtual");
    pJsonObject->Add(pVirtualKey, toJson(getPVirtual(), "Boolean", ""));

    return pJsonObject;
}

Boolean*
SamiCurrency::getPActive() {
    return pActive;
}
void
SamiCurrency::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

String*
SamiCurrency::getPCode() {
    return pCode;
}
void
SamiCurrency::setPCode(String* pCode) {
    this->pCode = pCode;
}

Long*
SamiCurrency::getPDateCreated() {
    return pDate_created;
}
void
SamiCurrency::setPDateCreated(Long* pDate_created) {
    this->pDate_created = pDate_created;
}

Long*
SamiCurrency::getPDateUpdated() {
    return pDate_updated;
}
void
SamiCurrency::setPDateUpdated(Long* pDate_updated) {
    this->pDate_updated = pDate_updated;
}

Double*
SamiCurrency::getPFactor() {
    return pFactor;
}
void
SamiCurrency::setPFactor(Double* pFactor) {
    this->pFactor = pFactor;
}

String*
SamiCurrency::getPIcon() {
    return pIcon;
}
void
SamiCurrency::setPIcon(String* pIcon) {
    this->pIcon = pIcon;
}

Integer*
SamiCurrency::getPId() {
    return pId;
}
void
SamiCurrency::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiCurrency::getPName() {
    return pName;
}
void
SamiCurrency::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiCurrency::getPType() {
    return pType;
}
void
SamiCurrency::setPType(String* pType) {
    this->pType = pType;
}

Boolean*
SamiCurrency::getPVirtual() {
    return pVirtual;
}
void
SamiCurrency::setPVirtual(Boolean* pVirtual) {
    this->pVirtual = pVirtual;
}



} /* namespace Swagger */

