/*
 * SamiCampaignResource.h
 * 
 * 
 */

#ifndef SamiCampaignResource_H_
#define SamiCampaignResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
#include "SamiRewardSetResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCampaignResource: public SamiObject {
public:
    SamiCampaignResource();
    SamiCampaignResource(String* json);
    virtual ~SamiCampaignResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCampaignResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLeaderboardStrategy();
    void setPLeaderboardStrategy(String* pLeaderboard_strategy);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    String* getPNextChallenge();
    void setPNextChallenge(String* pNext_challenge);
    Long* getPNextChallengeDate();
    void setPNextChallengeDate(Long* pNext_challenge_date);
    SamiRewardSetResource* getPRewardSet();
    void setPRewardSet(SamiRewardSetResource* pReward_set);
    String* getPRewardStatus();
    void setPRewardStatus(String* pReward_status);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Boolean* pActive;
HashMap* pAdditional_properties;
Long* pCreated_date;
Long* pId;
String* pLeaderboard_strategy;
String* pLong_description;
String* pName;
String* pNext_challenge;
Long* pNext_challenge_date;
SamiRewardSetResource* pReward_set;
String* pReward_status;
String* pShort_description;
String* pTemplate;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiCampaignResource_H_ */
