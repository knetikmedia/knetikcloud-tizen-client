/*
 * TopicSubscriberResource.h
 *
 * 
 */

#ifndef _TopicSubscriberResource_H_
#define _TopicSubscriberResource_H_


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

class TopicSubscriberResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TopicSubscriberResource();
	TopicSubscriberResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TopicSubscriberResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the user has disabled messages from the topic
	 */
	bool getDisabled();

	/*! \brief Set Whether the user has disabled messages from the topic
	 */
	void setDisabled(bool  disabled);
	/*! \brief Get The ID for this topic
	 */
	std::string getTopicId();

	/*! \brief Set The ID for this topic
	 */
	void setTopicId(std::string  topic_id);
	/*! \brief Get The user ID subscribed to the topic
	 */
	int getUserId();

	/*! \brief Set The user ID subscribed to the topic
	 */
	void setUserId(int  user_id);
	/*! \brief Get The username subscribed to the topic
	 */
	std::string getUsername();

	/*! \brief Set The username subscribed to the topic
	 */
	void setUsername(std::string  username);

private:
	bool disabled;
	std::string topic_id;
	int user_id;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TopicSubscriberResource_H_ */
