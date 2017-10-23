/*
 * CartItemRequest.h
 *
 * 
 */

#ifndef _CartItemRequest_H_
#define _CartItemRequest_H_


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

class CartItemRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CartItemRequest();
	CartItemRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CartItemRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The affiliate key of the item
	 */
	std::string getAffiliateKey();

	/*! \brief Set The affiliate key of the item
	 */
	void setAffiliateKey(std::string  affiliate_key);
	/*! \brief Get The catalog SKU of the item
	 */
	std::string getCatalogSku();

	/*! \brief Set The catalog SKU of the item
	 */
	void setCatalogSku(std::string  catalog_sku);
	/*! \brief Get Allows to override the price of an item, if the behavior configuration permits it
	 */
	long long getPriceOverride();

	/*! \brief Set Allows to override the price of an item, if the behavior configuration permits it
	 */
	void setPriceOverride(long long  price_override);
	/*! \brief Get The quantity of the item
	 */
	int getQuantity();

	/*! \brief Set The quantity of the item
	 */
	void setQuantity(int  quantity);

private:
	std::string affiliate_key;
	std::string catalog_sku;
	long long price_override;
	int quantity;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CartItemRequest_H_ */
