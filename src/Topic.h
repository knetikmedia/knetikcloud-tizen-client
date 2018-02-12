/*
 * Topic.h
 *
 * 
 */

#ifndef _Topic_H_
#define _Topic_H_


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

class Topic : public Object {
public:
	/*! \brief Constructor.
	 */
	Topic();
	Topic(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Topic();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCreatedDate();

	/*! \brief Set 
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get 
	 */
	std::string getDisplayName();

	/*! \brief Set 
	 */
	void setDisplayName(std::string  display_name);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	bool getLocked();

	/*! \brief Set 
	 */
	void setLocked(bool  locked);
	/*! \brief Get 
	 */
	std::list<std::string> getTags();

	/*! \brief Set 
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get 
	 */
	std::string getTopicMap();

	/*! \brief Set 
	 */
	void setTopicMap(std::string  topic_map);
	/*! \brief Get 
	 */
	long long getUpdatedDate();

	/*! \brief Set 
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get 
	 */
	int getUserCount();

	/*! \brief Set 
	 */
	void setUserCount(int  user_count);

private:
	long long created_date;
	std::string display_name;
	std::string id;
	bool locked;
	std::list <std::string>tags;
	std::string topic_map;
	long long updated_date;
	int user_count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Topic_H_ */
