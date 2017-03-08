/*
 * SamiActivityOccurrenceResource.h
 * 
 * 
 */

#ifndef SamiActivityOccurrenceResource_H_
#define SamiActivityOccurrenceResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActivityEntitlementResource.h"
#include "SamiActivityUserResource.h"
#include "SamiSelectedSettingResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiActivityOccurrenceResource: public SamiObject {
public:
    SamiActivityOccurrenceResource();
    SamiActivityOccurrenceResource(String* json);
    virtual ~SamiActivityOccurrenceResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityOccurrenceResource* fromJson(String* obj);

    Long* getPActivityId();
    void setPActivityId(Long* pActivity_id);
    Long* getPChallengeActivityId();
    void setPChallengeActivityId(Long* pChallenge_activity_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    SamiActivityEntitlementResource* getPEntitlement();
    void setPEntitlement(SamiActivityEntitlementResource* pEntitlement);
    Long* getPEventId();
    void setPEventId(Long* pEvent_id);
    Long* getPId();
    void setPId(Long* pId);
    String* getPRewardStatus();
    void setPRewardStatus(String* pReward_status);
    IList* getPSettings();
    void setPSettings(IList* pSettings);
    Boolean* getPSimulated();
    void setPSimulated(Boolean* pSimulated);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    IList* getPUsers();
    void setPUsers(IList* pUsers);

private:
    Long* pActivity_id;
Long* pChallenge_activity_id;
Long* pCreated_date;
SamiActivityEntitlementResource* pEntitlement;
Long* pEvent_id;
Long* pId;
String* pReward_status;
IList* pSettings;
Boolean* pSimulated;
Long* pStart_date;
String* pStatus;
Long* pUpdated_date;
IList* pUsers;
};

} /* namespace Swagger */

#endif /* SamiActivityOccurrenceResource_H_ */
