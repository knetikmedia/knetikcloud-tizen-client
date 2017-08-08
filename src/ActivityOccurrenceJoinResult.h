/*
 * ActivityOccurrenceJoinResult.h
 *
 * 
 */

#ifndef _ActivityOccurrenceJoinResult_H_
#define _ActivityOccurrenceJoinResult_H_


#include <string>
#include "ActivityEntitlementResource.h"
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

class ActivityOccurrenceJoinResult : public Object {
public:
	/*! \brief Constructor.
	 */
	ActivityOccurrenceJoinResult();
	ActivityOccurrenceJoinResult(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActivityOccurrenceJoinResult();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The details on the entitlement object needed to enter the occurrence (if any)
	 */
	ActivityEntitlementResource getEntitlement();

	/*! \brief Set The details on the entitlement object needed to enter the occurrence (if any)
	 */
	void setEntitlement(ActivityEntitlementResource  entitlement);
	/*! \brief Get Zero if the user was/could be added to the occurrence. Jsapi error code indicating the reason of the failure otherwise
	 */
	int getErrorCode();

	/*! \brief Set Zero if the user was/could be added to the occurrence. Jsapi error code indicating the reason of the failure otherwise
	 */
	void setErrorCode(int  error_code);
	/*! \brief Get An error message if failure
	 */
	std::string getMessage();

	/*! \brief Set An error message if failure
	 */
	void setMessage(std::string  message);
	/*! \brief Get The user's id
	 */
	long long getUserId();

	/*! \brief Set The user's id
	 */
	void setUserId(long long  user_id);

private:
	ActivityEntitlementResource entitlement;
	int error_code;
	std::string message;
	long long user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActivityOccurrenceJoinResult_H_ */
