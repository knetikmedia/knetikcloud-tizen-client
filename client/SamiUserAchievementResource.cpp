
#include "SamiUserAchievementResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserAchievementResource::SamiUserAchievementResource() {
    init();
}

SamiUserAchievementResource::~SamiUserAchievementResource() {
    this->cleanup();
}

void
SamiUserAchievementResource::init() {
    pAchieved = null;
pAchievement_name = null;
pCreated_date = null;
pEarned_date = null;
pId = null;
pProgress = null;
pUpdated_date = null;
pUser_id = null;
}

void
SamiUserAchievementResource::cleanup() {
    if(pAchieved != null) {
        
        delete pAchieved;
        pAchieved = null;
    }
if(pAchievement_name != null) {
        
        delete pAchievement_name;
        pAchievement_name = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pEarned_date != null) {
        
        delete pEarned_date;
        pEarned_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pProgress != null) {
        
        delete pProgress;
        pProgress = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiUserAchievementResource*
SamiUserAchievementResource::fromJson(String* json) {
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
SamiUserAchievementResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAchievedKey = new JsonString(L"achieved");
        IJsonValue* pAchievedVal = null;
        pJsonObject->GetValue(pAchievedKey, pAchievedVal);
        if(pAchievedVal != null) {
            
            pAchieved = new Boolean(false);
            jsonToValue(pAchieved, pAchievedVal, L"Boolean", L"Boolean");
        }
        delete pAchievedKey;
JsonString* pAchievement_nameKey = new JsonString(L"achievement_name");
        IJsonValue* pAchievement_nameVal = null;
        pJsonObject->GetValue(pAchievement_nameKey, pAchievement_nameVal);
        if(pAchievement_nameVal != null) {
            
            pAchievement_name = new String();
            jsonToValue(pAchievement_name, pAchievement_nameVal, L"String", L"String");
        }
        delete pAchievement_nameKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pEarned_dateKey = new JsonString(L"earned_date");
        IJsonValue* pEarned_dateVal = null;
        pJsonObject->GetValue(pEarned_dateKey, pEarned_dateVal);
        if(pEarned_dateVal != null) {
            
            pEarned_date = new Long();
            jsonToValue(pEarned_date, pEarned_dateVal, L"Long", L"Long");
        }
        delete pEarned_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pProgressKey = new JsonString(L"progress");
        IJsonValue* pProgressVal = null;
        pJsonObject->GetValue(pProgressKey, pProgressVal);
        if(pProgressVal != null) {
            
            pProgress = new Integer();
            jsonToValue(pProgress, pProgressVal, L"Integer", L"Integer");
        }
        delete pProgressKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
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

SamiUserAchievementResource::SamiUserAchievementResource(String* json) {
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
SamiUserAchievementResource::asJson ()
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
SamiUserAchievementResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAchievedKey = new JsonString(L"achieved");
    pJsonObject->Add(pAchievedKey, toJson(getPAchieved(), "Boolean", ""));

    JsonString *pAchievement_nameKey = new JsonString(L"achievement_name");
    pJsonObject->Add(pAchievement_nameKey, toJson(getPAchievementName(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pEarned_dateKey = new JsonString(L"earned_date");
    pJsonObject->Add(pEarned_dateKey, toJson(getPEarnedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pProgressKey = new JsonString(L"progress");
    pJsonObject->Add(pProgressKey, toJson(getPProgress(), "Integer", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

Boolean*
SamiUserAchievementResource::getPAchieved() {
    return pAchieved;
}
void
SamiUserAchievementResource::setPAchieved(Boolean* pAchieved) {
    this->pAchieved = pAchieved;
}

String*
SamiUserAchievementResource::getPAchievementName() {
    return pAchievement_name;
}
void
SamiUserAchievementResource::setPAchievementName(String* pAchievement_name) {
    this->pAchievement_name = pAchievement_name;
}

Long*
SamiUserAchievementResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiUserAchievementResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiUserAchievementResource::getPEarnedDate() {
    return pEarned_date;
}
void
SamiUserAchievementResource::setPEarnedDate(Long* pEarned_date) {
    this->pEarned_date = pEarned_date;
}

String*
SamiUserAchievementResource::getPId() {
    return pId;
}
void
SamiUserAchievementResource::setPId(String* pId) {
    this->pId = pId;
}

Integer*
SamiUserAchievementResource::getPProgress() {
    return pProgress;
}
void
SamiUserAchievementResource::setPProgress(Integer* pProgress) {
    this->pProgress = pProgress;
}

Long*
SamiUserAchievementResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiUserAchievementResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

Integer*
SamiUserAchievementResource::getPUserId() {
    return pUser_id;
}
void
SamiUserAchievementResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

