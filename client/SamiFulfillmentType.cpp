
#include "SamiFulfillmentType.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFulfillmentType::SamiFulfillmentType() {
    init();
}

SamiFulfillmentType::~SamiFulfillmentType() {
    this->cleanup();
}

void
SamiFulfillmentType::init() {
    pCore = null;
pDescription = null;
pId = null;
pName = null;
}

void
SamiFulfillmentType::cleanup() {
    if(pCore != null) {
        
        delete pCore;
        pCore = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
}


SamiFulfillmentType*
SamiFulfillmentType::fromJson(String* json) {
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
SamiFulfillmentType::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCoreKey = new JsonString(L"core");
        IJsonValue* pCoreVal = null;
        pJsonObject->GetValue(pCoreKey, pCoreVal);
        if(pCoreVal != null) {
            
            pCore = new Boolean(false);
            jsonToValue(pCore, pCoreVal, L"Boolean", L"Boolean");
        }
        delete pCoreKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
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
    }
}

SamiFulfillmentType::SamiFulfillmentType(String* json) {
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
SamiFulfillmentType::asJson ()
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
SamiFulfillmentType::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCoreKey = new JsonString(L"core");
    pJsonObject->Add(pCoreKey, toJson(getPCore(), "Boolean", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    return pJsonObject;
}

Boolean*
SamiFulfillmentType::getPCore() {
    return pCore;
}
void
SamiFulfillmentType::setPCore(Boolean* pCore) {
    this->pCore = pCore;
}

String*
SamiFulfillmentType::getPDescription() {
    return pDescription;
}
void
SamiFulfillmentType::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Integer*
SamiFulfillmentType::getPId() {
    return pId;
}
void
SamiFulfillmentType::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiFulfillmentType::getPName() {
    return pName;
}
void
SamiFulfillmentType::setPName(String* pName) {
    this->pName = pName;
}



} /* namespace Swagger */

