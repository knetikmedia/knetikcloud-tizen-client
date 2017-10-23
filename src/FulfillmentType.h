/*
 * FulfillmentType.h
 *
 * 
 */

#ifndef _FulfillmentType_H_
#define _FulfillmentType_H_


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

class FulfillmentType : public Object {
public:
	/*! \brief Constructor.
	 */
	FulfillmentType();
	FulfillmentType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FulfillmentType();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the type is core and cannot be altered/deleted, read-only
	 */
	bool getCore();

	/*! \brief Set Whether the type is core and cannot be altered/deleted, read-only
	 */
	void setCore(bool  core);
	/*! \brief Get A description of the type
	 */
	std::string getDescription();

	/*! \brief Set A description of the type
	 */
	void setDescription(std::string  description);
	/*! \brief Get The unique id of the type, read-only
	 */
	int getId();

	/*! \brief Set The unique id of the type, read-only
	 */
	void setId(int  id);
	/*! \brief Get The name of the type
	 */
	std::string getName();

	/*! \brief Set The name of the type
	 */
	void setName(std::string  name);

private:
	bool core;
	std::string description;
	int id;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FulfillmentType_H_ */
