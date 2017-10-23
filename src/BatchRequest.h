/*
 * BatchRequest.h
 *
 * 
 */

#ifndef _BatchRequest_H_
#define _BatchRequest_H_


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

class BatchRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	BatchRequest();
	BatchRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BatchRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The request body as would be passed to the URI
	 */
	std::string getBody();

	/*! \brief Set The request body as would be passed to the URI
	 */
	void setBody(std::string  body);
	/*! \brief Get Content type used, Ex:(application/json)
	 */
	std::string getContentType();

	/*! \brief Set Content type used, Ex:(application/json)
	 */
	void setContentType(std::string  content_type);
	/*! \brief Get The HTTP method used, Ex: (GET)
	 */
	std::string getMethod();

	/*! \brief Set The HTTP method used, Ex: (GET)
	 */
	void setMethod(std::string  method);
	/*! \brief Get Time in seconds before process will timeout.  Default is 60.  Range is 1-300
	 */
	int getTimeout();

	/*! \brief Set Time in seconds before process will timeout.  Default is 60.  Range is 1-300
	 */
	void setTimeout(int  timeout);
	/*! \brief Get The oauth token only
	 */
	std::string getToken();

	/*! \brief Set The oauth token only
	 */
	void setToken(std::string  token);
	/*! \brief Get Full URI of REST call
	 */
	std::string getUri();

	/*! \brief Set Full URI of REST call
	 */
	void setUri(std::string  uri);

private:
	std::string body;
	std::string content_type;
	std::string method;
	int timeout;
	std::string token;
	std::string uri;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BatchRequest_H_ */
