/*
 * SamiGroupMember.h
 * 
 * 
 */

#ifndef SamiGroupMember_H_
#define SamiGroupMember_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiGroup.h"
#include "SamiUser.h"
using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiGroupMember: public SamiObject {
public:
    SamiGroupMember();
    SamiGroupMember(String* json);
    virtual ~SamiGroupMember();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroupMember* fromJson(String* obj);

    SamiGroup* getPGroup();
    void setPGroup(SamiGroup* pGroup);
    Boolean* getPSecondary();
    void setPSecondary(Boolean* pSecondary);
    String* getPStatus();
    void setPStatus(String* pStatus);
    SamiUser* getPUser();
    void setPUser(SamiUser* pUser);

private:
    SamiGroup* pGroup;
Boolean* pSecondary;
String* pStatus;
SamiUser* pUser;
};

} /* namespace Swagger */

#endif /* SamiGroupMember_H_ */
