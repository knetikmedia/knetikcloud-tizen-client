/*
 * UserInventoryResource.h
 *
 * 
 */

#ifndef _UserInventoryResource_H_
#define _UserInventoryResource_H_


#include <string>
#include "SimpleUserResource.h"
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

class UserInventoryResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserInventoryResource();
	UserInventoryResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserInventoryResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of data for behaviors
	 */
	std::string getBehaviorData();

	/*! \brief Set A map of data for behaviors
	 */
	void setBehaviorData(std::string  behavior_data);
	/*! \brief Get The date/time this resource was created in seconds since epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The date/time this resource exires in seconds since epoch. Null for no expiration. For subscriptions, this is the end of the 'grace period' if left unpaid
	 */
	long long getExpires();

	/*! \brief Set The date/time this resource exires in seconds since epoch. Null for no expiration. For subscriptions, this is the end of the 'grace period' if left unpaid
	 */
	void setExpires(long long  expires);
	/*! \brief Get The id of the inventory
	 */
	int getId();

	/*! \brief Set The id of the inventory
	 */
	void setId(int  id);
	/*! \brief Get The id of the invoice that resulted in this inventory, if any
	 */
	int getInvoiceId();

	/*! \brief Set The id of the invoice that resulted in this inventory, if any
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The id of the item
	 */
	int getItemId();

	/*! \brief Set The id of the item
	 */
	void setItemId(int  item_id);
	/*! \brief Get The name of the item
	 */
	std::string getItemName();

	/*! \brief Set The name of the item
	 */
	void setItemName(std::string  item_name);
	/*! \brief Get The type hint of the item
	 */
	std::string getItemTypeHint();

	/*! \brief Set The type hint of the item
	 */
	void setItemTypeHint(std::string  item_type_hint);
	/*! \brief Get The status of the inventory. Pending inventory is not yet ready for use. Inactive inventory has expired or been used up
	 */
	std::string getStatus();

	/*! \brief Set The status of the inventory. Pending inventory is not yet ready for use. Inactive inventory has expired or been used up
	 */
	void setStatus(std::string  status);
	/*! \brief Get The date/time this resource was last updated in seconds since epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since epoch
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The id of the user this inventory belongs to
	 */
	SimpleUserResource getUser();

	/*! \brief Set The id of the user this inventory belongs to
	 */
	void setUser(SimpleUserResource  user);

private:
	std::string behavior_data;
	long long created_date;
	long long expires;
	int id;
	int invoice_id;
	int item_id;
	std::string item_name;
	std::string item_type_hint;
	std::string status;
	long long updated_date;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserInventoryResource_H_ */
