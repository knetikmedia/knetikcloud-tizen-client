/*
 * ReactivateSubscriptionRequest.h
 *
 * 
 */

#ifndef _ReactivateSubscriptionRequest_H_
#define _ReactivateSubscriptionRequest_H_


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

class ReactivateSubscriptionRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ReactivateSubscriptionRequest();
	ReactivateSubscriptionRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ReactivateSubscriptionRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The inventory to reactivate. Only required if using the deprecated subscriptions service
	 */
	int getInventoryId();

	/*! \brief Set The inventory to reactivate. Only required if using the deprecated subscriptions service
	 */
	void setInventoryId(int  inventory_id);
	/*! \brief Get Whether to add the additional reactivation fee in addition to the recurring fee
	 */
	bool getReactivationFee();

	/*! \brief Set Whether to add the additional reactivation fee in addition to the recurring fee
	 */
	void setReactivationFee(bool  reactivation_fee);

private:
	int inventory_id;
	bool reactivation_fee;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ReactivateSubscriptionRequest_H_ */
