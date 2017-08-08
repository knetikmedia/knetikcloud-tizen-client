/*
 * EntitlementGrantRequest.h
 *
 * 
 */

#ifndef _EntitlementGrantRequest_H_
#define _EntitlementGrantRequest_H_


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

class EntitlementGrantRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	EntitlementGrantRequest();
	EntitlementGrantRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~EntitlementGrantRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the entitlement item to grant
	 */
	int getEntitlementId();

	/*! \brief Set The ID of the entitlement item to grant
	 */
	void setEntitlementId(int  entitlement_id);

private:
	int entitlement_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _EntitlementGrantRequest_H_ */
