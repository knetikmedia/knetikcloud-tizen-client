/*
 * SubscriptionPlan.h
 *
 * 
 */

#ifndef _SubscriptionPlan_H_
#define _SubscriptionPlan_H_


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

class SubscriptionPlan : public Object {
public:
	/*! \brief Constructor.
	 */
	SubscriptionPlan();
	SubscriptionPlan(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubscriptionPlan();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set 
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get 
	 */
	std::string getAvailability();

	/*! \brief Set 
	 */
	void setAvailability(std::string  availability);
	/*! \brief Get 
	 */
	int getBillGraceDays();

	/*! \brief Set 
	 */
	void setBillGraceDays(int  bill_grace_days);
	/*! \brief Get 
	 */
	bool getConsolidated();

	/*! \brief Set 
	 */
	void setConsolidated(bool  consolidated);
	/*! \brief Get 
	 */
	int getFirstBill();

	/*! \brief Set 
	 */
	void setFirstBill(int  first_bill);
	/*! \brief Get 
	 */
	std::string getFirstBillUnitOfTime();

	/*! \brief Set 
	 */
	void setFirstBillUnitOfTime(std::string  first_bill_unit_of_time);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getLatePaymentSku();

	/*! \brief Set 
	 */
	void setLatePaymentSku(std::string  late_payment_sku);
	/*! \brief Get 
	 */
	bool getLocked();

	/*! \brief Set 
	 */
	void setLocked(bool  locked);
	/*! \brief Get 
	 */
	int getMaxAutoRenew();

	/*! \brief Set 
	 */
	void setMaxAutoRenew(int  max_auto_renew);
	/*! \brief Get 
	 */
	int getMaxBillAttempts();

	/*! \brief Set 
	 */
	void setMaxBillAttempts(int  max_bill_attempts);
	/*! \brief Get 
	 */
	std::string getMigrationPlan();

	/*! \brief Set 
	 */
	void setMigrationPlan(std::string  migration_plan);
	/*! \brief Get 
	 */
	int getMinimumTerm();

	/*! \brief Set 
	 */
	void setMinimumTerm(int  minimum_term);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getPrimarySku();

	/*! \brief Set 
	 */
	void setPrimarySku(std::string  primary_sku);
	/*! \brief Get 
	 */
	std::string getReactivationSku();

	/*! \brief Set 
	 */
	void setReactivationSku(std::string  reactivation_sku);
	/*! \brief Get 
	 */
	std::string getRecurringSku();

	/*! \brief Set 
	 */
	void setRecurringSku(std::string  recurring_sku);
	/*! \brief Get 
	 */
	int getRenewPeriod();

	/*! \brief Set 
	 */
	void setRenewPeriod(int  renew_period);
	/*! \brief Get 
	 */
	std::string getRenewPeriodUnitOfTime();

	/*! \brief Set 
	 */
	void setRenewPeriodUnitOfTime(std::string  renew_period_unit_of_time);
	/*! \brief Get 
	 */
	int getSubscriptionId();

	/*! \brief Set 
	 */
	void setSubscriptionId(int  subscription_id);

private:
	std::map <std::string, std::string>additional_properties;
	std::string availability;
	int bill_grace_days;
	bool consolidated;
	int first_bill;
	std::string first_bill_unit_of_time;
	std::string id;
	std::string late_payment_sku;
	bool locked;
	int max_auto_renew;
	int max_bill_attempts;
	std::string migration_plan;
	int minimum_term;
	std::string name;
	std::string primary_sku;
	std::string reactivation_sku;
	std::string recurring_sku;
	int renew_period;
	std::string renew_period_unit_of_time;
	int subscription_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubscriptionPlan_H_ */
