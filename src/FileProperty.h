/*
 * FileProperty.h
 *
 * 
 */

#ifndef _FileProperty_H_
#define _FileProperty_H_


#include <string>
#include "Property.h"
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

class FileProperty : public Object {
public:
	/*! \brief Constructor.
	 */
	FileProperty();
	FileProperty(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FileProperty();

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
	/*! \brief Get A crc value for file integrity verification
	 */
	std::string getCrc();

	/*! \brief Set A crc value for file integrity verification
	 */
	void setCrc(std::string  crc);
	/*! \brief Get A description of the file
	 */
	std::string getDescription();

	/*! \brief Set A description of the file
	 */
	void setDescription(std::string  description);
	/*! \brief Get The type of file such as txt, mp3, mov or csv
	 */
	std::string getFileType();

	/*! \brief Set The type of file such as txt, mp3, mov or csv
	 */
	void setFileType(std::string  file_type);
	/*! \brief Get The url of the file
	 */
	std::string getUrl();

	/*! \brief Set The url of the file
	 */
	void setUrl(std::string  url);

private:
	std::string type;
	std::string crc;
	std::string description;
	std::string file_type;
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FileProperty_H_ */
