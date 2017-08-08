/*
 * ActivityEntitlementResource.h
 *
 * 
 */

#ifndef _ActivityEntitlementResource_H_
#define _ActivityEntitlementResource_H_


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

class ActivityEntitlementResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityEntitlementResource();
	ActivityEntitlementResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityEntitlementResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ISO3 currency code the price is in, if available
	 */
	std::string getCurrencyCode();

	/*! \brief Set The ISO3 currency code the price is in, if available
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The id of the entitlement item
	 */
	int getItemId();

	/*! \brief Set The id of the entitlement item
	 */
	void setItemId(int  item_id);
	/*! \brief Get The name of the entitlement item
	 */
	std::string getName();

	/*! \brief Set The name of the entitlement item
	 */
	void setName(std::string  name);
	/*! \brief Get The price of the sku, if available
	 */
	double getPrice();

	/*! \brief Set The price of the sku, if available
	 */
	void setPrice(double  price);
	/*! \brief Get The sku id, if available. If multiple are available, then first one is returned
	 */
	std::string getSku();

	/*! \brief Set The sku id, if available. If multiple are available, then first one is returned
	 */
	void setSku(std::string  sku);

private:
	std::string currency_code;
	int item_id;
	std::string name;
	double price;
	std::string sku;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityEntitlementResource_H_ */
