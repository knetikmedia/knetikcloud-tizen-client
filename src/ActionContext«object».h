/*
 * ActionContext«object».h
 *
 * 
 */

#ifndef _ActionContext«object»_H_
#define _ActionContext«object»_H_


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

class ActionContext«object» : public Object {
public:
	/*! \brief Constructor.
	 */
	ActionContext«object»();
	ActionContext«object»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActionContext«object»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The mapping of the action context
	 */
	std::string getMapping();

	/*! \brief Set The mapping of the action context
	 */
	void setMapping(std::string  mapping);
	/*! \brief Get The name of the action
	 */
	std::string getType();

	/*! \brief Set The name of the action
	 */
	void setType(std::string  type);

private:
	std::string mapping;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActionContext«object»_H_ */
