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
	/*! \brief Get The name of the payment method type
	 */
	std::string getName();

	/*! \brief Set The name of the payment method type
	 */
	void setName(std::string  name);

private:
	int id;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaymentMethodTypeResource_H_ */
