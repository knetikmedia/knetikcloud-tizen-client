/*
 * PermissionResource.h
 *
 * 
 */

#ifndef _PermissionResource_H_
#define _PermissionResource_H_


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

class PermissionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	PermissionResource();
	PermissionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PermissionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date the permission was added. Unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the permission was added. Unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The description of the permission
	 */
	std::string getDescription();

	/*! \brief Set The description of the permission
	 */
	void setDescription(std::string  description);
	/*! \brief Get Whether a permission is locked from being deleted
	 */
	bool getLocked();

	/*! \brief Set Whether a permission is locked from being deleted
	 */
	void setLocked(bool  locked);
	/*! \brief Get The name of the permission used for display purposes
	 */
	std::string getName();

	/*! \brief Set The name of the permission used for display purposes
	 */
	void setName(std::string  name);
	/*! \brief Get The name of the parent of the permission
	 */
	std::string getParent();

	/*! \brief Set The name of the parent of the permission
	 */
	void setParent(std::string  parent);
	/*! \brief Get The keyword that defines the permission
	 */
	std::string getPermission();

	/*! \brief Set The keyword that defines the permission
	 */
	void setPermission(std::string  permission);
	/*! \brief Get The date the permission was updated. Unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the permission was updated. Unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);

private:
	long long created_date;
	std::string description;
	bool locked;
	std::string name;
	std::string parent;
	std::string permission;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PermissionResource_H_ */
