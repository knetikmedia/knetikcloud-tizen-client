/*
 * SamiAggregateInvoiceReportResource.h
 * 
 * 
 */

#ifndef SamiAggregateInvoiceReportResource_H_
#define SamiAggregateInvoiceReportResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiAggregateInvoiceReportResource: public SamiObject {
public:
    SamiAggregateInvoiceReportResource();
    SamiAggregateInvoiceReportResource(String* json);
    virtual ~SamiAggregateInvoiceReportResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAggregateInvoiceReportResource* fromJson(String* obj);

    Long* getPCount();
    void setPCount(Long* pCount);
    String* getPDate();
    void setPDate(String* pDate);
    Double* getPRevenue();
    void setPRevenue(Double* pRevenue);
    Long* getPUserCount();
    void setPUserCount(Long* pUser_count);

private:
    Long* pCount;
String* pDate;
Double* pRevenue;
Long* pUser_count;
};

} /* namespace Swagger */

#endif /* SamiAggregateInvoiceReportResource_H_ */
