/*
 * FileGroupPropertyDefinitionResource.h
 *
 * 
 */

#ifndef _FileGroupPropertyDefinitionResource_H_
#define _FileGroupPropertyDefinitionResource_H_


#include <string>
#include "PropertyDefinitionResource.h"
#include "PropertyFieldListResource.h"
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

class FileGroupPropertyDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	FileGroupPropertyDefinitionResource();
	FileGroupPropertyDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FileGroupPropertyDefinitionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of the fields on both the property definition and property of this type
	 */
	PropertyFieldListResource getFieldList();

	/*! \brief Set A list of the fields on both the property definition and property of this type
	 */
	void setFieldList(PropertyFieldListResource  field_list);
	/*! \brief Get The name of the property
	 */
	std::string getName();

	/*! \brief Set The name of the property
	 */
	void setName(std::string  name);
	/*! \brief Get Whether the property is required
	 */
	bool getRequired();

	/*! \brief Set Whether the property is required
	 */
	void setRequired(bool  required);
	/*! \brief Get The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	std::string getType();

	/*! \brief Set The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
	 */
	void setType(std::string  type);
	/*! \brief Get If provided, a file type that the property must match
	 */
	std::string getFileType();

	/*! \brief Set If provided, a file type that the property must match
	 */
	void setFileType(std::string  file_type);
	/*! \brief Get If provided, the maximum number of files in the group
	 */
	int getMaxCount();

	/*! \brief Set If provided, the maximum number of files in the group
	 */
	void setMaxCount(int  max_count);
	/*! \brief Get If provided, the maximum allowed size per file in bytes
	 */
	long long getMaxFileSize();

	/*! \brief Set If provided, the maximum allowed size per file in bytes
	 */
	void setMaxFileSize(long long  max_file_size);
	/*! \brief Get If provided, the minimum number of files in the group
	 */
	int getMinCount();

	/*! \brief Set If provided, the minimum number of files in the group
	 */
	void setMinCount(int  min_count);

private:
	PropertyFieldListResource field_list;
	std::string name;
	bool required;
	std::string type;
	std::string file_type;
	int max_count;
	long long max_file_size;
	int min_count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FileGroupPropertyDefinitionResource_H_ */
