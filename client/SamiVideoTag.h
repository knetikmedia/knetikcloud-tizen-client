/*
 * SamiVideoTag.h
 * 
 * 
 */

#ifndef SamiVideoTag_H_
#define SamiVideoTag_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiVideo.h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiVideoTag: public SamiObject {
public:
    SamiVideoTag();
    SamiVideoTag(String* json);
    virtual ~SamiVideoTag();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVideoTag* fromJson(String* obj);

    Long* getPId();
    void setPId(Long* pId);
    String* getPTag();
    void setPTag(String* pTag);
    SamiVideo* getPVideo();
    void setPVideo(SamiVideo* pVideo);

private:
    Long* pId;
String* pTag;
SamiVideo* pVideo;
};

} /* namespace Swagger */

#endif /* SamiVideoTag_H_ */
