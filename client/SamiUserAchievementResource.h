/*
 * SamiUserAchievementResource.h
 * 
 * 
 */

#ifndef SamiUserAchievementResource_H_
#define SamiUserAchievementResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserAchievementResource: public SamiObject {
public:
    SamiUserAchievementResource();
    SamiUserAchievementResource(String* json);
    virtual ~SamiUserAchievementResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserAchievementResource* fromJson(String* obj);

    Boolean* getPAchieved();
    void setPAchieved(Boolean* pAchieved);
    String* getPAchievementName();
    void setPAchievementName(String* pAchievement_name);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPEarnedDate();
    void setPEarnedDate(Long* pEarned_date);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Boolean* pAchieved;
String* pAchievement_name;
Long* pCreated_date;
Long* pEarned_date;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiUserAchievementResource_H_ */
