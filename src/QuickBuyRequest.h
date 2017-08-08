/*
 * QuickBuyRequest.h
 *
 * 
 */

#ifndef _QuickBuyRequest_H_
#define _QuickBuyRequest_H_


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

class QuickBuyRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickBuyRequest();
	QuickBuyRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickBuyRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get SKU of item being purchased
	 */
	std::string getSku();

	/*! \brief Set SKU of item being purchased
	 */
	void setSku(std::string  sku);
	/*! \brief Get ID of the user making the purchase. If null, currently logged in user will be used.
	 */
	int getUserId();

	/*! \brief Set ID of the user making the purchase. If null, currently logged in user will be used.
	 */
	void setUserId(int  user_id);

private:
	std::string sku;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickBuyRequest_H_ */
