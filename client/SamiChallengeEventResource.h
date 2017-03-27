/*
 * SamiChallengeEventResource.h
 * 
 * 
 */

#ifndef SamiChallengeEventResource_H_
#define SamiChallengeEventResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiChallengeEventResource: public SamiObject {
public:
    SamiChallengeEventResource();
    SamiChallengeEventResource(String* json);
    virtual ~SamiChallengeEventResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiChallengeEventResource* fromJson(String* obj);

    Long* getPChallengeId();
    void setPChallengeId(Long* pChallenge_id);
    Long* getPEndDate();
    void setPEndDate(Long* pEnd_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPRewardStatus();
    void setPRewardStatus(String* pReward_status);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);

private:
    Long* pChallenge_id;
Long* pEnd_date;
Long* pId;
String* pReward_status;
Long* pStart_date;
};

} /* namespace Swagger */

#endif /* SamiChallengeEventResource_H_ */
