/*
 * GooglePaymentRequest.h
 *
 * 
 */

#ifndef _GooglePaymentRequest_H_
#define _GooglePaymentRequest_H_


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

class GooglePaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	GooglePaymentRequest();
	GooglePaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GooglePaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The json payload exactly as sent from Google
	 */
	std::string getJsonPayload();

	/*! \brief Set The json payload exactly as sent from Google
	 */
	void setJsonPayload(std::string  json_payload);
	/*! \brief Get The signature from Google to verify the payload
	 */
	std::string getSignature();

	/*! \brief Set The signature from Google to verify the payload
	 */
	void setSignature(std::string  signature);

private:
	std::string json_payload;
	std::string signature;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GooglePaymentRequest_H_ */
