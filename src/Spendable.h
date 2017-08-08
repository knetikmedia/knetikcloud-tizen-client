/*
 * Spendable.h
 *
 * 
 */

#ifndef _Spendable_H_
#define _Spendable_H_


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

class Spendable : public Object {
public:
	/*! \brief Constructor.
	 */
	Spendable();
	Spendable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Spendable();

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
	/*! \brief Get The code of the currency
	 */
	std::string getCurrencyCode();

	/*! \brief Set The code of the currency
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The spendable value
	 */
	int getValue();

	/*! \brief Set The spendable value
	 */
	void setValue(int  value);

private:
	std::string description;
	std::string type_hint;
	std::string currency_code;
	int value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Spendable_H_ */
