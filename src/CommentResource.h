/*
 * CommentResource.h
 *
 * 
 */

#ifndef _CommentResource_H_
#define _CommentResource_H_


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

class CommentResource : public Object {
public:
	/*! \brief Constructor.
	 */
	CommentResource();
	CommentResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CommentResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The comment content of that resource
	 */
	std::string getContent();

	/*! \brief Set The comment content of that resource
	 */
	void setContent(std::string  content);
	/*! \brief Get The type of object this comment applies to (ex: video, article, etc). Required when passed to /comments
	 */
	std::string getContext();

	/*! \brief Set The type of object this comment applies to (ex: video, article, etc). Required when passed to /comments
	 */
	void setContext(std::string  context);
	/*! \brief Get The id of the object this comment applies to.  Required when passed to /comments
	 */
	int getContextId();

	/*! \brief Set The id of the object this comment applies to.  Required when passed to /comments
	 */
	void setContextId(int  context_id);
	/*! \brief Get The date/time this resource was created in seconds since epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get The summary of that resource
	 */
	std::string getSummary();

	/*! \brief Set The summary of that resource
	 */
	void setSummary(std::string  summary);
	/*! \brief Get The date/time this resource was last updated in seconds since epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since epoch
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The user who created the comment
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user who created the comment
	 */
	void setUser(SimpleUserResource  user);

private:
	std::string content;
	std::string context;
	int context_id;
	long long created_date;
	long long id;
	std::string summary;
	long long updated_date;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CommentResource_H_ */
