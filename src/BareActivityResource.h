/*
 * BareActivityResource.h
 *
 * 
 */

#ifndef _BareActivityResource_H_
#define _BareActivityResource_H_


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

class BareActivityResource : public Object {
public:
	/*! \brief Constructor.
	 */
	BareActivityResource();
	BareActivityResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BareActivityResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get Details about how to launch the activity
	 */
	std::string getLaunch();

	/*! \brief Set Details about how to launch the activity
	 */
	void setLaunch(std::string  launch);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getLongDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The user friendly name of that resource
	 */
	std::string getName();

	/*! \brief Set The user friendly name of that resource
	 */
	void setName(std::string  name);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getShortDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get Whether this activity is a template for other activities. Default: false
	 */
	bool getTemplate();

	/*! \brief Set Whether this activity is a template for other activities. Default: false
	 */
	void setTemplate(bool  _template);
	/*! \brief Get The type of the activity
	 */
	std::string getType();

	/*! \brief Set The type of the activity
	 */
	void setType(std::string  type);
	/*! \brief Get The unique key (for static reference in code) of the activity
	 */
	std::string getUniqueKey();

	/*! \brief Set The unique key (for static reference in code) of the activity
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	long long created_date;
	long long id;
	std::string launch;
	std::string long_description;
	std::string name;
	std::string short_description;
	bool _template;
	std::string type;
	std::string unique_key;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BareActivityResource_H_ */
