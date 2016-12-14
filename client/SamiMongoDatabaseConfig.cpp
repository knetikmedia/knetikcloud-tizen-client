
#include "SamiMongoDatabaseConfig.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMongoDatabaseConfig::SamiMongoDatabaseConfig() {
    init();
}

SamiMongoDatabaseConfig::~SamiMongoDatabaseConfig() {
    this->cleanup();
}

void
SamiMongoDatabaseConfig::init() {
    pDb_name = null;
pOptions = null;
pPassword = null;
pServers = null;
pUsername = null;
}

void
SamiMongoDatabaseConfig::cleanup() {
    if(pDb_name != null) {
        
        delete pDb_name;
        pDb_name = null;
    }
if(pOptions != null) {
        
        delete pOptions;
        pOptions = null;
    }
if(pPassword != null) {
        
        delete pPassword;
        pPassword = null;
    }
if(pServers != null) {
        
        delete pServers;
        pServers = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiMongoDatabaseConfig*
SamiMongoDatabaseConfig::fromJson(String* json) {
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
SamiMongoDatabaseConfig::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDb_nameKey = new JsonString(L"db_name");
        IJsonValue* pDb_nameVal = null;
        pJsonObject->GetValue(pDb_nameKey, pDb_nameVal);
        if(pDb_nameVal != null) {
            
            pDb_name = new String();
            jsonToValue(pDb_name, pDb_nameVal, L"String", L"String");
        }
        delete pDb_nameKey;
JsonString* pOptionsKey = new JsonString(L"options");
        IJsonValue* pOptionsVal = null;
        pJsonObject->GetValue(pOptionsKey, pOptionsVal);
        if(pOptionsVal != null) {
            
            pOptions = new String();
            jsonToValue(pOptions, pOptionsVal, L"String", L"String");
        }
        delete pOptionsKey;
JsonString* pPasswordKey = new JsonString(L"password");
        IJsonValue* pPasswordVal = null;
        pJsonObject->GetValue(pPasswordKey, pPasswordVal);
        if(pPasswordVal != null) {
            
            pPassword = new String();
            jsonToValue(pPassword, pPasswordVal, L"String", L"String");
        }
        delete pPasswordKey;
JsonString* pServersKey = new JsonString(L"servers");
        IJsonValue* pServersVal = null;
        pJsonObject->GetValue(pServersKey, pServersVal);
        if(pServersVal != null) {
            
            pServers = new String();
            jsonToValue(pServers, pServersVal, L"String", L"String");
        }
        delete pServersKey;
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

SamiMongoDatabaseConfig::SamiMongoDatabaseConfig(String* json) {
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
SamiMongoDatabaseConfig::asJson ()
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
SamiMongoDatabaseConfig::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDb_nameKey = new JsonString(L"db_name");
    pJsonObject->Add(pDb_nameKey, toJson(getPDbName(), "String", ""));

    JsonString *pOptionsKey = new JsonString(L"options");
    pJsonObject->Add(pOptionsKey, toJson(getPOptions(), "String", ""));

    JsonString *pPasswordKey = new JsonString(L"password");
    pJsonObject->Add(pPasswordKey, toJson(getPPassword(), "String", ""));

    JsonString *pServersKey = new JsonString(L"servers");
    pJsonObject->Add(pServersKey, toJson(getPServers(), "String", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

String*
SamiMongoDatabaseConfig::getPDbName() {
    return pDb_name;
}
void
SamiMongoDatabaseConfig::setPDbName(String* pDb_name) {
    this->pDb_name = pDb_name;
}

String*
SamiMongoDatabaseConfig::getPOptions() {
    return pOptions;
}
void
SamiMongoDatabaseConfig::setPOptions(String* pOptions) {
    this->pOptions = pOptions;
}

String*
SamiMongoDatabaseConfig::getPPassword() {
    return pPassword;
}
void
SamiMongoDatabaseConfig::setPPassword(String* pPassword) {
    this->pPassword = pPassword;
}

String*
SamiMongoDatabaseConfig::getPServers() {
    return pServers;
}
void
SamiMongoDatabaseConfig::setPServers(String* pServers) {
    this->pServers = pServers;
}

String*
SamiMongoDatabaseConfig::getPUsername() {
    return pUsername;
}
void
SamiMongoDatabaseConfig::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

