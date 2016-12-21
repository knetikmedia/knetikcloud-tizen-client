/*
 * SamiUserAchievementGroupResource.h
 * 
 * 
 */

#ifndef SamiUserAchievementGroupResource_H_
#define SamiUserAchievementGroupResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUserAchievementResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUserAchievementGroupResource: public SamiObject {
public:
    SamiUserAchievementGroupResource();
    SamiUserAchievementGroupResource(String* json);
    virtual ~SamiUserAchievementGroupResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserAchievementGroupResource* fromJson(String* obj);

    IList* getPAchievements();
    void setPAchievements(IList* pAchievements);
    String* getPGroupName();
    void setPGroupName(String* pGroup_name);
    String* getPId();
    void setPId(String* pId);
    Integer* getPProgress();
    void setPProgress(Integer* pProgress);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    IList* pAchievements;
String* pGroup_name;
String* pId;
Integer* pProgress;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiUserAchievementGroupResource_H_ */
