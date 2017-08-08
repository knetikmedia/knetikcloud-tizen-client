/*
 * ApplyPaymentRequest.h
 *
 * 
 */

#ifndef _ApplyPaymentRequest_H_
#define _ApplyPaymentRequest_H_


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

class ApplyPaymentRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ApplyPaymentRequest();
	ApplyPaymentRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ApplyPaymentRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the local invoice being paid.
	 */
	int getInvoiceId();

	/*! \brief Set The id of the local invoice being paid.
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The encoded receipt string from Apple's services.
	 */
	std::string getReceipt();

	/*! \brief Set The encoded receipt string from Apple's services.
	 */
	void setReceipt(std::string  receipt);
	/*! \brief Get The id of the specific transaction from Apple's services.
	 */
	std::string getTransactionId();

	/*! \brief Set The id of the specific transaction from Apple's services.
	 */
	void setTransactionId(std::string  transaction_id);

private:
	int invoice_id;
	std::string receipt;
	std::string transaction_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ApplyPaymentRequest_H_ */
