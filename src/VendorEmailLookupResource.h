/*
 * VendorEmailLookupResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
 */

#ifndef _VendorEmailLookupResource_H_
#define _VendorEmailLookupResource_H_


#include <string>
#include "ExpressionResource.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Expressions are instructions for the rule engine to resolve certain values. For example instead of `user 1` it'd state `user provided by the event`. Full list and definitions available at GET /bre/expressions.
 *
 *  \ingroup Models
 *
 */

class VendorEmailLookupResource : public Object {
public:
	/*! \brief Constructor.
	 */
	VendorEmailLookupResource();
	VendorEmailLookupResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VendorEmailLookupResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDefinition();

	/*! \brief Set 
	 */
	void setDefinition(std::string  definition);
	/*! \brief Get 
	 */
	ExpressionResource getLookupKey();

	/*! \brief Set 
	 */
	void setLookupKey(ExpressionResource  lookup_key);
	/*! \brief Get 
	 */
	std::string getRequiredKeyType();

	/*! \brief Set 
	 */
	void setRequiredKeyType(std::string  required_key_type);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getValueType();

	/*! \brief Set 
	 */
	void setValueType(std::string  value_type);

private:
	std::string definition;
	ExpressionResource lookup_key;
	std::string required_key_type;
	std::string type;
	std::string value_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VendorEmailLookupResource_H_ */
