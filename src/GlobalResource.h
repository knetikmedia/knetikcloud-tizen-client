/*
 * GlobalResource.h
 *
 * 
 */

#ifndef _GlobalResource_H_
#define _GlobalResource_H_


#include <string>
#include "ExpressionResource.h"
#include <list>
#include <map>
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

class GlobalResource : public Object {
public:
	/*! \brief Constructor.
	 */
	GlobalResource();
	GlobalResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GlobalResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getGlobalDefId();

	/*! \brief Set 
	 */
	void setGlobalDefId(std::string  global_def_id);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getScopes();

	/*! \brief Set 
	 */
	void setScopes(std::map <std::string, std::string> scopes);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::string global_def_id;
	std::map <std::string, std::string>scopes;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GlobalResource_H_ */
