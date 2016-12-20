
#include "SamiCustomerResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCustomerResource::SamiCustomerResource() {
    init();
}

SamiCustomerResource::~SamiCustomerResource() {
    this->cleanup();
}

void
SamiCustomerResource::init() {
    pAliases = null;
pDatabase = null;
pName = null;
}

void
SamiCustomerResource::cleanup() {
    if(pAliases != null) {
        
        delete pAliases;
        pAliases = null;
    }
if(pDatabase != null) {
        
        delete pDatabase;
        pDatabase = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
}


SamiCustomerResource*
SamiCustomerResource::fromJson(String* json) {
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
SamiCustomerResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAliasesKey = new JsonString(L"aliases");
        IJsonValue* pAliasesVal = null;
        pJsonObject->GetValue(pAliasesKey, pAliasesVal);
        if(pAliasesVal != null) {
            
            pAliases = new String();
            jsonToValue(pAliases, pAliasesVal, L"String", L"String");
        }
        delete pAliasesKey;
JsonString* pDatabaseKey = new JsonString(L"database");
        IJsonValue* pDatabaseVal = null;
        pJsonObject->GetValue(pDatabaseKey, pDatabaseVal);
        if(pDatabaseVal != null) {
            
            pDatabase = new SamiDatabaseConfig();
            jsonToValue(pDatabase, pDatabaseVal, L"SamiDatabaseConfig", L"SamiDatabaseConfig");
        }
        delete pDatabaseKey;
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

SamiCustomerResource::SamiCustomerResource(String* json) {
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
SamiCustomerResource::asJson ()
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
SamiCustomerResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAliasesKey = new JsonString(L"aliases");
    pJsonObject->Add(pAliasesKey, toJson(getPAliases(), "String", ""));

    JsonString *pDatabaseKey = new JsonString(L"database");
    pJsonObject->Add(pDatabaseKey, toJson(getPDatabase(), "SamiDatabaseConfig", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    return pJsonObject;
}

String*
SamiCustomerResource::getPAliases() {
    return pAliases;
}
void
SamiCustomerResource::setPAliases(String* pAliases) {
    this->pAliases = pAliases;
}

SamiDatabaseConfig*
SamiCustomerResource::getPDatabase() {
    return pDatabase;
}
void
SamiCustomerResource::setPDatabase(SamiDatabaseConfig* pDatabase) {
    this->pDatabase = pDatabase;
}

String*
SamiCustomerResource::getPName() {
    return pName;
}
void
SamiCustomerResource::setPName(String* pName) {
    this->pName = pName;
}



} /* namespace Swagger */

