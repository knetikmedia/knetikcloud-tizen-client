/*
 * BreGlobalResource.h
 *
 * 
 */

#ifndef _BreGlobalResource_H_
#define _BreGlobalResource_H_


#include <string>
#include "BreGlobalScopeDefinition.h"
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

class BreGlobalResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BreGlobalResource();
	BreGlobalResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreGlobalResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A human readable description for display in admin pages
	 */
	std::string getDescription();

	/*! \brief Set A human readable description for display in admin pages
	 */
	void setDescription(std::string  description);
	/*! \brief Get The id of the global definition. Default is a random guid. Cannot be updated
	 */
	std::string getId();

	/*! \brief Set The id of the global definition. Default is a random guid. Cannot be updated
	 */
	void setId(std::string  id);
	/*! \brief Get The key for the global. Must be unique when combined with scope names. Usually a single descriptive word like 'purchases' or 'logins'
	 */
	std::string getKey();

	/*! \brief Set The key for the global. Must be unique when combined with scope names. Usually a single descriptive word like 'purchases' or 'logins'
	 */
	void setKey(std::string  key);
	/*! \brief Get A human readable name for display in admin pages
	 */
	std::string getName();

	/*! \brief Set A human readable name for display in admin pages
	 */
	void setName(std::string  name);
	/*! \brief Get A list of scoping parameters. Allows the global to have a different value in different context such as a count of purchases for each user (by putting a 'user' scope in this list). When using this global in a rule these scopes will need to be mapped with an expression to provide a value, similar to the parameters in an action
	 */
	std::list<BreGlobalScopeDefinition> getScopes();

	/*! \brief Set A list of scoping parameters. Allows the global to have a different value in different context such as a count of purchases for each user (by putting a 'user' scope in this list). When using this global in a rule these scopes will need to be mapped with an expression to provide a value, similar to the parameters in an action
	 */
	void setScopes(std::list <BreGlobalScopeDefinition> scopes);
	/*! \brief Get Where this global came from. System globals cannot be removed or updated
	 */
	bool getSystemGlobal();

	/*! \brief Set Where this global came from. System globals cannot be removed or updated
	 */
	void setSystemGlobal(bool  system_global);
	/*! \brief Get The variable type the global stores. See the See Bre Variables enpoint for list
	 */
	std::string getType();

	/*! \brief Set The variable type the global stores. See the See Bre Variables enpoint for list
	 */
	void setType(std::string  type);

private:
	std::string description;
	std::string id;
	std::string key;
	std::string name;
	std::list <BreGlobalScopeDefinition>scopes;
	bool system_global;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreGlobalResource_H_ */
