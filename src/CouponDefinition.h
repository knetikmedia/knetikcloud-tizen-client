/*
 * CouponDefinition.h
 *
 * 
 */

#ifndef _CouponDefinition_H_
#define _CouponDefinition_H_


#include <string>
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

class CouponDefinition : public Object {
public:
	/*! \brief Constructor.
	 */
	CouponDefinition();
	CouponDefinition(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CouponDefinition();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A unique identifier for the discount. Can be used to remove the discount, and uniqueness within the cart will be enforced.
	 */
	std::string getCode();

	/*! \brief Set A unique identifier for the discount. Can be used to remove the discount, and uniqueness within the cart will be enforced.
	 */
	void setCode(std::string  code);
	/*! \brief Get A description for the discount.
	 */
	std::string getDescription();

	/*! \brief Set A description for the discount.
	 */
	void setDescription(std::string  description);
	/*! \brief Get The type of discount in terms of how it deducts price.
	 */
	std::string getDiscountType();

	/*! \brief Set The type of discount in terms of how it deducts price.
	 */
	void setDiscountType(std::string  discount_type);
	/*! \brief Get Whether this discount is exclusive and cannot be used in conjunction with other discounts/coupons. default=false
	 */
	bool getExclusive();

	/*! \brief Set Whether this discount is exclusive and cannot be used in conjunction with other discounts/coupons. default=false
	 */
	void setExclusive(bool  exclusive);
	/*! \brief Get For coupon_cart, a minimum total price that the cart must meet to be valid.
	 */
	long long getMaxDiscount();

	/*! \brief Set For coupon_cart, a minimum total price that the cart must meet to be valid.
	 */
	void setMaxDiscount(long long  max_discount);
	/*! \brief Get The maximum number of items to count this discount for (not for cart_coupon).
	 */
	int getMaxQuantity();

	/*! \brief Set The maximum number of items to count this discount for (not for cart_coupon).
	 */
	void setMaxQuantity(int  max_quantity);
	/*! \brief Get For coupon_cart, a minimum total price that the cart must meet to be valid.
	 */
	long long getMinCartTotal();

	/*! \brief Set For coupon_cart, a minimum total price that the cart must meet to be valid.
	 */
	void setMinCartTotal(long long  min_cart_total);
	/*! \brief Get A name for the discount.
	 */
	std::string getName();

	/*! \brief Set A name for the discount.
	 */
	void setName(std::string  name);
	/*! \brief Get Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default = false
	 */
	bool getSelfExclusive();

	/*! \brief Set Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default = false
	 */
	void setSelfExclusive(bool  self_exclusive);
	/*! \brief Get The id of the item this discount applies to, which must be present in the cart. Applies if coupon_type_hint is coupon_single_item or coupon_voucher.
	 */
	int getTargetItemId();

	/*! \brief Set The id of the item this discount applies to, which must be present in the cart. Applies if coupon_type_hint is coupon_single_item or coupon_voucher.
	 */
	void setTargetItemId(int  target_item_id);
	/*! \brief Get The type of discount in terms of what it applies to. coupon_cart applies to the cart as a whole, other types apply to specific items based on different criteria.
	 */
	std::string getType();

	/*! \brief Set The type of discount in terms of what it applies to. coupon_cart applies to the cart as a whole, other types apply to specific items based on different criteria.
	 */
	void setType(std::string  type);
	/*! \brief Get A unique identifier string for the discount.
	 */
	std::string getUniqueKey();

	/*! \brief Set A unique identifier string for the discount.
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get Which tags this applies for (item must have at least one of them), if coupon_type is coupon_tag.
	 */
	std::list<std::string> getValidForTags();

	/*! \brief Set Which tags this applies for (item must have at least one of them), if coupon_type is coupon_tag.
	 */
	void setValidForTags(std::list <std::string> valid_for_tags);
	/*! \brief Get The amount of the discount. If discount_type is value then this is the raw currency amount to remove. If discount_type is percentage then this will be multiplied by the cart total or item price to get the discount amount (0.5 is half price).
	 */
	long long getValue();

	/*! \brief Set The amount of the discount. If discount_type is value then this is the raw currency amount to remove. If discount_type is percentage then this will be multiplied by the cart total or item price to get the discount amount (0.5 is half price).
	 */
	void setValue(long long  value);
	/*! \brief Get Which vendor this applies for, if coupon_type is coupon_vendor.
	 */
	int getVendorId();

	/*! \brief Set Which vendor this applies for, if coupon_type is coupon_vendor.
	 */
	void setVendorId(int  vendor_id);

private:
	std::string code;
	std::string description;
	std::string discount_type;
	bool exclusive;
	long long max_discount;
	int max_quantity;
	long long min_cart_total;
	std::string name;
	bool self_exclusive;
	int target_item_id;
	std::string type;
	std::string unique_key;
	std::list <std::string>valid_for_tags;
	long long value;
	int vendor_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CouponDefinition_H_ */
