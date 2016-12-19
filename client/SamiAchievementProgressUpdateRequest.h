/*
 * SamiAchievementProgressUpdateRequest.h
 * 
 * 
 */

#ifndef SamiAchievementProgressUpdateRequest_H_
#define SamiAchievementProgressUpdateRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;


namespace Swagger {

class SamiAchievementProgressUpdateRequest: public SamiObject {
public:
    SamiAchievementProgressUpdateRequest();
    SamiAchievementProgressUpdateRequest(String* json);
    virtual ~SamiAchievementProgressUpdateRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAchievementProgressUpdateRequest* fromJson(String* obj);

    Boolean* getPIncrementValue();
    void setPIncrementValue(Boolean* pIncrement_value);
    Integer* getPProgressValue();
    void setPProgressValue(Integer* pProgress_value);

private:
    Boolean* pIncrement_value;
Integer* pProgress_value;
};

} /* namespace Swagger */

#endif /* SamiAchievementProgressUpdateRequest_H_ */
