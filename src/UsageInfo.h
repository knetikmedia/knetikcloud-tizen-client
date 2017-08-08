/*
 * UsageInfo.h
 *
 * 
 */

#ifndef _UsageInfo_H_
#define _UsageInfo_H_


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

class UsageInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	UsageInfo();
	UsageInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UsageInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of requests within the range
	 */
	long long getCount();

	/*! \brief Set The number of requests within the range
	 */
	void setCount(long long  count);
	/*! \brief Get The date at the start of the range (see granularity)
	 */
	long long getDate();

	/*! \brief Set The date at the start of the range (see granularity)
	 */
	void setDate(long long  date);
	/*! \brief Get The http method
	 */
	std::string getMethod();

	/*! \brief Set The http method
	 */
	void setMethod(std::string  method);
	/*! \brief Get The url path
	 */
	std::string getUrl();

	/*! \brief Set The url path
	 */
	void setUrl(std::string  url);

private:
	long long count;
	long long date;
	std::string method;
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UsageInfo_H_ */
