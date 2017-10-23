/*
 * CatalogSale.h
 *
 * 
 */

#ifndef _CatalogSale_H_
#define _CatalogSale_H_


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

class CatalogSale : public Object {
public:
	/*! \brief Constructor.
	 */
	CatalogSale();
	CatalogSale(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CatalogSale();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The iso3 code for the currency for this discountValue.  The sku purchased will have to match for it this sale to apply
	 */
	std::string getCurrencyCode();

	/*! \brief Set The iso3 code for the currency for this discountValue.  The sku purchased will have to match for it this sale to apply
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The way in which the price is reduced. 'value' means subtracting directly, 'percentage' means subtracting by the price times the discountValue (1.0 == 100%)
	 */
	std::string getDiscountType();

	/*! \brief Set The way in which the price is reduced. 'value' means subtracting directly, 'percentage' means subtracting by the price times the discountValue (1.0 == 100%)
	 */
	void setDiscountType(std::string  discount_type);
	/*! \brief Get The amount deducted from the price, in the same currencyCode as the item
	 */
	double getDiscountValue();

	/*! \brief Set The amount deducted from the price, in the same currencyCode as the item
	 */
	void setDiscountValue(double  discount_value);
	/*! \brief Get The id of the sale
	 */
	int getId();

	/*! \brief Set The id of the sale
	 */
	void setId(int  id);
	/*! \brief Get The id of the item this sale applies to.  Leave null to use other filters
	 */
	int getItem();

	/*! \brief Set The id of the item this sale applies to.  Leave null to use other filters
	 */
	void setItem(int  item);
	/*! \brief Get The long description of the sale
	 */
	std::string getLongDescription();

	/*! \brief Set The long description of the sale
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The name of the sale.  Max 40 characters
	 */
	std::string getName();

	/*! \brief Set The name of the sale.  Max 40 characters
	 */
	void setName(std::string  name);
	/*! \brief Get The date the sale ends, null for never.  Unix timestamp in seconds
	 */
	long long getSaleEndDate();

	/*! \brief Set The date the sale ends, null for never.  Unix timestamp in seconds
	 */
	void setSaleEndDate(long long  sale_end_date);
	/*! \brief Get The date the sale begins.  Unix timestamp in seconds
	 */
	long long getSaleStartDate();

	/*! \brief Set The date the sale begins.  Unix timestamp in seconds
	 */
	void setSaleStartDate(long long  sale_start_date);
	/*! \brief Get The short description of the sale.  Max 140 characters
	 */
	std::string getShortDescription();

	/*! \brief Set The short description of the sale.  Max 140 characters
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get The tag this sale applies to.  Leave null to skip this filter (applies to all tags)
	 */
	std::string getTag();

	/*! \brief Set The tag this sale applies to.  Leave null to skip this filter (applies to all tags)
	 */
	void setTag(std::string  tag);
	/*! \brief Get The id of the vendor this sale applies to.  Leave null to skip this filter (applies to all vendors)
	 */
	int getVendor();

	/*! \brief Set The id of the vendor this sale applies to.  Leave null to skip this filter (applies to all vendors)
	 */
	void setVendor(int  vendor);

private:
	std::string currency_code;
	std::string discount_type;
	double discount_value;
	int id;
	int item;
	std::string long_description;
	std::string name;
	long long sale_end_date;
	long long sale_start_date;
	std::string short_description;
	std::string tag;
	int vendor;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CatalogSale_H_ */
