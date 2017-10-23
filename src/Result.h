/*
 * Result.h
 *
 * 
 */

#ifndef _Result_H_
#define _Result_H_


#include <string>
#include "ErrorResource.h"
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

class Result : public Object {
public:
	/*! \brief Constructor.
	 */
	Result();
	Result(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Result();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The JSAPI error code
	 */
	int getCode();

	/*! \brief Set The JSAPI error code
	 */
	void setCode(int  code);
	/*! \brief Get The id used for debugging lookup
	 */
	std::string getRequestId();

	/*! \brief Set The id used for debugging lookup
	 */
	void setRequestId(std::string  request_id);
	/*! \brief Get The error object
	 */
	std::list<ErrorResource> getResult();

	/*! \brief Set The error object
	 */
	void setResult(std::list <ErrorResource> result);

private:
	int code;
	std::string request_id;
	std::list <ErrorResource>result;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Result_H_ */
