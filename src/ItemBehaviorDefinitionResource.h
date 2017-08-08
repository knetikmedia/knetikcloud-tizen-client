/*
 * ItemBehaviorDefinitionResource.h
 *
 * 
 */

#ifndef _ItemBehaviorDefinitionResource_H_
#define _ItemBehaviorDefinitionResource_H_


#include <string>
#include "Behavior.h"
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

class ItemBehaviorDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ItemBehaviorDefinitionResource();
	ItemBehaviorDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ItemBehaviorDefinitionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The default version of the behavior
	 */
	Behavior getBehavior();

	/*! \brief Set The default version of the behavior
	 */
	void setBehavior(Behavior  behavior);
	/*! \brief Get Whether the behavior's values can be modified
	 */
	bool getModifiable();

	/*! \brief Set Whether the behavior's values can be modified
	 */
	void setModifiable(bool  modifiable);
	/*! \brief Get Whether the behavior can be removed
	 */
	bool getRequired();

	/*! \brief Set Whether the behavior can be removed
	 */
	void setRequired(bool  required);

private:
	Behavior behavior;
	bool modifiable;
	bool required;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ItemBehaviorDefinitionResource_H_ */
