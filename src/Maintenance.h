/*
 * Maintenance.h
 *
 * 
 */

#ifndef _Maintenance_H_
#define _Maintenance_H_


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

class Maintenance : public Object {
public:
	/*! \brief Constructor.
	 */
	Maintenance();
	Maintenance(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Maintenance();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether access to the system has been locked
	 */
	bool getAccessLocked();

	/*! \brief Set Whether access to the system has been locked
	 */
	void setAccessLocked(bool  access_locked);
	/*! \brief Get A simple object of any schema for client side use and processing
	 */
	std::string getDetails();

	/*! \brief Set A simple object of any schema for client side use and processing
	 */
	void setDetails(std::string  details);
	/*! \brief Get User displayable message about the maintenance
	 */
	std::string getMessage();

	/*! \brief Set User displayable message about the maintenance
	 */
	void setMessage(std::string  message);

private:
	bool access_locked;
	std::string details;
	std::string message;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Maintenance_H_ */
