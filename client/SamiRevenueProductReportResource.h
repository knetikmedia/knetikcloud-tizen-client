/*
 * SamiRevenueProductReportResource.h
 * 
 * 
 */

#ifndef SamiRevenueProductReportResource_H_
#define SamiRevenueProductReportResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiRevenueProductReportResource: public SamiObject {
public:
    SamiRevenueProductReportResource();
    SamiRevenueProductReportResource(String* json);
    virtual ~SamiRevenueProductReportResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRevenueProductReportResource* fromJson(String* obj);

    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    String* getPItemName();
    void setPItemName(String* pItem_name);
    Double* getPRevenue();
    void setPRevenue(Double* pRevenue);
    Long* getPVolume();
    void setPVolume(Long* pVolume);

private:
    Integer* pItem_id;
String* pItem_name;
Double* pRevenue;
Long* pVolume;
};

} /* namespace Swagger */

#endif /* SamiRevenueProductReportResource_H_ */
