/*
 * InvoiceItemResource.h
 *
 * 
 */

#ifndef _InvoiceItemResource_H_
#define _InvoiceItemResource_H_


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

class InvoiceItemResource : public Object {
public:
	/*! \brief Constructor.
	 */
	InvoiceItemResource();
	InvoiceItemResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InvoiceItemResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getBundleSku();

	/*! \brief Set 
	 */
	void setBundleSku(std::string  bundle_sku);
	/*! \brief Get 
	 */
	std::string getCurrentFulfillmentStatus();

	/*! \brief Set 
	 */
	void setCurrentFulfillmentStatus(std::string  current_fulfillment_status);
	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	int getInvoiceId();

	/*! \brief Set 
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get 
	 */
	int getItemId();

	/*! \brief Set 
	 */
	void setItemId(int  item_id);
	/*! \brief Get 
	 */
	std::string getItemName();

	/*! \brief Set 
	 */
	void setItemName(std::string  item_name);
	/*! \brief Get 
	 */
	long long getOriginalTotalPrice();

	/*! \brief Set 
	 */
	void setOriginalTotalPrice(long long  original_total_price);
	/*! \brief Get 
	 */
	long long getOriginalUnitPrice();

	/*! \brief Set 
	 */
	void setOriginalUnitPrice(long long  original_unit_price);
	/*! \brief Get 
	 */
	int getQty();

	/*! \brief Set 
	 */
	void setQty(int  qty);
	/*! \brief Get 
	 */
	std::string getSaleName();

	/*! \brief Set 
	 */
	void setSaleName(std::string  sale_name);
	/*! \brief Get 
	 */
	std::string getSku();

	/*! \brief Set 
	 */
	void setSku(std::string  sku);
	/*! \brief Get 
	 */
	std::string getSkuDescription();

	/*! \brief Set 
	 */
	void setSkuDescription(std::string  sku_description);
	/*! \brief Get 
	 */
	long long getSystemPrice();

	/*! \brief Set 
	 */
	void setSystemPrice(long long  system_price);
	/*! \brief Get 
	 */
	long long getTotalPrice();

	/*! \brief Set 
	 */
	void setTotalPrice(long long  total_price);
	/*! \brief Get 
	 */
	std::string getTypeHint();

	/*! \brief Set 
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get 
	 */
	long long getUnitPrice();

	/*! \brief Set 
	 */
	void setUnitPrice(long long  unit_price);

private:
	std::string bundle_sku;
	std::string current_fulfillment_status;
	int id;
	int invoice_id;
	int item_id;
	std::string item_name;
	long long original_total_price;
	long long original_unit_price;
	int qty;
	std::string sale_name;
	std::string sku;
	std::string sku_description;
	long long system_price;
	long long total_price;
	std::string type_hint;
	long long unit_price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InvoiceItemResource_H_ */
