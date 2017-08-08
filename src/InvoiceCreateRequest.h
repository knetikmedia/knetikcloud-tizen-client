/*
 * InvoiceCreateRequest.h
 *
 * 
 */

#ifndef _InvoiceCreateRequest_H_
#define _InvoiceCreateRequest_H_


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

class InvoiceCreateRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	InvoiceCreateRequest();
	InvoiceCreateRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InvoiceCreateRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The guid of a cart to create a new invoice for
	 */
	std::string getCartGuid();

	/*! \brief Set The guid of a cart to create a new invoice for
	 */
	void setCartGuid(std::string  cart_guid);

private:
	std::string cart_guid;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InvoiceCreateRequest_H_ */
