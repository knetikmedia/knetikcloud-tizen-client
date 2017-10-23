/*
 * Participant.h
 *
 * 
 */

#ifndef _Participant_H_
#define _Participant_H_


#include <string>
#include "IdRef.h"
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

class Participant : public Object {
public:
	/*! \brief Constructor.
	 */
	Participant();
	Participant(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Participant();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether this user is the 'host' of the occurrence and has increased access to settings/etc (default: false)
	 */
	bool getHost();

	/*! \brief Set Whether this user is the 'host' of the occurrence and has increased access to settings/etc (default: false)
	 */
	void setHost(bool  host);
	/*! \brief Get The current status of the user in the occurrence (default: present)
	 */
	std::string getStatus();

	/*! \brief Set The current status of the user in the occurrence (default: present)
	 */
	void setStatus(std::string  status);
	/*! \brief Get The user
	 */
	IdRef getUser();

	/*! \brief Set The user
	 */
	void setUser(IdRef  user);

private:
	bool host;
	std::string status;
	IdRef user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Participant_H_ */
