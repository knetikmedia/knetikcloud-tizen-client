
#include "SamiLanguage.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLanguage::SamiLanguage() {
    init();
}

SamiLanguage::~SamiLanguage() {
    this->cleanup();
}

void
SamiLanguage::init() {
    pCode = null;
pDate_created = null;
pDate_updated = null;
pDescription = null;
pDirection = null;
pId = null;
pIs_primary = null;
pName = null;
}

void
SamiLanguage::cleanup() {
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
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pDirection != null) {
        
        delete pDirection;
        pDirection = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pIs_primary != null) {
        
        delete pIs_primary;
        pIs_primary = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
}


SamiLanguage*
SamiLanguage::fromJson(String* json) {
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
SamiLanguage::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
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
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pDirectionKey = new JsonString(L"direction");
        IJsonValue* pDirectionVal = null;
        pJsonObject->GetValue(pDirectionKey, pDirectionVal);
        if(pDirectionVal != null) {
            
            pDirection = new String();
            jsonToValue(pDirection, pDirectionVal, L"String", L"String");
        }
        delete pDirectionKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pIs_primaryKey = new JsonString(L"is_primary");
        IJsonValue* pIs_primaryVal = null;
        pJsonObject->GetValue(pIs_primaryKey, pIs_primaryVal);
        if(pIs_primaryVal != null) {
            
            pIs_primary = new Boolean(false);
            jsonToValue(pIs_primary, pIs_primaryVal, L"Boolean", L"Boolean");
        }
        delete pIs_primaryKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
    }
}

SamiLanguage::SamiLanguage(String* json) {
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
SamiLanguage::asJson ()
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
SamiLanguage::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "String", ""));

    JsonString *pDate_createdKey = new JsonString(L"date_created");
    pJsonObject->Add(pDate_createdKey, toJson(getPDateCreated(), "Long", ""));

    JsonString *pDate_updatedKey = new JsonString(L"date_updated");
    pJsonObject->Add(pDate_updatedKey, toJson(getPDateUpdated(), "Long", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pDirectionKey = new JsonString(L"direction");
    pJsonObject->Add(pDirectionKey, toJson(getPDirection(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pIs_primaryKey = new JsonString(L"is_primary");
    pJsonObject->Add(pIs_primaryKey, toJson(getPIsPrimary(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    return pJsonObject;
}

String*
SamiLanguage::getPCode() {
    return pCode;
}
void
SamiLanguage::setPCode(String* pCode) {
    this->pCode = pCode;
}

Long*
SamiLanguage::getPDateCreated() {
    return pDate_created;
}
void
SamiLanguage::setPDateCreated(Long* pDate_created) {
    this->pDate_created = pDate_created;
}

Long*
SamiLanguage::getPDateUpdated() {
    return pDate_updated;
}
void
SamiLanguage::setPDateUpdated(Long* pDate_updated) {
    this->pDate_updated = pDate_updated;
}

String*
SamiLanguage::getPDescription() {
    return pDescription;
}
void
SamiLanguage::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiLanguage::getPDirection() {
    return pDirection;
}
void
SamiLanguage::setPDirection(String* pDirection) {
    this->pDirection = pDirection;
}

Integer*
SamiLanguage::getPId() {
    return pId;
}
void
SamiLanguage::setPId(Integer* pId) {
    this->pId = pId;
}

Boolean*
SamiLanguage::getPIsPrimary() {
    return pIs_primary;
}
void
SamiLanguage::setPIsPrimary(Boolean* pIs_primary) {
    this->pIs_primary = pIs_primary;
}

String*
SamiLanguage::getPName() {
    return pName;
}
void
SamiLanguage::setPName(String* pName) {
    this->pName = pName;
}



} /* namespace Swagger */

