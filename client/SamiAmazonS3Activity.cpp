
#include "SamiAmazonS3Activity.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAmazonS3Activity::SamiAmazonS3Activity() {
    init();
}

SamiAmazonS3Activity::~SamiAmazonS3Activity() {
    this->cleanup();
}

void
SamiAmazonS3Activity::init() {
    pAction = null;
pCreated_date = null;
pFilename = null;
pId = null;
pObject_key = null;
pUrl = null;
pUser_id = null;
}

void
SamiAmazonS3Activity::cleanup() {
    if(pAction != null) {
        
        delete pAction;
        pAction = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pFilename != null) {
        
        delete pFilename;
        pFilename = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pObject_key != null) {
        
        delete pObject_key;
        pObject_key = null;
    }
if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiAmazonS3Activity*
SamiAmazonS3Activity::fromJson(String* json) {
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
SamiAmazonS3Activity::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActionKey = new JsonString(L"action");
        IJsonValue* pActionVal = null;
        pJsonObject->GetValue(pActionKey, pActionVal);
        if(pActionVal != null) {
            
            pAction = new String();
            jsonToValue(pAction, pActionVal, L"String", L"String");
        }
        delete pActionKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pFilenameKey = new JsonString(L"filename");
        IJsonValue* pFilenameVal = null;
        pJsonObject->GetValue(pFilenameKey, pFilenameVal);
        if(pFilenameVal != null) {
            
            pFilename = new String();
            jsonToValue(pFilename, pFilenameVal, L"String", L"String");
        }
        delete pFilenameKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pObject_keyKey = new JsonString(L"object_key");
        IJsonValue* pObject_keyVal = null;
        pJsonObject->GetValue(pObject_keyKey, pObject_keyVal);
        if(pObject_keyVal != null) {
            
            pObject_key = new String();
            jsonToValue(pObject_key, pObject_keyVal, L"String", L"String");
        }
        delete pObject_keyKey;
JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
    }
}

SamiAmazonS3Activity::SamiAmazonS3Activity(String* json) {
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
SamiAmazonS3Activity::asJson ()
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
SamiAmazonS3Activity::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActionKey = new JsonString(L"action");
    pJsonObject->Add(pActionKey, toJson(getPAction(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pFilenameKey = new JsonString(L"filename");
    pJsonObject->Add(pFilenameKey, toJson(getPFilename(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pObject_keyKey = new JsonString(L"object_key");
    pJsonObject->Add(pObject_keyKey, toJson(getPObjectKey(), "String", ""));

    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiAmazonS3Activity::getPAction() {
    return pAction;
}
void
SamiAmazonS3Activity::setPAction(String* pAction) {
    this->pAction = pAction;
}

Long*
SamiAmazonS3Activity::getPCreatedDate() {
    return pCreated_date;
}
void
SamiAmazonS3Activity::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiAmazonS3Activity::getPFilename() {
    return pFilename;
}
void
SamiAmazonS3Activity::setPFilename(String* pFilename) {
    this->pFilename = pFilename;
}

Long*
SamiAmazonS3Activity::getPId() {
    return pId;
}
void
SamiAmazonS3Activity::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiAmazonS3Activity::getPObjectKey() {
    return pObject_key;
}
void
SamiAmazonS3Activity::setPObjectKey(String* pObject_key) {
    this->pObject_key = pObject_key;
}

String*
SamiAmazonS3Activity::getPUrl() {
    return pUrl;
}
void
SamiAmazonS3Activity::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}

Integer*
SamiAmazonS3Activity::getPUserId() {
    return pUser_id;
}
void
SamiAmazonS3Activity::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

