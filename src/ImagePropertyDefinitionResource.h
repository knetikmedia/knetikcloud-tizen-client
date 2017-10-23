/*
 * ImagePropertyDefinitionResource.h
 *
 * 
 */

#ifndef _ImagePropertyDefinitionResource_H_
#define _ImagePropertyDefinitionResource_H_


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

class ImagePropertyDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ImagePropertyDefinitionResource();
	ImagePropertyDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ImagePropertyDefinitionResource();

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
	/*! \brief Get If provided, the maximum height of the image
	 */
	int getMaxHeight();

	/*! \brief Set If provided, the maximum height of the image
	 */
	void setMaxHeight(int  max_height);
	/*! \brief Get If provided, the maximum width of the image
	 */
	int getMaxWidth();

	/*! \brief Set If provided, the maximum width of the image
	 */
	void setMaxWidth(int  max_width);
	/*! \brief Get If provided, the minimum height of the image
	 */
	int getMinHeight();

	/*! \brief Set If provided, the minimum height of the image
	 */
	void setMinHeight(int  min_height);
	/*! \brief Get If provided, the minimum width of the image
	 */
	int getMinWidth();

	/*! \brief Set If provided, the minimum width of the image
	 */
	void setMinWidth(int  min_width);

private:
	PropertyFieldListResource field_list;
	std::string name;
	bool required;
	std::string type;
	std::string file_type;
	int max_height;
	int max_width;
	int min_height;
	int min_width;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ImagePropertyDefinitionResource_H_ */
