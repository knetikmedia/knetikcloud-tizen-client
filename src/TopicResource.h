/*
 * TopicResource.h
 *
 * 
 */

#ifndef _TopicResource_H_
#define _TopicResource_H_


#include <string>
#include <list>
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

class TopicResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TopicResource();
	TopicResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TopicResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The created date of the topic
	 */
	long long getCreatedDate();

	/*! \brief Set The created date of the topic
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The display name of the topic
	 */
	std::string getDisplayName();

	/*! \brief Set The display name of the topic
	 */
	void setDisplayName(std::string  display_name);
	/*! \brief Get The unique ID for this topic
	 */
	std::string getId();

	/*! \brief Set The unique ID for this topic
	 */
	void setId(std::string  id);
	/*! \brief Get Whether this topic is locked or not.
	 */
	bool getLocked();

	/*! \brief Set Whether this topic is locked or not.
	 */
	void setLocked(bool  locked);
	/*! \brief Get Random tags to facilitate search
	 */
	std::list<std::string> getTags();

	/*! \brief Set Random tags to facilitate search
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get The last time the topic was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The last time the topic was updated
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The subscribed user count of the topic
	 */
	int getUserCount();

	/*! \brief Set The subscribed user count of the topic
	 */
	void setUserCount(int  user_count);

private:
	long long created_date;
	std::string display_name;
	std::string id;
	bool locked;
	std::list <std::string>tags;
	long long updated_date;
	int user_count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TopicResource_H_ */
