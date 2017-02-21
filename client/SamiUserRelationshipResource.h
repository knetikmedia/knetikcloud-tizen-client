/*
 * SamiUserRelationshipResource.h
 * 
 * 
 */

#ifndef SamiUserRelationshipResource_H_
#define SamiUserRelationshipResource_H_

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

class SamiUserRelationshipResource: public SamiObject {
public:
    SamiUserRelationshipResource();
    SamiUserRelationshipResource(String* json);
    virtual ~SamiUserRelationshipResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserRelationshipResource* fromJson(String* obj);

    SamiSimpleUserResource* getPChild();
    void setPChild(SamiSimpleUserResource* pChild);
    String* getPContext();
    void setPContext(String* pContext);
    Long* getPId();
    void setPId(Long* pId);
    SamiSimpleUserResource* getPParent();
    void setPParent(SamiSimpleUserResource* pParent);

private:
    SamiSimpleUserResource* pChild;
String* pContext;
Long* pId;
SamiSimpleUserResource* pParent;
};

} /* namespace Swagger */

#endif /* SamiUserRelationshipResource_H_ */
