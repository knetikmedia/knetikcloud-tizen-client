/*
 * Localizer.h
 *
 * 
 */

#ifndef _Localizer_H_
#define _Localizer_H_


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

class Localizer : public Object {
public:
	/*! \brief Constructor.
	 */
	Localizer();
	Localizer(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Localizer();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _Localizer_H_ */
