/*
 * SamiSimpleUserResource.h
 * 
 * 
 */

#ifndef SamiSimpleUserResource_H_
#define SamiSimpleUserResource_H_

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

class SamiSimpleUserResource: public SamiObject {
public:
    SamiSimpleUserResource();
    SamiSimpleUserResource(String* json);
    virtual ~SamiSimpleUserResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSimpleUserResource* fromJson(String* obj);

    String* getPAvatarUrl();
    void setPAvatarUrl(String* pAvatar_url);
    String* getPDisplayName();
    void setPDisplayName(String* pDisplay_name);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pAvatar_url;
String* pDisplay_name;
Integer* pId;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiSimpleUserResource_H_ */
