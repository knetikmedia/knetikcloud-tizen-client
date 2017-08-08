/*
 * WalletAlterRequest.h
 *
 * 
 */

#ifndef _WalletAlterRequest_H_
#define _WalletAlterRequest_H_


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

class WalletAlterRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	WalletAlterRequest();
	WalletAlterRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WalletAlterRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The amount of currency to add/remove. positive to add, negative to remove
	 */
	double getDelta();

	/*! \brief Set The amount of currency to add/remove. positive to add, negative to remove
	 */
	void setDelta(double  delta);
	/*! \brief Get The id of an invoice to attribute the transaction to
	 */
	int getInvoiceId();

	/*! \brief Set The id of an invoice to attribute the transaction to
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get The admin entered or system generated reason
	 */
	std::string getReason();

	/*! \brief Set The admin entered or system generated reason
	 */
	void setReason(std::string  reason);
	/*! \brief Get The transaction type to allow for search/etc
	 */
	std::string getType();

	/*! \brief Set The transaction type to allow for search/etc
	 */
	void setType(std::string  type);

private:
	double delta;
	int invoice_id;
	std::string reason;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WalletAlterRequest_H_ */
