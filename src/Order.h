/*
 * Order.h
 *
 * 
 */

#ifndef _Order_H_
#define _Order_H_


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

class Order : public Object {
public:
	/*! \brief Constructor.
	 */
	Order();
	Order(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Order();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getAscending();

	/*! \brief Set 
	 */
	void setAscending(bool  ascending);
	/*! \brief Get 
	 */
	bool getDescending();

	/*! \brief Set 
	 */
	void setDescending(bool  descending);
	/*! \brief Get 
	 */
	std::string getDirection();

	/*! \brief Set 
	 */
	void setDirection(std::string  direction);
	/*! \brief Get 
	 */
	bool getIgnoreCase();

	/*! \brief Set 
	 */
	void setIgnoreCase(bool  ignore_case);
	/*! \brief Get 
	 */
	std::string getNullHandling();

	/*! \brief Set 
	 */
	void setNullHandling(std::string  null_handling);
	/*! \brief Get 
	 */
	std::string getProperty();

	/*! \brief Set 
	 */
	void setProperty(std::string  property);

private:
	bool ascending;
	bool descending;
	std::string direction;
	bool ignore_case;
	std::string null_handling;
	std::string property;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Order_H_ */
