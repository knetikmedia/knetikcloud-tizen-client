/*
 * SamiLeaderboardResource.h
 * 
 * 
 */

#ifndef SamiLeaderboardResource_H_
#define SamiLeaderboardResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiLeaderboardEntryResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiLeaderboardResource: public SamiObject {
public:
    SamiLeaderboardResource();
    SamiLeaderboardResource(String* json);
    virtual ~SamiLeaderboardResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLeaderboardResource* fromJson(String* obj);

    IList* getPEntries();
    void setPEntries(IList* pEntries);
    Long* getPId();
    void setPId(Long* pId);
    String* getPStrategy();
    void setPStrategy(String* pStrategy);

private:
    IList* pEntries;
Long* pId;
String* pStrategy;
};

} /* namespace Swagger */

#endif /* SamiLeaderboardResource_H_ */
