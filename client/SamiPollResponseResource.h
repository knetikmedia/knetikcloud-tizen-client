/*
 * SamiPollResponseResource.h
 * 
 * 
 */

#ifndef SamiPollResponseResource_H_
#define SamiPollResponseResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiPollResponseResource: public SamiObject {
public:
    SamiPollResponseResource();
    SamiPollResponseResource(String* json);
    virtual ~SamiPollResponseResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPollResponseResource* fromJson(String* obj);

    String* getPAnswer();
    void setPAnswer(String* pAnswer);
    Long* getPAnsweredDate();
    void setPAnsweredDate(Long* pAnswered_date);
    String* getPId();
    void setPId(String* pId);
    String* getPPollId();
    void setPPollId(String* pPoll_id);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    String* pAnswer;
Long* pAnswered_date;
String* pId;
String* pPoll_id;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiPollResponseResource_H_ */
