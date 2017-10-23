/*
 * UserRelationshipResource.h
 *
 * 
 */

#ifndef _UserRelationshipResource_H_
#define _UserRelationshipResource_H_


#include <string>
#include "SimpleUserResource.h"
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

class UserRelationshipResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserRelationshipResource();
	UserRelationshipResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserRelationshipResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The child in the relationship
	 */
	SimpleUserResource getChild();

	/*! \brief Set The child in the relationship
	 */
	void setChild(SimpleUserResource  child);
	/*! \brief Get Context about the relationship or its type
	 */
	std::string getContext();

	/*! \brief Set Context about the relationship or its type
	 */
	void setContext(std::string  context);
	/*! \brief Get A generated unique id. Read-Only
	 */
	long long getId();

	/*! \brief Set A generated unique id. Read-Only
	 */
	void setId(long long  id);
	/*! \brief Get The parent in the relationship
	 */
	SimpleUserResource getParent();

	/*! \brief Set The parent in the relationship
	 */
	void setParent(SimpleUserResource  parent);

private:
	SimpleUserResource child;
	std::string context;
	long long id;
	SimpleUserResource parent;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserRelationshipResource_H_ */
