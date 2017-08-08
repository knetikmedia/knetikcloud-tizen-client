/*
 * MapResource.h
 *
 * 
 */

#ifndef _MapResource_H_
#define _MapResource_H_


#include <string>
#include "ExpressionResource.h"
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

class MapResource : public Object {
public:
	/*! \brief Constructor.
	 */
	MapResource();
	MapResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MapResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::map<std::string, std::string> getMap();

	/*! \brief Set 
	 */
	void setMap(std::map <std::string, std::string> map);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);

private:
	std::map <std::string, std::string>map;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MapResource_H_ */
