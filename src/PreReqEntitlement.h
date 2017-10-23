/*
 * PreReqEntitlement.h
 *
 * 
 */

#ifndef _PreReqEntitlement_H_
#define _PreReqEntitlement_H_


#include <string>
#include "Behavior.h"
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

class PreReqEntitlement : public Object {
public:
	/*! \brief Constructor.
	 */
	PreReqEntitlement();
	PreReqEntitlement(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PreReqEntitlement();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get Used for polymorphic type recognition and thus must match an expected type with additional properties
	 */
	std::string getTypeHint();

	/*! \brief Set Used for polymorphic type recognition and thus must match an expected type with additional properties
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get The item ids that must already be in the user's inventory
	 */
	std::list<int> getItemIds();

	/*! \brief Set The item ids that must already be in the user's inventory
	 */
	void setItemIds(std::list <int> item_ids);

private:
	std::string description;
	std::string type_hint;
	std::list <int>item_ids;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PreReqEntitlement_H_ */
