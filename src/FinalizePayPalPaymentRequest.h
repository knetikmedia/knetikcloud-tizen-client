/*
 * FinalizePayPalPaymentRequest.h
 *
 * 
 */

#ifndef _FinalizePayPalPaymentRequest_H_
#define _FinalizePayPalPaymentRequest_H_


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

class FinalizePayPalPaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	FinalizePayPalPaymentRequest();
	FinalizePayPalPaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FinalizePayPalPaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the invoice that is being paid. Must match the invoice sent in originally
	 */
	int getInvoiceId();

	/*! \brief Set The ID of the invoice that is being paid. Must match the invoice sent in originally
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The ID of the payer that PayPal returned with the user at the return URL
	 */
	std::string getPayerId();

	/*! \brief Set The ID of the payer that PayPal returned with the user at the return URL
	 */
	void setPayerId(std::string  payer_id);
	/*! \brief Get The token that PayPal returned with the user in the return URL
	 */
	std::string getToken();

	/*! \brief Set The token that PayPal returned with the user in the return URL
	 */
	void setToken(std::string  token);

private:
	int invoice_id;
	std::string payer_id;
	std::string token;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FinalizePayPalPaymentRequest_H_ */
