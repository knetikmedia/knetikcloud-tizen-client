/*
 * InvoiceLogEntry.h
 *
 * 
 */

#ifndef _InvoiceLogEntry_H_
#define _InvoiceLogEntry_H_


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

class InvoiceLogEntry : public Object {
public:
	/*! \brief Constructor.
	 */
	InvoiceLogEntry();
	InvoiceLogEntry(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InvoiceLogEntry();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date this event occurred as a unix timestamp in seconds
	 */
	long long getDate();

	/*! \brief Set The date this event occurred as a unix timestamp in seconds
	 */
	void setDate(long long  date);
	/*! \brief Get The ID of the invoice
	 */
	int getInvoiceId();

	/*! \brief Set The ID of the invoice
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get A message describing the event
	 */
	std::string getMessage();

	/*! \brief Set A message describing the event
	 */
	void setMessage(std::string  message);
	/*! \brief Get The type of event
	 */
	std::string getType();

	/*! \brief Set The type of event
	 */
	void setType(std::string  type);

private:
	long long date;
	int invoice_id;
	std::string message;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InvoiceLogEntry_H_ */
