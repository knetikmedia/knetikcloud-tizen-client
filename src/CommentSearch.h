/*
 * CommentSearch.h
 *
 * 
 */

#ifndef _CommentSearch_H_
#define _CommentSearch_H_


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

class CommentSearch : public Object {
public:
	/*! \brief Constructor.
	 */
	CommentSearch();
	CommentSearch(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CommentSearch();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string  content);
	/*! \brief Get 
	 */
	std::string getContext();

	/*! \brief Set 
	 */
	void setContext(std::string  context);
	/*! \brief Get 
	 */
	int getContextId();

	/*! \brief Set 
	 */
	void setContextId(int  context_id);
	/*! \brief Get 
	 */
	long long getId();

	/*! \brief Set 
	 */
	void setId(long long  id);
	/*! \brief Get 
	 */
	int getOwnerId();

	/*! \brief Set 
	 */
	void setOwnerId(int  owner_id);
	/*! \brief Get 
	 */
	std::string getOwnerUsername();

	/*! \brief Set 
	 */
	void setOwnerUsername(std::string  owner_username);

private:
	std::string content;
	std::string context;
	int context_id;
	long long id;
	int owner_id;
	std::string owner_username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CommentSearch_H_ */
