/*
 * SubscriptionResource.h
 *
 * 
 */

#ifndef _SubscriptionResource_H_
#define _SubscriptionResource_H_


#include <string>
#include "Behavior.h"
#include "Property.h"
#include "SubscriptionPlanResource.h"
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

class SubscriptionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SubscriptionResource();
	SubscriptionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubscriptionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of item additional properties, keyed on the property name. Must match the names and types defined in the template for this item type.
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of item additional properties, keyed on the property name. Must match the names and types defined in the template for this item type.
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get Who can purchase this subscription
	 */
	std::string getAvailability();

	/*! \brief Set Who can purchase this subscription
	 */
	void setAvailability(std::string  availability);
	/*! \brief Get The behaviors linked to the item, describing various options and interactions. May not be included in item lists
	 */
	std::list<Behavior> getBehaviors();

	/*! \brief Set The behaviors linked to the item, describing various options and interactions. May not be included in item lists
	 */
	void setBehaviors(std::list <Behavior> behaviors);
	/*! \brief Get A category for filtering items
	 */
	std::string getCategory();

	/*! \brief Set A category for filtering items
	 */
	void setCategory(std::string  category);
	/*! \brief Get The day of the month 1..31 this subscription will renew
	 */
	int getConsolidationDayOfMonth();

	/*! \brief Set The day of the month 1..31 this subscription will renew
	 */
	void setConsolidationDayOfMonth(int  consolidation_day_of_month);
	/*! \brief Get The date the item was created, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the item was created, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get A list of country iso3 codes to include in the blacklist/whitelist geo policy
	 */
	std::list<std::string> getGeoCountryList();

	/*! \brief Set A list of country iso3 codes to include in the blacklist/whitelist geo policy
	 */
	void setGeoCountryList(std::list <std::string> geo_country_list);
	/*! \brief Get Whether to use the geo_country_list as a black list or white list for item geographical availability
	 */
	std::string getGeoPolicyType();

	/*! \brief Set Whether to use the geo_country_list as a black list or white list for item geographical availability
	 */
	void setGeoPolicyType(std::string  geo_policy_type);
	/*! \brief Get The id of the item
	 */
	int getId();

	/*! \brief Set The id of the item
	 */
	void setId(int  id);
	/*! \brief Get A long description of the subscription
	 */
	std::string getLongDescription();

	/*! \brief Set A long description of the subscription
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The name of the item
	 */
	std::string getName();

	/*! \brief Set The name of the item
	 */
	void setName(std::string  name);
	/*! \brief Get The billing options for this subscription
	 */
	std::list<SubscriptionPlanResource> getPlans();

	/*! \brief Set The billing options for this subscription
	 */
	void setPlans(std::list <SubscriptionPlanResource> plans);
	/*! \brief Get A short description of the subscription.  Max 255 characters
	 */
	std::string getShortDescription();

	/*! \brief Set A short description of the subscription.  Max 255 characters
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get A number to use in sorting items.  Default 500
	 */
	int getSort();

	/*! \brief Set A number to use in sorting items.  Default 500
	 */
	void setSort(int  sort);
	/*! \brief Get Used to schedule removal from store.  Null means the subscription will never be removed
	 */
	long long getStoreEnd();

	/*! \brief Set Used to schedule removal from store.  Null means the subscription will never be removed
	 */
	void setStoreEnd(long long  store_end);
	/*! \brief Get Used to schedule appearance in store.  Null means the subscription will appear now
	 */
	long long getStoreStart();

	/*! \brief Set Used to schedule appearance in store.  Null means the subscription will appear now
	 */
	void setStoreStart(long long  store_start);
	/*! \brief Get List of tags used for filtering items
	 */
	std::list<std::string> getTags();

	/*! \brief Set List of tags used for filtering items
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get An item template this item is validated against. May be null and no validation of additional properties will be done.
	 */
	std::string getTemplate();

	/*! \brief Set An item template this item is validated against. May be null and no validation of additional properties will be done.
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The unique key for the item
	 */
	std::string getUniqueKey();

	/*! \brief Set The unique key for the item
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date the item was last updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the item was last updated
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The vendor who provides the item
	 */
	int getVendorId();

	/*! \brief Set The vendor who provides the item
	 */
	void setVendorId(int  vendor_id);

private:
	std::map <std::string, std::string>additional_properties;
	std::string availability;
	std::list <Behavior>behaviors;
	std::string category;
	int consolidation_day_of_month;
	long long created_date;
	std::list <std::string>geo_country_list;
	std::string geo_policy_type;
	int id;
	std::string long_description;
	std::string name;
	std::list <SubscriptionPlanResource>plans;
	std::string short_description;
	int sort;
	long long store_end;
	long long store_start;
	std::list <std::string>tags;
	std::string _template;
	std::string unique_key;
	long long updated_date;
	int vendor_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubscriptionResource_H_ */
