/*
 * Fulfillable.h
 *
 * 
 */

#ifndef _Fulfillable_H_
#define _Fulfillable_H_


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

class Fulfillable : public Object {
public:
	/*! \brief Constructor.
	 */
	Fulfillable();
	Fulfillable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Fulfillable();

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
	/*! \brief Get The name of the fulfillment type that describes how the item should be fulfilled.  Examples: inventory, wallet, amazon
	 */
	std::string getTypeName();

	/*! \brief Set The name of the fulfillment type that describes how the item should be fulfilled.  Examples: inventory, wallet, amazon
	 */
	void setTypeName(std::string  type_name);

private:
	std::string description;
	std::string type_hint;
	std::string type_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Fulfillable_H_ */
