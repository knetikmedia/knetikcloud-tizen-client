/*
 * Discount.h
 *
 * 
 */

#ifndef _Discount_H_
#define _Discount_H_


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

class Discount : public Object {
public:
	/*! \brief Constructor.
	 */
	Discount();
	Discount(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Discount();

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
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getSku();

	/*! \brief Set 
	 */
	void setSku(std::string  sku);
	/*! \brief Get 
	 */
	std::string getUniqueKey();

	/*! \brief Set 
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get 
	 */
	double getValue();

	/*! \brief Set 
	 */
	void setValue(double  value);

private:
	std::string description;
	std::string name;
	std::string sku;
	std::string unique_key;
	double value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Discount_H_ */
