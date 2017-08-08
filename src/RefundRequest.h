/*
 * RefundRequest.h
 *
 * 
 */

#ifndef _RefundRequest_H_
#define _RefundRequest_H_


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

class RefundRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	RefundRequest();
	RefundRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RefundRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The amount to refund. If left off, will refund the remaining balance of the transaction or specific item balance (if SKU provided), whichever is less.
	 */
	double getAmount();

	/*! \brief Set The amount to refund. If left off, will refund the remaining balance of the transaction or specific item balance (if SKU provided), whichever is less.
	 */
	void setAmount(double  amount);
	/*! \brief Get The SKU of a bundle item from the invoice that the target item is within.
	 */
	std::string getBundleSku();

	/*! \brief Set The SKU of a bundle item from the invoice that the target item is within.
	 */
	void setBundleSku(std::string  bundle_sku);
	/*! \brief Get Notes about or reason for the refund
	 */
	std::string getNotes();

	/*! \brief Set Notes about or reason for the refund
	 */
	void setNotes(std::string  notes);
	/*! \brief Get The SKU of a specific item from the invoice to refund. Affects the maximum refund amount (not to exceed the price of this item times quantity on invoice). Transaction must be tied to an invoice if used.
	 */
	std::string getSku();

	/*! \brief Set The SKU of a specific item from the invoice to refund. Affects the maximum refund amount (not to exceed the price of this item times quantity on invoice). Transaction must be tied to an invoice if used.
	 */
	void setSku(std::string  sku);

private:
	double amount;
	std::string bundle_sku;
	std::string notes;
	std::string sku;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RefundRequest_H_ */
