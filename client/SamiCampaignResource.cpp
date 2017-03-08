
#include "SamiCampaignResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCampaignResource::SamiCampaignResource() {
    init();
}

SamiCampaignResource::~SamiCampaignResource() {
    this->cleanup();
}

void
SamiCampaignResource::init() {
    pActive = null;
pAdditional_properties = null;
pCreated_date = null;
pId = null;
pLeaderboard_strategy = null;
pLong_description = null;
pName = null;
pNext_challenge = null;
pNext_challenge_date = null;
pReward_set = null;
pReward_status = null;
pShort_description = null;
pTemplate = null;
pUpdated_date = null;
}

void
SamiCampaignResource::cleanup() {
    if(pActive != null) {
        
        delete pActive;
        pActive = null;
    }
if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
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
if(pNext_challenge != null) {
        
        delete pNext_challenge;
        pNext_challenge = null;
    }
if(pNext_challenge_date != null) {
        
        delete pNext_challenge_date;
        pNext_challenge_date = null;
    }
if(pReward_set != null) {
        
        delete pReward_set;
        pReward_set = null;
    }
if(pReward_status != null) {
        
        delete pReward_status;
        pReward_status = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
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


SamiCampaignResource*
SamiCampaignResource::fromJson(String* json) {
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
SamiCampaignResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActiveKey = new JsonString(L"active");
        IJsonValue* pActiveVal = null;
        pJsonObject->GetValue(pActiveKey, pActiveVal);
        if(pActiveVal != null) {
            
            pActive = new Boolean(false);
            jsonToValue(pActive, pActiveVal, L"Boolean", L"Boolean");
        }
        delete pActiveKey;
JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
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
JsonString* pNext_challengeKey = new JsonString(L"next_challenge");
        IJsonValue* pNext_challengeVal = null;
        pJsonObject->GetValue(pNext_challengeKey, pNext_challengeVal);
        if(pNext_challengeVal != null) {
            
            pNext_challenge = new String();
            jsonToValue(pNext_challenge, pNext_challengeVal, L"String", L"String");
        }
        delete pNext_challengeKey;
JsonString* pNext_challenge_dateKey = new JsonString(L"next_challenge_date");
        IJsonValue* pNext_challenge_dateVal = null;
        pJsonObject->GetValue(pNext_challenge_dateKey, pNext_challenge_dateVal);
        if(pNext_challenge_dateVal != null) {
            
            pNext_challenge_date = new Long();
            jsonToValue(pNext_challenge_date, pNext_challenge_dateVal, L"Long", L"Long");
        }
        delete pNext_challenge_dateKey;
JsonString* pReward_setKey = new JsonString(L"reward_set");
        IJsonValue* pReward_setVal = null;
        pJsonObject->GetValue(pReward_setKey, pReward_setVal);
        if(pReward_setVal != null) {
            
            pReward_set = new SamiRewardSetResource();
            jsonToValue(pReward_set, pReward_setVal, L"SamiRewardSetResource", L"SamiRewardSetResource");
        }
        delete pReward_setKey;
JsonString* pReward_statusKey = new JsonString(L"reward_status");
        IJsonValue* pReward_statusVal = null;
        pJsonObject->GetValue(pReward_statusKey, pReward_statusVal);
        if(pReward_statusVal != null) {
            
            pReward_status = new String();
            jsonToValue(pReward_status, pReward_statusVal, L"String", L"String");
        }
        delete pReward_statusKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
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

SamiCampaignResource::SamiCampaignResource(String* json) {
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
SamiCampaignResource::asJson ()
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
SamiCampaignResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLeaderboard_strategyKey = new JsonString(L"leaderboard_strategy");
    pJsonObject->Add(pLeaderboard_strategyKey, toJson(getPLeaderboardStrategy(), "String", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pNext_challengeKey = new JsonString(L"next_challenge");
    pJsonObject->Add(pNext_challengeKey, toJson(getPNextChallenge(), "String", ""));

    JsonString *pNext_challenge_dateKey = new JsonString(L"next_challenge_date");
    pJsonObject->Add(pNext_challenge_dateKey, toJson(getPNextChallengeDate(), "Long", ""));

    JsonString *pReward_setKey = new JsonString(L"reward_set");
    pJsonObject->Add(pReward_setKey, toJson(getPRewardSet(), "SamiRewardSetResource", ""));

    JsonString *pReward_statusKey = new JsonString(L"reward_status");
    pJsonObject->Add(pReward_statusKey, toJson(getPRewardStatus(), "String", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Boolean*
SamiCampaignResource::getPActive() {
    return pActive;
}
void
SamiCampaignResource::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

HashMap*
SamiCampaignResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiCampaignResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

Long*
SamiCampaignResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiCampaignResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiCampaignResource::getPId() {
    return pId;
}
void
SamiCampaignResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiCampaignResource::getPLeaderboardStrategy() {
    return pLeaderboard_strategy;
}
void
SamiCampaignResource::setPLeaderboardStrategy(String* pLeaderboard_strategy) {
    this->pLeaderboard_strategy = pLeaderboard_strategy;
}

String*
SamiCampaignResource::getPLongDescription() {
    return pLong_description;
}
void
SamiCampaignResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiCampaignResource::getPName() {
    return pName;
}
void
SamiCampaignResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiCampaignResource::getPNextChallenge() {
    return pNext_challenge;
}
void
SamiCampaignResource::setPNextChallenge(String* pNext_challenge) {
    this->pNext_challenge = pNext_challenge;
}

Long*
SamiCampaignResource::getPNextChallengeDate() {
    return pNext_challenge_date;
}
void
SamiCampaignResource::setPNextChallengeDate(Long* pNext_challenge_date) {
    this->pNext_challenge_date = pNext_challenge_date;
}

SamiRewardSetResource*
SamiCampaignResource::getPRewardSet() {
    return pReward_set;
}
void
SamiCampaignResource::setPRewardSet(SamiRewardSetResource* pReward_set) {
    this->pReward_set = pReward_set;
}

String*
SamiCampaignResource::getPRewardStatus() {
    return pReward_status;
}
void
SamiCampaignResource::setPRewardStatus(String* pReward_status) {
    this->pReward_status = pReward_status;
}

String*
SamiCampaignResource::getPShortDescription() {
    return pShort_description;
}
void
SamiCampaignResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

String*
SamiCampaignResource::getPTemplate() {
    return pTemplate;
}
void
SamiCampaignResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

Long*
SamiCampaignResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiCampaignResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

