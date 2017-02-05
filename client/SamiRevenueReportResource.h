/*
 * SamiRevenueReportResource.h
 * 
 * 
 */

#ifndef SamiRevenueReportResource_H_
#define SamiRevenueReportResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Long;


namespace Swagger {

class SamiRevenueReportResource: public SamiObject {
public:
    SamiRevenueReportResource();
    SamiRevenueReportResource(String* json);
    virtual ~SamiRevenueReportResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRevenueReportResource* fromJson(String* obj);

    Long* getPCustomerCount();
    void setPCustomerCount(Long* pCustomer_count);
    Long* getPSaleCount();
    void setPSaleCount(Long* pSale_count);
    Double* getPSalesAverage();
    void setPSalesAverage(Double* pSales_average);
    Double* getPSalesTotal();
    void setPSalesTotal(Double* pSales_total);

private:
    Long* pCustomer_count;
Long* pSale_count;
Double* pSales_average;
Double* pSales_total;
};

} /* namespace Swagger */

#endif /* SamiRevenueReportResource_H_ */
