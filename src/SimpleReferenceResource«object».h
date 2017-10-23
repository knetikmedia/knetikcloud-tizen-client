/*
 * SimpleReferenceResource«object».h
 *
 * 
 */

#ifndef _SimpleReferenceResource«object»_H_
#define _SimpleReferenceResource«object»_H_


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

class SimpleReferenceResource«object» : public Object {
public:
	/*! \brief Constructor.
	 */
	SimpleReferenceResource«object»();
	SimpleReferenceResource«object»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SimpleReferenceResource«object»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the referenced object
	 */
	std::string getId();

	/*! \brief Set The id of the referenced object
	 */
	void setId(std::string  id);
	/*! \brief Get The name of the referenced object
	 */
	std::string getName();

	/*! \brief Set The name of the referenced object
	 */
	void setName(std::string  name);

private:
	std::string id;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SimpleReferenceResource«object»_H_ */
