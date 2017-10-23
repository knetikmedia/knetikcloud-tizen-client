/*
 * Behavior.h
 *
 * 
 */

#ifndef _Behavior_H_
#define _Behavior_H_


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

class Behavior : public Object {
public:
	/*! \brief Constructor.
	 */
	Behavior();
	Behavior(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Behavior();

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

private:
	std::string description;
	std::string type_hint;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Behavior_H_ */
