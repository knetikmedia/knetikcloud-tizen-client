
#include "SamiChallengeResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiChallengeResource::SamiChallengeResource() {
    init();
}

SamiChallengeResource::~SamiChallengeResource() {
    this->cleanup();
}

void
SamiChallengeResource::init() {
    pActivities = null;
pAdditional_properties = null;
pCampaign_id = null;
pCopy_of = null;
pCreated_date = null;
pEnd_date = null;
pId = null;
pLeaderboard_strategy = null;
pLong_description = null;
pName = null;
pNext_event_date = null;
pReward_lag_minutes = null;
pReward_set = null;
pSchedule = null;
pShort_description = null;
pStart_date = null;
pTemplate = null;
pUpdated_date = null;
}

void
SamiChallengeResource::cleanup() {
    if(pActivities != null) {
        
        delete pActivities;
        pActivities = null;
    }
if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pCampaign_id != null) {
        
        delete pCampaign_id;
        pCampaign_id = null;
    }
if(pCopy_of != null) {
        
        delete pCopy_of;
        pCopy_of = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pEnd_date != null) {
        
        delete pEnd_date;
        pEnd_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLeaderboard_strategy != null) {
        
        delete pLeaderboard_strategy;
        pLeaderboard_strategy = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pNext_event_date != null) {
        
        delete pNext_event_date;
        pNext_event_date = null;
    }
if(pReward_lag_minutes != null) {
        
        delete pReward_lag_minutes;
        pReward_lag_minutes = null;
    }
if(pReward_set != null) {
        
        delete pReward_set;
        pReward_set = null;
    }
if(pSchedule != null) {
        
        delete pSchedule;
        pSchedule = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pStart_date != null) {
        
        delete pStart_date;
        pStart_date = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiChallengeResource*
SamiChallengeResource::fromJson(String* json) {
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
SamiChallengeResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActivitiesKey = new JsonString(L"activities");
        IJsonValue* pActivitiesVal = null;
        pJsonObject->GetValue(pActivitiesKey, pActivitiesVal);
        if(pActivitiesVal != null) {
            
            pActivities = new Integer();
            jsonToValue(pActivities, pActivitiesVal, L"Integer", L"Integer");
        }
        delete pActivitiesKey;
JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
JsonString* pCampaign_idKey = new JsonString(L"campaign_id");
        IJsonValue* pCampaign_idVal = null;
        pJsonObject->GetValue(pCampaign_idKey, pCampaign_idVal);
        if(pCampaign_idVal != null) {
            
            pCampaign_id = new Long();
            jsonToValue(pCampaign_id, pCampaign_idVal, L"Long", L"Long");
        }
        delete pCampaign_idKey;
JsonString* pCopy_ofKey = new JsonString(L"copy_of");
        IJsonValue* pCopy_ofVal = null;
        pJsonObject->GetValue(pCopy_ofKey, pCopy_ofVal);
        if(pCopy_ofVal != null) {
            
            pCopy_of = new Long();
            jsonToValue(pCopy_of, pCopy_ofVal, L"Long", L"Long");
        }
        delete pCopy_ofKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pEnd_dateKey = new JsonString(L"end_date");
        IJsonValue* pEnd_dateVal = null;
        pJsonObject->GetValue(pEnd_dateKey, pEnd_dateVal);
        if(pEnd_dateVal != null) {
            
            pEnd_date = new Long();
            jsonToValue(pEnd_date, pEnd_dateVal, L"Long", L"Long");
        }
        delete pEnd_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pLeaderboard_strategyKey = new JsonString(L"leaderboard_strategy");
        IJsonValue* pLeaderboard_strategyVal = null;
        pJsonObject->GetValue(pLeaderboard_strategyKey, pLeaderboard_strategyVal);
        if(pLeaderboard_strategyVal != null) {
            
            pLeaderboard_strategy = new String();
            jsonToValue(pLeaderboard_strategy, pLeaderboard_strategyVal, L"String", L"String");
        }
        delete pLeaderboard_strategyKey;
JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pNext_event_dateKey = new JsonString(L"next_event_date");
        IJsonValue* pNext_event_dateVal = null;
        pJsonObject->GetValue(pNext_event_dateKey, pNext_event_dateVal);
        if(pNext_event_dateVal != null) {
            
            pNext_event_date = new Long();
            jsonToValue(pNext_event_date, pNext_event_dateVal, L"Long", L"Long");
        }
        delete pNext_event_dateKey;
JsonString* pReward_lag_minutesKey = new JsonString(L"reward_lag_minutes");
        IJsonValue* pReward_lag_minutesVal = null;
        pJsonObject->GetValue(pReward_lag_minutesKey, pReward_lag_minutesVal);
        if(pReward_lag_minutesVal != null) {
            
            pReward_lag_minutes = new Integer();
            jsonToValue(pReward_lag_minutes, pReward_lag_minutesVal, L"Integer", L"Integer");
        }
        delete pReward_lag_minutesKey;
JsonString* pReward_setKey = new JsonString(L"reward_set");
        IJsonValue* pReward_setVal = null;
        pJsonObject->GetValue(pReward_setKey, pReward_setVal);
        if(pReward_setVal != null) {
            
            pReward_set = new SamiRewardSetResource();
            jsonToValue(pReward_set, pReward_setVal, L"SamiRewardSetResource", L"SamiRewardSetResource");
        }
        delete pReward_setKey;
JsonString* pScheduleKey = new JsonString(L"schedule");
        IJsonValue* pScheduleVal = null;
        pJsonObject->GetValue(pScheduleKey, pScheduleVal);
        if(pScheduleVal != null) {
            
            pSchedule = new SamiSchedule();
            jsonToValue(pSchedule, pScheduleVal, L"SamiSchedule", L"SamiSchedule");
        }
        delete pScheduleKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pStart_dateKey = new JsonString(L"start_date");
        IJsonValue* pStart_dateVal = null;
        pJsonObject->GetValue(pStart_dateKey, pStart_dateVal);
        if(pStart_dateVal != null) {
            
            pStart_date = new Long();
            jsonToValue(pStart_date, pStart_dateVal, L"Long", L"Long");
        }
        delete pStart_dateKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new String();
            jsonToValue(pTemplate, pTemplateVal, L"String", L"String");
        }
        delete pTemplateKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
    }
}

SamiChallengeResource::SamiChallengeResource(String* json) {
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
SamiChallengeResource::asJson ()
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
SamiChallengeResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActivitiesKey = new JsonString(L"activities");
    pJsonObject->Add(pActivitiesKey, toJson(getPActivities(), "Integer", ""));

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pCampaign_idKey = new JsonString(L"campaign_id");
    pJsonObject->Add(pCampaign_idKey, toJson(getPCampaignId(), "Long", ""));

    JsonString *pCopy_ofKey = new JsonString(L"copy_of");
    pJsonObject->Add(pCopy_ofKey, toJson(getPCopyOf(), "Long", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pEnd_dateKey = new JsonString(L"end_date");
    pJsonObject->Add(pEnd_dateKey, toJson(getPEndDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLeaderboard_strategyKey = new JsonString(L"leaderboard_strategy");
    pJsonObject->Add(pLeaderboard_strategyKey, toJson(getPLeaderboardStrategy(), "String", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pNext_event_dateKey = new JsonString(L"next_event_date");
    pJsonObject->Add(pNext_event_dateKey, toJson(getPNextEventDate(), "Long", ""));

    JsonString *pReward_lag_minutesKey = new JsonString(L"reward_lag_minutes");
    pJsonObject->Add(pReward_lag_minutesKey, toJson(getPRewardLagMinutes(), "Integer", ""));

    JsonString *pReward_setKey = new JsonString(L"reward_set");
    pJsonObject->Add(pReward_setKey, toJson(getPRewardSet(), "SamiRewardSetResource", ""));

    JsonString *pScheduleKey = new JsonString(L"schedule");
    pJsonObject->Add(pScheduleKey, toJson(getPSchedule(), "SamiSchedule", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pStart_dateKey = new JsonString(L"start_date");
    pJsonObject->Add(pStart_dateKey, toJson(getPStartDate(), "Long", ""));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Integer*
SamiChallengeResource::getPActivities() {
    return pActivities;
}
void
SamiChallengeResource::setPActivities(Integer* pActivities) {
    this->pActivities = pActivities;
}

HashMap*
SamiChallengeResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiChallengeResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

Long*
SamiChallengeResource::getPCampaignId() {
    return pCampaign_id;
}
void
SamiChallengeResource::setPCampaignId(Long* pCampaign_id) {
    this->pCampaign_id = pCampaign_id;
}

Long*
SamiChallengeResource::getPCopyOf() {
    return pCopy_of;
}
void
SamiChallengeResource::setPCopyOf(Long* pCopy_of) {
    this->pCopy_of = pCopy_of;
}

Long*
SamiChallengeResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiChallengeResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiChallengeResource::getPEndDate() {
    return pEnd_date;
}
void
SamiChallengeResource::setPEndDate(Long* pEnd_date) {
    this->pEnd_date = pEnd_date;
}

Long*
SamiChallengeResource::getPId() {
    return pId;
}
void
SamiChallengeResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiChallengeResource::getPLeaderboardStrategy() {
    return pLeaderboard_strategy;
}
void
SamiChallengeResource::setPLeaderboardStrategy(String* pLeaderboard_strategy) {
    this->pLeaderboard_strategy = pLeaderboard_strategy;
}

String*
SamiChallengeResource::getPLongDescription() {
    return pLong_description;
}
void
SamiChallengeResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiChallengeResource::getPName() {
    return pName;
}
void
SamiChallengeResource::setPName(String* pName) {
    this->pName = pName;
}

Long*
SamiChallengeResource::getPNextEventDate() {
    return pNext_event_date;
}
void
SamiChallengeResource::setPNextEventDate(Long* pNext_event_date) {
    this->pNext_event_date = pNext_event_date;
}

Integer*
SamiChallengeResource::getPRewardLagMinutes() {
    return pReward_lag_minutes;
}
void
SamiChallengeResource::setPRewardLagMinutes(Integer* pReward_lag_minutes) {
    this->pReward_lag_minutes = pReward_lag_minutes;
}

SamiRewardSetResource*
SamiChallengeResource::getPRewardSet() {
    return pReward_set;
}
void
SamiChallengeResource::setPRewardSet(SamiRewardSetResource* pReward_set) {
    this->pReward_set = pReward_set;
}

SamiSchedule*
SamiChallengeResource::getPSchedule() {
    return pSchedule;
}
void
SamiChallengeResource::setPSchedule(SamiSchedule* pSchedule) {
    this->pSchedule = pSchedule;
}

String*
SamiChallengeResource::getPShortDescription() {
    return pShort_description;
}
void
SamiChallengeResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Long*
SamiChallengeResource::getPStartDate() {
    return pStart_date;
}
void
SamiChallengeResource::setPStartDate(Long* pStart_date) {
    this->pStart_date = pStart_date;
}

String*
SamiChallengeResource::getPTemplate() {
    return pTemplate;
}
void
SamiChallengeResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

Long*
SamiChallengeResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiChallengeResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

