/*
 * InvoicePaymentStatusRequest.h
 *
 * 
 */

#ifndef _InvoicePaymentStatusRequest_H_
#define _InvoicePaymentStatusRequest_H_


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

class InvoicePaymentStatusRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	InvoicePaymentStatusRequest();
	InvoicePaymentStatusRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InvoicePaymentStatusRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get If included, will set the payment method used on the invoice
	 */
	int getPaymentMethodId();

	/*! \brief Set If included, will set the payment method used on the invoice
	 */
	void setPaymentMethodId(int  payment_method_id);
	/*! \brief Get The new status for the invoice. Additional options may be available based on configuration.  Allowable values: 'new', 'paid', 'hold', 'canceled', 'payment failed', 'partial refund', 'refund'
	 */
	std::string getStatus();

	/*! \brief Set The new status for the invoice. Additional options may be available based on configuration.  Allowable values: 'new', 'paid', 'hold', 'canceled', 'payment failed', 'partial refund', 'refund'
	 */
	void setStatus(std::string  status);

private:
	int payment_method_id;
	std::string status;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InvoicePaymentStatusRequest_H_ */
