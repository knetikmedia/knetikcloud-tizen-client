/*
 * SamiBareChallengeActivityResource.h
 * 
 * 
 */

#ifndef SamiBareChallengeActivityResource_H_
#define SamiBareChallengeActivityResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;


namespace Swagger {

class SamiBareChallengeActivityResource: public SamiObject {
public:
    SamiBareChallengeActivityResource();
    SamiBareChallengeActivityResource(String* json);
    virtual ~SamiBareChallengeActivityResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBareChallengeActivityResource* fromJson(String* obj);

    Long* getPActivityId();
    void setPActivityId(Long* pActivity_id);
    Long* getPChallengeId();
    void setPChallengeId(Long* pChallenge_id);
    Long* getPId();
    void setPId(Long* pId);

private:
    Long* pActivity_id;
Long* pChallenge_id;
Long* pId;
};

} /* namespace Swagger */

#endif /* SamiBareChallengeActivityResource_H_ */
