/*
 * SearchReferenceMapping.h
 *
 * 
 */

#ifndef _SearchReferenceMapping_H_
#define _SearchReferenceMapping_H_


#include <string>
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

class SearchReferenceMapping : public Object {
public:
	/*! \brief Constructor.
	 */
	SearchReferenceMapping();
	SearchReferenceMapping(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SearchReferenceMapping();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Unique identifier for the mapping to protect against duplicates
	 */
	std::string getId();

	/*! \brief Set Unique identifier for the mapping to protect against duplicates
	 */
	void setId(std::string  id);
	/*! \brief Get The field within the type that contains the id from the refType
	 */
	std::string getRefIdField();

	/*! \brief Set The field within the type that contains the id from the refType
	 */
	void setRefIdField(std::string  ref_id_field);
	/*! \brief Get The index type that the mapping pulls data from
	 */
	std::string getRefType();

	/*! \brief Set The index type that the mapping pulls data from
	 */
	void setRefType(std::string  ref_type);
	/*! \brief Get A map whose keys are the field names in the refType and values are the field name in the type
	 */
	std::map<std::string, std::string> getSourceFieldToDestinationField();

	/*! \brief Set A map whose keys are the field names in the refType and values are the field name in the type
	 */
	void setSourceFieldToDestinationField(std::map <std::string, std::string> source_field_to_destination_field);
	/*! \brief Get The index type that the mapping is for
	 */
	std::string getType();

	/*! \brief Set The index type that the mapping is for
	 */
	void setType(std::string  type);

private:
	std::string id;
	std::string ref_id_field;
	std::string ref_type;
	std::map <std::string, std::string>source_field_to_destination_field;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SearchReferenceMapping_H_ */
