/*
 * ItemIdRequest.h
 *
 * 
 */

#ifndef _ItemIdRequest_H_
#define _ItemIdRequest_H_


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

class ItemIdRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ItemIdRequest();
	ItemIdRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ItemIdRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getItemId();

	/*! \brief Set 
	 */
	void setItemId(int  item_id);

private:
	int item_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ItemIdRequest_H_ */
