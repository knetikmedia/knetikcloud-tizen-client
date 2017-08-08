/*
 * FacebookToken.h
 *
 * 
 */

#ifndef _FacebookToken_H_
#define _FacebookToken_H_


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

class FacebookToken : public Object {
public:
	/*! \brief Constructor.
	 */
	FacebookToken();
	FacebookToken(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FacebookToken();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A valid access token from facebook. See facebook documention for how to obtain one.
	 */
	std::string getAccessToken();

	/*! \brief Set A valid access token from facebook. See facebook documention for how to obtain one.
	 */
	void setAccessToken(std::string  access_token);

private:
	std::string access_token;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FacebookToken_H_ */
