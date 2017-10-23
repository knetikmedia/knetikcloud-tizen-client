/*
 * SubscriptionCreditResource.h
 *
 * 
 */

#ifndef _SubscriptionCreditResource_H_
#define _SubscriptionCreditResource_H_


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

class SubscriptionCreditResource : public Object {
public:
	/*! \brief Constructor.
	 */
	SubscriptionCreditResource();
	SubscriptionCreditResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubscriptionCreditResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The amount of the credit, negative for debt
	 */
	long long getAmount();

	/*! \brief Set The amount of the credit, negative for debt
	 */
	void setAmount(long long  amount);
	/*! \brief Get The date this credit was added, unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date this credit was added, unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the credit record
	 */
	int getId();

	/*! \brief Set The id of the credit record
	 */
	void setId(int  id);
	/*! \brief Get The id of the subscription inventory entry
	 */
	int getInventoryId();

	/*! \brief Set The id of the subscription inventory entry
	 */
	void setInventoryId(int  inventory_id);
	/*! \brief Get The reason for the subscription credit
	 */
	std::string getReason();

	/*! \brief Set The reason for the subscription credit
	 */
	void setReason(std::string  reason);

private:
	long long amount;
	long long created_date;
	int id;
	int inventory_id;
	std::string reason;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubscriptionCreditResource_H_ */
