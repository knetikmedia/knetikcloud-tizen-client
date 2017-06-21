/*
 * SamiSubscriptionPlan.h
 * 
 * 
 */

#ifndef SamiSubscriptionPlan_H_
#define SamiSubscriptionPlan_H_

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
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSubscriptionPlan: public SamiObject {
public:
    SamiSubscriptionPlan();
    SamiSubscriptionPlan(String* json);
    virtual ~SamiSubscriptionPlan();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscriptionPlan* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPAvailability();
    void setPAvailability(String* pAvailability);
    Integer* getPBillGraceDays();
    void setPBillGraceDays(Integer* pBill_grace_days);
    Boolean* getPConsolidated();
    void setPConsolidated(Boolean* pConsolidated);
    Integer* getPFirstBill();
    void setPFirstBill(Integer* pFirst_bill);
    String* getPFirstBillUnitOfTime();
    void setPFirstBillUnitOfTime(String* pFirst_bill_unit_of_time);
    String* getPId();
    void setPId(String* pId);
    String* getPLatePaymentSku();
    void setPLatePaymentSku(String* pLate_payment_sku);
    Boolean* getPLocked();
    void setPLocked(Boolean* pLocked);
    Integer* getPMaxAutoRenew();
    void setPMaxAutoRenew(Integer* pMax_auto_renew);
    Integer* getPMaxBillAttempts();
    void setPMaxBillAttempts(Integer* pMax_bill_attempts);
    String* getPMigrationPlan();
    void setPMigrationPlan(String* pMigration_plan);
    Integer* getPMinimumTerm();
    void setPMinimumTerm(Integer* pMinimum_term);
    String* getPName();
    void setPName(String* pName);
    String* getPPrimarySku();
    void setPPrimarySku(String* pPrimary_sku);
    String* getPReactivationSku();
    void setPReactivationSku(String* pReactivation_sku);
    String* getPRecurringSku();
    void setPRecurringSku(String* pRecurring_sku);
    Integer* getPRenewPeriod();
    void setPRenewPeriod(Integer* pRenew_period);
    String* getPRenewPeriodUnitOfTime();
    void setPRenewPeriodUnitOfTime(String* pRenew_period_unit_of_time);
    Integer* getPSubscriptionId();
    void setPSubscriptionId(Integer* pSubscription_id);

private:
    HashMap* pAdditional_properties;
String* pAvailability;
Integer* pBill_grace_days;
Boolean* pConsolidated;
Integer* pFirst_bill;
String* pFirst_bill_unit_of_time;
String* pId;
String* pLate_payment_sku;
Boolean* pLocked;
Integer* pMax_auto_renew;
Integer* pMax_bill_attempts;
String* pMigration_plan;
Integer* pMinimum_term;
String* pName;
String* pPrimary_sku;
String* pReactivation_sku;
String* pRecurring_sku;
Integer* pRenew_period;
String* pRenew_period_unit_of_time;
Integer* pSubscription_id;
};

} /* namespace Swagger */

#endif /* SamiSubscriptionPlan_H_ */
