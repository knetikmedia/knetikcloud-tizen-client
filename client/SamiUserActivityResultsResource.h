/*
 * SamiUserActivityResultsResource.h
 * 
 * 
 */

#ifndef SamiUserActivityResultsResource_H_
#define SamiUserActivityResultsResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRewardCurrencyResource.h"
#include "SamiRewardItemResource.h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserActivityResultsResource: public SamiObject {
public:
    SamiUserActivityResultsResource();
    SamiUserActivityResultsResource(String* json);
    virtual ~SamiUserActivityResultsResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserActivityResultsResource* fromJson(String* obj);

    IList* getPCurrencyRewards();
    void setPCurrencyRewards(IList* pCurrency_rewards);
    IList* getPItemRewards();
    void setPItemRewards(IList* pItem_rewards);
    Long* getPRank();
    void setPRank(Long* pRank);
    Long* getPScore();
    void setPScore(Long* pScore);
    IList* getPTags();
    void setPTags(IList* pTags);
    Integer* getPTies();
    void setPTies(Integer* pTies);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    IList* pCurrency_rewards;
IList* pItem_rewards;
Long* pRank;
Long* pScore;
IList* pTags;
Integer* pTies;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiUserActivityResultsResource_H_ */
