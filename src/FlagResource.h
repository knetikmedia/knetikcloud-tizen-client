/*
 * FlagResource.h
 *
 * 
 */

#ifndef _FlagResource_H_
#define _FlagResource_H_


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

class FlagResource : public Object {
public:
	/*! \brief Constructor.
	 */
	FlagResource();
	FlagResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FlagResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The context of that resource
	 */
	std::string getContext();

	/*! \brief Set The context of that resource
	 */
	void setContext(std::string  context);
	/*! \brief Get The context_id of that resource
	 */
	std::string getContextId();

	/*! \brief Set The context_id of that resource
	 */
	void setContextId(std::string  context_id);
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
	/*! \brief Get The flag reason of that resource
	 */
	std::string getReason();

	/*! \brief Set The flag reason of that resource
	 */
	void setReason(std::string  reason);
	/*! \brief Get The date/time this resource was last updated in seconds since epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since epoch
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The basic user resource
	 */
	SimpleUserResource getUser();

	/*! \brief Set The basic user resource
	 */
	void setUser(SimpleUserResource  user);

private:
	std::string context;
	std::string context_id;
	long long created_date;
	long long id;
	std::string reason;
	long long updated_date;
	SimpleUserResource user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FlagResource_H_ */
