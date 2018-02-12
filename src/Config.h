/*
 * Config.h
 *
 * 
 */

#ifndef _Config_H_
#define _Config_H_


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

class Config : public Object {
public:
	/*! \brief Constructor.
	 */
	Config();
	Config(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Config();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the config.  Max 255 characters
	 */
	std::string getDescription();

	/*! \brief Set The description of the config.  Max 255 characters
	 */
	void setDescription(std::string  description);
	/*! \brief Get The name of the config
	 */
	std::string getName();

	/*! \brief Set The name of the config
	 */
	void setName(std::string  name);
	/*! \brief Get Whether the config is public for viewing. True means that it can be publicly viewed by all. Default: false
	 */
	bool getPublicRead();

	/*! \brief Set Whether the config is public for viewing. True means that it can be publicly viewed by all. Default: false
	 */
	void setPublicRead(bool  public_read);
	/*! \brief Get The value of the config
	 */
	std::string getValue();

	/*! \brief Set The value of the config
	 */
	void setValue(std::string  value);

private:
	std::string description;
	std::string name;
	bool public_read;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Config_H_ */
