/*
 * InventorySubscriptionResource.h
 *
 * 
 */

#ifndef _InventorySubscriptionResource_H_
#define _InventorySubscriptionResource_H_


#include <string>
#include "PaymentMethodResource.h"
#include "SimpleUserResource.h"
#include "SubscriptionCreditResource.h"
#include <list>
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

class InventorySubscriptionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	InventorySubscriptionResource();
	InventorySubscriptionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InventorySubscriptionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date the subscription will be billed
	 */
	long long getBillDate();

	/*! \brief Set The date the subscription will be billed
	 */
	void setBillDate(long long  bill_date);
	/*! \brief Get A credit of money already applied to a subscription for the next bill, or a debt if negative
	 */
	double getCredit();

	/*! \brief Set A credit of money already applied to a subscription for the next bill, or a debt if negative
	 */
	void setCredit(double  credit);
	/*! \brief Get A record of past and present credit/debt changes
	 */
	std::list<SubscriptionCreditResource> getCreditLog();

	/*! \brief Set A record of past and present credit/debt changes
	 */
	void setCreditLog(std::list <SubscriptionCreditResource> credit_log);
	/*! \brief Get The date the grace period ends
	 */
	long long getGraceEnd();

	/*! \brief Set The date the grace period ends
	 */
	void setGraceEnd(long long  grace_end);
	/*! \brief Get The id of the inventory
	 */
	int getInventoryId();

	/*! \brief Set The id of the inventory
	 */
	void setInventoryId(int  inventory_id);
	/*! \brief Get The inventory status object
	 */
	std::string getInventoryStatus();

	/*! \brief Set The inventory status object
	 */
	void setInventoryStatus(std::string  inventory_status);
	/*! \brief Get The id of the item
	 */
	int getItemId();

	/*! \brief Set The id of the item
	 */
	void setItemId(int  item_id);
	/*! \brief Get The payment method object
	 */
	PaymentMethodResource getPaymentMethod();

	/*! \brief Set The payment method object
	 */
	void setPaymentMethod(PaymentMethodResource  payment_method);
	/*! \brief Get The recurring price that has been set to override the base price. Null if not overriding
	 */
	double getPriceOverride();

	/*! \brief Set The recurring price that has been set to override the base price. Null if not overriding
	 */
	void setPriceOverride(double  price_override);
	/*! \brief Get An explanation for the reason the price is being overridden
	 */
	std::string getPriceOverrideReason();

	/*! \brief Set An explanation for the reason the price is being overridden
	 */
	void setPriceOverrideReason(std::string  price_override_reason);
	/*! \brief Get The default recurring price
	 */
	double getRecurringPrice();

	/*! \brief Set The default recurring price
	 */
	void setRecurringPrice(double  recurring_price);
	/*! \brief Get The recurring sku of the subscription
	 */
	std::string getSku();

	/*! \brief Set The recurring sku of the subscription
	 */
	void setSku(std::string  sku);
	/*! \brief Get The date the subscription will start
	 */
	long long getStartDate();

	/*! \brief Set The date the subscription will start
	 */
	void setStartDate(long long  start_date);
	/*! \brief Get The status of the subscription
	 */
	int getSubscriptionStatus();

	/*! \brief Set The status of the subscription
	 */
	void setSubscriptionStatus(int  subscription_status);
	/*! \brief Get The user
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user
	 */
	void setUser(SimpleUserResource  user);

private:
	long long bill_date;
	double credit;
	std::list <SubscriptionCreditResource>credit_log;
	long long grace_end;
	int inventory_id;
	std::string inventory_status;
	int item_id;
	PaymentMethodResource payment_method;
	double price_override;
	std::string price_override_reason;
	double recurring_price;
	std::string sku;
	long long start_date;
	int subscription_status;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InventorySubscriptionResource_H_ */
