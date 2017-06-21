
#include "SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings() {
    init();
}

SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::~SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings() {
    this->cleanup();
}

void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::init() {
    pActivity_id = null;
pChallenge_activity_id = null;
pCreated_date = null;
pEntitlement = null;
pEvent_id = null;
pId = null;
pReward_status = null;
pSettings = null;
pSimulated = null;
pStart_date = null;
pStatus = null;
pUpdated_date = null;
pUsers = null;
}

void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::cleanup() {
    if(pActivity_id != null) {
        
        delete pActivity_id;
        pActivity_id = null;
    }
if(pChallenge_activity_id != null) {
        
        delete pChallenge_activity_id;
        pChallenge_activity_id = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pEntitlement != null) {
        
        delete pEntitlement;
        pEntitlement = null;
    }
if(pEvent_id != null) {
        
        delete pEvent_id;
        pEvent_id = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pReward_status != null) {
        
        delete pReward_status;
        pReward_status = null;
    }
if(pSettings != null) {
        pSettings->RemoveAll(true);
        delete pSettings;
        pSettings = null;
    }
if(pSimulated != null) {
        
        delete pSimulated;
        pSimulated = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUsers != null) {
        pUsers->RemoveAll(true);
        delete pUsers;
        pUsers = null;
    }
}


SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::fromJson(String* json) {
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
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActivity_idKey = new JsonString(L"activity_id");
        IJsonValue* pActivity_idVal = null;
        pJsonObject->GetValue(pActivity_idKey, pActivity_idVal);
        if(pActivity_idVal != null) {
            
            pActivity_id = new Long();
            jsonToValue(pActivity_id, pActivity_idVal, L"Long", L"Long");
        }
        delete pActivity_idKey;
JsonString* pChallenge_activity_idKey = new JsonString(L"challenge_activity_id");
        IJsonValue* pChallenge_activity_idVal = null;
        pJsonObject->GetValue(pChallenge_activity_idKey, pChallenge_activity_idVal);
        if(pChallenge_activity_idVal != null) {
            
            pChallenge_activity_id = new Long();
            jsonToValue(pChallenge_activity_id, pChallenge_activity_idVal, L"Long", L"Long");
        }
        delete pChallenge_activity_idKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pEntitlementKey = new JsonString(L"entitlement");
        IJsonValue* pEntitlementVal = null;
        pJsonObject->GetValue(pEntitlementKey, pEntitlementVal);
        if(pEntitlementVal != null) {
            
            pEntitlement = new SamiActivityEntitlementResource();
            jsonToValue(pEntitlement, pEntitlementVal, L"SamiActivityEntitlementResource", L"SamiActivityEntitlementResource");
        }
        delete pEntitlementKey;
JsonString* pEvent_idKey = new JsonString(L"event_id");
        IJsonValue* pEvent_idVal = null;
        pJsonObject->GetValue(pEvent_idKey, pEvent_idVal);
        if(pEvent_idVal != null) {
            
            pEvent_id = new Long();
            jsonToValue(pEvent_id, pEvent_idVal, L"Long", L"Long");
        }
        delete pEvent_idKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pReward_statusKey = new JsonString(L"reward_status");
        IJsonValue* pReward_statusVal = null;
        pJsonObject->GetValue(pReward_statusKey, pReward_statusVal);
        if(pReward_statusVal != null) {
            
            pReward_status = new String();
            jsonToValue(pReward_status, pReward_statusVal, L"String", L"String");
        }
        delete pReward_statusKey;
JsonString* pSettingsKey = new JsonString(L"settings");
        IJsonValue* pSettingsVal = null;
        pJsonObject->GetValue(pSettingsKey, pSettingsVal);
        if(pSettingsVal != null) {
            pSettings = new ArrayList();
            
            jsonToValue(pSettings, pSettingsVal, L"IList", L"SamiSelectedSettingResource");
        }
        delete pSettingsKey;
JsonString* pSimulatedKey = new JsonString(L"simulated");
        IJsonValue* pSimulatedVal = null;
        pJsonObject->GetValue(pSimulatedKey, pSimulatedVal);
        if(pSimulatedVal != null) {
            
            pSimulated = new Boolean(false);
            jsonToValue(pSimulated, pSimulatedVal, L"Boolean", L"Boolean");
        }
        delete pSimulatedKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pUsersKey = new JsonString(L"users");
        IJsonValue* pUsersVal = null;
        pJsonObject->GetValue(pUsersKey, pUsersVal);
        if(pUsersVal != null) {
            pUsers = new ArrayList();
            
            jsonToValue(pUsers, pUsersVal, L"IList", L"SamiActivityUserResource");
        }
        delete pUsersKey;
    }
}

SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings(String* json) {
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
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::asJson ()
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
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActivity_idKey = new JsonString(L"activity_id");
    pJsonObject->Add(pActivity_idKey, toJson(getPActivityId(), "Long", ""));

    JsonString *pChallenge_activity_idKey = new JsonString(L"challenge_activity_id");
    pJsonObject->Add(pChallenge_activity_idKey, toJson(getPChallengeActivityId(), "Long", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pEntitlementKey = new JsonString(L"entitlement");
    pJsonObject->Add(pEntitlementKey, toJson(getPEntitlement(), "SamiActivityEntitlementResource", ""));

    JsonString *pEvent_idKey = new JsonString(L"event_id");
    pJsonObject->Add(pEvent_idKey, toJson(getPEventId(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pReward_statusKey = new JsonString(L"reward_status");
    pJsonObject->Add(pReward_statusKey, toJson(getPRewardStatus(), "String", ""));

    JsonString *pSettingsKey = new JsonString(L"settings");
    pJsonObject->Add(pSettingsKey, toJson(getPSettings(), "SamiSelectedSettingResource", "array"));

    JsonString *pSimulatedKey = new JsonString(L"simulated");
    pJsonObject->Add(pSimulatedKey, toJson(getPSimulated(), "Boolean", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUsersKey = new JsonString(L"users");
    pJsonObject->Add(pUsersKey, toJson(getPUsers(), "SamiActivityUserResource", "array"));

    return pJsonObject;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPActivityId() {
    return pActivity_id;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPActivityId(Long* pActivity_id) {
    this->pActivity_id = pActivity_id;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPChallengeActivityId() {
    return pChallenge_activity_id;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPChallengeActivityId(Long* pChallenge_activity_id) {
    this->pChallenge_activity_id = pChallenge_activity_id;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPCreatedDate() {
    return pCreated_date;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

SamiActivityEntitlementResource*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPEntitlement() {
    return pEntitlement;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPEntitlement(SamiActivityEntitlementResource* pEntitlement) {
    this->pEntitlement = pEntitlement;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPEventId() {
    return pEvent_id;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPEventId(Long* pEvent_id) {
    this->pEvent_id = pEvent_id;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPId() {
    return pId;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPRewardStatus() {
    return pReward_status;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPRewardStatus(String* pReward_status) {
    this->pReward_status = pReward_status;
}

IList*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPSettings() {
    return pSettings;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPSettings(IList* pSettings) {
    this->pSettings = pSettings;
}

Boolean*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPSimulated() {
    return pSimulated;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPSimulated(Boolean* pSimulated) {
    this->pSimulated = pSimulated;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPStartDate() {
    return pStart_date;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}

String*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPStatus() {
    return pStatus;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Long*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

IList*
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::getPUsers() {
    return pUsers;
}
void
SamiA occurrence of an activity (the actual game for example). Used to track scores, participants, and provide settings::setPUsers(IList* pUsers) {
    this->pUsers = pUsers;
}



} /* namespace Swagger */

