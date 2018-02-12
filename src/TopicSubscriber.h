/*
 * TopicSubscriber.h
 *
 * 
 */

#ifndef _TopicSubscriber_H_
#define _TopicSubscriber_H_


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

class TopicSubscriber : public Object {
public:
	/*! \brief Constructor.
	 */
	TopicSubscriber();
	TopicSubscriber(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TopicSubscriber();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getDisabled();

	/*! \brief Set 
	 */
	void setDisabled(bool  disabled);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	long long getJoinDate();

	/*! \brief Set 
	 */
	void setJoinDate(long long  join_date);
	/*! \brief Get 
	 */
	std::string getMobileNumber();

	/*! \brief Set 
	 */
	void setMobileNumber(std::string  mobile_number);
	/*! \brief Get 
	 */
	std::string getTopicId();

	/*! \brief Set 
	 */
	void setTopicId(std::string  topic_id);
	/*! \brief Get 
	 */
	std::string getTopicSubscriberMap();

	/*! \brief Set 
	 */
	void setTopicSubscriberMap(std::string  topic_subscriber_map);
	/*! \brief Get 
	 */
	int getUserId();

	/*! \brief Set 
	 */
	void setUserId(int  user_id);
	/*! \brief Get 
	 */
	std::string getUsername();

	/*! \brief Set 
	 */
	void setUsername(std::string  username);

private:
	bool disabled;
	std::string email;
	long long join_date;
	std::string mobile_number;
	std::string topic_id;
	std::string topic_subscriber_map;
	int user_id;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TopicSubscriber_H_ */
