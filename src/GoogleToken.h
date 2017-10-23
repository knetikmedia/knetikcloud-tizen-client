/*
 * GoogleToken.h
 *
 * 
 */

#ifndef _GoogleToken_H_
#define _GoogleToken_H_


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

class GoogleToken : public Object {
public:
	/*! \brief Constructor.
	 */
	GoogleToken();
	GoogleToken(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GoogleToken();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A valid authorization code from google. See google documention for how to obtain one.
	 */
	std::string getAuthorizationCode();

	/*! \brief Set A valid authorization code from google. See google documention for how to obtain one.
	 */
	void setAuthorizationCode(std::string  authorization_code);

private:
	std::string authorization_code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GoogleToken_H_ */
