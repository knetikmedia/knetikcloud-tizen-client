/*
 * SamiBillingReport.h
 * 
 * 
 */

#ifndef SamiBillingReport_H_
#define SamiBillingReport_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiBillingReport: public SamiObject {
public:
    SamiBillingReport();
    SamiBillingReport(String* json);
    virtual ~SamiBillingReport();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBillingReport* fromJson(String* obj);

    Long* getPCreated();
    void setPCreated(Long* pCreated);
    String* getPId();
    void setPId(String* pId);
    IList* getPLastKnownFailures();
    void setPLastKnownFailures(IList* pLast_known_failures);
    HashMap* getPStatistics();
    void setPStatistics(HashMap* pStatistics);

private:
    Long* pCreated;
String* pId;
IList* pLast_known_failures;
HashMap* pStatistics;
};

} /* namespace Swagger */

#endif /* SamiBillingReport_H_ */
