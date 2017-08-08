/*
 * BundledSku.h
 *
 * 
 */

#ifndef _BundledSku_H_
#define _BundledSku_H_


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

class BundledSku : public Object {
public:
	/*! \brief Constructor.
	 */
	BundledSku();
	BundledSku(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BundledSku();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The amount this item will cost inside the bundle instead of its regular price
	 */
	double getPriceOverride();

	/*! \brief Set The amount this item will cost inside the bundle instead of its regular price
	 */
	void setPriceOverride(double  price_override);
	/*! \brief Get The quantity of this item within the bundle
	 */
	int getQuantity();

	/*! \brief Set The quantity of this item within the bundle
	 */
	void setQuantity(int  quantity);
	/*! \brief Get The stock keeping unit (SKU) for an item included in the bundle
	 */
	std::string getSku();

	/*! \brief Set The stock keeping unit (SKU) for an item included in the bundle
	 */
	void setSku(std::string  sku);

private:
	double price_override;
	int quantity;
	std::string sku;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BundledSku_H_ */
