/*
 * SamiUserRelationshipReferenceResource.h
 * 
 * 
 */

#ifndef SamiUserRelationshipReferenceResource_H_
#define SamiUserRelationshipReferenceResource_H_

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

class SamiUserRelationshipReferenceResource: public SamiObject {
public:
    SamiUserRelationshipReferenceResource();
    SamiUserRelationshipReferenceResource(String* json);
    virtual ~SamiUserRelationshipReferenceResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserRelationshipReferenceResource* fromJson(String* obj);

    String* getPAvatarUrl();
    void setPAvatarUrl(String* pAvatar_url);
    String* getPContext();
    void setPContext(String* pContext);
    String* getPDisplayName();
    void setPDisplayName(String* pDisplay_name);
    Integer* getPId();
    void setPId(Integer* pId);
    Long* getPRelationshipId();
    void setPRelationshipId(Long* pRelationship_id);
    String* getPUsername();
    void setPUsername(String* pUsername);

private:
    String* pAvatar_url;
String* pContext;
String* pDisplay_name;
Integer* pId;
Long* pRelationship_id;
String* pUsername;
};

} /* namespace Swagger */

#endif /* SamiUserRelationshipReferenceResource_H_ */
