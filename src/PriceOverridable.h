/*
 * PriceOverridable.h
 *
 * 
 */

#ifndef _PriceOverridable_H_
#define _PriceOverridable_H_


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

class PriceOverridable : public Object {
public:
	/*! \brief Constructor.
	 */
	PriceOverridable();
	PriceOverridable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PriceOverridable();

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
	/*! \brief Get The maximum price allowed
	 */
	long long getMaxPrice();

	/*! \brief Set The maximum price allowed
	 */
	void setMaxPrice(long long  max_price);
	/*! \brief Get The minimum price allowed
	 */
	long long getMinPrice();

	/*! \brief Set The minimum price allowed
	 */
	void setMinPrice(long long  min_price);

private:
	std::string description;
	std::string type_hint;
	long long max_price;
	long long min_price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PriceOverridable_H_ */
