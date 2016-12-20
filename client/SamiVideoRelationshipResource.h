/*
 * SamiVideoRelationshipResource.h
 * 
 * 
 */

#ifndef SamiVideoRelationshipResource_H_
#define SamiVideoRelationshipResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleReferenceResource«long».h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiVideoRelationshipResource: public SamiObject {
public:
    SamiVideoRelationshipResource();
    SamiVideoRelationshipResource(String* json);
    virtual ~SamiVideoRelationshipResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVideoRelationshipResource* fromJson(String* obj);

    SamiSimpleReferenceResource«long»* getPFrom();
    void setPFrom(SamiSimpleReferenceResource«long»* pFrom);
    Long* getPId();
    void setPId(Long* pId);
    String* getPRelationshipDetails();
    void setPRelationshipDetails(String* pRelationship_details);
    SamiSimpleReferenceResource«long»* getPTo();
    void setPTo(SamiSimpleReferenceResource«long»* pTo);

private:
    SamiSimpleReferenceResource«long»* pFrom;
Long* pId;
String* pRelationship_details;
SamiSimpleReferenceResource«long»* pTo;
};

} /* namespace Swagger */

#endif /* SamiVideoRelationshipResource_H_ */
