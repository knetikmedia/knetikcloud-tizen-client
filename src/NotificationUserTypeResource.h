/*
 * NotificationUserTypeResource.h
 *
 * 
 */

#ifndef _NotificationUserTypeResource_H_
#define _NotificationUserTypeResource_H_


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

class NotificationUserTypeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	NotificationUserTypeResource();
	NotificationUserTypeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~NotificationUserTypeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the user has muted direct notification of this type. Notifications can still be retrieved via the api
	 */
	bool getSilenced();

	/*! \brief Set Whether the user has muted direct notification of this type. Notifications can still be retrieved via the api
	 */
	void setSilenced(bool  silenced);
	/*! \brief Get The notification type id
	 */
	std::string getType();

	/*! \brief Set The notification type id
	 */
	void setType(std::string  type);
	/*! \brief Get The user's id
	 */
	int getUserId();

	/*! \brief Set The user's id
	 */
	void setUserId(int  user_id);

private:
	bool silenced;
	std::string type;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _NotificationUserTypeResource_H_ */
