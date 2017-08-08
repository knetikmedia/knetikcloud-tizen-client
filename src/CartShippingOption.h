/*
 * CartShippingOption.h
 *
 * 
 */

#ifndef _CartShippingOption_H_
#define _CartShippingOption_H_


#include <string>
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

class CartShippingOption : public Object {
public:
	/*! \brief Constructor.
	 */
	CartShippingOption();
	CartShippingOption(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CartShippingOption();

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
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	double getOriginalPrice();

	/*! \brief Set 
	 */
	void setOriginalPrice(double  original_price);
	/*! \brief Get 
	 */
	double getPrice();

	/*! \brief Set 
	 */
	void setPrice(double  price);
	/*! \brief Get 
	 */
	int getShippingItemId();

	/*! \brief Set 
	 */
	void setShippingItemId(int  shipping_item_id);
	/*! \brief Get 
	 */
	std::string getSku();

	/*! \brief Set 
	 */
	void setSku(std::string  sku);
	/*! \brief Get 
	 */
	bool getTaxable();

	/*! \brief Set 
	 */
	void setTaxable(bool  taxable);
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
	std::string name;
	double original_price;
	double price;
	int shipping_item_id;
	std::string sku;
	bool taxable;
	int vendor_id;
	std::string vendor_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CartShippingOption_H_ */
