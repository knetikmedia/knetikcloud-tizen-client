/*
 * SamiLeaderboardEntryResource.h
 * 
 * 
 */

#ifndef SamiLeaderboardEntryResource_H_
#define SamiLeaderboardEntryResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Long;


namespace Swagger {

class SamiLeaderboardEntryResource: public SamiObject {
public:
    SamiLeaderboardEntryResource();
    SamiLeaderboardEntryResource(String* json);
    virtual ~SamiLeaderboardEntryResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLeaderboardEntryResource* fromJson(String* obj);

    Long* getPRank();
    void setPRank(Long* pRank);
    Long* getPScore();
    void setPScore(Long* pScore);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    Long* pRank;
Long* pScore;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiLeaderboardEntryResource_H_ */
