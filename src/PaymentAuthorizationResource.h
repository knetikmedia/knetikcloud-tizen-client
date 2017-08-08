/*
 * PaymentAuthorizationResource.h
 *
 * 
 */

#ifndef _PaymentAuthorizationResource_H_
#define _PaymentAuthorizationResource_H_


#include <string>
#include "SimpleReferenceResource«int».h"
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

class PaymentAuthorizationResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PaymentAuthorizationResource();
	PaymentAuthorizationResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaymentAuthorizationResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether this authorization has been captured
	 */
	bool getCaptured();

	/*! \brief Set Whether this authorization has been captured
	 */
	void setCaptured(bool  captured);
	/*! \brief Get The date this authorization was received, unix timestamp in seconds
	 */
	long long getCreated();

	/*! \brief Set The date this authorization was received, unix timestamp in seconds
	 */
	void setCreated(long long  created);
	/*! \brief Get The details for this authorization. Format dependent on payment provider
	 */
	std::string getDetails();

	/*! \brief Set The details for this authorization. Format dependent on payment provider
	 */
	void setDetails(std::string  details);
	/*! \brief Get The id of the authorization
	 */
	int getId();

	/*! \brief Set The id of the authorization
	 */
	void setId(int  id);
	/*! \brief Get The invoice this authorization is intended to pay
	 */
	int getInvoice();

	/*! \brief Set The invoice this authorization is intended to pay
	 */
	void setInvoice(int  invoice);
	/*! \brief Get The payment type (which provider) this payment is through
	 */
	SimpleReferenceResource«int» getPaymentType();

	/*! \brief Set The payment type (which provider) this payment is through
	 */
	void setPaymentType(SimpleReferenceResource«int»  payment_type);

private:
	bool captured;
	long long created;
	std::string details;
	int id;
	int invoice;
	SimpleReferenceResource«int» payment_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaymentAuthorizationResource_H_ */
