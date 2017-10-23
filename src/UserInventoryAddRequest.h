/*
 * UserInventoryAddRequest.h
 *
 * 
 */

#ifndef _UserInventoryAddRequest_H_
#define _UserInventoryAddRequest_H_


#include <string>
#include <list>
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

class UserInventoryAddRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	UserInventoryAddRequest();
	UserInventoryAddRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserInventoryAddRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A note to be passed to the invoice or transaction
	 */
	std::string getNote();

	/*! \brief Set A note to be passed to the invoice or transaction
	 */
	void setNote(std::string  note);
	/*! \brief Get A list of behaviors to ignore explicitely.  Ex: 'limited_gettable'
	 */
	std::list<std::string> getOverrides();

	/*! \brief Set A list of behaviors to ignore explicitely.  Ex: 'limited_gettable'
	 */
	void setOverrides(std::list <std::string> overrides);
	/*! \brief Get If set to true will cause the endpoint to skip creation of cart and invoice to track the inventory change
	 */
	bool getSkipInvoice();

	/*! \brief Set If set to true will cause the endpoint to skip creation of cart and invoice to track the inventory change
	 */
	void setSkipInvoice(bool  skip_invoice);
	/*! \brief Get The specific SKU of the item to be added to the inventory
	 */
	std::string getSku();

	/*! \brief Set The specific SKU of the item to be added to the inventory
	 */
	void setSku(std::string  sku);

private:
	std::string note;
	std::list <std::string>overrides;
	bool skip_invoice;
	std::string sku;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserInventoryAddRequest_H_ */
