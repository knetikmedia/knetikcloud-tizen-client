/*
 * SamiChallengeEventParticipantResource.h
 * 
 * 
 */

#ifndef SamiChallengeEventParticipantResource_H_
#define SamiChallengeEventParticipantResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiChallengeEventParticipantResource: public SamiObject {
public:
    SamiChallengeEventParticipantResource();
    SamiChallengeEventParticipantResource(String* json);
    virtual ~SamiChallengeEventParticipantResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiChallengeEventParticipantResource* fromJson(String* obj);

    String* getPEmail();
    void setPEmail(String* pEmail);
    String* getPFullname();
    void setPFullname(String* pFullname);
    Long* getPScore();
    void setPScore(Long* pScore);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pEmail;
String* pFullname;
Long* pScore;
Integer* pUser_id;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiChallengeEventParticipantResource_H_ */
