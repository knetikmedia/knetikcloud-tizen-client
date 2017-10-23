/*
 * ErrorResource.h
 *
 * 
 */

#ifndef _ErrorResource_H_
#define _ErrorResource_H_


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

class ErrorResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ErrorResource();
	ErrorResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ErrorResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Extra details about the error, if needed
	 */
	std::string getDetails();

	/*! \brief Set Extra details about the error, if needed
	 */
	void setDetails(std::string  details);
	/*! \brief Get The JSON key the message pertains to
	 */
	std::string getField();

	/*! \brief Set The JSON key the message pertains to
	 */
	void setField(std::string  field);
	/*! \brief Get The message explaining the error
	 */
	std::string getMessage();

	/*! \brief Set The message explaining the error
	 */
	void setMessage(std::string  message);

private:
	std::string details;
	std::string field;
	std::string message;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ErrorResource_H_ */
