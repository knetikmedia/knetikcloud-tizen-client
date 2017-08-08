/*
 * NestedCategory.h
 *
 * 
 */

#ifndef _NestedCategory_H_
#define _NestedCategory_H_


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

class NestedCategory : public Object {
public:
	/*! \brief Constructor.
	 */
	NestedCategory();
	NestedCategory(char* str);

	/*! \brief Destructor.
	 */
	virtual ~NestedCategory();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the category is active
	 */
	bool getActive();

	/*! \brief Set Whether the category is active
	 */
	void setActive(bool  active);
	/*! \brief Get The id of the category
	 */
	std::string getId();

	/*! \brief Set The id of the category
	 */
	void setId(std::string  id);
	/*! \brief Get The name of the category
	 */
	std::string getName();

	/*! \brief Set The name of the category
	 */
	void setName(std::string  name);

private:
	bool active;
	std::string id;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _NestedCategory_H_ */
