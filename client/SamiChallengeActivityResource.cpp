
#include "SamiChallengeActivityResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiChallengeActivityResource::SamiChallengeActivityResource() {
    init();
}

SamiChallengeActivityResource::~SamiChallengeActivityResource() {
    this->cleanup();
}

void
SamiChallengeActivityResource::init() {
    pActivity_id = null;
pChallenge_id = null;
pEntitlement = null;
pId = null;
pReward_set = null;
pSettings = null;
}

void
SamiChallengeActivityResource::cleanup() {
    if(pActivity_id != null) {
        
        delete pActivity_id;
        pActivity_id = null;
    }
if(pChallenge_id != null) {
        
        delete pChallenge_id;
        pChallenge_id = null;
    }
if(pEntitlement != null) {
        
        delete pEntitlement;
        pEntitlement = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pReward_set != null) {
        
        delete pReward_set;
        pReward_set = null;
    }
if(pSettings != null) {
        pSettings->RemoveAll(true);
        delete pSettings;
        pSettings = null;
    }
}


SamiChallengeActivityResource*
SamiChallengeActivityResource::fromJson(String* json) {
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
SamiChallengeActivityResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pChallenge_idKey = new JsonString(L"challenge_id");
        IJsonValue* pChallenge_idVal = null;
        pJsonObject->GetValue(pChallenge_idKey, pChallenge_idVal);
        if(pChallenge_idVal != null) {
            
            pChallenge_id = new Long();
            jsonToValue(pChallenge_id, pChallenge_idVal, L"Long", L"Long");
        }
        delete pChallenge_idKey;
JsonString* pEntitlementKey = new JsonString(L"entitlement");
        IJsonValue* pEntitlementVal = null;
        pJsonObject->GetValue(pEntitlementKey, pEntitlementVal);
        if(pEntitlementVal != null) {
            
            pEntitlement = new SamiActivityEntitlementResource();
            jsonToValue(pEntitlement, pEntitlementVal, L"SamiActivityEntitlementResource", L"SamiActivityEntitlementResource");
        }
        delete pEntitlementKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pReward_setKey = new JsonString(L"reward_set");
        IJsonValue* pReward_setVal = null;
        pJsonObject->GetValue(pReward_setKey, pReward_setVal);
        if(pReward_setVal != null) {
            
            pReward_set = new SamiRewardSetResource();
            jsonToValue(pReward_set, pReward_setVal, L"SamiRewardSetResource", L"SamiRewardSetResource");
        }
        delete pReward_setKey;
JsonString* pSettingsKey = new JsonString(L"settings");
        IJsonValue* pSettingsVal = null;
        pJsonObject->GetValue(pSettingsKey, pSettingsVal);
        if(pSettingsVal != null) {
            pSettings = new ArrayList();
            
            jsonToValue(pSettings, pSettingsVal, L"IList", L"SamiSelectedSettingResource");
        }
        delete pSettingsKey;
    }
}

SamiChallengeActivityResource::SamiChallengeActivityResource(String* json) {
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
SamiChallengeActivityResource::asJson ()
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
SamiChallengeActivityResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActivity_idKey = new JsonString(L"activity_id");
    pJsonObject->Add(pActivity_idKey, toJson(getPActivityId(), "Long", ""));

    JsonString *pChallenge_idKey = new JsonString(L"challenge_id");
    pJsonObject->Add(pChallenge_idKey, toJson(getPChallengeId(), "Long", ""));

    JsonString *pEntitlementKey = new JsonString(L"entitlement");
    pJsonObject->Add(pEntitlementKey, toJson(getPEntitlement(), "SamiActivityEntitlementResource", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pReward_setKey = new JsonString(L"reward_set");
    pJsonObject->Add(pReward_setKey, toJson(getPRewardSet(), "SamiRewardSetResource", ""));

    JsonString *pSettingsKey = new JsonString(L"settings");
    pJsonObject->Add(pSettingsKey, toJson(getPSettings(), "SamiSelectedSettingResource", "array"));

    return pJsonObject;
}

Long*
SamiChallengeActivityResource::getPActivityId() {
    return pActivity_id;
}
void
SamiChallengeActivityResource::setPActivityId(Long* pActivity_id) {
    this->pActivity_id = pActivity_id;
}

Long*
SamiChallengeActivityResource::getPChallengeId() {
    return pChallenge_id;
}
void
SamiChallengeActivityResource::setPChallengeId(Long* pChallenge_id) {
    this->pChallenge_id = pChallenge_id;
}

SamiActivityEntitlementResource*
SamiChallengeActivityResource::getPEntitlement() {
    return pEntitlement;
}
void
SamiChallengeActivityResource::setPEntitlement(SamiActivityEntitlementResource* pEntitlement) {
    this->pEntitlement = pEntitlement;
}

Long*
SamiChallengeActivityResource::getPId() {
    return pId;
}
void
SamiChallengeActivityResource::setPId(Long* pId) {
    this->pId = pId;
}

SamiRewardSetResource*
SamiChallengeActivityResource::getPRewardSet() {
    return pReward_set;
}
void
SamiChallengeActivityResource::setPRewardSet(SamiRewardSetResource* pReward_set) {
    this->pReward_set = pReward_set;
}

IList*
SamiChallengeActivityResource::getPSettings() {
    return pSettings;
}
void
SamiChallengeActivityResource::setPSettings(IList* pSettings) {
    this->pSettings = pSettings;
}



} /* namespace Swagger */

