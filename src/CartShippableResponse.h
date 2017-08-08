/*
 * CartShippableResponse.h
 *
 * 
 */

#ifndef _CartShippableResponse_H_
#define _CartShippableResponse_H_


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

class CartShippableResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	CartShippableResponse();
	CartShippableResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CartShippableResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the cart
	 */
	int getCartId();

	/*! \brief Set The id of the cart
	 */
	void setCartId(int  cart_id);
	/*! \brief Get Whether the item is shippable
	 */
	bool getShippable();

	/*! \brief Set Whether the item is shippable
	 */
	void setShippable(bool  shippable);

private:
	int cart_id;
	bool shippable;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CartShippableResponse_H_ */
