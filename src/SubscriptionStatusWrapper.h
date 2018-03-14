/*
 * SubscriptionStatusWrapper.h
 *
 * 
 */

#ifndef _SubscriptionStatusWrapper_H_
#define _SubscriptionStatusWrapper_H_


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

class SubscriptionStatusWrapper : public Object {
public:
	/*! \brief Constructor.
	 */
	SubscriptionStatusWrapper();
	SubscriptionStatusWrapper(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubscriptionStatusWrapper();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);

private:
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubscriptionStatusWrapper_H_ */
