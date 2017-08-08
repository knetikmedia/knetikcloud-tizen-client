/*
 * DispositionResource.h
 *
 * 
 */

#ifndef _DispositionResource_H_
#define _DispositionResource_H_


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

class DispositionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	DispositionResource();
	DispositionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DispositionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The context of that resource. Required when passed to /dispositions rather than context specific endpoint
	 */
	std::string getContext();

	/*! \brief Set The context of that resource. Required when passed to /dispositions rather than context specific endpoint
	 */
	void setContext(std::string  context);
	/*! \brief Get The context_id of that resource. Required when passed to /dispositions rather than context specific endpoint
	 */
	std::string getContextId();

	/*! \brief Set The context_id of that resource. Required when passed to /dispositions rather than context specific endpoint
	 */
	void setContextId(std::string  context_id);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get The name of the disposition, 1-20 characters. (ex: like/dislike/favorite, etc)
	 */
	std::string getName();

	/*! \brief Set The name of the disposition, 1-20 characters. (ex: like/dislike/favorite, etc)
	 */
	void setName(std::string  name);
	/*! \brief Get The user
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user
	 */
	void setUser(SimpleUserResource  user);

private:
	std::string context;
	std::string context_id;
	long long created_date;
	long long id;
	std::string name;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DispositionResource_H_ */
