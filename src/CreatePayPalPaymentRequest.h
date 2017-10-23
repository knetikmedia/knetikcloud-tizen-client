/*
 * CreatePayPalPaymentRequest.h
 *
 * 
 */

#ifndef _CreatePayPalPaymentRequest_H_
#define _CreatePayPalPaymentRequest_H_


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

class CreatePayPalPaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CreatePayPalPaymentRequest();
	CreatePayPalPaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreatePayPalPaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The endpoint URL to which PayPal should forward the user to if they cancel the checkout process
	 */
	std::string getCancelUrl();

	/*! \brief Set The endpoint URL to which PayPal should forward the user to if they cancel the checkout process
	 */
	void setCancelUrl(std::string  cancel_url);
	/*! \brief Get The ID of an invoice to pay
	 */
	int getInvoiceId();

	/*! \brief Set The ID of an invoice to pay
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The endpoint URL to which PayPal should forward the user after they accept. This endpoint will receive information needed for the next step
	 */
	std::string getReturnUrl();

	/*! \brief Set The endpoint URL to which PayPal should forward the user after they accept. This endpoint will receive information needed for the next step
	 */
	void setReturnUrl(std::string  return_url);

private:
	std::string cancel_url;
	int invoice_id;
	std::string return_url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreatePayPalPaymentRequest_H_ */
