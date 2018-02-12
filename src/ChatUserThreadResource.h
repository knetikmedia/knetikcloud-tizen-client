/*
 * ChatUserThreadResource.h
 *
 * 
 */

#ifndef _ChatUserThreadResource_H_
#define _ChatUserThreadResource_H_


#include <string>
#include "ChatThreadResource.h"
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

class ChatUserThreadResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChatUserThreadResource();
	ChatUserThreadResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChatUserThreadResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date the user thread was created
	 */
	long long getCreatedDate();

	/*! \brief Set The date the user thread was created
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The number of messages read in the thread
	 */
	int getReadCount();

	/*! \brief Set The number of messages read in the thread
	 */
	void setReadCount(int  read_count);
	/*! \brief Get The details about the thread
	 */
	ChatThreadResource getThread();

	/*! \brief Set The details about the thread
	 */
	void setThread(ChatThreadResource  thread);
	/*! \brief Get The id of the thread
	 */
	std::string getThreadId();

	/*! \brief Set The id of the thread
	 */
	void setThreadId(std::string  thread_id);
	/*! \brief Get The date the user thread was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the user thread was updated
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The id of the user
	 */
	int getUserId();

	/*! \brief Set The id of the user
	 */
	void setUserId(int  user_id);

private:
	long long created_date;
	int read_count;
	ChatThreadResource thread;
	std::string thread_id;
	long long updated_date;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChatUserThreadResource_H_ */
