/*
 * IdRef.h
 *
 * 
 */

#ifndef _IdRef_H_
#define _IdRef_H_


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

class IdRef : public Object {
public:
	/*! \brief Constructor.
	 */
	IdRef();
	IdRef(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IdRef();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);

private:
	int id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IdRef_H_ */
