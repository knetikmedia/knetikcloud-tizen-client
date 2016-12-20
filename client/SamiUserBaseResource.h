/*
 * SamiUserBaseResource.h
 * 
 * 
 */

#ifndef SamiUserBaseResource_H_
#define SamiUserBaseResource_H_

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

class SamiUserBaseResource: public SamiObject {
public:
    SamiUserBaseResource();
    SamiUserBaseResource(String* json);
    virtual ~SamiUserBaseResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserBaseResource* fromJson(String* obj);

    String* getPAvatarUrl();
    void setPAvatarUrl(String* pAvatar_url);
    String* getPDisplayName();
    void setPDisplayName(String* pDisplay_name);
    String* getPEmail();
    void setPEmail(String* pEmail);
    String* getPFullname();
    void setPFullname(String* pFullname);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pAvatar_url;
String* pDisplay_name;
String* pEmail;
String* pFullname;
Integer* pId;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiUserBaseResource_H_ */
