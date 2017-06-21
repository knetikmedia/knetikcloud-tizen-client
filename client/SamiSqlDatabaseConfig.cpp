
#include "SamiSqlDatabaseConfig.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSqlDatabaseConfig::SamiSqlDatabaseConfig() {
    init();
}

SamiSqlDatabaseConfig::~SamiSqlDatabaseConfig() {
    this->cleanup();
}

void
SamiSqlDatabaseConfig::init() {
    pConnection_pool_size = null;
pDb_name = null;
pHostname = null;
pPassword = null;
pPort = null;
pUsername = null;
}

void
SamiSqlDatabaseConfig::cleanup() {
    if(pConnection_pool_size != null) {
        
        delete pConnection_pool_size;
        pConnection_pool_size = null;
    }
if(pDb_name != null) {
        
        delete pDb_name;
        pDb_name = null;
    }
if(pHostname != null) {
        
        delete pHostname;
        pHostname = null;
    }
if(pPassword != null) {
        
        delete pPassword;
        pPassword = null;
    }
if(pPort != null) {
        
        delete pPort;
        pPort = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiSqlDatabaseConfig*
SamiSqlDatabaseConfig::fromJson(String* json) {
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
SamiSqlDatabaseConfig::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pConnection_pool_sizeKey = new JsonString(L"connection_pool_size");
        IJsonValue* pConnection_pool_sizeVal = null;
        pJsonObject->GetValue(pConnection_pool_sizeKey, pConnection_pool_sizeVal);
        if(pConnection_pool_sizeVal != null) {
            
            pConnection_pool_size = new Integer();
            jsonToValue(pConnection_pool_size, pConnection_pool_sizeVal, L"Integer", L"Integer");
        }
        delete pConnection_pool_sizeKey;
JsonString* pDb_nameKey = new JsonString(L"db_name");
        IJsonValue* pDb_nameVal = null;
        pJsonObject->GetValue(pDb_nameKey, pDb_nameVal);
        if(pDb_nameVal != null) {
            
            pDb_name = new String();
            jsonToValue(pDb_name, pDb_nameVal, L"String", L"String");
        }
        delete pDb_nameKey;
JsonString* pHostnameKey = new JsonString(L"hostname");
        IJsonValue* pHostnameVal = null;
        pJsonObject->GetValue(pHostnameKey, pHostnameVal);
        if(pHostnameVal != null) {
            
            pHostname = new String();
            jsonToValue(pHostname, pHostnameVal, L"String", L"String");
        }
        delete pHostnameKey;
JsonString* pPasswordKey = new JsonString(L"password");
        IJsonValue* pPasswordVal = null;
        pJsonObject->GetValue(pPasswordKey, pPasswordVal);
        if(pPasswordVal != null) {
            
            pPassword = new String();
            jsonToValue(pPassword, pPasswordVal, L"String", L"String");
        }
        delete pPasswordKey;
JsonString* pPortKey = new JsonString(L"port");
        IJsonValue* pPortVal = null;
        pJsonObject->GetValue(pPortKey, pPortVal);
        if(pPortVal != null) {
            
            pPort = new Integer();
            jsonToValue(pPort, pPortVal, L"Integer", L"Integer");
        }
        delete pPortKey;
JsonString* pUsernameKey = new JsonString(L"username");
        IJsonValue* pUsernameVal = null;
        pJsonObject->GetValue(pUsernameKey, pUsernameVal);
        if(pUsernameVal != null) {
            
            pUsername = new String();
            jsonToValue(pUsername, pUsernameVal, L"String", L"String");
        }
        delete pUsernameKey;
    }
}

SamiSqlDatabaseConfig::SamiSqlDatabaseConfig(String* json) {
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
SamiSqlDatabaseConfig::asJson ()
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
SamiSqlDatabaseConfig::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pConnection_pool_sizeKey = new JsonString(L"connection_pool_size");
    pJsonObject->Add(pConnection_pool_sizeKey, toJson(getPConnectionPoolSize(), "Integer", ""));

    JsonString *pDb_nameKey = new JsonString(L"db_name");
    pJsonObject->Add(pDb_nameKey, toJson(getPDbName(), "String", ""));

    JsonString *pHostnameKey = new JsonString(L"hostname");
    pJsonObject->Add(pHostnameKey, toJson(getPHostname(), "String", ""));

    JsonString *pPasswordKey = new JsonString(L"password");
    pJsonObject->Add(pPasswordKey, toJson(getPPassword(), "String", ""));

    JsonString *pPortKey = new JsonString(L"port");
    pJsonObject->Add(pPortKey, toJson(getPPort(), "Integer", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

Integer*
SamiSqlDatabaseConfig::getPConnectionPoolSize() {
    return pConnection_pool_size;
}
void
SamiSqlDatabaseConfig::setPConnectionPoolSize(Integer* pConnection_pool_size) {
    this->pConnection_pool_size = pConnection_pool_size;
}

String*
SamiSqlDatabaseConfig::getPDbName() {
    return pDb_name;
}
void
SamiSqlDatabaseConfig::setPDbName(String* pDb_name) {
    this->pDb_name = pDb_name;
}

String*
SamiSqlDatabaseConfig::getPHostname() {
    return pHostname;
}
void
SamiSqlDatabaseConfig::setPHostname(String* pHostname) {
    this->pHostname = pHostname;
}

String*
SamiSqlDatabaseConfig::getPPassword() {
    return pPassword;
}
void
SamiSqlDatabaseConfig::setPPassword(String* pPassword) {
    this->pPassword = pPassword;
}

Integer*
SamiSqlDatabaseConfig::getPPort() {
    return pPort;
}
void
SamiSqlDatabaseConfig::setPPort(Integer* pPort) {
    this->pPort = pPort;
}

String*
SamiSqlDatabaseConfig::getPUsername() {
    return pUsername;
}
void
SamiSqlDatabaseConfig::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

