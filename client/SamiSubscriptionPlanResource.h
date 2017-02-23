/*
 * SamiSubscriptionPlanResource.h
 * 
 * 
 */

#ifndef SamiSubscriptionPlanResource_H_
#define SamiSubscriptionPlanResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiSubscriptionPlanResource: public SamiObject {
public:
    SamiSubscriptionPlanResource();
    SamiSubscriptionPlanResource(String* json);
    virtual ~SamiSubscriptionPlanResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscriptionPlanResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Integer* getPBillingCycleLength();
    void setPBillingCycleLength(Integer* pBilling_cycle_length);
    String* getPBillingCycleUnit();
    void setPBillingCycleUnit(String* pBilling_cycle_unit);
    Boolean* getPConsolidated();
    void setPConsolidated(Boolean* pConsolidated);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Long* getPEndDate();
    void setPEndDate(Long* pEnd_date);
    Integer* getPFirstBillingCycleLength();
    void setPFirstBillingCycleLength(Integer* pFirst_billing_cycle_length);
    String* getPFirstBillingCycleUnit();
    void setPFirstBillingCycleUnit(String* pFirst_billing_cycle_unit);
    Integer* getPGracePeriod();
    void setPGracePeriod(Integer* pGrace_period);
    String* getPId();
    void setPId(String* pId);
    Double* getPInitialFee();
    void setPInitialFee(Double* pInitial_fee);
    String* getPInitialSku();
    void setPInitialSku(String* pInitial_sku);
    Double* getPLatePaymentFee();
    void setPLatePaymentFee(Double* pLate_payment_fee);
    String* getPLatePaymentSku();
    void setPLatePaymentSku(String* pLate_payment_sku);
    Boolean* getPLocked();
    void setPLocked(Boolean* pLocked);
    Integer* getPMaxBillAttempts();
    void setPMaxBillAttempts(Integer* pMax_bill_attempts);
    Integer* getPMaxCycles();
    void setPMaxCycles(Integer* pMax_cycles);
    String* getPMigrateToPlan();
    void setPMigrateToPlan(String* pMigrate_to_plan);
    Integer* getPMinCycles();
    void setPMinCycles(Integer* pMin_cycles);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPPublished();
    void setPPublished(Boolean* pPublished);
    Double* getPReactivationFee();
    void setPReactivationFee(Double* pReactivation_fee);
    String* getPReactivationSku();
    void setPReactivationSku(String* pReactivation_sku);
    Double* getPRecurringFee();
    void setPRecurringFee(Double* pRecurring_fee);
    String* getPRecurringSku();
    void setPRecurringSku(String* pRecurring_sku);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);

private:
    HashMap* pAdditional_properties;
Integer* pBilling_cycle_length;
String* pBilling_cycle_unit;
Boolean* pConsolidated;
String* pCurrency_code;
Long* pEnd_date;
Integer* pFirst_billing_cycle_length;
String* pFirst_billing_cycle_unit;
Integer* pGrace_period;
String* pId;
Double* pInitial_fee;
String* pInitial_sku;
Double* pLate_payment_fee;
String* pLate_payment_sku;
Boolean* pLocked;
Integer* pMax_bill_attempts;
Integer* pMax_cycles;
String* pMigrate_to_plan;
Integer* pMin_cycles;
String* pName;
Boolean* pPublished;
Double* pReactivation_fee;
String* pReactivation_sku;
Double* pRecurring_fee;
String* pRecurring_sku;
Long* pStart_date;
};

} /* namespace Swagger */

#endif /* SamiSubscriptionPlanResource_H_ */
