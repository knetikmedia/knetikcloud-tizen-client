
#include "SamiCustomerConfig.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCustomerConfig::SamiCustomerConfig() {
    init();
}

SamiCustomerConfig::~SamiCustomerConfig() {
    this->cleanup();
}

void
SamiCustomerConfig::init() {
    pAliases = null;
pDatabase = null;
pName = null;
pS3_config = null;
}

void
SamiCustomerConfig::cleanup() {
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
if(pS3_config != null) {
        
        delete pS3_config;
        pS3_config = null;
    }
}


SamiCustomerConfig*
SamiCustomerConfig::fromJson(String* json) {
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
SamiCustomerConfig::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pS3_configKey = new JsonString(L"s3_config");
        IJsonValue* pS3_configVal = null;
        pJsonObject->GetValue(pS3_configKey, pS3_configVal);
        if(pS3_configVal != null) {
            
            pS3_config = new SamiS3Config();
            jsonToValue(pS3_config, pS3_configVal, L"SamiS3Config", L"SamiS3Config");
        }
        delete pS3_configKey;
    }
}

SamiCustomerConfig::SamiCustomerConfig(String* json) {
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
SamiCustomerConfig::asJson ()
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
SamiCustomerConfig::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAliasesKey = new JsonString(L"aliases");
    pJsonObject->Add(pAliasesKey, toJson(getPAliases(), "String", ""));

    JsonString *pDatabaseKey = new JsonString(L"database");
    pJsonObject->Add(pDatabaseKey, toJson(getPDatabase(), "SamiDatabaseConfig", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pS3_configKey = new JsonString(L"s3_config");
    pJsonObject->Add(pS3_configKey, toJson(getPS3Config(), "SamiS3Config", ""));

    return pJsonObject;
}

String*
SamiCustomerConfig::getPAliases() {
    return pAliases;
}
void
SamiCustomerConfig::setPAliases(String* pAliases) {
    this->pAliases = pAliases;
}

SamiDatabaseConfig*
SamiCustomerConfig::getPDatabase() {
    return pDatabase;
}
void
SamiCustomerConfig::setPDatabase(SamiDatabaseConfig* pDatabase) {
    this->pDatabase = pDatabase;
}

String*
SamiCustomerConfig::getPName() {
    return pName;
}
void
SamiCustomerConfig::setPName(String* pName) {
    this->pName = pName;
}

SamiS3Config*
SamiCustomerConfig::getPS3Config() {
    return pS3_config;
}
void
SamiCustomerConfig::setPS3Config(SamiS3Config* pS3_config) {
    this->pS3_config = pS3_config;
}



} /* namespace Swagger */

