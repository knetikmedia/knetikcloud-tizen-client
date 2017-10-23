/*
 * CartLineItem.h
 *
 * 
 */

#ifndef _CartLineItem_H_
#define _CartLineItem_H_


#include <string>
#include "Discount.h"
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

class CartLineItem : public Object {
public:
	/*! \brief Constructor.
	 */
	CartLineItem();
	CartLineItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CartLineItem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCurrencyCode();

	/*! \brief Set 
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get 
	 */
	Discount getDiscount();

	/*! \brief Set 
	 */
	void setDiscount(Discount  discount);
	/*! \brief Get 
	 */
	long long getLineTotal();

	/*! \brief Set 
	 */
	void setLineTotal(long long  line_total);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	long long getOriginalLineTotal();

	/*! \brief Set 
	 */
	void setOriginalLineTotal(long long  original_line_total);
	/*! \brief Get 
	 */
	long long getOriginalUnitPrice();

	/*! \brief Set 
	 */
	void setOriginalUnitPrice(long long  original_unit_price);
	/*! \brief Get 
	 */
	int getQty();

	/*! \brief Set 
	 */
	void setQty(int  qty);
	/*! \brief Get 
	 */
	std::string getSaleName();

	/*! \brief Set 
	 */
	void setSaleName(std::string  sale_name);
	/*! \brief Get 
	 */
	std::string getSku();

	/*! \brief Set 
	 */
	void setSku(std::string  sku);
	/*! \brief Get 
	 */
	std::string getSkuDescription();

	/*! \brief Set 
	 */
	void setSkuDescription(std::string  sku_description);
	/*! \brief Get 
	 */
	int getStoreItemId();

	/*! \brief Set 
	 */
	void setStoreItemId(int  store_item_id);
	/*! \brief Get 
	 */
	std::list<std::string> getTags();

	/*! \brief Set 
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get 
	 */
	std::string getThumbUrl();

	/*! \brief Set 
	 */
	void setThumbUrl(std::string  thumb_url);
	/*! \brief Get 
	 */
	std::string getUniqueKey();

	/*! \brief Set 
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get 
	 */
	long long getUnitPrice();

	/*! \brief Set 
	 */
	void setUnitPrice(long long  unit_price);
	/*! \brief Get 
	 */
	int getVendorId();

	/*! \brief Set 
	 */
	void setVendorId(int  vendor_id);
	/*! \brief Get 
	 */
	std::string getVendorName();

	/*! \brief Set 
	 */
	void setVendorName(std::string  vendor_name);

private:
	std::string currency_code;
	std::string description;
	Discount discount;
	long long line_total;
	std::string name;
	long long original_line_total;
	long long original_unit_price;
	int qty;
	std::string sale_name;
	std::string sku;
	std::string sku_description;
	int store_item_id;
	std::list <std::string>tags;
	std::string thumb_url;
	std::string unique_key;
	long long unit_price;
	int vendor_id;
	std::string vendor_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CartLineItem_H_ */
