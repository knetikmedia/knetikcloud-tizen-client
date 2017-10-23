/*
 * PaymentMethodTypeResource.h
 *
 * 
 */

#ifndef _PaymentMethodTypeResource_H_
#define _PaymentMethodTypeResource_H_


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

class PaymentMethodTypeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PaymentMethodTypeResource();
	PaymentMethodTypeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaymentMethodTypeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the payment method type
	 */
	int getId();

	/*! \brief Set The id of the payment method type
	 */
	void setId(int  id);
	/*! \brief Get The maximum timelimit in hours for an invoice in the processing status while waiting on this payment method type. Defaults to the global config invoice.processing_expiration_hours if null
	 */
	int getInvoiceProcessingHours();

	/*! \brief Set The maximum timelimit in hours for an invoice in the processing status while waiting on this payment method type. Defaults to the global config invoice.processing_expiration_hours if null
	 */
	void setInvoiceProcessingHours(int  invoice_processing_hours);
	/*! \brief Get The name of the payment method type
	 */
	std::string getName();

	/*! \brief Set The name of the payment method type
	 */
	void setName(std::string  name);
	/*! \brief Get Whether the payment handler supports the authorize and capture flow
	 */
	bool getSupportsCapture();

	/*! \brief Set Whether the payment handler supports the authorize and capture flow
	 */
	void setSupportsCapture(bool  supports_capture);
	/*! \brief Get Whether the payment handler supports paying for part of an invoice, rather than the full grand_total
	 */
	bool getSupportsPartial();

	/*! \brief Set Whether the payment handler supports paying for part of an invoice, rather than the full grand_total
	 */
	void setSupportsPartial(bool  supports_partial);
	/*! \brief Get Whether the payment handler supports rebilling the method later (for saved payments or subscriptions)
	 */
	bool getSupportsRebill();

	/*! \brief Set Whether the payment handler supports rebilling the method later (for saved payments or subscriptions)
	 */
	void setSupportsRebill(bool  supports_rebill);
	/*! \brief Get Whether the payment handler supports refunding
	 */
	bool getSupportsRefunds();

	/*! \brief Set Whether the payment handler supports refunding
	 */
	void setSupportsRefunds(bool  supports_refunds);

private:
	int id;
	int invoice_processing_hours;
	std::string name;
	bool supports_capture;
	bool supports_partial;
	bool supports_rebill;
	bool supports_refunds;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaymentMethodTypeResource_H_ */
