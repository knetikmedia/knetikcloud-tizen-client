/*
 * SamiVideoContribution.h
 * 
 * 
 */

#ifndef SamiVideoContribution_H_
#define SamiVideoContribution_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiArtist.h"
#include "SamiVideo.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiVideoContribution: public SamiObject {
public:
    SamiVideoContribution();
    SamiVideoContribution(String* json);
    virtual ~SamiVideoContribution();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVideoContribution* fromJson(String* obj);

    SamiArtist* getPArtist();
    void setPArtist(SamiArtist* pArtist);
    Integer* getPId();
    void setPId(Integer* pId);
    SamiVideo* getPMedia();
    void setPMedia(SamiVideo* pMedia);
    String* getPRole();
    void setPRole(String* pRole);

private:
    SamiArtist* pArtist;
Integer* pId;
SamiVideo* pMedia;
String* pRole;
};

} /* namespace Swagger */

#endif /* SamiVideoContribution_H_ */
