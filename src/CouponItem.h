/*
 * CouponItem.h
 *
 * 
 */

#ifndef _CouponItem_H_
#define _CouponItem_H_


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

class CouponItem : public Object {
public:
	/*! \brief Constructor.
	 */
	CouponItem();
	CouponItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CouponItem();

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
	/*! \brief Get Whether or not the item is currently displayable.  Default = true
	 */
	bool getDisplayable();

	/*! \brief Set Whether or not the item is currently displayable.  Default = true
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
	/*! \brief Get The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store
	 */
	long long getStoreEnd();

	/*! \brief Set The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store
	 */
	void setStoreEnd(long long  store_end);
	/*! \brief Get The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately
	 */
	long long getStoreStart();

	/*! \brief Set The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately
	 */
	void setStoreStart(long long  store_start);
	/*! \brief Get The vendor who provides the item
	 */
	int getVendorId();

	/*! \brief Set The vendor who provides the item
	 */
	void setVendorId(int  vendor_id);
	/*! \brief Get The type of coupon
	 */
	std::string getCouponTypeHint();

	/*! \brief Set The type of coupon
	 */
	void setCouponTypeHint(std::string  coupon_type_hint);
	/*! \brief Get The amount this coupon is maxed out at.  Applies if coupon_type_hint is coupon_cart
	 */
	double getDiscountMax();

	/*! \brief Set The amount this coupon is maxed out at.  Applies if coupon_type_hint is coupon_cart
	 */
	void setDiscountMax(double  discount_max);
	/*! \brief Get The minimium amount needed in the cart for the coupon to apply.  Applies if coupon_type_hint is coupon_cart
	 */
	double getDiscountMinCartValue();

	/*! \brief Set The minimium amount needed in the cart for the coupon to apply.  Applies if coupon_type_hint is coupon_cart
	 */
	void setDiscountMinCartValue(double  discount_min_cart_value);
	/*! \brief Get The type of discount in terms of how it deducts price. Value based discount not available for coupon_cart type coupons
	 */
	std::string getDiscountType();

	/*! \brief Set The type of discount in terms of how it deducts price. Value based discount not available for coupon_cart type coupons
	 */
	void setDiscountType(std::string  discount_type);
	/*! \brief Get The amount the coupon will discount the item. If discount_type is 'value' this will be a flat amount of currency. If discount type is 'percentage' this will be a fraction (0.2 for 20% off) multiplied by the price of the matching item or items.
	 */
	double getDiscountValue();

	/*! \brief Set The amount the coupon will discount the item. If discount_type is 'value' this will be a flat amount of currency. If discount type is 'percentage' this will be a fraction (0.2 for 20% off) multiplied by the price of the matching item or items.
	 */
	void setDiscountValue(double  discount_value);
	/*! \brief Get Whether this coupon is exclusive or not (true means cannot be in same cart as another).  Default = false
	 */
	bool getExclusive();

	/*! \brief Set Whether this coupon is exclusive or not (true means cannot be in same cart as another).  Default = false
	 */
	void setExclusive(bool  exclusive);
	/*! \brief Get The id of the item the coupon is applied to.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher
	 */
	int getItemId();

	/*! \brief Set The id of the item the coupon is applied to.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher
	 */
	void setItemId(int  item_id);
	/*! \brief Get The maximum quantity of items the coupon can apply to, null if no limit and minimum 1 otherwise.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher
	 */
	int getMaxQuantity();

	/*! \brief Set The maximum quantity of items the coupon can apply to, null if no limit and minimum 1 otherwise.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher
	 */
	void setMaxQuantity(int  max_quantity);
	/*! \brief Get Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default = false
	 */
	bool getSelfExclusive();

	/*! \brief Set Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default = false
	 */
	void setSelfExclusive(bool  self_exclusive);
	/*! \brief Get A list of tags for a coupon.  The coupon can only apply to an item that has at least one of these tags.  Applies if coupon_type_hint is coupon_tag
	 */
	std::list<std::string> getValidForTags();

	/*! \brief Set A list of tags for a coupon.  The coupon can only apply to an item that has at least one of these tags.  Applies if coupon_type_hint is coupon_tag
	 */
	void setValidForTags(std::list <std::string> valid_for_tags);

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
	std::string coupon_type_hint;
	double discount_max;
	double discount_min_cart_value;
	std::string discount_type;
	double discount_value;
	bool exclusive;
	int item_id;
	int max_quantity;
	bool self_exclusive;
	std::list <std::string>valid_for_tags;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CouponItem_H_ */
