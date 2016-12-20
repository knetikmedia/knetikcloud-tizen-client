
#include "SamiDatabaseConfig.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiDatabaseConfig::SamiDatabaseConfig() {
    init();
}

SamiDatabaseConfig::~SamiDatabaseConfig() {
    this->cleanup();
}

void
SamiDatabaseConfig::init() {
    pMongo = null;
pSql = null;
}

void
SamiDatabaseConfig::cleanup() {
    if(pMongo != null) {
        
        delete pMongo;
        pMongo = null;
    }
if(pSql != null) {
        
        delete pSql;
        pSql = null;
    }
}


SamiDatabaseConfig*
SamiDatabaseConfig::fromJson(String* json) {
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
SamiDatabaseConfig::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMongoKey = new JsonString(L"mongo");
        IJsonValue* pMongoVal = null;
        pJsonObject->GetValue(pMongoKey, pMongoVal);
        if(pMongoVal != null) {
            
            pMongo = new SamiMongoDatabaseConfig();
            jsonToValue(pMongo, pMongoVal, L"SamiMongoDatabaseConfig", L"SamiMongoDatabaseConfig");
        }
        delete pMongoKey;
JsonString* pSqlKey = new JsonString(L"sql");
        IJsonValue* pSqlVal = null;
        pJsonObject->GetValue(pSqlKey, pSqlVal);
        if(pSqlVal != null) {
            
            pSql = new SamiSqlDatabaseConfig();
            jsonToValue(pSql, pSqlVal, L"SamiSqlDatabaseConfig", L"SamiSqlDatabaseConfig");
        }
        delete pSqlKey;
    }
}

SamiDatabaseConfig::SamiDatabaseConfig(String* json) {
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
SamiDatabaseConfig::asJson ()
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
SamiDatabaseConfig::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pMongoKey = new JsonString(L"mongo");
    pJsonObject->Add(pMongoKey, toJson(getPMongo(), "SamiMongoDatabaseConfig", ""));

    JsonString *pSqlKey = new JsonString(L"sql");
    pJsonObject->Add(pSqlKey, toJson(getPSql(), "SamiSqlDatabaseConfig", ""));

    return pJsonObject;
}

SamiMongoDatabaseConfig*
SamiDatabaseConfig::getPMongo() {
    return pMongo;
}
void
SamiDatabaseConfig::setPMongo(SamiMongoDatabaseConfig* pMongo) {
    this->pMongo = pMongo;
}

SamiSqlDatabaseConfig*
SamiDatabaseConfig::getPSql() {
    return pSql;
}
void
SamiDatabaseConfig::setPSql(SamiSqlDatabaseConfig* pSql) {
    this->pSql = pSql;
}



} /* namespace Swagger */

