/*
 * SamiUserActivityResultsResource.h
 * 
 * 
 */

#ifndef SamiUserActivityResultsResource_H_
#define SamiUserActivityResultsResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserActivityResultsResource: public SamiObject {
public:
    SamiUserActivityResultsResource();
    SamiUserActivityResultsResource(String* json);
    virtual ~SamiUserActivityResultsResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserActivityResultsResource* fromJson(String* obj);

    Long* getPScore();
    void setPScore(Long* pScore);
    IList* getPTags();
    void setPTags(IList* pTags);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    Long* pScore;
IList* pTags;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiUserActivityResultsResource_H_ */
