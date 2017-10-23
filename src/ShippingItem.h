/*
 * ShippingItem.h
 *
 * 
 */

#ifndef _ShippingItem_H_
#define _ShippingItem_H_


#include <string>
#include "Behavior.h"
#include "Property.h"
#include "Sku.h"
#include "StoreItem.h"
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

class ShippingItem : public Object {
public:
	/*! \brief Constructor.
	 */
	ShippingItem();
	ShippingItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ShippingItem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
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
	/*! \brief Get The date the item was created, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the item was created, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the item
	 */
	int getId();

	/*! \brief Set The id of the item
	 */
	void setId(int  id);
	/*! \brief Get A long description of the item
	 */
	std::string getLongDescription();

	/*! \brief Set A long description of the item
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The name of the item
	 */
	std::string getName();

	/*! \brief Set The name of the item
	 */
	void setName(std::string  name);
	/*! \brief Get A short description of the item, max 255 chars
	 */
	std::string getShortDescription();

	/*! \brief Set A short description of the item, max 255 chars
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get A number to use in sorting items.  Default 500
	 */
	int getSort();

	/*! \brief Set A number to use in sorting items.  Default 500
	 */
	void setSort(int  sort);
	/*! \brief Get List of tags used for filtering items
	 */
	std::list<std::string> getTags();

	/*! \brief Set List of tags used for filtering items
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null
	 */
	std::string getTemplate();

	/*! \brief Set An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The type of the item
	 */
	std::string getTypeHint();

	/*! \brief Set The type of the item
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get The unique key for the item
	 */
	std::string getUniqueKey();

	/*! \brief Set The unique key for the item
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date the item was last updated, unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the item was last updated, unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get Whether or not the item is currently visible to users. Does not block purchase; Use store_start or store_end to block purchase.  Default = true
	 */
	bool getDisplayable();

	/*! \brief Set Whether or not the item is currently visible to users. Does not block purchase; Use store_start or store_end to block purchase.  Default = true
	 */
	void setDisplayable(bool  displayable);
	/*! \brief Get A list of country ID to include in the blacklist/whitelist geo policy
	 */
	std::list<std::string> getGeoCountryList();

	/*! \brief Set A list of country ID to include in the blacklist/whitelist geo policy
	 */
	void setGeoCountryList(std::list <std::string> geo_country_list);
	/*! \brief Get Whether to use the geo_country_list as a black list or white list for item geographical availability
	 */
	std::string getGeoPolicyType();

	/*! \brief Set Whether to use the geo_country_list as a black list or white list for item geographical availability
	 */
	void setGeoPolicyType(std::string  geo_policy_type);
	/*! \brief Get Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default = 0
	 */
	int getShippingTier();

	/*! \brief Set Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default = 0
	 */
	void setShippingTier(int  shipping_tier);
	/*! \brief Get The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart
	 */
	std::list<Sku> getSkus();

	/*! \brief Set The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart
	 */
	void setSkus(std::list <Sku> skus);
	/*! \brief Get The date the item will become hidden and unavailable for purchase, unix timestamp in seconds.  If set to null, item will never leave the store
	 */
	long long getStoreEnd();

	/*! \brief Set The date the item will become hidden and unavailable for purchase, unix timestamp in seconds.  If set to null, item will never leave the store
	 */
	void setStoreEnd(long long  store_end);
	/*! \brief Get The date the item will become visible (if displayable) and available for purchase, unix timestamp in seconds.  If set to null, item will appear in store immediately
	 */
	long long getStoreStart();

	/*! \brief Set The date the item will become visible (if displayable) and available for purchase, unix timestamp in seconds.  If set to null, item will appear in store immediately
	 */
	void setStoreStart(long long  store_start);
	/*! \brief Get The vendor who provides the item
	 */
	int getVendorId();

	/*! \brief Set The vendor who provides the item
	 */
	void setVendorId(int  vendor_id);
	/*! \brief Get A unique list of country iso3 codes that allow the shipping option
	 */
	std::list<std::string> getCountries();

	/*! \brief Set A unique list of country iso3 codes that allow the shipping option
	 */
	void setCountries(std::list <std::string> countries);
	/*! \brief Get An abstract max value that the values of item's shipping_tier work against to decide whether an order can be fulfilled
	 */
	int getMaxTierTotal();

	/*! \brief Set An abstract max value that the values of item's shipping_tier work against to decide whether an order can be fulfilled
	 */
	void setMaxTierTotal(int  max_tier_total);
	/*! \brief Get Whether tax should be applied to the shipping price.  Default = false
	 */
	bool getTaxable();

	/*! \brief Set Whether tax should be applied to the shipping price.  Default = false
	 */
	void setTaxable(bool  taxable);

private:
	std::map <std::string, std::string>additional_properties;
	std::list <Behavior>behaviors;
	std::string category;
	long long created_date;
	int id;
	std::string long_description;
	std::string name;
	std::string short_description;
	int sort;
	std::list <std::string>tags;
	std::string _template;
	std::string type_hint;
	std::string unique_key;
	long long updated_date;
	bool displayable;
	std::list <std::string>geo_country_list;
	std::string geo_policy_type;
	int shipping_tier;
	std::list <Sku>skus;
	long long store_end;
	long long store_start;
	int vendor_id;
	std::list <std::string>countries;
	int max_tier_total;
	bool taxable;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ShippingItem_H_ */
