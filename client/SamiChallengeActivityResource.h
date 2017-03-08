/*
 * SamiChallengeActivityResource.h
 * 
 * 
 */

#ifndef SamiChallengeActivityResource_H_
#define SamiChallengeActivityResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActivityEntitlementResource.h"
#include "SamiRewardSetResource.h"
#include "SamiSelectedSettingResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;


namespace Swagger {

class SamiChallengeActivityResource: public SamiObject {
public:
    SamiChallengeActivityResource();
    SamiChallengeActivityResource(String* json);
    virtual ~SamiChallengeActivityResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiChallengeActivityResource* fromJson(String* obj);

    Long* getPActivityId();
    void setPActivityId(Long* pActivity_id);
    Long* getPChallengeId();
    void setPChallengeId(Long* pChallenge_id);
    SamiActivityEntitlementResource* getPEntitlement();
    void setPEntitlement(SamiActivityEntitlementResource* pEntitlement);
    Long* getPId();
    void setPId(Long* pId);
    SamiRewardSetResource* getPRewardSet();
    void setPRewardSet(SamiRewardSetResource* pReward_set);
    IList* getPSettings();
    void setPSettings(IList* pSettings);

private:
    Long* pActivity_id;
Long* pChallenge_id;
SamiActivityEntitlementResource* pEntitlement;
Long* pId;
SamiRewardSetResource* pReward_set;
IList* pSettings;
};

} /* namespace Swagger */

#endif /* SamiChallengeActivityResource_H_ */