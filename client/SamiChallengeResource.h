/*
 * SamiChallengeResource.h
 * 
 * 
 */

#ifndef SamiChallengeResource_H_
#define SamiChallengeResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
#include "SamiRewardSetResource.h"
#include "SamiSchedule.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiChallengeResource: public SamiObject {
public:
    SamiChallengeResource();
    SamiChallengeResource(String* json);
    virtual ~SamiChallengeResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiChallengeResource* fromJson(String* obj);

    Integer* getPActivities();
    void setPActivities(Integer* pActivities);
    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Long* getPCampaignId();
    void setPCampaignId(Long* pCampaign_id);
    Long* getPCopyOf();
    void setPCopyOf(Long* pCopy_of);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPEndDate();
    void setPEndDate(Long* pEnd_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLeaderboardStrategy();
    void setPLeaderboardStrategy(String* pLeaderboard_strategy);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    Long* getPNextEventDate();
    void setPNextEventDate(Long* pNext_event_date);
    Integer* getPRewardLagMinutes();
    void setPRewardLagMinutes(Integer* pReward_lag_minutes);
    SamiRewardSetResource* getPRewardSet();
    void setPRewardSet(SamiRewardSetResource* pReward_set);
    SamiSchedule* getPSchedule();
    void setPSchedule(SamiSchedule* pSchedule);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Integer* pActivities;
HashMap* pAdditional_properties;
Long* pCampaign_id;
Long* pCopy_of;
Long* pCreated_date;
Long* pEnd_date;
Long* pId;
String* pLeaderboard_strategy;
String* pLong_description;
String* pName;
Long* pNext_event_date;
Integer* pReward_lag_minutes;
SamiRewardSetResource* pReward_set;
SamiSchedule* pSchedule;
String* pShort_description;
Long* pStart_date;
String* pTemplate;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiChallengeResource_H_ */
