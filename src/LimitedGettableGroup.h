/*
 * LimitedGettableGroup.h
 *
 * 
 */

#ifndef _LimitedGettableGroup_H_
#define _LimitedGettableGroup_H_


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

class LimitedGettableGroup : public Object {
public:
	/*! \brief Constructor.
	 */
	LimitedGettableGroup();
	LimitedGettableGroup(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LimitedGettableGroup();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether to get active items only
	 */
	bool getActiveOnly();

	/*! \brief Set Whether to get active items only
	 */
	void setActiveOnly(bool  active_only);
	/*! \brief Get The name of the group. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that owned_limit and active_only will be the same for all, but this is not enforced and the item being recieved will use its settings.
	 */
	std::string getName();

	/*! \brief Set The name of the group. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that owned_limit and active_only will be the same for all, but this is not enforced and the item being recieved will use its settings.
	 */
	void setName(std::string  name);
	/*! \brief Get The max number of items that can be purchased
	 */
	int getOwnedLimit();

	/*! \brief Set The max number of items that can be purchased
	 */
	void setOwnedLimit(int  owned_limit);

private:
	bool active_only;
	std::string name;
	int owned_limit;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LimitedGettableGroup_H_ */
