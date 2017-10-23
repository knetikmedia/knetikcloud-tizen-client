/*
 * SkuRequest.h
 *
 * 
 */

#ifndef _SkuRequest_H_
#define _SkuRequest_H_


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

class SkuRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	SkuRequest();
	SkuRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SkuRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get SKU code of the item
	 */
	std::string getSku();

	/*! \brief Set SKU code of the item
	 */
	void setSku(std::string  sku);

private:
	std::string sku;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SkuRequest_H_ */
