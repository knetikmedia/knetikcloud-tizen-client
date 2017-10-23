/*
 * SimpleReferenceResource«int».h
 *
 * 
 */

#ifndef _SimpleReferenceResource«int»_H_
#define _SimpleReferenceResource«int»_H_


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

class SimpleReferenceResource«int» : public Object {
public:
	/*! \brief Constructor.
	 */
	SimpleReferenceResource«int»();
	SimpleReferenceResource«int»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SimpleReferenceResource«int»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the referenced object
	 */
	int getId();

	/*! \brief Set The id of the referenced object
	 */
	void setId(int  id);
	/*! \brief Get The name of the referenced object
	 */
	std::string getName();

	/*! \brief Set The name of the referenced object
	 */
	void setName(std::string  name);

private:
	int id;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SimpleReferenceResource«int»_H_ */
