/*
 * SubscriptionPriceOverrideRequest.h
 *
 * 
 */

#ifndef _SubscriptionPriceOverrideRequest_H_
#define _SubscriptionPriceOverrideRequest_H_


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

class SubscriptionPriceOverrideRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	SubscriptionPriceOverrideRequest();
	SubscriptionPriceOverrideRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubscriptionPriceOverrideRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The recurring price that has been set to override the base price. Null if not overriding
	 */
	double getNewPrice();

	/*! \brief Set The recurring price that has been set to override the base price. Null if not overriding
	 */
	void setNewPrice(double  new_price);
	/*! \brief Get An explanation for the reason the price is being overridden
	 */
	std::string getReason();

	/*! \brief Set An explanation for the reason the price is being overridden
	 */
	void setReason(std::string  reason);

private:
	double new_price;
	std::string reason;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubscriptionPriceOverrideRequest_H_ */
