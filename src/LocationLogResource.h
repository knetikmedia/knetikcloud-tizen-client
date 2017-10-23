/*
 * LocationLogResource.h
 *
 * 
 */

#ifndef _LocationLogResource_H_
#define _LocationLogResource_H_


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

class LocationLogResource : public Object {
public:
	/*! \brief Constructor.
	 */
	LocationLogResource();
	LocationLogResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LocationLogResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string  ip);
	/*! \brief Get 
	 */
	long long getTime();

	/*! \brief Set 
	 */
	void setTime(long long  time);

private:
	std::string country;
	std::string ip;
	long long time;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LocationLogResource_H_ */
