/*
 * SamiRevenueCountryReportResource.h
 * 
 * 
 */

#ifndef SamiRevenueCountryReportResource_H_
#define SamiRevenueCountryReportResource_H_

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

class SamiRevenueCountryReportResource: public SamiObject {
public:
    SamiRevenueCountryReportResource();
    SamiRevenueCountryReportResource(String* json);
    virtual ~SamiRevenueCountryReportResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRevenueCountryReportResource* fromJson(String* obj);

    String* getPCountry();
    void setPCountry(String* pCountry);
    Double* getPRevenue();
    void setPRevenue(Double* pRevenue);
    Long* getPVolume();
    void setPVolume(Long* pVolume);

private:
    String* pCountry;
Double* pRevenue;
Long* pVolume;
};

} /* namespace Swagger */

#endif /* SamiRevenueCountryReportResource_H_ */
