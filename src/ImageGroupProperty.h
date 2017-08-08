/*
 * ImageGroupProperty.h
 *
 * 
 */

#ifndef _ImageGroupProperty_H_
#define _ImageGroupProperty_H_


#include <string>
#include "FileGroupProperty.h"
#include "FileProperty.h"
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

class ImageGroupProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	ImageGroupProperty();
	ImageGroupProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ImageGroupProperty();

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

#endif /* _ImageGroupProperty_H_ */
