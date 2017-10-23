/*
 * DispositionCount.h
 *
 * 
 */

#ifndef _DispositionCount_H_
#define _DispositionCount_H_


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

class DispositionCount : public Object {
public:
	/*! \brief Constructor.
	 */
	DispositionCount();
	DispositionCount(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DispositionCount();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of users that have expressed this disposition
	 */
	long long getCount();

	/*! \brief Set The number of users that have expressed this disposition
	 */
	void setCount(long long  count);
	/*! \brief Get The name of the disposition this count is for
	 */
	std::string getName();

	/*! \brief Set The name of the disposition this count is for
	 */
	void setName(std::string  name);

private:
	long long count;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DispositionCount_H_ */
