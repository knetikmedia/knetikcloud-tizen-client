/*
 * RefundResource.h
 *
 * 
 */

#ifndef _RefundResource_H_
#define _RefundResource_H_


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

class RefundResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RefundResource();
	RefundResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RefundResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The amount refunded
	 */
	double getAmount();

	/*! \brief Set The amount refunded
	 */
	void setAmount(double  amount);
	/*! \brief Get The id of the refund transaction
	 */
	int getRefundTransactionId();

	/*! \brief Set The id of the refund transaction
	 */
	void setRefundTransactionId(int  refund_transaction_id);
	/*! \brief Get The id of the original transaction
	 */
	int getTransactionId();

	/*! \brief Set The id of the original transaction
	 */
	void setTransactionId(int  transaction_id);

private:
	double amount;
	int refund_transaction_id;
	int transaction_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RefundResource_H_ */
