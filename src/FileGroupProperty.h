/*
 * FileGroupProperty.h
 *
 * 
 */

#ifndef _FileGroupProperty_H_
#define _FileGroupProperty_H_


#include <string>
#include "FileProperty.h"
#include "Property.h"
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

class FileGroupProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	FileGroupProperty();
	FileGroupProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FileGroupProperty();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	std::string getType();

	/*! \brief Set The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	void setType(std::string  type);
	/*! \brief Get The list of files
	 */
	std::list<FileProperty> getFiles();

	/*! \brief Set The list of files
	 */
	void setFiles(std::list <FileProperty> files);

private:
	std::string type;
	std::list <FileProperty>files;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FileGroupProperty_H_ */
