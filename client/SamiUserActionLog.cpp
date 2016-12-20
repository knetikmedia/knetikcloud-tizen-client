
#include "SamiUserActionLog.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserActionLog::SamiUserActionLog() {
    init();
}

SamiUserActionLog::~SamiUserActionLog() {
    this->cleanup();
}

void
SamiUserActionLog::init() {
    pAction_description = null;
pAction_name = null;
pCreated_date = null;
pDetails = null;
pId = null;
pRequest_id = null;
pUser_id = null;
}

void
SamiUserActionLog::cleanup() {
    if(pAction_description != null) {
        
        delete pAction_description;
        pAction_description = null;
    }
if(pAction_name != null) {
        
        delete pAction_name;
        pAction_name = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDetails != null) {
        pDetails->RemoveAll(true);
        delete pDetails;
        pDetails = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pRequest_id != null) {
        
        delete pRequest_id;
        pRequest_id = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiUserActionLog*
SamiUserActionLog::fromJson(String* json) {
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
SamiUserActionLog::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAction_descriptionKey = new JsonString(L"action_description");
        IJsonValue* pAction_descriptionVal = null;
        pJsonObject->GetValue(pAction_descriptionKey, pAction_descriptionVal);
        if(pAction_descriptionVal != null) {
            
            pAction_description = new String();
            jsonToValue(pAction_description, pAction_descriptionVal, L"String", L"String");
        }
        delete pAction_descriptionKey;
JsonString* pAction_nameKey = new JsonString(L"action_name");
        IJsonValue* pAction_nameVal = null;
        pJsonObject->GetValue(pAction_nameKey, pAction_nameVal);
        if(pAction_nameVal != null) {
            
            pAction_name = new String();
            jsonToValue(pAction_name, pAction_nameVal, L"String", L"String");
        }
        delete pAction_nameKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pDetailsKey = new JsonString(L"details");
        IJsonValue* pDetailsVal = null;
        pJsonObject->GetValue(pDetailsKey, pDetailsVal);
        if(pDetailsVal != null) {
            pDetails = new HashMap();
            
            jsonToValue(pDetails, pDetailsVal, L"HashMap", L"String");
        }
        delete pDetailsKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pRequest_idKey = new JsonString(L"request_id");
        IJsonValue* pRequest_idVal = null;
        pJsonObject->GetValue(pRequest_idKey, pRequest_idVal);
        if(pRequest_idVal != null) {
            
            pRequest_id = new String();
            jsonToValue(pRequest_id, pRequest_idVal, L"String", L"String");
        }
        delete pRequest_idKey;
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

SamiUserActionLog::SamiUserActionLog(String* json) {
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
SamiUserActionLog::asJson ()
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
SamiUserActionLog::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAction_descriptionKey = new JsonString(L"action_description");
    pJsonObject->Add(pAction_descriptionKey, toJson(getPActionDescription(), "String", ""));

    JsonString *pAction_nameKey = new JsonString(L"action_name");
    pJsonObject->Add(pAction_nameKey, toJson(getPActionName(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDetailsKey = new JsonString(L"details");
    pJsonObject->Add(pDetailsKey, toJson(getPDetails(), "String", "map"));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pRequest_idKey = new JsonString(L"request_id");
    pJsonObject->Add(pRequest_idKey, toJson(getPRequestId(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiUserActionLog::getPActionDescription() {
    return pAction_description;
}
void
SamiUserActionLog::setPActionDescription(String* pAction_description) {
    this->pAction_description = pAction_description;
}

String*
SamiUserActionLog::getPActionName() {
    return pAction_name;
}
void
SamiUserActionLog::setPActionName(String* pAction_name) {
    this->pAction_name = pAction_name;
}

Long*
SamiUserActionLog::getPCreatedDate() {
    return pCreated_date;
}
void
SamiUserActionLog::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

HashMap*
SamiUserActionLog::getPDetails() {
    return pDetails;
}
void
SamiUserActionLog::setPDetails(HashMap* pDetails) {
    this->pDetails = pDetails;
}

String*
SamiUserActionLog::getPId() {
    return pId;
}
void
SamiUserActionLog::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiUserActionLog::getPRequestId() {
    return pRequest_id;
}
void
SamiUserActionLog::setPRequestId(String* pRequest_id) {
    this->pRequest_id = pRequest_id;
}

Integer*
SamiUserActionLog::getPUserId() {
    return pUser_id;
}
void
SamiUserActionLog::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

