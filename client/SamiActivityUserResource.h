/*
 * SamiActivityUserResource.h
 * 
 * 
 */

#ifndef SamiActivityUserResource_H_
#define SamiActivityUserResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMetricResource.h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiActivityUserResource: public SamiObject {
public:
    SamiActivityUserResource();
    SamiActivityUserResource(String* json);
    virtual ~SamiActivityUserResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityUserResource* fromJson(String* obj);

    Boolean* getPHost();
    void setPHost(Boolean* pHost);
    Long* getPId();
    void setPId(Long* pId);
    Long* getPJoinedDate();
    void setPJoinedDate(Long* pJoined_date);
    Long* getPLeftDate();
    void setPLeftDate(Long* pLeft_date);
    SamiMetricResource* getPMetric();
    void setPMetric(SamiMetricResource* pMetric);
    String* getPStatus();
    void setPStatus(String* pStatus);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    Boolean* pHost;
Long* pId;
Long* pJoined_date;
Long* pLeft_date;
SamiMetricResource* pMetric;
String* pStatus;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiActivityUserResource_H_ */
