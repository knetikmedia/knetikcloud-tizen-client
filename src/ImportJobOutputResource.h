/*
 * ImportJobOutputResource.h
 *
 * 
 */

#ifndef _ImportJobOutputResource_H_
#define _ImportJobOutputResource_H_


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

class ImportJobOutputResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ImportJobOutputResource();
	ImportJobOutputResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ImportJobOutputResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the import job
	 */
	std::string getDescription();

	/*! \brief Set The description of the import job
	 */
	void setDescription(std::string  description);
	/*! \brief Get The line number of the import job
	 */
	long long getLineNumber();

	/*! \brief Set The line number of the import job
	 */
	void setLineNumber(long long  line_number);

private:
	std::string description;
	long long line_number;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ImportJobOutputResource_H_ */
