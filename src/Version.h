/*
 * Version.h
 *
 * 
 */

#ifndef _Version_H_
#define _Version_H_


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

class Version : public Object {
public:
	/*! \brief Constructor.
	 */
	Version();
	Version(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Version();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getVersion();

	/*! \brief Set 
	 */
	void setVersion(std::string  version);

private:
	std::string version;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Version_H_ */
