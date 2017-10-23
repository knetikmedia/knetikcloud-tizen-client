/*
 * UserItemLogResource.h
 *
 * 
 */

#ifndef _UserItemLogResource_H_
#define _UserItemLogResource_H_


#include <string>
#include "SimpleReferenceResource«int».h"
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

class UserItemLogResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserItemLogResource();
	UserItemLogResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserItemLogResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The log entry id
	 */
	int getId();

	/*! \brief Set The log entry id
	 */
	void setId(int  id);
	/*! \brief Get Additional information defined by the type
	 */
	std::string getInfo();

	/*! \brief Set Additional information defined by the type
	 */
	void setInfo(std::string  info);
	/*! \brief Get The item interacted with
	 */
	SimpleReferenceResource«int» getItem();

	/*! \brief Set The item interacted with
	 */
	void setItem(SimpleReferenceResource«int»  item);
	/*! \brief Get The date/time this event occurred in seconds since epoch
	 */
	long long getLogDate();

	/*! \brief Set The date/time this event occurred in seconds since epoch
	 */
	void setLogDate(long long  log_date);
	/*! \brief Get The type of event
	 */
	std::string getType();

	/*! \brief Set The type of event
	 */
	void setType(std::string  type);
	/*! \brief Get The user making the interaction
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user making the interaction
	 */
	void setUser(SimpleUserResource  user);
	/*! \brief Get The id of the inventory entry this event is related to, if any
	 */
	int getUserInventory();

	/*! \brief Set The id of the inventory entry this event is related to, if any
	 */
	void setUserInventory(int  user_inventory);

private:
	int id;
	std::string info;
	SimpleReferenceResource«int» item;
	long long log_date;
	std::string type;
	SimpleUserResource user;
	int user_inventory;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserItemLogResource_H_ */
