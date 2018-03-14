/*
 * GroupMemberStatusWrapper.h
 *
 * 
 */

#ifndef _GroupMemberStatusWrapper_H_
#define _GroupMemberStatusWrapper_H_


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

class GroupMemberStatusWrapper : public Object {
public:
	/*! \brief Constructor.
	 */
	GroupMemberStatusWrapper();
	GroupMemberStatusWrapper(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GroupMemberStatusWrapper();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);

private:
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GroupMemberStatusWrapper_H_ */
