/*
 * ActionResource.h
 *
 * 
 */

#ifndef _ActionResource_H_
#define _ActionResource_H_


#include <string>
#include "ActionVariableResource.h"
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

class ActionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ActionResource();
	ActionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ActionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The category the action is in. All customer specific actions are in the 'custom' category
	 */
	std::string getCategory();

	/*! \brief Set The category the action is in. All customer specific actions are in the 'custom' category
	 */
	void setCategory(std::string  category);
	/*! \brief Get The description of the action
	 */
	std::string getDescription();

	/*! \brief Set The description of the action
	 */
	void setDescription(std::string  description);
	/*! \brief Get The name of the action. Used as the unique id for reference
	 */
	std::string getName();

	/*! \brief Set The name of the action. Used as the unique id for reference
	 */
	void setName(std::string  name);
	/*! \brief Get A list of tags for searching
	 */
	std::list<std::string> getTags();

	/*! \brief Set A list of tags for searching
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get The variables required for the action
	 */
	std::list<ActionVariableResource> getVariables();

	/*! \brief Set The variables required for the action
	 */
	void setVariables(std::list <ActionVariableResource> variables);

private:
	std::string category;
	std::string description;
	std::string name;
	std::list <std::string>tags;
	std::list <ActionVariableResource>variables;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ActionResource_H_ */
