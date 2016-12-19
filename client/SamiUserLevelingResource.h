/*
 * SamiUserLevelingResource.h
 * 
 * 
 */

#ifndef SamiUserLevelingResource_H_
#define SamiUserLevelingResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUserLevelingResource: public SamiObject {
public:
    SamiUserLevelingResource();
    SamiUserLevelingResource(String* json);
    virtual ~SamiUserLevelingResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserLevelingResource* fromJson(String* obj);

    String* getPLastTierName();
    void setPLastTierName(String* pLast_tier_name);
    Integer* getPLastTierProgress();
    void setPLastTierProgress(Integer* pLast_tier_progress);
    String* getPLevelName();
    void setPLevelName(String* pLevel_name);
    String* getPNextTierName();
    void setPNextTierName(String* pNext_tier_name);
    Integer* getPNextTierProgress();
    void setPNextTierProgress(Integer* pNext_tier_progress);
    Integer* getPProgress();
    void setPProgress(Integer* pProgress);
    IList* getPTierNames();
    void setPTierNames(IList* pTier_names);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    String* pLast_tier_name;
Integer* pLast_tier_progress;
String* pLevel_name;
String* pNext_tier_name;
Integer* pNext_tier_progress;
Integer* pProgress;
IList* pTier_names;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiUserLevelingResource_H_ */
