/*
 * BatchReturn.h
 *
 * 
 */

#ifndef _BatchReturn_H_
#define _BatchReturn_H_


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

class BatchReturn : public Object {
public:
	/*! \brief Constructor.
	 */
	BatchReturn();
	BatchReturn(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BatchReturn();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The result body
	 */
	std::string getBody();

	/*! \brief Set The result body
	 */
	void setBody(std::string  body);
	/*! \brief Get The HTTP response code
	 */
	int getCode();

	/*! \brief Set The HTTP response code
	 */
	void setCode(int  code);
	/*! \brief Get Full URI of REST call
	 */
	std::string getUri();

	/*! \brief Set Full URI of REST call
	 */
	void setUri(std::string  uri);

private:
	std::string body;
	int code;
	std::string uri;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BatchReturn_H_ */
