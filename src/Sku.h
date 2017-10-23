/*
 * Sku.h
 *
 * 
 */

#ifndef _Sku_H_
#define _Sku_H_


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

class Sku : public Object {
public:
	/*! \brief Constructor.
	 */
	Sku();
	Sku(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Sku();

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
	/*! \brief Get The currency code for the SKU, a three letter string (ISO3)
	 */
	std::string getCurrencyCode();

	/*! \brief Set The currency code for the SKU, a three letter string (ISO3)
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The friendly name of the SKU as it will appear on invoices and reports. Typically represents the option name like red, large, etc
	 */
	std::string getDescription();

	/*! \brief Set The friendly name of the SKU as it will appear on invoices and reports. Typically represents the option name like red, large, etc
	 */
	void setDescription(std::string  description);
	/*! \brief Get The number of SKUs currently in stock
	 */
	int getInventory();

	/*! \brief Set The number of SKUs currently in stock
	 */
	void setInventory(int  inventory);
	/*! \brief Get Alerts vendor when SKU inventory drops below this value
	 */
	int getMinInventoryThreshold();

	/*! \brief Set Alerts vendor when SKU inventory drops below this value
	 */
	void setMinInventoryThreshold(int  min_inventory_threshold);
	/*! \brief Get 
	 */
	bool getNotAvailable();

	/*! \brief Set 
	 */
	void setNotAvailable(bool  not_available);
	/*! \brief Get 
	 */
	bool getNotDisplayable();

	/*! \brief Set 
	 */
	void setNotDisplayable(bool  not_displayable);
	/*! \brief Get The base price before any sale
	 */
	long long getOriginalPrice();

	/*! \brief Set The base price before any sale
	 */
	void setOriginalPrice(long long  original_price);
	/*! \brief Get The current price of the SKU with sales, if any. Set original_price for the base
	 */
	long long getPrice();

	/*! \brief Set The current price of the SKU with sales, if any. Set original_price for the base
	 */
	void setPrice(long long  price);
	/*! \brief Get Whether or not the SKU is currently visible to users. This will not block users from purchase. Use start_date or stop_date to prevent purchase. Default: true
	 */
	bool getPublished();

	/*! \brief Set Whether or not the SKU is currently visible to users. This will not block users from purchase. Use start_date or stop_date to prevent purchase. Default: true
	 */
	void setPublished(bool  published);
	/*! \brief Get The id of a sale affecting the price, if any
	 */
	int getSaleId();

	/*! \brief Set The id of a sale affecting the price, if any
	 */
	void setSaleId(int  sale_id);
	/*! \brief Get The name of a sale affecting the price, if any
	 */
	std::string getSaleName();

	/*! \brief Set The name of a sale affecting the price, if any
	 */
	void setSaleName(std::string  sale_name);
	/*! \brief Get The stock keeping unit (SKU), a unique identifier for a given product.  Max 40 characters
	 */
	std::string getSku();

	/*! \brief Set The stock keeping unit (SKU), a unique identifier for a given product.  Max 40 characters
	 */
	void setSku(std::string  sku);
	/*! \brief Get The date the sku becomes visible (if published) and available for purchase, unix timestamp in seconds.  If set to null, sku will become available immediately
	 */
	long long getStartDate();

	/*! \brief Set The date the sku becomes visible (if published) and available for purchase, unix timestamp in seconds.  If set to null, sku will become available immediately
	 */
	void setStartDate(long long  start_date);
	/*! \brief Get The date the sku becomes hidden and unavailable for purchase, unix timestamp in seconds.  If set to null, sku is always available
	 */
	long long getStopDate();

	/*! \brief Set The date the sku becomes hidden and unavailable for purchase, unix timestamp in seconds.  If set to null, sku is always available
	 */
	void setStopDate(long long  stop_date);

private:
	std::map <std::string, std::string>additional_properties;
	std::string currency_code;
	std::string description;
	int inventory;
	int min_inventory_threshold;
	bool not_available;
	bool not_displayable;
	long long original_price;
	long long price;
	bool published;
	int sale_id;
	std::string sale_name;
	std::string sku;
	long long start_date;
	long long stop_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Sku_H_ */
