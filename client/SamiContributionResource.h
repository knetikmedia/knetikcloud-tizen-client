/*
 * SamiContributionResource.h
 * 
 * 
 */

#ifndef SamiContributionResource_H_
#define SamiContributionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleReferenceResource«long».h"
using Tizen::Base::String;


namespace Swagger {

class SamiContributionResource: public SamiObject {
public:
    SamiContributionResource();
    SamiContributionResource(String* json);
    virtual ~SamiContributionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiContributionResource* fromJson(String* obj);

    SamiSimpleReferenceResource«long»* getPArtist();
    void setPArtist(SamiSimpleReferenceResource«long»* pArtist);
    SamiSimpleReferenceResource«long»* getPMedia();
    void setPMedia(SamiSimpleReferenceResource«long»* pMedia);
    String* getPRole();
    void setPRole(String* pRole);

private:
    SamiSimpleReferenceResource«long»* pArtist;
SamiSimpleReferenceResource«long»* pMedia;
String* pRole;
};

} /* namespace Swagger */

#endif /* SamiContributionResource_H_ */
