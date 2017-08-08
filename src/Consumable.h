/*
 * Consumable.h
 *
 * 
 */

#ifndef _Consumable_H_
#define _Consumable_H_


#include <string>
#include "Behavior.h"
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

class Consumable : public Object {
public:
	/*! \brief Constructor.
	 */
	Consumable();
	Consumable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Consumable();

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
	/*! \brief Get The maximum number of times an item can be used
	 */
	int getMaxUse();

	/*! \brief Set The maximum number of times an item can be used
	 */
	void setMaxUse(int  max_use);

private:
	std::string description;
	std::string type_hint;
	int max_use;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Consumable_H_ */
