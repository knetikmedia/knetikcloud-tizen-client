/*
 * ResourceTypeDescription.h
 *
 * 
 */

#ifndef _ResourceTypeDescription_H_
#define _ResourceTypeDescription_H_


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

class ResourceTypeDescription : public Object {
public:
	/*! \brief Constructor.
	 */
	ResourceTypeDescription();
	ResourceTypeDescription(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ResourceTypeDescription();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The field on the resource that the id is in
	 */
	std::string getIdField();

	/*! \brief Set The field on the resource that the id is in
	 */
	void setIdField(std::string  id_field);
	/*! \brief Get The unique name for the resource in swagger. This serves as the unique identifier. Cannot be changed after creation
	 */
	std::string getName();

	/*! \brief Set The unique name for the resource in swagger. This serves as the unique identifier. Cannot be changed after creation
	 */
	void setName(std::string  name);
	/*! \brief Get The base path of the service
	 */
	std::string getServicePath();

	/*! \brief Set The base path of the service
	 */
	void setServicePath(std::string  service_path);

private:
	std::string id_field;
	std::string name;
	std::string service_path;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ResourceTypeDescription_H_ */
