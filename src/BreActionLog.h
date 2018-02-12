/*
 * BreActionLog.h
 *
 * 
 */

#ifndef _BreActionLog_H_
#define _BreActionLog_H_


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

class BreActionLog : public Object {
public:
	/*! \brief Constructor.
	 */
	BreActionLog();
	BreActionLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BreActionLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The name of the action
	 */
	std::string getName();

	/*! \brief Set The name of the action
	 */
	void setName(std::string  name);
	/*! \brief Get The runtime of the action in milliseconds
	 */
	long long getRuntime();

	/*! \brief Set The runtime of the action in milliseconds
	 */
	void setRuntime(long long  runtime);
	/*! \brief Get The status of the action (ran, failed)
	 */
	std::string getStatus();

	/*! \brief Set The status of the action (ran, failed)
	 */
	void setStatus(std::string  status);

private:
	std::string name;
	long long runtime;
	std::string status;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BreActionLog_H_ */
