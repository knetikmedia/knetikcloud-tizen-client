/*
 * SubscriptionPlanResource.h
 *
 * 
 */

#ifndef _SubscriptionPlanResource_H_
#define _SubscriptionPlanResource_H_


#include <string>
#include "Property.h"
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class SubscriptionPlanResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SubscriptionPlanResource();
	SubscriptionPlanResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubscriptionPlanResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this subscription
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this subscription
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The length of the billing cycle in number of billing cycle unit
	 */
	int getBillingCycleLength();

	/*! \brief Set The length of the billing cycle in number of billing cycle unit
	 */
	void setBillingCycleLength(int  billing_cycle_length);
	/*! \brief Get The time period unit to apply to the length of billing cycles
	 */
	std::string getBillingCycleUnit();

	/*! \brief Set The time period unit to apply to the length of billing cycles
	 */
	void setBillingCycleUnit(std::string  billing_cycle_unit);
	/*! \brief Get Whether this plan will be renewed on the consolidated billing cycle
	 */
	bool getConsolidated();

	/*! \brief Set Whether this plan will be renewed on the consolidated billing cycle
	 */
	void setConsolidated(bool  consolidated);
	/*! \brief Get The ISO3 currency code to use for the fees
	 */
	std::string getCurrencyCode();

	/*! \brief Set The ISO3 currency code to use for the fees
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get Used to schedule plan availability end date
	 */
	long long getEndDate();

	/*! \brief Set Used to schedule plan availability end date
	 */
	void setEndDate(long long  end_date);
	/*! \brief Get Optional override for the length of the first billing cycle before the first recurring billing
	 */
	int getFirstBillingCycleLength();

	/*! \brief Set Optional override for the length of the first billing cycle before the first recurring billing
	 */
	void setFirstBillingCycleLength(int  first_billing_cycle_length);
	/*! \brief Get The time period unit to apply to the length of the first billing cycle. Required when first_billing_cycle_length is specified
	 */
	std::string getFirstBillingCycleUnit();

	/*! \brief Set The time period unit to apply to the length of the first billing cycle. Required when first_billing_cycle_length is specified
	 */
	void setFirstBillingCycleUnit(std::string  first_billing_cycle_unit);
	/*! \brief Get The number of late payment days before a subscription is canceled
	 */
	int getGracePeriod();

	/*! \brief Set The number of late payment days before a subscription is canceled
	 */
	void setGracePeriod(int  grace_period);
	/*! \brief Get The id of the plan used to generate the SKUs
	 */
	std::string getId();

	/*! \brief Set The id of the plan used to generate the SKUs
	 */
	void setId(std::string  id);
	/*! \brief Get The fee charged when the subscription is purchased
	 */
	long long getInitialFee();

	/*! \brief Set The fee charged when the subscription is purchased
	 */
	void setInitialFee(long long  initial_fee);
	/*! \brief Get The SKU to be used when purchasing the subscription through the cart
	 */
	std::string getInitialSku();

	/*! \brief Set The SKU to be used when purchasing the subscription through the cart
	 */
	void setInitialSku(std::string  initial_sku);
	/*! \brief Get The fee to add to the bill when an invoice has gone unpaid passed the grace period
	 */
	long long getLatePaymentFee();

	/*! \brief Set The fee to add to the bill when an invoice has gone unpaid passed the grace period
	 */
	void setLatePaymentFee(long long  late_payment_fee);
	/*! \brief Get The SKU that will show on the invoice when the subscription is delinquent
	 */
	std::string getLatePaymentSku();

	/*! \brief Set The SKU that will show on the invoice when the subscription is delinquent
	 */
	void setLatePaymentSku(std::string  late_payment_sku);
	/*! \brief Get Whether this plan is locked because it has been purchased by at least one user.  When locked, a number of properties can no longer be changed
	 */
	bool getLocked();

	/*! \brief Set Whether this plan is locked because it has been purchased by at least one user.  When locked, a number of properties can no longer be changed
	 */
	void setLocked(bool  locked);
	/*! \brief Get The number of charge attempts before the subscription becomes delinquent
	 */
	int getMaxBillAttempts();

	/*! \brief Set The number of charge attempts before the subscription becomes delinquent
	 */
	void setMaxBillAttempts(int  max_bill_attempts);
	/*! \brief Get Maximum number of renewals. If a migration plan is provided, the subscription will automatically switch to it when this limit is reached
	 */
	int getMaxCycles();

	/*! \brief Set Maximum number of renewals. If a migration plan is provided, the subscription will automatically switch to it when this limit is reached
	 */
	void setMaxCycles(int  max_cycles);
	/*! \brief Get Automatically migrate to the specified plan when the subscription is first renewed
	 */
	std::string getMigrateToPlan();

	/*! \brief Set Automatically migrate to the specified plan when the subscription is first renewed
	 */
	void setMigrateToPlan(std::string  migrate_to_plan);
	/*! \brief Get The minimum number of renewals to charge for
	 */
	int getMinCycles();

	/*! \brief Set The minimum number of renewals to charge for
	 */
	void setMinCycles(int  min_cycles);
	/*! \brief Get The name of the plan used to generate the SKUs
	 */
	std::string getName();

	/*! \brief Set The name of the plan used to generate the SKUs
	 */
	void setName(std::string  name);
	/*! \brief Get Whether this plan is currently available
	 */
	bool getPublished();

	/*! \brief Set Whether this plan is currently available
	 */
	void setPublished(bool  published);
	/*! \brief Get The fee to charge when a suspended subscription is to be re-activated
	 */
	long long getReactivationFee();

	/*! \brief Set The fee to charge when a suspended subscription is to be re-activated
	 */
	void setReactivationFee(long long  reactivation_fee);
	/*! \brief Get The SKU that will show on the invoice when the subscription is re-activated after a suspension
	 */
	std::string getReactivationSku();

	/*! \brief Set The SKU that will show on the invoice when the subscription is re-activated after a suspension
	 */
	void setReactivationSku(std::string  reactivation_sku);
	/*! \brief Get The recurring fee to charge for each renewal
	 */
	long long getRecurringFee();

	/*! \brief Set The recurring fee to charge for each renewal
	 */
	void setRecurringFee(long long  recurring_fee);
	/*! \brief Get The SKU that will show on the invoice when the subscription is activated
	 */
	std::string getRecurringSku();

	/*! \brief Set The SKU that will show on the invoice when the subscription is activated
	 */
	void setRecurringSku(std::string  recurring_sku);
	/*! \brief Get Used to schedule plan availability start date
	 */
	long long getStartDate();

	/*! \brief Set Used to schedule plan availability start date
	 */
	void setStartDate(long long  start_date);

private:
	std::map <std::string, std::string>additional_properties;
	int billing_cycle_length;
	std::string billing_cycle_unit;
	bool consolidated;
	std::string currency_code;
	long long end_date;
	int first_billing_cycle_length;
	std::string first_billing_cycle_unit;
	int grace_period;
	std::string id;
	long long initial_fee;
	std::string initial_sku;
	long long late_payment_fee;
	std::string late_payment_sku;
	bool locked;
	int max_bill_attempts;
	int max_cycles;
	std::string migrate_to_plan;
	int min_cycles;
	std::string name;
	bool published;
	long long reactivation_fee;
	std::string reactivation_sku;
	long long recurring_fee;
	std::string recurring_sku;
	long long start_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubscriptionPlanResource_H_ */
