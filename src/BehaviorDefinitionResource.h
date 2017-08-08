/*
 * BehaviorDefinitionResource.h
 *
 * 
 */

#ifndef _BehaviorDefinitionResource_H_
#define _BehaviorDefinitionResource_H_


#include <string>
#include "Behavior.h"
#include "PropertyFieldResource.h"
#include <list>
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

class BehaviorDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BehaviorDefinitionResource();
	BehaviorDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BehaviorDefinitionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Description of the behavior
	 */
	std::string getDescription();

	/*! \brief Set Description of the behavior
	 */
	void setDescription(std::string  description);
	/*! \brief Get Pre-requisite behaviors that an item must have in order to also have this behavior
	 */
	std::list<Behavior> getPrerequisiteBehaviors();

	/*! \brief Set Pre-requisite behaviors that an item must have in order to also have this behavior
	 */
	void setPrerequisiteBehaviors(std::list <Behavior> prerequisite_behaviors);
	/*! \brief Get Configurable properties of the behavior
	 */
	std::list<PropertyFieldResource> getProperties();

	/*! \brief Set Configurable properties of the behavior
	 */
	void setProperties(std::list <PropertyFieldResource> properties);
	/*! \brief Get The behavior type
	 */
	std::string getTypeHint();

	/*! \brief Set The behavior type
	 */
	void setTypeHint(std::string  type_hint);

private:
	std::string description;
	std::list <Behavior>prerequisite_behaviors;
	std::list <PropertyFieldResource>properties;
	std::string type_hint;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BehaviorDefinitionResource_H_ */
