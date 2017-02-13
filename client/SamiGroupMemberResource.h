/*
 * SamiGroupMemberResource.h
 * 
 * 
 */

#ifndef SamiGroupMemberResource_H_
#define SamiGroupMemberResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiGroupMemberResource: public SamiObject {
public:
    SamiGroupMemberResource();
    SamiGroupMemberResource(String* json);
    virtual ~SamiGroupMemberResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroupMemberResource* fromJson(String* obj);

    String* getPAvatarUrl();
    void setPAvatarUrl(String* pAvatar_url);
    String* getPDisplayName();
    void setPDisplayName(String* pDisplay_name);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPStatus();
    void setPStatus(String* pStatus);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pAvatar_url;
String* pDisplay_name;
Integer* pId;
String* pStatus;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiGroupMemberResource_H_ */
