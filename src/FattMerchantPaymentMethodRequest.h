/*
 * FattMerchantPaymentMethodRequest.h
 *
 * 
 */

#ifndef _FattMerchantPaymentMethodRequest_H_
#define _FattMerchantPaymentMethodRequest_H_


#include <string>
#include "FattMerchantPaymentMethod.h"
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

class FattMerchantPaymentMethodRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	FattMerchantPaymentMethodRequest();
	FattMerchantPaymentMethodRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FattMerchantPaymentMethodRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The FattMerchant payment method being created/updated
	 */
	FattMerchantPaymentMethod getMethod();

	/*! \brief Set The FattMerchant payment method being created/updated
	 */
	void setMethod(FattMerchantPaymentMethod  method);
	/*! \brief Get ID of the JSAPI user for whom the payment method is being created/updated. If ID is not that of the currently logged in user, FATMMERCHANT_ADMIN privilege is required. If ID is null, will use the currently logged in user's ID.
	 */
	int getUserId();

	/*! \brief Set ID of the JSAPI user for whom the payment method is being created/updated. If ID is not that of the currently logged in user, FATMMERCHANT_ADMIN privilege is required. If ID is null, will use the currently logged in user's ID.
	 */
	void setUserId(int  user_id);

private:
	FattMerchantPaymentMethod method;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FattMerchantPaymentMethodRequest_H_ */
