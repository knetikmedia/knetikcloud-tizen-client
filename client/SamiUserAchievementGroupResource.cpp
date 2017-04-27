
#include "SamiUserAchievementGroupResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserAchievementGroupResource::SamiUserAchievementGroupResource() {
    init();
}

SamiUserAchievementGroupResource::~SamiUserAchievementGroupResource() {
    this->cleanup();
}

void
SamiUserAchievementGroupResource::init() {
    pAchievements = null;
pGroup_name = null;
pId = null;
pProgress = null;
pUser_id = null;
}

void
SamiUserAchievementGroupResource::cleanup() {
    if(pAchievements != null) {
        pAchievements->RemoveAll(true);
        delete pAchievements;
        pAchievements = null;
    }
if(pGroup_name != null) {
        
        delete pGroup_name;
        pGroup_name = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pProgress != null) {
        
        delete pProgress;
        pProgress = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiUserAchievementGroupResource*
SamiUserAchievementGroupResource::fromJson(String* json) {
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
SamiUserAchievementGroupResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAchievementsKey = new JsonString(L"achievements");
        IJsonValue* pAchievementsVal = null;
        pJsonObject->GetValue(pAchievementsKey, pAchievementsVal);
        if(pAchievementsVal != null) {
            pAchievements = new ArrayList();
            
            jsonToValue(pAchievements, pAchievementsVal, L"IList", L"SamiUserAchievementResource");
        }
        delete pAchievementsKey;
JsonString* pGroup_nameKey = new JsonString(L"group_name");
        IJsonValue* pGroup_nameVal = null;
        pJsonObject->GetValue(pGroup_nameKey, pGroup_nameVal);
        if(pGroup_nameVal != null) {
            
            pGroup_name = new String();
            jsonToValue(pGroup_name, pGroup_nameVal, L"String", L"String");
        }
        delete pGroup_nameKey;
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

SamiUserAchievementGroupResource::SamiUserAchievementGroupResource(String* json) {
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
SamiUserAchievementGroupResource::asJson ()
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
SamiUserAchievementGroupResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAchievementsKey = new JsonString(L"achievements");
    pJsonObject->Add(pAchievementsKey, toJson(getPAchievements(), "SamiUserAchievementResource", "array"));

    JsonString *pGroup_nameKey = new JsonString(L"group_name");
    pJsonObject->Add(pGroup_nameKey, toJson(getPGroupName(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pProgressKey = new JsonString(L"progress");
    pJsonObject->Add(pProgressKey, toJson(getPProgress(), "Integer", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

IList*
SamiUserAchievementGroupResource::getPAchievements() {
    return pAchievements;
}
void
SamiUserAchievementGroupResource::setPAchievements(IList* pAchievements) {
    this->pAchievements = pAchievements;
}

String*
SamiUserAchievementGroupResource::getPGroupName() {
    return pGroup_name;
}
void
SamiUserAchievementGroupResource::setPGroupName(String* pGroup_name) {
    this->pGroup_name = pGroup_name;
}

String*
SamiUserAchievementGroupResource::getPId() {
    return pId;
}
void
SamiUserAchievementGroupResource::setPId(String* pId) {
    this->pId = pId;
}

Integer*
SamiUserAchievementGroupResource::getPProgress() {
    return pProgress;
}
void
SamiUserAchievementGroupResource::setPProgress(Integer* pProgress) {
    this->pProgress = pProgress;
}

Integer*
SamiUserAchievementGroupResource::getPUserId() {
    return pUser_id;
}
void
SamiUserAchievementGroupResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

