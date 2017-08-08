/*
 * FlagReportResource.h
 *
 * 
 */

#ifndef _FlagReportResource_H_
#define _FlagReportResource_H_


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

class FlagReportResource : public Object {
public:
	/*! \brief Constructor.
	 */
	FlagReportResource();
	FlagReportResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FlagReportResource();

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
	/*! \brief Get The context ID of that resource
	 */
	std::string getContextId();

	/*! \brief Set The context ID of that resource
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
	/*! \brief Get The reason of that resource required only in case of active resolution
	 */
	std::string getReason();

	/*! \brief Set The reason of that resource required only in case of active resolution
	 */
	void setReason(std::string  reason);
	/*! \brief Get The resolution of that resource
	 */
	std::string getResolution();

	/*! \brief Set The resolution of that resource
	 */
	void setResolution(std::string  resolution);
	/*! \brief Get The date/time this report was resolved in seconds since epoch. Null if not resolved yet
	 */
	long long getResolved();

	/*! \brief Set The date/time this report was resolved in seconds since epoch. Null if not resolved yet
	 */
	void setResolved(long long  resolved);
	/*! \brief Get The date/time this resource was last updated in seconds since epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::string context;
	std::string context_id;
	long long created_date;
	long long id;
	std::string reason;
	std::string resolution;
	long long resolved;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FlagReportResource_H_ */
