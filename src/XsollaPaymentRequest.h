/*
 * XsollaPaymentRequest.h
 *
 * 
 */

#ifndef _XsollaPaymentRequest_H_
#define _XsollaPaymentRequest_H_


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

class XsollaPaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	XsollaPaymentRequest();
	XsollaPaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~XsollaPaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of an invoice to pay
	 */
	int getInvoiceId();

	/*! \brief Set The id of an invoice to pay
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The endpoint URL xsolla should forward the user to after they pay
	 */
	std::string getReturnUrl();

	/*! \brief Set The endpoint URL xsolla should forward the user to after they pay
	 */
	void setReturnUrl(std::string  return_url);

private:
	int invoice_id;
	std::string return_url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _XsollaPaymentRequest_H_ */
